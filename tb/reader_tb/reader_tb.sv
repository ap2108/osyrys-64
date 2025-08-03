`timescale 1ns/1ps

module reader_tb;

  import osyrys64_pkg::*;

  logic clk = 0;
  logic rst;

  // Inputs to DUT
  logic [63:0] mem_data;
  logic [7:0]  be_mask;
  logic [2:0]  f3;
  logic        is_load_64;
  logic        valid_in;

  // Outputs from DUT
  logic        ready_out;
  logic        read_stall;
  logic        valid;
  logic [63:0] wb_data;

  // DUT instantiation
  reader dut (
    .clk(clk),
    .rst(rst),
    .mem_data(mem_data),
    .be_mask(be_mask),
    .f3(f3),
    .is_load_64(is_load_64),
    .valid_in(valid_in),
    .ready_out(ready_out),
    .read_stall(read_stall),
    .valid(valid),
    .wb_data(wb_data)
  );

  // Clock generator
  always #5 clk <= ~clk;

  // Task for driving a test case
  task automatic drive_load(input [2:0] funct3, input [63:0] data, input [7:0] mask, input bit load64);
    begin
      f3 = funct3;
      mem_data = data;
      be_mask = mask;
      is_load_64 = load64;
      valid_in = 1;
      @(posedge clk);
      valid_in = 0;
      @(posedge clk);
      @(posedge clk);
    end
  endtask

  // Stimulus
  initial begin
    $dumpfile("reader_tb.vcd");
    $dumpvars(0, reader_tb);

    rst = 1;
    @(posedge clk);
    rst = 0;

    // --- BYTE ---
    drive_load(F3_BYTE, 64'h00000000000000FF, 8'b00000001, 0);
    // --- BYTE_U ---
    drive_load(F3_BYTE_U, 64'h00000000000000FF, 8'b00000001, 0);
    // --- HALFWORD ---
    drive_load(F3_HALFWORD, 64'h000000000000FFFF, 8'b00000011, 0);
    // --- HALFWORD_U ---
    drive_load(F3_HALFWORD_U, 64'h000000000000FFFF, 8'b00000011, 0);
    // --- WORD ---
    drive_load(F3_WORD, 64'h00000000FFFFFFFF, 8'b00001111, 0);
    // --- WORD_U ---
    drive_load(F3_WORD_U, 64'h00000000FFFFFFFF, 8'b00001111, 0);
    // --- LOAD64 ---
    drive_load(3'b011, 64'h123456789ABCDEF0, 8'hFF, 1);

    $display("All test cases applied.");
    #20;
    $finish;
  end

endmodule
