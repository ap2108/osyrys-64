`timescale 1ns/1ps

module memory_tb;

  logic clk, rst_n;
  logic cpu_valid, cpu_ready, cpu_write_enable;
  logic [63:0] cpu_address, cpu_write_data, cpu_read_data;
  logic [7:0] cpu_byte_enable;

  logic npu_valid, npu_ready, npu_write_enable;
  logic [63:0] npu_address, npu_write_data, npu_read_data;
  logic [7:0] npu_byte_enable;

  logic [3:0] burst_len;
  logic burst_mode;

  // Clock generation
  always #5 clk <= ~clk;

  // DUT instantiation
  memory #(
    .WORDS(1024),
    .mem_init("")
  ) dut (
    .clk(clk),
    .rst_n(rst_n),
    .cpu_valid(cpu_valid),
    .cpu_ready(cpu_ready),
    .cpu_address(cpu_address),
    .cpu_write_data(cpu_write_data),
    .cpu_byte_enable(cpu_byte_enable),
    .cpu_write_enable(cpu_write_enable),
    .cpu_read_data(cpu_read_data),
    .npu_valid(npu_valid),
    .npu_ready(npu_ready),
    .npu_address(npu_address),
    .npu_write_data(npu_write_data),
    .npu_byte_enable(npu_byte_enable),
    .npu_write_enable(npu_write_enable),
    .npu_read_data(npu_read_data),
    .burst_len(burst_len),
    .burst_mode(burst_mode)
  );

  initial begin
    $dumpfile("memory_tb.vcd");
    $dumpvars(0, memory_tb);

    clk = 0;
    rst_n = 0;
    cpu_valid = 0;
    cpu_write_enable = 0;
    npu_valid = 0;
    npu_write_enable = 0;
    burst_mode = 0;
    burst_len = 0;

    #12 rst_n = 1;

    // -----------------------------
    // 1. CPU single write
    // -----------------------------
    @(posedge clk);
    cpu_valid = 1;
    cpu_write_enable = 1;
    cpu_address = 64'h08;
    cpu_write_data = 64'hCAFEBABEDEADBEEF;
    cpu_byte_enable = 8'hFF;

    wait (cpu_ready);
    @(posedge clk);
    cpu_valid = 0;
    cpu_write_enable = 0;

    // -----------------------------
    // 2. CPU single read
    // -----------------------------
    @(posedge clk);
    cpu_valid = 1;
    cpu_write_enable = 0;
    cpu_address = 64'h08;

    wait (cpu_ready);
    @(posedge clk);
    $display("CPU single read = %h", cpu_read_data);
    cpu_valid = 0;

    // -----------------------------
    // 3. NPU single write
    // -----------------------------
    @(posedge clk);
    npu_valid = 1;
    npu_write_enable = 1;
    npu_address = 64'h10;
    npu_write_data = 64'h1122334455667788;
    npu_byte_enable = 8'hFF;

    wait (npu_ready);
    @(posedge clk);
    npu_valid = 0;
    npu_write_enable = 0;

    // -----------------------------
    // 4. NPU single read
    // -----------------------------
    @(posedge clk);
    npu_valid = 1;
    npu_write_enable = 0;
    npu_address = 64'h10;

    wait (npu_ready);
    @(posedge clk);
    $display("NPU single read = %h", npu_read_data);
    npu_valid = 0;

    // -----------------------------
    // 5. CPU Burst Write
    // -----------------------------
    burst_mode = 1;
    burst_len = 4;

    for (int i = 0; i < burst_len; i++) begin
      @(posedge clk);
      cpu_valid = 1;
      cpu_write_enable = 1;
      cpu_byte_enable = 8'hFF;
      cpu_address = 64'h100 + i * 8;
      cpu_write_data = 64'hAABBCCDD00000000 + i;
      wait (cpu_ready);
    end
    @(posedge clk);
    cpu_valid = 0;
    cpu_write_enable = 0;
    burst_mode = 0;

    // -----------------------------
    // 6. CPU Burst Read
    // -----------------------------
    burst_mode = 1;
    burst_len = 4;

    for (int i = 0; i < burst_len; i++) begin
      @(posedge clk);
      cpu_valid = 1;
      cpu_write_enable = 0;
      cpu_byte_enable = 8'hFF;
      cpu_address = 64'h100 + i * 8;
      wait (cpu_ready);
      @(posedge clk);
      $display("CPU burst read @ %h = %h", cpu_address, cpu_read_data);
    end
    @(posedge clk);
    cpu_valid = 0;
    burst_mode = 0;

    // -----------------------------
    // 7. MMIO Read from NPU result region
    // -----------------------------
    @(posedge clk);
    cpu_valid = 1;
    cpu_write_enable = 0;
    cpu_address = 64'h80000000;

    wait (cpu_ready);
    @(posedge clk);
    $display("MMIO read from NPU result region = %h", cpu_read_data);
    cpu_valid = 0;

    // -----------------------------
    // 8. NPU -> MMIO write test (0x80000010)
    // -----------------------------
    @(posedge clk);
    npu_valid = 1;
    npu_write_enable = 1;
    npu_address = 64'h80000010;
    npu_write_data = 64'hDEADCAFEBEEF1122;
    npu_byte_enable = 8'hFF;

    wait (npu_ready);
    @(posedge clk);
    npu_valid = 0;
    npu_write_enable = 0;

    // -----------------------------
    // 9. NPU -> MMIO readback test (0x80000010)
    // -----------------------------
    @(posedge clk);
    npu_valid = 1;
    npu_write_enable = 0;
    npu_address = 64'h80000010;

    wait (npu_ready);
    @(posedge clk);
    $display("MMIO readback from NPU MMIO region = %h", npu_read_data);
    npu_valid = 0;

    #50 $finish;
  end

endmodule
