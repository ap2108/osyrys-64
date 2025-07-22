`timescale 1ns/1ps

module memory #(
    parameter WORDS = 1024,         // 64-bit words
    parameter mem_init = ""
)(
    input logic clk,
    input logic rst_n,

    // CPU interface
    input  logic         cpu_valid,
    output logic         cpu_ready,
    input  logic [63:0]  cpu_address,
    input  logic [63:0]  cpu_write_data,
    input  logic [7:0]   cpu_byte_enable,
    input  logic         cpu_write_enable,
    output logic [63:0]  cpu_read_data,

    // NPU interface
    input  logic         npu_valid,
    output logic         npu_ready,
    input  logic [63:0]  npu_address,
    input  logic [63:0]  npu_write_data,
    input  logic [7:0]   npu_byte_enable,
    input  logic         npu_write_enable,
    output logic [63:0]  npu_read_data,

    // Burst control
    input  logic [3:0]   burst_len,    // Number of words in burst
    input  logic         burst_mode    // 0 = single, 1 = burst
);

// Memory array (64-bit words)
reg [63:0] mem [0:WORDS-1];

// Handshake
assign cpu_ready = cpu_valid;
assign npu_ready = npu_valid;

// Initial memory load
initial begin
    if (mem_init != "") begin
        $readmemh(mem_init, mem);
    end
end

// Reset behavior
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        for (int i = 0; i < WORDS; i++) begin
            mem[i] = 64'd0;
        end
    end
end

// CPU write
always_ff @(posedge clk) begin
    if (cpu_valid && cpu_write_enable) begin
        for (int i = 0; i < 8; i++) begin
            if (cpu_byte_enable[i]) begin
                mem[cpu_address[63:3]][i*8 +: 8] <= cpu_write_data[i*8 +: 8];
            end
        end
    end
end

// NPU write
always_ff @(posedge clk) begin
    if (npu_valid && npu_write_enable) begin
        for (int i = 0; i < 8; i++) begin
            if (npu_byte_enable[i]) begin
                mem[npu_address[63:3]][i*8 +: 8] <= npu_write_data[i*8 +: 8];
            end
        end
    end
end

// CPU read with burst
always_ff @(posedge clk) begin
    if (cpu_valid && !cpu_write_enable) begin
        if (!burst_mode) begin
            cpu_read_data <= mem[cpu_address[63:3]];
        end else begin
            for (int i = 0; i < burst_len; i++) begin
                cpu_read_data <= mem[(cpu_address[63:3]) + i];
            end
        end
    end
end

// NPU read with burst
always_ff @(posedge clk) begin
    if (npu_valid && !npu_write_enable) begin
        if (!burst_mode) begin
            npu_read_data <= mem[npu_address[63:3]];
        end else begin
            for (int i = 0; i < burst_len; i++) begin
                npu_read_data <= mem[(npu_address[63:3]) + i];
            end
        end
    end
end

endmodule
