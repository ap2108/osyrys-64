`timescale 1ns/1ps

module forward_mux_tb;

  logic [63:0] rs1_val_in, rs2_val_in;
  logic [63:0] ex_result, mem_result, wb_result;
  logic [1:0] forward_a, forward_b;
  logic [63:0] rs1_val_out, rs2_val_out;

  forward_mux dut (
    .rs1_val_in(rs1_val_in),
    .rs2_val_in(rs2_val_in),
    .ex_result(ex_result),
    .mem_result(mem_result),
    .wb_result(wb_result),
    .forward_a(forward_a),
    .forward_b(forward_b),
    .rs1_val_out(rs1_val_out),
    .rs2_val_out(rs2_val_out)
  );

  initial begin
    $dumpfile("forward_mux_tb.vcd");
    $dumpvars(0, forward_mux_tb);

    rs1_val_in = 64'hAAAA_AAAA_AAAA_AAAA;
    rs2_val_in = 64'hBBBB_BBBB_BBBB_BBBB;

    ex_result  = 64'h1111_1111_1111_1111;
    mem_result = 64'h2222_2222_2222_2222;
    wb_result  = 64'h3333_3333_3333_3333;

    // No forwarding
    forward_a = 2'b00;
    forward_b = 2'b00;
    #10;

    // Forward from WB
    forward_a = 2'b01;
    forward_b = 2'b01;
    #10;

    // Forward from MEM
    forward_a = 2'b10;
    forward_b = 2'b10;
    #10;

    // Forward from EX
    forward_a = 2'b11;
    forward_b = 2'b11;
    #10;

    // Invalid forwarding (edge case)
    forward_a = 2'bxx;
    forward_b = 2'bxx;
    #10;

    $finish;
  end

endmodule
