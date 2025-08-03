// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vforward_mux_tb__Syms.h"


VL_ATTR_COLD void Vforward_mux_tb___024root__trace_init_sub__TOP__0(Vforward_mux_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("forward_mux_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1,0,"rs1_val_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"rs2_val_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"ex_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"mem_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"wb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11,0,"forward_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"forward_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+13,0,"rs1_val_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"rs2_val_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+1,0,"rs1_val_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+3,0,"rs2_val_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"ex_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"mem_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"wb_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+11,0,"forward_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"forward_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+13,0,"rs1_val_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+15,0,"rs2_val_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vforward_mux_tb___024root__trace_init_top(Vforward_mux_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root__trace_init_top\n"); );
    // Body
    Vforward_mux_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vforward_mux_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vforward_mux_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vforward_mux_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vforward_mux_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vforward_mux_tb___024root__trace_register(Vforward_mux_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vforward_mux_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vforward_mux_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vforward_mux_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vforward_mux_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vforward_mux_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root__trace_const_0\n"); );
    // Init
    Vforward_mux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vforward_mux_tb___024root*>(voidSelf);
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vforward_mux_tb___024root__trace_full_0_sub_0(Vforward_mux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vforward_mux_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root__trace_full_0\n"); );
    // Init
    Vforward_mux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vforward_mux_tb___024root*>(voidSelf);
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vforward_mux_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vforward_mux_tb___024root__trace_full_0_sub_0(Vforward_mux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->forward_mux_tb__DOT__rs1_val_in),64);
    bufp->fullQData(oldp+3,(vlSelf->forward_mux_tb__DOT__rs2_val_in),64);
    bufp->fullQData(oldp+5,(vlSelf->forward_mux_tb__DOT__ex_result),64);
    bufp->fullQData(oldp+7,(vlSelf->forward_mux_tb__DOT__mem_result),64);
    bufp->fullQData(oldp+9,(vlSelf->forward_mux_tb__DOT__wb_result),64);
    bufp->fullCData(oldp+11,(vlSelf->forward_mux_tb__DOT__forward_a),2);
    bufp->fullCData(oldp+12,(vlSelf->forward_mux_tb__DOT__forward_b),2);
    bufp->fullQData(oldp+13,(((2U & (IData)(vlSelf->forward_mux_tb__DOT__forward_a))
                               ? ((1U & (IData)(vlSelf->forward_mux_tb__DOT__forward_a))
                                   ? vlSelf->forward_mux_tb__DOT__ex_result
                                   : vlSelf->forward_mux_tb__DOT__mem_result)
                               : ((1U & (IData)(vlSelf->forward_mux_tb__DOT__forward_a))
                                   ? vlSelf->forward_mux_tb__DOT__wb_result
                                   : vlSelf->forward_mux_tb__DOT__rs1_val_in))),64);
    bufp->fullQData(oldp+15,(((2U & (IData)(vlSelf->forward_mux_tb__DOT__forward_b))
                               ? ((1U & (IData)(vlSelf->forward_mux_tb__DOT__forward_b))
                                   ? vlSelf->forward_mux_tb__DOT__ex_result
                                   : vlSelf->forward_mux_tb__DOT__mem_result)
                               : ((1U & (IData)(vlSelf->forward_mux_tb__DOT__forward_b))
                                   ? vlSelf->forward_mux_tb__DOT__wb_result
                                   : vlSelf->forward_mux_tb__DOT__rs2_val_in))),64);
}
