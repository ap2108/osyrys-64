// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vforward_mux_tb.h for the primary calling header

#include "Vforward_mux_tb__pch.h"
#include "Vforward_mux_tb___024root.h"

VL_ATTR_COLD void Vforward_mux_tb___024root___eval_static(Vforward_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vforward_mux_tb___024root___eval_final(Vforward_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vforward_mux_tb___024root___eval_settle(Vforward_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforward_mux_tb___024root___dump_triggers__act(Vforward_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforward_mux_tb___024root___dump_triggers__nba(Vforward_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vforward_mux_tb___024root___ctor_var_reset(Vforward_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->forward_mux_tb__DOT__rs1_val_in = VL_RAND_RESET_Q(64);
    vlSelf->forward_mux_tb__DOT__rs2_val_in = VL_RAND_RESET_Q(64);
    vlSelf->forward_mux_tb__DOT__ex_result = VL_RAND_RESET_Q(64);
    vlSelf->forward_mux_tb__DOT__mem_result = VL_RAND_RESET_Q(64);
    vlSelf->forward_mux_tb__DOT__wb_result = VL_RAND_RESET_Q(64);
    vlSelf->forward_mux_tb__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->forward_mux_tb__DOT__forward_b = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
