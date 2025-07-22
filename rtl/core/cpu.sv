`timescale 1ns/1ps

module cpu (
    input  logic clk,
    input  logic rst_n,

    // Instruction and Data Memory
    input  logic [63:0] instr,
    input  logic [63:0] read_data,
    output logic [63:0] pc,
    output logic [63:0] alu_result,
    output logic [63:0] write_data,
    output logic        mem_write_enable,

    // Control Path to memory
    output logic [63:0] mem_addr,

    // NPU Handshake
    output logic npu_start_matrix_mul,
    output logic npu_start_conv,
    input  logic npu_done
);
    import osyrys64_pkg::*;

    // === Program Counter ===
    logic [63:0] pc_next, pc_reg;
    assign pc = pc_reg;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            pc_reg <= 64'h0;
        else if (!stall_pc)
            pc_reg <= pc_next;
    end

    // === Control ===
    logic reg_write_en, mem_read, mem_write, branch, alu_src, mem_to_reg;
    logic [3:0] alu_control;

    logic is_npu_matrix_mul, is_npu_conv;
    logic stall_pc;

    // === Instruction Decode ===
    logic [4:0] rs1, rs2, rd;
    assign rs1 = instr[19:15];
    assign rs2 = instr[24:20];
    assign rd  = instr[11:7];

    logic [2:0] imm_source;
    assign imm_source = (instr[6:0] == 7'b0010011 || instr[6:0] == 7'b0000011) ? 3'b000 :
                        (instr[6:0] == 7'b0100011) ? 3'b001 :
                        (instr[6:0] == 7'b1100011) ? 3'b010 :
                        (instr[6:0] == 7'b1101111) ? 3'b011 :
                        (instr[6:0] == 7'b0110111 || instr[6:0] == 7'b0010111) ? 3'b100 : 3'b000;

    logic [63:0] imm_ext;
    signext signext_unit (
        .raw_instr(instr),
        .imm_source(imm_source),
        .immediate(imm_ext)
    );

    // === Register File ===
    logic [63:0] rs1_data, rs2_data;
    regfile regfile_unit (
        .clk(clk), .rst_n(rst_n),
        .address1(rs1),
        .address2(rs2),
        .read_data1(rs1_data),
        .read_data2(rs2_data),
        .write_enable_b(reg_write_en),
        .write_data_b(write_data),
        .address3(rd)
    );

    // === ALU ===
    logic [63:0] alu_in1, alu_in2, alu_out;
    logic zero_flag;

    assign alu_in1 = rs1_data;
    assign alu_in2 = (alu_src) ? imm_ext : rs2_data;

    alu alu_unit (
        .src1(alu_in1),
        .src2(alu_in2),
        .alu_control(alu_control),
        .alu_result(alu_out)
    );

    assign alu_result = alu_out;
    assign mem_addr = alu_out;
    assign write_data = rs2_data;
    assign mem_write_enable = mem_write;

    // === Control Unit ===
    control control_unit (
        .opcode(instr[6:0]),
        .funct3(instr[14:12]),
        .funct7(instr[31:25]),
        .alu_control(alu_control),
        .reg_write_en(reg_write_en),
        .alu_src(alu_src),
        .mem_read(mem_read),
        .mem_write(mem_write),
        .mem_to_reg(mem_to_reg),
        .branch(branch),
        .is_npu_matrix_mul(is_npu_matrix_mul),
        .is_npu_conv(is_npu_conv)
    );

    // === NPU Delegation ===
    assign npu_start_matrix_mul = is_npu_matrix_mul && !npu_done;
    assign npu_start_conv       = is_npu_conv && !npu_done;
    assign stall_pc = (is_npu_matrix_mul || is_npu_conv) && !npu_done;

    // === PC Update ===
    always_comb begin
        if (branch && zero_flag)
            pc_next = pc_reg + imm_ext;
        else
            pc_next = pc_reg + 64'd4;
    end

endmodule
