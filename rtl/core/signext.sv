`timescale 1ns/1ps

module signext (
    input  logic [31:0] raw_instr,
    input  logic [2:0]  imm_source,
    output logic [63:0] immediate
);

    always_comb begin
        case (imm_source)
            // I-type (e.g., addi, lw, NPU immediate)
            3'b000: immediate = {{52{raw_instr[31]}}, raw_instr[31:20]};

            // S-type (e.g., sw)
            3'b001: immediate = {{52{raw_instr[31]}}, raw_instr[31:25], raw_instr[11:7]};

            // B-type (e.g., beq, bne)
            3'b010: immediate = {{51{raw_instr[31]}}, raw_instr[7], raw_instr[30:25], raw_instr[11:8], 1'b0};

            // J-type (e.g., jal)
            3'b011: immediate = {{43{raw_instr[31]}}, raw_instr[19:12], raw_instr[20],
                                  raw_instr[30:21], 1'b0};

            // U-type (e.g., lui, auipc)
            3'b100: immediate = {raw_instr[31:12], 12'b0};

            default: immediate = 64'd0;
        endcase
    end

endmodule
