// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb___024root.h"

VL_ATTR_COLD void Vregfile_tb___024root___eval_static__TOP(Vregfile_tb___024root* vlSelf);

VL_ATTR_COLD void Vregfile_tb___024root___eval_static(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_static\n"); );
    // Body
    Vregfile_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vregfile_tb___024root___eval_static__TOP(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->regfile_tb__DOT__clk = 0U;
    vlSelf->regfile_tb__DOT__rst_n = 0U;
}

VL_ATTR_COLD void Vregfile_tb___024root___eval_final(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__stl(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vregfile_tb___024root___eval_phase__stl(Vregfile_tb___024root* vlSelf);

VL_ATTR_COLD void Vregfile_tb___024root___eval_settle(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vregfile_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("regfile_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vregfile_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__stl(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vregfile_tb___024root___act_sequent__TOP__0(Vregfile_tb___024root* vlSelf);

VL_ATTR_COLD void Vregfile_tb___024root___eval_stl(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vregfile_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vregfile_tb___024root___eval_triggers__stl(Vregfile_tb___024root* vlSelf);

VL_ATTR_COLD bool Vregfile_tb___024root___eval_phase__stl(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vregfile_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vregfile_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge regfile_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__nba(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge regfile_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregfile_tb___024root___ctor_var_reset(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->regfile_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->regfile_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->regfile_tb__DOT__address1 = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__address2 = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__address3 = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__read_data1 = VL_RAND_RESET_Q(64);
    vlSelf->regfile_tb__DOT__read_data2 = VL_RAND_RESET_Q(64);
    vlSelf->regfile_tb__DOT__write_enable_a = VL_RAND_RESET_I(1);
    vlSelf->regfile_tb__DOT__write_enable_b = VL_RAND_RESET_I(1);
    vlSelf->regfile_tb__DOT__write_addr_a = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__write_addr_b = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__write_data_a = VL_RAND_RESET_Q(64);
    vlSelf->regfile_tb__DOT__write_data_b = VL_RAND_RESET_Q(64);
    vlSelf->regfile_tb__DOT__ext_address1 = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__ext_address2 = VL_RAND_RESET_I(5);
    vlSelf->regfile_tb__DOT__ext_data1 = VL_RAND_RESET_Q(64);
    vlSelf->regfile_tb__DOT__ext_data2 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->regfile_tb__DOT__uut__DOT__scoreboard = VL_RAND_RESET_I(32);
    vlSelf->regfile_tb__DOT__uut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vdlyvval__regfile_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__regfile_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
