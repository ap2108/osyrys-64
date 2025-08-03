// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vforward_mux_tb__Syms.h"


void Vforward_mux_tb___024root__trace_chg_0_sub_0(Vforward_mux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vforward_mux_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root__trace_chg_0\n"); );
    // Init
    Vforward_mux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vforward_mux_tb___024root*>(voidSelf);
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vforward_mux_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vforward_mux_tb___024root__trace_chg_0_sub_0(Vforward_mux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+0,(vlSelf->forward_mux_tb__DOT__rs1_val_in),64);
        bufp->chgQData(oldp+2,(vlSelf->forward_mux_tb__DOT__rs2_val_in),64);
        bufp->chgQData(oldp+4,(vlSelf->forward_mux_tb__DOT__ex_result),64);
        bufp->chgQData(oldp+6,(vlSelf->forward_mux_tb__DOT__mem_result),64);
        bufp->chgQData(oldp+8,(vlSelf->forward_mux_tb__DOT__wb_result),64);
        bufp->chgCData(oldp+10,(vlSelf->forward_mux_tb__DOT__forward_a),2);
        bufp->chgCData(oldp+11,(vlSelf->forward_mux_tb__DOT__forward_b),2);
        bufp->chgQData(oldp+12,(((2U & (IData)(vlSelf->forward_mux_tb__DOT__forward_a))
                                  ? ((1U & (IData)(vlSelf->forward_mux_tb__DOT__forward_a))
                                      ? vlSelf->forward_mux_tb__DOT__ex_result
                                      : vlSelf->forward_mux_tb__DOT__mem_result)
                                  : ((1U & (IData)(vlSelf->forward_mux_tb__DOT__forward_a))
                                      ? vlSelf->forward_mux_tb__DOT__wb_result
                                      : vlSelf->forward_mux_tb__DOT__rs1_val_in))),64);
        bufp->chgQData(oldp+14,(((2U & (IData)(vlSelf->forward_mux_tb__DOT__forward_b))
                                  ? ((1U & (IData)(vlSelf->forward_mux_tb__DOT__forward_b))
                                      ? vlSelf->forward_mux_tb__DOT__ex_result
                                      : vlSelf->forward_mux_tb__DOT__mem_result)
                                  : ((1U & (IData)(vlSelf->forward_mux_tb__DOT__forward_b))
                                      ? vlSelf->forward_mux_tb__DOT__wb_result
                                      : vlSelf->forward_mux_tb__DOT__rs2_val_in))),64);
    }
}

void Vforward_mux_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root__trace_cleanup\n"); );
    // Init
    Vforward_mux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vforward_mux_tb___024root*>(voidSelf);
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
