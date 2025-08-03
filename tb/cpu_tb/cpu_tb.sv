`timescale 1ns/1ps

module cpu_tb;

    logic clk;
    logic rst_n;

    logic [63:0] instr;
    logic [63:0] read_data;
    logic [63:0] pc, alu_result, write_data;
    logic        mem_write_enable;
    logic [63:0] mem_addr;
    logic        npu_start_matrix_mul, npu_start_conv;
    logic        npu_done;

    // Clock generation
    always #5 clk <= ~clk;

    // Instantiate CPU
    cpu uut (
        .clk(clk),
        .rst_n(rst_n),
        .instr(instr),
        .read_data(read_data),
        .pc(pc),
        .alu_result(alu_result),
        .write_data(write_data),
        .mem_write_enable(mem_write_enable),
        .mem_addr(mem_addr),
        .npu_start_matrix_mul(npu_start_matrix_mul),
        .npu_start_conv(npu_start_conv),
        .npu_done(npu_done)
    );

    initial begin
        // VCD dump
        $dumpfile("cpu_tb.vcd");
        $dumpvars(0, cpu_tb);

        // Initialize
        clk = 0;
        rst_n = 0;
        instr = 64'd0;
        read_data = 64'd0;
        npu_done = 0;

        // Reset sequence
        #10 rst_n = 1;

        // Preload registers x6 = 25, x7 = 17
        uut.regfile_unit.registers[6] = 64'd25;
        uut.regfile_unit.registers[7] = 64'd17;

        // Issue instruction: ADD x5, x6, x7
        // Binary: 0000000 00111 00110 000 00101 0110011
        // Hex: 0x00730533
        instr = 64'h0000000000730533;

        // Wait for execution
        #50;

        // Display result
        $display("x5 = %0d (Expected: 42)", uut.regfile_unit.registers[5]);

        // Finish simulation
        #10;
        $finish;
    end

endmodule
