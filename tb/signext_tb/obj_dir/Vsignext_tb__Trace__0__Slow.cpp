// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsignext_tb__Syms.h"


VL_ATTR_COLD void Vsignext_tb___024root__trace_init_sub__TOP__0(Vsignext_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("signext_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"raw_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"imm_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+3,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"raw_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"imm_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+3,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"imm_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"imm_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11,0,"imm_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+13,0,"imm_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsignext_tb___024root__trace_init_top(Vsignext_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root__trace_init_top\n"); );
    // Body
    Vsignext_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsignext_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsignext_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsignext_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsignext_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsignext_tb___024root__trace_register(Vsignext_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vsignext_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsignext_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsignext_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsignext_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsignext_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root__trace_const_0\n"); );
    // Init
    Vsignext_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsignext_tb___024root*>(voidSelf);
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vsignext_tb___024root__trace_full_0_sub_0(Vsignext_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsignext_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root__trace_full_0\n"); );
    // Init
    Vsignext_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsignext_tb___024root*>(voidSelf);
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsignext_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsignext_tb___024root__trace_full_0_sub_0(Vsignext_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->signext_tb__DOT__raw_instr),32);
    bufp->fullCData(oldp+2,(vlSelf->signext_tb__DOT__imm_source),3);
    bufp->fullQData(oldp+3,(((4U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                              ? ((2U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                  ? 0ULL : ((1U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                             ? 0ULL
                                             : (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->signext_tb__DOT__raw_instr)))))
                              : ((2U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                  ? ((1U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                      ? ((0x7ffffffffff00000ULL 
                                          & ((- (QData)((IData)(
                                                                (vlSelf->signext_tb__DOT__raw_instr 
                                                                 >> 0x1fU)))) 
                                             << 0x14U)) 
                                         | (QData)((IData)(
                                                           ((0xff000U 
                                                             & vlSelf->signext_tb__DOT__raw_instr) 
                                                            | ((0x800U 
                                                                & (vlSelf->signext_tb__DOT__raw_instr 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->signext_tb__DOT__raw_instr 
                                                                     >> 0x14U)))))))
                                      : ((0x7ffffffffffff000ULL 
                                          & ((- (QData)((IData)(
                                                                (vlSelf->signext_tb__DOT__raw_instr 
                                                                 >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | (QData)((IData)(
                                                           ((0x800U 
                                                             & (vlSelf->signext_tb__DOT__raw_instr 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->signext_tb__DOT__raw_instr 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->signext_tb__DOT__raw_instr 
                                                                     >> 7U))))))))
                                  : ((1U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                      ? (((- (QData)((IData)(
                                                             (vlSelf->signext_tb__DOT__raw_instr 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->signext_tb__DOT__raw_instr 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->signext_tb__DOT__raw_instr 
                                                                  >> 7U))))))
                                      : (((- (QData)((IData)(
                                                             (vlSelf->signext_tb__DOT__raw_instr 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->signext_tb__DOT__raw_instr 
                                                            >> 0x14U)))))))),64);
    bufp->fullQData(oldp+5,((((- (QData)((IData)((vlSelf->signext_tb__DOT__raw_instr 
                                                  >> 0x1fU)))) 
                              << 0xcU) | (QData)((IData)(
                                                         (vlSelf->signext_tb__DOT__raw_instr 
                                                          >> 0x14U))))),64);
    bufp->fullQData(oldp+7,((((- (QData)((IData)((vlSelf->signext_tb__DOT__raw_instr 
                                                  >> 0x1fU)))) 
                              << 0xcU) | (QData)((IData)(
                                                         ((0xfe0U 
                                                           & (vlSelf->signext_tb__DOT__raw_instr 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSelf->signext_tb__DOT__raw_instr 
                                                                >> 7U))))))),64);
    bufp->fullQData(oldp+9,(((0x7ffffffffffff000ULL 
                              & ((- (QData)((IData)(
                                                    (vlSelf->signext_tb__DOT__raw_instr 
                                                     >> 0x1fU)))) 
                                 << 0xcU)) | (QData)((IData)(
                                                             ((0x800U 
                                                               & (vlSelf->signext_tb__DOT__raw_instr 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->signext_tb__DOT__raw_instr 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->signext_tb__DOT__raw_instr 
                                                                       >> 7U)))))))),64);
    bufp->fullQData(oldp+11,(((0x7ffffffffff00000ULL 
                               & ((- (QData)((IData)(
                                                     (vlSelf->signext_tb__DOT__raw_instr 
                                                      >> 0x1fU)))) 
                                  << 0x14U)) | (QData)((IData)(
                                                               ((0xff000U 
                                                                 & vlSelf->signext_tb__DOT__raw_instr) 
                                                                | ((0x800U 
                                                                    & (vlSelf->signext_tb__DOT__raw_instr 
                                                                       >> 9U)) 
                                                                   | (0x7feU 
                                                                      & (vlSelf->signext_tb__DOT__raw_instr 
                                                                         >> 0x14U)))))))),64);
    bufp->fullQData(oldp+13,((QData)((IData)((0xfffff000U 
                                              & vlSelf->signext_tb__DOT__raw_instr)))),64);
}
