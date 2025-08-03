`timescale 1ns/1ps

module regfile_tb;

  // Clock and Reset
  logic clk = 0;
  logic rst_n = 0;

  // CPU read ports
  logic [4:0] address1, address2, address3;
  logic [63:0] read_data1, read_data2;

  // Write Ports A and B
  logic write_enable_a, write_enable_b;
  logic [4:0] write_addr_a, write_addr_b;
  logic [63:0] write_data_a, write_data_b;

  // External dual-read (NPU)
  logic [4:0] ext_address1, ext_address2;
  logic [63:0] ext_data1, ext_data2;

  // Scoreboard output
  logic [31:0] reg_pending_writes;

  // Instantiate DUT
  regfile uut (
    .clk(clk),
    .rst_n(rst_n),
    .address1(address1),
    .address2(address2),
    .address3(address3),
    .read_data1(read_data1),
    .read_data2(read_data2),
    .write_enable_a(write_enable_a),
    .write_addr_a(write_addr_a),
    .write_data_a(write_data_a),
    .write_enable_b(write_enable_b),
    .write_addr_b(write_addr_b),
    .write_data_b(write_data_b),
    .ext_address1(ext_address1),
    .ext_address2(ext_address2),
    .ext_data1(ext_data1),
    .ext_data2(ext_data2),
    .reg_pending_writes(reg_pending_writes)
  );

  // Clock Generation
  always #5 clk <= ~clk;

  initial begin
    $dumpfile("regfile_tb.vcd");
    $dumpvars(0, regfile_tb);

    // Initial values
    address1 = 0;
    address2 = 0;
    address3 = 0;
    write_enable_a = 0;
    write_enable_b = 0;
    write_addr_a = 0;
    write_data_a = 0;
    write_addr_b = 0;
    write_data_b = 0;
    ext_address1 = 0;
    ext_address2 = 0;

    // Reset
    #2 rst_n = 0;
    #10 rst_n = 1;

    // Write to reg x5 via Port A
    #10;
    write_enable_a = 1;
    write_addr_a = 5;
    write_data_a = 64'hdeadbeefdeadbeef;
    #10;
    write_enable_a = 0;

    // Write to reg x10 via Port B
    #10;
    write_enable_b = 1;
    write_addr_b = 10;
    write_data_b = 64'hcafef00dcafef00d;
    #10;
    write_enable_b = 0;

    // Read from x5 and x10 via CPU read ports
    #10;
    address1 = 5;
    address2 = 10;
    #10;

    $display("CPU Read x5 = 0x%h (Expected: 0xdeadbeefdeadbeef)", read_data1);
    $display("CPU Read x10 = 0x%h (Expected: 0xcafef00dcafef00d)", read_data2);

    // External NPU read from same
    ext_address1 = 5;
    ext_address2 = 10;
    #10;
    $display("EXT Read x5 = 0x%h", ext_data1);
    $display("EXT Read x10 = 0x%h", ext_data2);

    // Display scoreboard
    $display("Scoreboard: %b", reg_pending_writes);

    #20 $finish;
  end

endmodule
