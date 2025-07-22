`timescale 1ns/1ps

module reader (
    input  logic         clk,
    input  logic         rst,
    
    // Memory interface
    input  logic [63:0]  mem_data,
    input  logic [7:0]   be_mask,     // Byte enables
    input  logic [2:0]   f3,          // funct3
    input  logic         is_load_64,  // LD / LDU signal
    input  logic         valid_in,    // Data valid from memory

    // Handshake
    output logic         ready_out,   // Reader ready to accept next transaction
    output logic         read_stall,  // Optional: can stall pipeline
    output logic         valid,       // Output data valid

    // Write-back
    output logic [63:0]  wb_data
);

import osyrys64_pkg::*;

logic [63:0] masked_data;
logic [63:0] raw_data;
logic        sign_extend;
logic        load_pending;

assign sign_extend = ~f3[2];  // Signed/unsigned

//------------------------------------------------------------
// Byte masking
//------------------------------------------------------------
always_comb begin : mask_apply
    for (int i = 0; i < 8; i++) begin
        masked_data[(i*8) +: 8] = be_mask[i] ? mem_data[(i*8) +: 8] : 8'h00;
    end
end

//------------------------------------------------------------
// Data shifting based on load size
//------------------------------------------------------------
always_comb begin : shift_data
    case (f3)
        F3_WORD, F3_WORD_U: raw_data = masked_data;

        F3_BYTE, F3_BYTE_U: begin
            case (be_mask)
                8'b00000001: raw_data = masked_data >> 0;
                8'b00000010: raw_data = masked_data >> 8;
                8'b00000100: raw_data = masked_data >> 16;
                8'b00001000: raw_data = masked_data >> 24;
                8'b00010000: raw_data = masked_data >> 32;
                8'b00100000: raw_data = masked_data >> 40;
                8'b01000000: raw_data = masked_data >> 48;
                8'b10000000: raw_data = masked_data >> 56;
                default:     raw_data = 64'd0;
            endcase
        end

        F3_HALFWORD, F3_HALFWORD_U: begin
            case (be_mask)
                8'b00000011: raw_data = masked_data >> 0;
                8'b00001100: raw_data = masked_data >> 16;
                8'b00110000: raw_data = masked_data >> 32;
                8'b11000000: raw_data = masked_data >> 48;
                default:     raw_data = 64'd0;
            endcase
        end

        default: raw_data = masked_data;
    endcase
end

//------------------------------------------------------------
// Sign/zero extend to 64 bits
//------------------------------------------------------------
always_comb begin : sign_extend_logic
    unique case (f3)
        F3_BYTE, F3_BYTE_U:       wb_data = sign_extend ? {{56{raw_data[7]}},  raw_data[7:0]}   : {{56'd0}, raw_data[7:0]};
        F3_HALFWORD, F3_HALFWORD_U: wb_data = sign_extend ? {{48{raw_data[15]}}, raw_data[15:0]} : {{48'd0}, raw_data[15:0]};
        F3_WORD, F3_WORD_U:       wb_data = sign_extend ? {{32{raw_data[31]}}, raw_data[31:0]} : {{32'd0}, raw_data[31:0]};
        default:                  wb_data = is_load_64 ? raw_data : 64'd0;
    endcase
end

//------------------------------------------------------------
// Output handshaking and valid logic
//------------------------------------------------------------
always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
        valid       <= 0;
        load_pending <= 0;
    end else begin
        valid       <= valid_in;
        load_pending <= !valid_in;
    end
end

assign ready_out  = ~load_pending;
assign read_stall = load_pending;

//------------------------------------------------------------
// Debugging trace
//------------------------------------------------------------
always_ff @(posedge clk) begin
    if (valid) begin
        $display("[reader] f3=%b | is64=%b | raw_data=0x%h | wb_data=0x%h | valid=%b", f3, is_load_64, raw_data, wb_data, valid);
    end
end

endmodule
