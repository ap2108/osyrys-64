// timescale
`timescale 1ns/1ps

module memory #(
    parameter WORDS = 1024,
    parameter mem_init = ""
)(
    input  logic        clk,
    input  logic        rst_n,

    // CPU Interface
    input  logic        cpu_valid,
    output logic        cpu_ready,
    input  logic [63:0] cpu_address,
    input  logic [63:0] cpu_write_data,
    input  logic [7:0]  cpu_byte_enable,
    input  logic        cpu_write_enable,
    output logic [63:0] cpu_read_data,

    // NPU Interface
    input  logic        npu_valid,
    output logic        npu_ready,
    input  logic [63:0] npu_address,
    input  logic [63:0] npu_write_data,
    input  logic [7:0]  npu_byte_enable,
    input  logic        npu_write_enable,
    output logic [63:0] npu_read_data,

    // Burst controls
    input  logic        burst_mode,
    input  logic [3:0]  burst_len
);

    // Memory Array
    logic [63:0] mem [0:WORDS-1];

    // FSM
    typedef enum logic [1:0] {IDLE, CPU_ACCESS, NPU_ACCESS} state_t;
    state_t state;

    // Internal registers
    logic [3:0]  burst_cnt;
    logic [63:0] addr_latched;
    logic        is_write;
    logic        is_cpu;
    logic [1:0]  latency_counter;

    // Constants for MMIO region (example: 0x8000_0000 and above)
    localparam logic [31:0] MMIO_REGION = 32'h8000_0000;

    // Default outputs
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state         <= IDLE;
            cpu_ready     <= 0;
            npu_ready     <= 0;
            burst_cnt     <= 0;
            latency_counter <= 0;
        end else begin
            case (state)
                IDLE: begin
                    cpu_ready <= 0;
                    npu_ready <= 0;
                    burst_cnt <= 0;

                    if (cpu_valid) begin
                        state         <= CPU_ACCESS;
                        is_write      <= cpu_write_enable;
                        is_cpu        <= 1;
                        addr_latched  <= cpu_address[63:3];
                        latency_counter <= 2; // Simulate 2-cycle latency
                    end else if (npu_valid) begin
                        state         <= NPU_ACCESS;
                        is_write      <= npu_write_enable;
                        is_cpu        <= 0;
                        addr_latched  <= npu_address[63:3];
                        latency_counter <= 2;
                    end
                end

                CPU_ACCESS: begin
                    if (latency_counter != 0) begin
                        latency_counter <= latency_counter - 1;
                    end else begin
                        cpu_ready <= 1;

                        if (!burst_mode) begin
                            if (is_write) begin
                                for (int i = 0; i < 8; i++)
                                    if (cpu_byte_enable[i])
                                        mem[addr_latched][i*8 +: 8] <= cpu_write_data[i*8 +: 8];
                            end else begin
                                cpu_read_data <= mem[addr_latched];
                            end
                            state <= IDLE;
                        end else begin
                            if (burst_cnt < burst_len) begin
                                if (is_write) begin
                                    for (int i = 0; i < 8; i++)
                                        if (cpu_byte_enable[i])
                                            mem[addr_latched + burst_cnt][i*8 +: 8] <= cpu_write_data[i*8 +: 8];
                                end else begin
                                    cpu_read_data <= mem[addr_latched + burst_cnt];
                                end
                                burst_cnt <= burst_cnt + 1;
                            end else begin
                                cpu_ready <= 0;
                                state <= IDLE;
                            end
                        end
                    end
                end

                NPU_ACCESS: begin
                    if (latency_counter != 0) begin
                        latency_counter <= latency_counter - 1;
                    end else begin
                        npu_ready <= 1;

                        if (!burst_mode) begin
                            if (is_write) begin
                                for (int i = 0; i < 8; i++)
                                    if (npu_byte_enable[i])
                                        mem[addr_latched][i*8 +: 8] <= npu_write_data[i*8 +: 8];
                            end else begin
                                npu_read_data <= mem[addr_latched];
                            end
                            state <= IDLE;
                        end else begin
                            if (burst_cnt < burst_len) begin
                                if (is_write) begin
                                    for (int i = 0; i < 8; i++)
                                        if (npu_byte_enable[i])
                                            mem[addr_latched + burst_cnt][i*8 +: 8] <= npu_write_data[i*8 +: 8];
                                end else begin
                                    npu_read_data <= mem[addr_latched + burst_cnt];
                                end
                                burst_cnt <= burst_cnt + 1;
                            end else begin
                                npu_ready <= 0;
                                state <= IDLE;
                            end
                        end
                    end
                end

                // ✅ This default clause silences Verilator's CASEINCOMPLETE warning
                default: state <= IDLE;

            endcase
        end
    end

    // Memory Initialization
    initial begin
        for (int i = 0; i < WORDS; i++)
            mem[i] = 64'd0;
        if (mem_init != "")
            $readmemh(mem_init, mem);
    end

endmodule
