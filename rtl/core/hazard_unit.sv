`timescale 1ns/1ps

module hazard_unit (
    input logic rst_n,
    input logic clk,

    // ID stage source registers
    input logic [4:0] id_rs1,
    input logic [4:0] id_rs2,

    // EX/MEM/WB stage register destinations
    input logic [4:0] ex_rd,
    input logic       ex_reg_write,
    input logic       ex_mem_read,

    input logic [4:0] mem_rd,
    input logic       mem_reg_write,

    input logic [4:0] wb_rd,
    input logic       wb_reg_write,

    // Forwarding signals to MUXes
    output logic [1:0] forward_a,
    output logic [1:0] forward_b,

    // Stall and flush control
    output logic stall,
    output logic flush,

    // Pipeline register control hooks
    output logic       ex_valid_out,
    output logic       id_valid_out,
    output logic       if_valid_out,

    // Flush trigger from branch misprediction
    input logic branch_mispredict,

    // Scoreboard backend (optional)
    input logic [31:0] reg_write_bitmap,
    input logic        scoreboard_enable,

    // Validity per stage (for latency masking)
    input logic        id_valid_in,
    input logic        ex_valid_in,
    input logic        if_valid_in
);

// Default forwarding
always_comb begin
    forward_a = 2'b00;
    forward_b = 2'b00;

    // EX hazard forwarding
    if (ex_reg_write && ex_rd != 0 && ex_rd == id_rs1)
        forward_a = 2'b10;
    else if (mem_reg_write && mem_rd != 0 && mem_rd == id_rs1)
        forward_a = 2'b01;

    if (ex_reg_write && ex_rd != 0 && ex_rd == id_rs2)
        forward_b = 2'b10;
    else if (mem_reg_write && mem_rd != 0 && mem_rd == id_rs2)
        forward_b = 2'b01;
end

// Load-use hazard detection
assign stall = (ex_mem_read && (
                (ex_rd != 0 && (ex_rd == id_rs1 || ex_rd == id_rs2))
              ));

// Flush logic (branch misprediction)
always_comb begin
    flush = branch_mispredict;
end

// Valid bit propagation and masking
assign id_valid_out = id_valid_in & ~stall;
assign ex_valid_out = ex_valid_in & ~flush;
assign if_valid_out = if_valid_in & ~stall;

endmodule
