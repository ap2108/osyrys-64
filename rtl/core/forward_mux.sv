/*
 * FORWARDING MUX WRAPPER
 *
 * Wraps forwarding logic for rs1_val and rs2_val based on forwarding signals
 * from hazard_unit. Supports forwarding from EX, MEM, and WB stages.
 * Assumes all operands are 64-bit (RV64I compliant).
 */

`timescale 1ns/1ps

module forward_mux (
    input  logic [63:0] rs1_val_in,
    input  logic [63:0] rs2_val_in,

    input  logic [63:0] ex_result,
    input  logic [63:0] mem_result,
    input  logic [63:0] wb_result,

    input  logic [1:0] forward_a,
    input  logic [1:0] forward_b,

    output logic [63:0] rs1_val_out,
    output logic [63:0] rs2_val_out
);

    // Forward MUX for rs1
    always_comb begin
        unique case (forward_a)
            2'b00: rs1_val_out = rs1_val_in;      // No forwarding
            2'b01: rs1_val_out = wb_result;       // Forward from WB
            2'b10: rs1_val_out = mem_result;      // Forward from MEM
            2'b11: rs1_val_out = ex_result;       // Forward from EX
            default: rs1_val_out = 64'hDEAD_BEEF_DEAD_BEEF;
        endcase
    end

    // Forward MUX for rs2
    always_comb begin
        unique case (forward_b)
            2'b00: rs2_val_out = rs2_val_in;
            2'b01: rs2_val_out = wb_result;
            2'b10: rs2_val_out = mem_result;
            2'b11: rs2_val_out = ex_result;
            default: rs2_val_out = 64'hBAD0_CAFE_BAD0_CAFE;
        endcase
    end

endmodule
