`timescale 1ns/1ps

module control (
    input  logic [6:0] opcode,
    input  logic [2:0] funct3,
    input  logic [6:0] funct7,

    output osyrys64_pkg::alu_control_t alu_control,
    output logic       reg_write_en,
    output logic       alu_src,
    output logic       mem_read,
    output logic       mem_write,
    output logic       mem_to_reg,
    output logic       branch,

    output logic       is_npu_matrix_mul,
    output logic       is_npu_conv
);

    import osyrys64_pkg::*;

    // Temporary enum signal for assignment
    alu_control_t alu_control_enum;

    always_comb begin
        // Default values
        alu_control_enum    = ALU_ADD;
        reg_write_en        = 1'b0;
        alu_src             = 1'b0;
        mem_read            = 1'b0;
        mem_write           = 1'b0;
        mem_to_reg          = 1'b0;
        branch              = 1'b0;
        is_npu_matrix_mul   = 1'b0;
        is_npu_conv         = 1'b0;

        unique case (opcode)
            OPCODE_R: begin
                reg_write_en = 1'b1;
                alu_src      = 1'b0;
                case ({funct7, funct3})
                    {7'b0000000, 3'b000}: alu_control_enum = ALU_ADD;
                    {7'b0100000, 3'b000}: alu_control_enum = ALU_SUB;
                    default:              alu_control_enum = ALU_ADD;
                endcase
            end
            OPCODE_I: begin
                reg_write_en     = 1'b1;
                alu_src          = 1'b1;
                alu_control_enum = ALU_ADD;
            end
            OPCODE_L: begin
                reg_write_en     = 1'b1;
                alu_src          = 1'b1;
                mem_read         = 1'b1;
                mem_to_reg       = 1'b1;
                alu_control_enum = ALU_ADD;
            end
            OPCODE_S: begin
                alu_src          = 1'b1;
                mem_write        = 1'b1;
                alu_control_enum = ALU_ADD;
            end
            OPCODE_B: begin
                branch           = 1'b1;
                alu_control_enum = ALU_SUB;
            end
            OPCODE_NPU_MATMUL: begin
                is_npu_matrix_mul = 1'b1;
            end
            OPCODE_NPU_CONV: begin
                is_npu_conv = 1'b1;
            end
            default: ;
        endcase
    end

    // Final assignment
    assign alu_control = alu_control_enum;

endmodule
