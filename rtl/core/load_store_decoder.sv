/*
* LOAD STORE DECODER - RV64I
*
* BRH 10/24
*
* Sits before the data memory and feeds the correct byte enables and data
* for different store instruction types (SB, SH, SW, SD).
*/

`timescale 1ns/1ps

module load_store_decoder (
    input  logic [63:0] alu_result_address,
    input  logic [2:0]  f3,
    input  logic [63:0] reg_read,
    output logic [7:0]  byte_enable,
    output logic [63:0] data
);

import osyrys64_pkg::*;

logic [2:0] offset;

assign offset = alu_result_address[2:0];  // for 64-bit aligned accesses

always_comb begin
    byte_enable = 8'b00000000;
    data        = 64'd0;

    case (f3)
        F3_BYTE, F3_BYTE_U: begin // SB
            case (offset)
                3'd0: begin byte_enable = 8'b00000001; data = (reg_read & 64'h00000000000000FF); end
                3'd1: begin byte_enable = 8'b00000010; data = (reg_read & 64'h00000000000000FF) << 8; end
                3'd2: begin byte_enable = 8'b00000100; data = (reg_read & 64'h00000000000000FF) << 16; end
                3'd3: begin byte_enable = 8'b00001000; data = (reg_read & 64'h00000000000000FF) << 24; end
                3'd4: begin byte_enable = 8'b00010000; data = (reg_read & 64'h00000000000000FF) << 32; end
                3'd5: begin byte_enable = 8'b00100000; data = (reg_read & 64'h00000000000000FF) << 40; end
                3'd6: begin byte_enable = 8'b01000000; data = (reg_read & 64'h00000000000000FF) << 48; end
                3'd7: begin byte_enable = 8'b10000000; data = (reg_read & 64'h00000000000000FF) << 56; end
                default: byte_enable = 8'b00000000;
            endcase
        end

        F3_HALFWORD, F3_HALFWORD_U: begin // SH
            case (offset)
                3'd0: begin byte_enable = 8'b00000011; data = (reg_read & 64'h000000000000FFFF); end
                3'd2: begin byte_enable = 8'b00001100; data = (reg_read & 64'h000000000000FFFF) << 16; end
                3'd4: begin byte_enable = 8'b00110000; data = (reg_read & 64'h000000000000FFFF) << 32; end
                3'd6: begin byte_enable = 8'b11000000; data = (reg_read & 64'h000000000000FFFF) << 48; end
                default: byte_enable = 8'b00000000;
            endcase
        end

        F3_WORD: begin // SW
            case (offset)
                3'd0: begin byte_enable = 8'b00001111; data = (reg_read & 64'h00000000FFFFFFFF); end
                3'd4: begin byte_enable = 8'b11110000; data = (reg_read & 64'h00000000FFFFFFFF) << 32; end
                default: byte_enable = 8'b00000000;
            endcase
        end

        F3_DOUBLE: begin // SD (store double word)
            if (offset == 3'd0) begin
                byte_enable = 8'b11111111;
                data = reg_read;
            end else begin
                byte_enable = 8'b00000000;
            end
        end

        default: begin
            byte_enable = 8'b00000000;
            data        = 64'd0;
        end
    endcase
end

endmodule
