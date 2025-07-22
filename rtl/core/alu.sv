// OSYRYS-64 ALU
// RV64I and RV64 _W Support
// Author: OSYRYS-64 team (Suchet, Skanda, Aditya)

`timescale 1ns/1ps

module alu (
    input  logic [63:0] src1,
    input  logic [63:0] src2,
    input  logic [7:0]  alu_control,
    output logic [63:0] alu_result
);

    import osyrys64_pkg::*;

    logic [4:0] shamt32;
    assign shamt32 = src2[4:0];

    logic [31:0] result32;

    always_comb begin
        case (alu_control)
            ALU_ADDW: begin
                result32   = src1[31:0] + src2[31:0];
                alu_result = {{32{result32[31]}}, result32};
            end
            ALU_SUBW: begin
                result32   = src1[31:0] - src2[31:0];
                alu_result = {{32{result32[31]}}, result32};
            end
            ALU_SLLW: begin
                result32   = src1[31:0] << shamt32;
                alu_result = {{32{result32[31]}}, result32};
            end
            ALU_SRLW: begin
                result32   = src1[31:0] >> shamt32;
                alu_result = {{32{result32[31]}}, result32};
            end
            ALU_SRAW: begin
                result32   = $signed(src1[31:0]) >>> shamt32;
                alu_result = {{32{result32[31]}}, result32};
            end
            default: alu_result = 64'd0;
        endcase
    end

endmodule
