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

    // === Import Package ===
    import osyrys64_pkg::*;

    // === PC Logic ===
    logic [63:0] pc_reg, pc_next;
    assign pc = pc_reg;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            pc_reg <= 64'd0;
        else if (!stall_pc)
            pc_reg <= pc_next;
    end

    // === Instruction Decode ===
    logic [4:0] rs1, rs2, rd;
    assign rs1 = instr[19:15];
    assign rs2 = instr[24:20];
    assign rd  = instr[11:7];

    logic [2:0] imm_source;
    assign imm_source = (instr[6:0] == 7'b0010011 || instr[6:0] == 7'b0000011) ? 3'b000 :
                        (instr[6:0] == 7'b0100011)                             ? 3'b001 :
                        (instr[6:0] == 7'b1100011)                             ? 3'b010 :
                        (instr[6:0] == 7'b1101111)                             ? 3'b011 :
                        (instr[6:0] == 7'b0110111 || instr[6:0] == 7'b0010111) ? 3'b100 :
                                                                                 3'b000;

    // === Immediate Generator ===
    logic [63:0] imm_ext;
    signext signext_unit (
        .raw_instr(instr),
        .imm_source(imm_source),
        .immediate(imm_ext)
    );

    // === Register File ===
    logic [63:0] rs1_data, rs2_data;
    regfile regfile_unit (
        .clk(clk),
        .rst_n(rst_n),

        // CPU Read Ports
        .address1(rs1),
        .address2(rs2),
        .address3(rd),
        .read_data1(rs1_data),
        .read_data2(rs2_data),

        // Write Port A
        .write_enable_a(reg_write_en),
        .write_addr_a(rd),
        .write_data_a(write_data),

        // Write Port B - unused
        .write_enable_b(1'b0),
        .write_addr_b(5'd0),
        .write_data_b(64'd0),

        // External Dual Read - unused
        .ext_address1(5'd0),
        .ext_address2(5'd0)
    );

    // === ALU Inputs ===
    logic [63:0] alu_in1, alu_in2, alu_out;
    assign alu_in1 = rs1_data;
    assign alu_in2 = (alu_src) ? imm_ext : rs2_data;

    alu alu_unit (
        .src1(alu_in1),
        .src2(alu_in2),
        .alu_control(alu_control),
        .alu_result(alu_out)
    );

    assign alu_result = alu_out;
    assign alu_zero   = (alu_out == 64'd0);
    assign mem_addr   = alu_out;
    assign write_data = (mem_to_reg) ? read_data : alu_out;
    assign mem_write_enable = mem_write;

    // === Control Signals ===
    logic reg_write_en, mem_read, mem_write, branch;
    logic alu_src, mem_to_reg;
    logic [3:0] alu_control;
    logic is_npu_matrix_mul, is_npu_conv;
    logic alu_zero, stall_pc;

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

    // === NPU Delegation & Stalling ===
    assign npu_start_matrix_mul = is_npu_matrix_mul && !npu_done;
    assign npu_start_conv       = is_npu_conv && !npu_done;
    assign stall_pc             = (is_npu_matrix_mul || is_npu_conv) && !npu_done;

    // === PC Update Logic ===
    always_comb begin
        if (branch && alu_zero)
            pc_next = pc_reg + imm_ext;
        else
            pc_next = pc_reg + 64'd4;
    end

endmodule
