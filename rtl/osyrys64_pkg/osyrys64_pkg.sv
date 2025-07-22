`timescale 1ns/1ps

package osyrys64_pkg;

  // ============ ALU Operations ============
  typedef enum logic [3:0] {
    ALU_ADD   = 4'h0,
    ALU_SUB   = 4'h1,
    ALU_AND   = 4'h2,
    ALU_OR    = 4'h3,
    ALU_XOR   = 4'h4,
    ALU_SLT   = 4'h5,
    ALU_SLTU  = 4'h6,
    ALU_SLL   = 4'h7,
    ALU_SRL   = 4'h8,
    ALU_SRA   = 4'h9,

    ALU_ADDW  = 4'hA,
    ALU_SUBW  = 4'hB,
    ALU_SLLW  = 4'hC,
    ALU_SRLW  = 4'hD,
    ALU_SRAW  = 4'hE
  } alu_control_t;

  // ============ Base RV64I Opcodes ============
  parameter logic [6:0] OPCODE_R           = 7'b0110011;
  parameter logic [6:0] OPCODE_I           = 7'b0010011;
  parameter logic [6:0] OPCODE_L           = 7'b0000011;
  parameter logic [6:0] OPCODE_S           = 7'b0100011;
  parameter logic [6:0] OPCODE_B           = 7'b1100011;
  parameter logic [6:0] OPCODE_JAL         = 7'b1101111;
  parameter logic [6:0] OPCODE_JALR        = 7'b1100111;
  parameter logic [6:0] OPCODE_AUIPC       = 7'b0010111;
  parameter logic [6:0] OPCODE_LUI         = 7'b0110111;

  // ============ NPU Custom Opcodes ============
  parameter logic [6:0] OPCODE_CUSTOM0     = 7'b0001011; // Main custom space
  parameter logic [6:0] OPCODE_CUSTOM1     = 7'b0101011; // Reserved
  parameter logic [6:0] OPCODE_NPU_MATMUL  = OPCODE_CUSTOM0;
  parameter logic [6:0] OPCODE_NPU_CONV    = OPCODE_CUSTOM0;

  // ============ NPU Custom Function7 Codes ============
  parameter logic [6:0] FUNCT7_MATRIX_MUL  = 7'b0000001;
  parameter logic [6:0] FUNCT7_CONVOLUTION = 7'b0000010;

  // ============ NPU Operation Modes ============
  parameter logic [1:0] NPU_OP_NONE        = 2'b00;
  parameter logic [1:0] NPU_OP_MATMUL      = 2'b01;
  parameter logic [1:0] NPU_OP_CONV        = 2'b10;

  // ============ Instruction Format Type ============
  typedef enum logic [2:0] {
    IMM_I_TYPE = 3'b000,
    IMM_S_TYPE = 3'b001,
    IMM_B_TYPE = 3'b010,
    IMM_J_TYPE = 3'b011,
    IMM_U_TYPE = 3'b100,
    IMM_CUSTOM = 3'b101
  } imm_type_e;

endpackage
