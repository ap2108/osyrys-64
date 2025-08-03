`timescale 1ns/1ps

module signext (
    input  logic [31:0] raw_instr,
    input  logic [2:0]  imm_source,
    output logic [63:0] immediate
);

    logic [63:0] imm_i, imm_s, imm_b, imm_j, imm_u;

    // I-type
    assign imm_i = {{52{raw_instr[31]}}, raw_instr[31:20]};

    // S-type
    assign imm_s = {{52{raw_instr[31]}}, raw_instr[31:25], raw_instr[11:7]};

    // B-type (signed 13-bit offset: imm[12|10:5|4:1|11|0])
    assign imm_b = {{51{raw_instr[31]}}, raw_instr[7], raw_instr[30:25], raw_instr[11:8], 1'b0};

    // J-type (signed 21-bit offset: imm[20|10:1|11|19:12|0])
    assign imm_j = {{43{raw_instr[31]}}, raw_instr[19:12], raw_instr[20],
                    raw_instr[30:21], 1'b0};

    // U-type (upper 20 bits shifted)
    assign imm_u = {raw_instr[31:12], 12'b0};

    always_comb begin
        case (imm_source)
            3'b000: immediate = imm_i;
            3'b001: immediate = imm_s;
            3'b010: immediate = imm_b;
            3'b011: immediate = imm_j;
            3'b100: immediate = imm_u;
            default: immediate = 64'd0;
        endcase
    end

endmodule
