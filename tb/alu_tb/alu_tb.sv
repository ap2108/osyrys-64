`timescale 1ns/1ps

module alu_tb;

  import osyrys64_pkg::*;

  logic [63:0] src1;
  logic [63:0] src2;
  logic [7:0]  alu_control;
  logic [63:0] alu_result;

  // DUT instantiation
  alu dut (
    .src1(src1),
    .src2(src2),
    .alu_control(alu_control),
    .alu_result(alu_result)
  );

  // Task to run individual test cases
  task run_test(
    input logic [63:0] a,
    input logic [63:0] b,
    input logic [7:0]  ctrl,
    input logic [63:0] expected,
    input string       testname
  );
    begin
      src1 = a;
      src2 = b;
      alu_control = ctrl;
      #1;

      $display("Test %-10s | src1 = %h, src2 = %h, result = %h, expected = %h",
                testname, a, b, alu_result, expected);

      assert(alu_result === expected)
        else $fatal("❌ FAILED: %s", testname);
    end
  endtask

  // Initial block for simulation
  initial begin
    $dumpfile("alu_tb.vcd");
    $dumpvars(0, alu_tb);  // ✅ Dump entire testbench for full waveform visibility

    $display("🚀 Starting ALU tests...");

    run_test(64'h00000001, 64'h00000001, ALU_ADDW, 64'sd2, "ADDW_POS");
    run_test(64'hFFFFFFFF, 64'h00000001, ALU_ADDW, 64'sd0, "ADDW_WRAP");

    run_test(64'h00000005, 64'h00000003, ALU_SUBW, 64'sd2, "SUBW_POS");
    run_test(64'h00000003, 64'h00000005, ALU_SUBW, -64'sd2, "SUBW_NEG");

    run_test(64'h00000001, 64'h00000004, ALU_SLLW, 64'sd16, "SLLW");

    run_test(64'h00000010, 64'h00000002, ALU_SRLW, 64'sd4, "SRLW");

    run_test(64'hFFFFFFF0, 64'h00000002, ALU_SRAW, -64'sd4, "SRAW_NEG");
    run_test(64'h00000010, 64'h00000002, ALU_SRAW,  64'sd4, "SRAW_POS");

    $display("✅ All ALU tests passed.");
    #10;
    $finish;
  end

endmodule
