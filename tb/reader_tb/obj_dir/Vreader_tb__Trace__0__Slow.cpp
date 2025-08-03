// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreader_tb__Syms.h"


VL_ATTR_COLD void Vreader_tb___024root__trace_init_sub__TOP__osyrys64_pkg__0(Vreader_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vreader_tb___024root__trace_init_sub__TOP__0(Vreader_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("osyrys64_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vreader_tb___024root__trace_init_sub__TOP__osyrys64_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("reader_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+4,0,"be_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"f3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+6,0,"is_load_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"valid_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"ready_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"read_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+13,0,"wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2,0,"mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+4,0,"be_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"f3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+6,0,"is_load_64",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"valid_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"ready_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"read_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+13,0,"wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"masked_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+17,0,"raw_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+8,0,"sign_extend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"load_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mask_apply", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vreader_tb___024root__trace_init_sub__TOP__osyrys64_pkg__0(Vreader_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_init_sub__TOP__osyrys64_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+20,0,"OPCODE_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+21,0,"OPCODE_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+22,0,"OPCODE_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+23,0,"OPCODE_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+24,0,"OPCODE_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+25,0,"OPCODE_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+26,0,"OPCODE_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+27,0,"OPCODE_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+28,0,"OPCODE_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+29,0,"OPCODE_NPU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+30,0,"FUNCT7_MATRIX_MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+31,0,"FUNCT7_CONVOLUTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+32,0,"NPU_OP_NONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+33,0,"NPU_OP_MATMUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,0,"NPU_OP_CONV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+35,0,"F3_BYTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"F3_HALFWORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+37,0,"F3_WORD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"F3_BYTE_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"F3_HALFWORD_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"F3_WORD_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vreader_tb___024root__trace_init_top(Vreader_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_init_top\n"); );
    // Body
    Vreader_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vreader_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vreader_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreader_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vreader_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vreader_tb___024root__trace_register(Vreader_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vreader_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vreader_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vreader_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vreader_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vreader_tb___024root__trace_const_0_sub_0(Vreader_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreader_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_const_0\n"); );
    // Init
    Vreader_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreader_tb___024root*>(voidSelf);
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vreader_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreader_tb___024root__trace_const_0_sub_0(Vreader_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+19,(8U),32);
    bufp->fullCData(oldp+20,(0x33U),7);
    bufp->fullCData(oldp+21,(0x13U),7);
    bufp->fullCData(oldp+22,(3U),7);
    bufp->fullCData(oldp+23,(0x23U),7);
    bufp->fullCData(oldp+24,(0x63U),7);
    bufp->fullCData(oldp+25,(0x6fU),7);
    bufp->fullCData(oldp+26,(0x67U),7);
    bufp->fullCData(oldp+27,(0x17U),7);
    bufp->fullCData(oldp+28,(0x37U),7);
    bufp->fullCData(oldp+29,(0xbU),7);
    bufp->fullCData(oldp+30,(1U),7);
    bufp->fullCData(oldp+31,(2U),7);
    bufp->fullCData(oldp+32,(0U),2);
    bufp->fullCData(oldp+33,(1U),2);
    bufp->fullCData(oldp+34,(2U),2);
    bufp->fullCData(oldp+35,(0U),3);
    bufp->fullCData(oldp+36,(1U),3);
    bufp->fullCData(oldp+37,(2U),3);
    bufp->fullCData(oldp+38,(4U),3);
    bufp->fullCData(oldp+39,(5U),3);
    bufp->fullCData(oldp+40,(6U),3);
}

VL_ATTR_COLD void Vreader_tb___024root__trace_full_0_sub_0(Vreader_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vreader_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_full_0\n"); );
    // Init
    Vreader_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreader_tb___024root*>(voidSelf);
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vreader_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vreader_tb___024root__trace_full_0_sub_0(Vreader_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->reader_tb__DOT__rst));
    bufp->fullQData(oldp+2,(vlSelf->reader_tb__DOT__mem_data),64);
    bufp->fullCData(oldp+4,(vlSelf->reader_tb__DOT__be_mask),8);
    bufp->fullCData(oldp+5,(vlSelf->reader_tb__DOT__f3),3);
    bufp->fullBit(oldp+6,(vlSelf->reader_tb__DOT__is_load_64));
    bufp->fullBit(oldp+7,(vlSelf->reader_tb__DOT__valid_in));
    bufp->fullBit(oldp+8,((1U & (~ ((IData)(vlSelf->reader_tb__DOT__f3) 
                                    >> 2U)))));
    bufp->fullBit(oldp+9,((1U & (~ (IData)(vlSelf->reader_tb__DOT__dut__DOT__load_pending)))));
    bufp->fullBit(oldp+10,(vlSelf->reader_tb__DOT__dut__DOT__load_pending));
    bufp->fullBit(oldp+11,(vlSelf->reader_tb__DOT__valid));
    bufp->fullBit(oldp+12,(vlSelf->reader_tb__DOT__clk));
    bufp->fullQData(oldp+13,(((2U & (IData)(vlSelf->reader_tb__DOT__f3))
                               ? ((1U & (IData)(vlSelf->reader_tb__DOT__f3))
                                   ? ((IData)(vlSelf->reader_tb__DOT__is_load_64)
                                       ? vlSelf->reader_tb__DOT__dut__DOT__raw_data
                                       : 0ULL) : ((4U 
                                                   & (IData)(vlSelf->reader_tb__DOT__f3))
                                                   ? (QData)((IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->reader_tb__DOT__dut__DOT__raw_data 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data)))))
                               : ((1U & (IData)(vlSelf->reader_tb__DOT__f3))
                                   ? ((4U & (IData)(vlSelf->reader_tb__DOT__f3))
                                       ? (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))
                                       : (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->reader_tb__DOT__dut__DOT__raw_data 
                                                                          >> 0xfU)))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))))
                                   : ((4U & (IData)(vlSelf->reader_tb__DOT__f3))
                                       ? (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))
                                       : (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->reader_tb__DOT__dut__DOT__raw_data 
                                                                          >> 7U)))))) 
                                           << 8U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))))))),64);
    bufp->fullQData(oldp+15,(vlSelf->reader_tb__DOT__dut__DOT__masked_data),64);
    bufp->fullQData(oldp+17,(vlSelf->reader_tb__DOT__dut__DOT__raw_data),64);
}
