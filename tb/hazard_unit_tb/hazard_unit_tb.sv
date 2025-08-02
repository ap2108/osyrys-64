`timescale 1ns/1ps

module hazard_unit_tb;

  // Clock and Reset
  logic clk;
  logic rst_n;

  // Inputs to DUT
  logic [4:0] id_rs1, id_rs2;
  logic [4:0] ex_rd;
  logic       ex_reg_write;
  logic       ex_mem_read;
  logic [4:0] mem_rd;
  logic       mem_reg_write;
  logic [4:0] wb_rd;
  logic       wb_reg_write;
  logic       branch_mispredict;
  logic [31:0] reg_write_bitmap;
  logic        scoreboard_enable;
  logic        id_valid_in;
  logic        ex_valid_in;
  logic        if_valid_in;

  // Outputs from DUT
  logic [1:0] forward_a, forward_b;
  logic       stall, flush;
  logic       ex_valid_out, id_valid_out, if_valid_out;

  // DUT Instantiation
  hazard_unit dut (
    .clk(clk),
    .rst_n(rst_n),
    .id_rs1(id_rs1),
    .id_rs2(id_rs2),
    .ex_rd(ex_rd),
    .ex_reg_write(ex_reg_write),
    .ex_mem_read(ex_mem_read),
    .mem_rd(mem_rd),
    .mem_reg_write(mem_reg_write),
    .wb_rd(wb_rd),
    .wb_reg_write(wb_reg_write),
    .forward_a(forward_a),
    .forward_b(forward_b),
    .stall(stall),
    .flush(flush),
    .ex_valid_out(ex_valid_out),
    .id_valid_out(id_valid_out),
    .if_valid_out(if_valid_out),
    .branch_mispredict(branch_mispredict),
    .reg_write_bitmap(reg_write_bitmap),
    .scoreboard_enable(scoreboard_enable),
    .id_valid_in(id_valid_in),
    .ex_valid_in(ex_valid_in),
    .if_valid_in(if_valid_in)
  );

  // Clock generation
  always #5 clk <= ~clk;

  // Initial test procedure
  initial begin
    // VCD dump
    $dumpfile("hazard_unit_tb.vcd");
    $dumpvars(0, hazard_unit_tb);

    // Initialize signals
    clk = 0;
    rst_n = 0;
    id_rs1 = 0;
    id_rs2 = 0;
    ex_rd = 0;
    ex_reg_write = 0;
    ex_mem_read = 0;
    mem_rd = 0;
    mem_reg_write = 0;
    wb_rd = 0;
    wb_reg_write = 0;
    branch_mispredict = 0;
    reg_write_bitmap = 0;
    scoreboard_enable = 0;
    id_valid_in = 1;
    ex_valid_in = 1;
    if_valid_in = 1;

    // Release reset
    #12 rst_n = 1;

    // === Test Case 1: No hazard, default forwarding ===
    #10;
    id_rs1 = 5'd1;
    id_rs2 = 5'd2;
    ex_rd = 5'd3;
    ex_reg_write = 1;
    ex_mem_read = 0;
    mem_rd = 5'd4;
    mem_reg_write = 1;

    #10;
    $display("TC1 | forward_a = %b, forward_b = %b, stall = %b, flush = %b", forward_a, forward_b, stall, flush);

    // === Test Case 2: EX hazard on rs1 ===
    #10;
    ex_rd = 5'd1; // same as id_rs1
    #10;
    $display("TC2 | forward_a = %b, forward_b = %b, stall = %b, flush = %b", forward_a, forward_b, stall, flush);

    // === Test Case 3: Load-Use Hazard ===
    #10;
    ex_mem_read = 1;
    ex_rd = 5'd2; // same as id_rs2
    #10;
    $display("TC3 | forward_a = %b, forward_b = %b, stall = %b, flush = %b", forward_a, forward_b, stall, flush);

    // === Test Case 4: Branch Mispredict ===
    #10;
    branch_mispredict = 1;
    #10;
    $display("TC4 | forward_a = %b, forward_b = %b, stall = %b, flush = %b", forward_a, forward_b, stall, flush);

    // === End ===
    #1000;
    $finish;
  end

endmodule
