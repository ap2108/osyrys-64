/*
* REGISTER FILE (RV64I + Scoreboard + NPU Dual-Read + Forwarding Hooks)
*
* Designed for OSYRYS-64 core with integrated NPU
*
* - 64-bit, 32 general-purpose registers
* - Dual write ports (A and B)
* - Scoreboard hazard tracking
* - External dual-read (for NPU/MMU/vector ops)
* - Forwarding-ready output ports
*/

`timescale 1ns/1ps

module regfile (
    input  logic         clk,
    input  logic         rst_n,

    // CPU Read Ports
    input  logic [4:0]   address1,
    input  logic [4:0]   address2,
    input logic [4:0]    address3,
    output logic [63:0]  read_data1,
    output logic [63:0]  read_data2,

    // Write Port A
    input  logic         write_enable_a,
    input  logic [4:0]   write_addr_a,
    input  logic [63:0]  write_data_a,

    // Write Port B (NPU / forwarding)
    input  logic         write_enable_b,
    input  logic [4:0]   write_addr_b,
    input  logic [63:0]  write_data_b,

    // Coprocessor Dual Read Ports (e.g., NPU)
    input  logic [4:0]   ext_address1,
    input  logic [4:0]   ext_address2,
    output logic [63:0]  ext_data1,
    output logic [63:0]  ext_data2,

    // Scoreboard output (hazard detection unit uses this)
    output logic [31:0]  reg_pending_writes
);

    // 32 x 64-bit general-purpose registers
    logic [63:0] registers [0:31];

    // Scoreboard: 1 if pending write
    logic [31:0] scoreboard;

    // -------------------------------
    // Reset and Write Operations
    // -------------------------------
    always_ff @(posedge clk) begin
        if (rst_n == 0) begin // or: if (rst_n == 1'b0) 
            for (int i = 0; i < 32; i++) begin
                registers[i] <= 64'd0;
                scoreboard[i] <= 1'b0;
            end
        end else begin
            // Write A
            if (write_enable_a && write_addr_a != 5'd0) begin
                registers[write_addr_a] <= write_data_a;
                scoreboard[write_addr_a] <= 1'b0; // Clear pending bit
                $display("[regfile] Write A: x%0d <= 0x%h", write_addr_a, write_data_a);
            end

            // Write B (used by NPU/co-proc/forwarding)
            if (write_enable_b && write_addr_b != 5'd0 && write_addr_b != write_addr_a) begin
                registers[write_addr_b] <= write_data_b;
                scoreboard[write_addr_b] <= 1'b0;
                $display("[regfile] Write B: x%0d <= 0x%h", write_addr_b, write_data_b);
            end

            // Set scoreboard bits when write is issued (could be triggered earlier)
            if (write_enable_a && write_addr_a != 5'd0)
                scoreboard[write_addr_a] <= 1'b1;
            if (write_enable_b && write_addr_b != 5'd0)
                scoreboard[write_addr_b] <= 1'b1;
        end
    end

    // -------------------------------
    // Synchronous Read Ports (CPU)
    // -------------------------------
    always_comb begin
        read_data1 = (address1 == 5'd0) ? 64'd0 : registers[address1];
        read_data2 = (address2 == 5'd0) ? 64'd0 : registers[address2];

        // External ports for NPU / vector / coprocessor
        ext_data1 = (ext_address1 == 5'd0) ? 64'd0 : registers[ext_address1];
        ext_data2 = (ext_address2 == 5'd0) ? 64'd0 : registers[ext_address2];
    end

    // -------------------------------
    // Output Scoreboard
    // -------------------------------
    assign reg_pending_writes = scoreboard;

endmodule
