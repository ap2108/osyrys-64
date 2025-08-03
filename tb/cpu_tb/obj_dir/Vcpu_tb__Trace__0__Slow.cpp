// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


VL_ATTR_COLD void Vcpu_tb___024root__trace_init_sub__TOP__osyrys64_pkg__0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_sub__TOP__0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("osyrys64_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vcpu_tb___024root__trace_init_sub__TOP__osyrys64_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("cpu_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+112,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+4,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+113,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+103,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+105,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+92,0,"mem_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+103,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+115,0,"npu_start_matrix_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"npu_start_conv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"npu_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+112,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+4,0,"read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+113,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+103,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+105,0,"write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+92,0,"mem_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+103,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+115,0,"npu_start_matrix_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"npu_start_conv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"npu_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+113,0,"pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+117,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+93,0,"imm_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+94,0,"imm_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+24,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+26,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+24,0,"alu_in1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+107,0,"alu_in2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+103,0,"alu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+96,0,"reg_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"alu_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"is_npu_matrix_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"is_npu_conv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"alu_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"stall_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+24,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+107,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+102,0,"alu_control",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+103,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+110,0,"shamt32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+111,0,"result32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+11,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+101,0,"alu_control",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+96,0,"reg_write_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"is_npu_matrix_mul",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"is_npu_conv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"alu_control_enum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("regfile_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+112,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"address3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+24,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+26,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+96,0,"write_enable_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"write_addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+105,0,"write_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+124,0,"write_enable_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"write_addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+126,0,"write_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+125,0,"ext_address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+125,0,"ext_address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+126,0,"ext_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+126,0,"ext_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+122,0,"reg_pending_writes",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+28+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+122,0,"scoreboard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("signext_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"raw_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"imm_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+94,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+14,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+16,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+18,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+20,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+22,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_sub__TOP__osyrys64_pkg__0(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_sub__TOP__osyrys64_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+128,0,"OPCODE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+129,0,"OPCODE_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+130,0,"OPCODE_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+131,0,"OPCODE_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+132,0,"OPCODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+133,0,"OPCODE_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+134,0,"OPCODE_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+135,0,"OPCODE_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+136,0,"OPCODE_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+137,0,"OPCODE_NPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+138,0,"FUNCT7_MATRIX_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+139,0,"FUNCT7_CONVOLUTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+140,0,"NPU_OP_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"NPU_OP_MATMUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"NPU_OP_CONV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"F3_BYTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+144,0,"F3_HALFWORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+145,0,"F3_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+146,0,"F3_BYTE_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+147,0,"F3_HALFWORD_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+148,0,"F3_WORD_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_init_top(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_init_top\n"); );
    // Body
    Vcpu_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu_tb___024root__trace_register(Vcpu_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vcpu_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcpu_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcpu_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcpu_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_const_0\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_const_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+124,(0U));
    bufp->fullCData(oldp+125,(0U),5);
    bufp->fullQData(oldp+126,(0ULL),64);
    bufp->fullCData(oldp+128,(0x33U),7);
    bufp->fullCData(oldp+129,(0x13U),7);
    bufp->fullCData(oldp+130,(3U),7);
    bufp->fullCData(oldp+131,(0x23U),7);
    bufp->fullCData(oldp+132,(0x63U),7);
    bufp->fullCData(oldp+133,(0x6fU),7);
    bufp->fullCData(oldp+134,(0x67U),7);
    bufp->fullCData(oldp+135,(0x17U),7);
    bufp->fullCData(oldp+136,(0x37U),7);
    bufp->fullCData(oldp+137,(0xbU),7);
    bufp->fullCData(oldp+138,(1U),7);
    bufp->fullCData(oldp+139,(2U),7);
    bufp->fullCData(oldp+140,(0U),2);
    bufp->fullCData(oldp+141,(1U),2);
    bufp->fullCData(oldp+142,(2U),2);
    bufp->fullCData(oldp+143,(0U),3);
    bufp->fullCData(oldp+144,(1U),3);
    bufp->fullCData(oldp+145,(2U),3);
    bufp->fullCData(oldp+146,(4U),3);
    bufp->fullCData(oldp+147,(5U),3);
    bufp->fullCData(oldp+148,(6U),3);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_full_0\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu_tb___024root__trace_full_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->cpu_tb__DOT__rst_n));
    bufp->fullQData(oldp+2,(vlSelf->cpu_tb__DOT__instr),64);
    bufp->fullQData(oldp+4,(vlSelf->cpu_tb__DOT__read_data),64);
    bufp->fullBit(oldp+6,(vlSelf->cpu_tb__DOT__npu_done));
    bufp->fullCData(oldp+7,((0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                              >> 0xfU)))),5);
    bufp->fullCData(oldp+8,((0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                              >> 0x14U)))),5);
    bufp->fullCData(oldp+9,((0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                              >> 7U)))),5);
    bufp->fullCData(oldp+10,((0x7fU & (IData)(vlSelf->cpu_tb__DOT__instr))),7);
    bufp->fullCData(oldp+11,((7U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                            >> 0xcU)))),3);
    bufp->fullCData(oldp+12,((0x7fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                               >> 0x19U)))),7);
    bufp->fullIData(oldp+13,((IData)(vlSelf->cpu_tb__DOT__instr)),32);
    bufp->fullQData(oldp+14,((((- (QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->cpu_tb__DOT__instr 
                                                              >> 0x1fU)))))) 
                               << 0xcU) | (QData)((IData)(
                                                          (0xfffU 
                                                           & (IData)(
                                                                     (vlSelf->cpu_tb__DOT__instr 
                                                                      >> 0x14U))))))),64);
    bufp->fullQData(oldp+16,((((- (QData)((IData)((1U 
                                                   & (IData)(
                                                             (vlSelf->cpu_tb__DOT__instr 
                                                              >> 0x1fU)))))) 
                               << 0xcU) | (QData)((IData)(
                                                          ((0xfe0U 
                                                            & ((IData)(
                                                                       (vlSelf->cpu_tb__DOT__instr 
                                                                        >> 0x19U)) 
                                                               << 5U)) 
                                                           | (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->cpu_tb__DOT__instr 
                                                                         >> 7U)))))))),64);
    bufp->fullQData(oldp+18,(((0x7ffffffffffff000ULL 
                               & ((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                 >> 0x1fU)))))) 
                                  << 0xcU)) | (QData)((IData)(
                                                              ((0x800U 
                                                                & ((IData)(
                                                                           (vlSelf->cpu_tb__DOT__instr 
                                                                            >> 7U)) 
                                                                   << 0xbU)) 
                                                               | ((0x7e0U 
                                                                   & ((IData)(
                                                                              (vlSelf->cpu_tb__DOT__instr 
                                                                               >> 0x19U)) 
                                                                      << 5U)) 
                                                                  | (0x1eU 
                                                                     & ((IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 8U)) 
                                                                        << 1U)))))))),64);
    bufp->fullQData(oldp+20,(((0x7ffffffffff00000ULL 
                               & ((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                 >> 0x1fU)))))) 
                                  << 0x14U)) | (QData)((IData)(
                                                               ((0xff000U 
                                                                 & ((IData)(
                                                                            (vlSelf->cpu_tb__DOT__instr 
                                                                             >> 0xcU)) 
                                                                    << 0xcU)) 
                                                                | ((0x800U 
                                                                    & ((IData)(
                                                                               (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x14U)) 
                                                                       << 0xbU)) 
                                                                   | (0x7feU 
                                                                      & ((IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x15U)) 
                                                                         << 1U)))))))),64);
    bufp->fullQData(oldp+22,((QData)((IData)(((IData)(
                                                      (vlSelf->cpu_tb__DOT__instr 
                                                       >> 0xcU)) 
                                              << 0xcU)))),64);
    bufp->fullQData(oldp+24,(((0U == (0x1fU & (IData)(
                                                      (vlSelf->cpu_tb__DOT__instr 
                                                       >> 0xfU))))
                               ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                              [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU)))])),64);
    bufp->fullQData(oldp+26,(((0U == (0x1fU & (IData)(
                                                      (vlSelf->cpu_tb__DOT__instr 
                                                       >> 0x14U))))
                               ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                              [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0x14U)))])),64);
    bufp->fullQData(oldp+28,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0]),64);
    bufp->fullQData(oldp+30,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[1]),64);
    bufp->fullQData(oldp+32,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[2]),64);
    bufp->fullQData(oldp+34,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[3]),64);
    bufp->fullQData(oldp+36,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[4]),64);
    bufp->fullQData(oldp+38,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[5]),64);
    bufp->fullQData(oldp+40,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[6]),64);
    bufp->fullQData(oldp+42,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[7]),64);
    bufp->fullQData(oldp+44,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[8]),64);
    bufp->fullQData(oldp+46,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[9]),64);
    bufp->fullQData(oldp+48,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[10]),64);
    bufp->fullQData(oldp+50,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[11]),64);
    bufp->fullQData(oldp+52,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[12]),64);
    bufp->fullQData(oldp+54,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[13]),64);
    bufp->fullQData(oldp+56,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[14]),64);
    bufp->fullQData(oldp+58,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[15]),64);
    bufp->fullQData(oldp+60,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[16]),64);
    bufp->fullQData(oldp+62,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[17]),64);
    bufp->fullQData(oldp+64,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[18]),64);
    bufp->fullQData(oldp+66,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[19]),64);
    bufp->fullQData(oldp+68,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[20]),64);
    bufp->fullQData(oldp+70,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[21]),64);
    bufp->fullQData(oldp+72,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[22]),64);
    bufp->fullQData(oldp+74,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[23]),64);
    bufp->fullQData(oldp+76,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[24]),64);
    bufp->fullQData(oldp+78,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[25]),64);
    bufp->fullQData(oldp+80,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[26]),64);
    bufp->fullQData(oldp+82,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[27]),64);
    bufp->fullQData(oldp+84,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[28]),64);
    bufp->fullQData(oldp+86,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[29]),64);
    bufp->fullQData(oldp+88,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[30]),64);
    bufp->fullQData(oldp+90,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[31]),64);
    bufp->fullBit(oldp+92,(vlSelf->cpu_tb__DOT__uut__DOT__mem_write));
    bufp->fullCData(oldp+93,(vlSelf->cpu_tb__DOT__uut__DOT__imm_source),3);
    bufp->fullQData(oldp+94,(vlSelf->cpu_tb__DOT__uut__DOT__imm_ext),64);
    bufp->fullBit(oldp+96,(vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en));
    bufp->fullBit(oldp+97,(vlSelf->cpu_tb__DOT__uut__DOT__mem_read));
    bufp->fullBit(oldp+98,(vlSelf->cpu_tb__DOT__uut__DOT__branch));
    bufp->fullBit(oldp+99,(vlSelf->cpu_tb__DOT__uut__DOT__alu_src));
    bufp->fullBit(oldp+100,(vlSelf->cpu_tb__DOT__uut__DOT__mem_to_reg));
    bufp->fullCData(oldp+101,(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum),4);
    bufp->fullCData(oldp+102,(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum),8);
    bufp->fullQData(oldp+103,(vlSelf->cpu_tb__DOT__uut__DOT__alu_out),64);
    bufp->fullQData(oldp+105,(vlSelf->cpu_tb__DOT__write_data),64);
    bufp->fullQData(oldp+107,(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2),64);
    bufp->fullBit(oldp+109,((0ULL == vlSelf->cpu_tb__DOT__uut__DOT__alu_out)));
    bufp->fullCData(oldp+110,((0x1fU & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2))),5);
    bufp->fullIData(oldp+111,(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32),32);
    bufp->fullBit(oldp+112,(vlSelf->cpu_tb__DOT__clk));
    bufp->fullQData(oldp+113,(vlSelf->cpu_tb__DOT__uut__DOT__pc_reg),64);
    bufp->fullBit(oldp+115,(((~ (IData)(vlSelf->cpu_tb__DOT__npu_done)) 
                             & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul))));
    bufp->fullBit(oldp+116,(((~ (IData)(vlSelf->cpu_tb__DOT__npu_done)) 
                             & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv))));
    bufp->fullQData(oldp+117,((((IData)(vlSelf->cpu_tb__DOT__uut__DOT__branch) 
                                & (0ULL == vlSelf->cpu_tb__DOT__uut__DOT__alu_out))
                                ? (vlSelf->cpu_tb__DOT__uut__DOT__imm_ext 
                                   + vlSelf->cpu_tb__DOT__uut__DOT__pc_reg)
                                : (4ULL + vlSelf->cpu_tb__DOT__uut__DOT__pc_reg))),64);
    bufp->fullBit(oldp+119,(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul));
    bufp->fullBit(oldp+120,(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv));
    bufp->fullBit(oldp+121,(((~ (IData)(vlSelf->cpu_tb__DOT__npu_done)) 
                             & ((IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv) 
                                | (IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul)))));
    bufp->fullIData(oldp+122,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard),32);
    bufp->fullIData(oldp+123,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__unnamedblk1__DOT__i),32);
}
