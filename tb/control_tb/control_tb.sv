`timescale 1ns/1ps

module control_tb;

  import osyrys64_pkg::*;

  logic [6:0] opcode;
  logic [2:0] funct3;
  logic [6:0] funct7;

  alu_control_t alu_control;
  logic reg_write_en;
  logic alu_src;
  logic mem_read;
  logic mem_write;
  logic mem_to_reg;
  logic branch;

  logic is_npu_matrix_mul;
  logic is_npu_conv;

  control dut (
    .opcode(opcode),
    .funct3(funct3),
    .funct7(funct7),
    .alu_control(alu_control),
    .reg_write_en(reg_write_en),
    .alu_src(alu_src),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .mem_to_reg(mem_to_reg),
    .branch(branch),
    .is_npu_matrix_mul(is_npu_matrix_mul),
    .is_npu_conv(is_npu_conv)
  );

  initial begin
    $dumpfile("control_tb.vcd");
    $dumpvars(0, control_tb);

    // Test 1: R-Type ADD
    opcode = OPCODE_R;
    funct3 = 3'b000;
    funct7 = 7'b0000000;
    #10;

    // Test 2: R-Type SUB
    opcode = OPCODE_R;
    funct3 = 3'b000;
    funct7 = 7'b0100000;
    #10;

    // Test 3: Load
    opcode = OPCODE_L;
    funct3 = 3'b010;
    funct7 = 7'b0000000;
    #10;

    // Test 4: Store
    opcode = OPCODE_S;
    funct3 = 3'b010;
    funct7 = 7'b0000000;
    #10;

    // Test 5: Branch
    opcode = OPCODE_B;
    funct3 = 3'b000;
    funct7 = 7'b0000000;
    #10;

    // ✅ Test 6: NPU Matrix Multiply
    opcode = OPCODE_NPU;
    funct3 = 3'b000;
    funct7 = FUNCT7_MATRIX_MUL;
    #10;

    // ✅ Test 7: NPU Convolution
    opcode = OPCODE_NPU;
    funct3 = 3'b000;
    funct7 = FUNCT7_CONVOLUTION;
    #10;

    $finish;
  end

endmodule
