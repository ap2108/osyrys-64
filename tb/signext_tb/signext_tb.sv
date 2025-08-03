`timescale 1ns/1ps

module signext_tb;

    logic [31:0] raw_instr;
    logic [2:0] imm_source;
    logic [63:0] immediate;

    signext dut (
        .raw_instr(raw_instr),
        .imm_source(imm_source),
        .immediate(immediate)
    );

    task check(input string testname, input [63:0] expected);
        if (immediate !== expected) begin
            $display("FAIL: %s | Got: %h | Expected: %h", testname, immediate, expected);
        end else begin
            $display("PASS: %s", testname);
        end
    endtask

    initial begin
    $dumpfile("signext_tb.vcd");
    $dumpvars(0, signext_tb);
        // I-type test (addi/lw immediate)
        raw_instr = 32'hFFF00313; // imm = 0xFFF (signed -1)
        imm_source = 3'b000;
        #1;
        check("I-type", {{52{1'b1}}, 12'hFFF});

        // S-type test (sw)
        raw_instr = 32'h00F12223; // imm = 0x00F, should become 0x0F << (7:11 + 25:31)
        imm_source = 3'b001;
        #1;
        check("S-type", {{52{1'b0}}, 7'h00F, 5'h02});

        // B-type test (beq)
        raw_instr = 32'b1111111_00010_00001_000_00000_1100011;
        imm_source = 3'b010;
        #1;
        check("B-type", {{51{1'b1}}, 1'b1, 6'b000010, 4'b0000, 1'b0});

        // J-type test (jal)
        raw_instr = 32'b1_00000000_1_0000000000_00000_1101111;
        imm_source = 3'b011;
        #1;
        check("J-type", {{43{1'b1}}, 8'b00000000, 1'b1, 10'b0000000000, 1'b0});

        // U-type test (lui/auipc)
        raw_instr = 32'h12345000;
        imm_source = 3'b100;
        #1;
        check("U-type", 64'h000000012345000);

        $finish;
    end

endmodule
