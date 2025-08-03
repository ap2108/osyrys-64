// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreader_tb.h for the primary calling header

#include "Vreader_tb__pch.h"
#include "Vreader_tb___024root.h"

VL_ATTR_COLD void Vreader_tb___024root___eval_static__TOP(Vreader_tb___024root* vlSelf);

VL_ATTR_COLD void Vreader_tb___024root___eval_static(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_static\n"); );
    // Body
    Vreader_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vreader_tb___024root___eval_static__TOP(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->reader_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vreader_tb___024root___eval_final(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreader_tb___024root___dump_triggers__stl(Vreader_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vreader_tb___024root___eval_phase__stl(Vreader_tb___024root* vlSelf);

VL_ATTR_COLD void Vreader_tb___024root___eval_settle(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_settle\n"); );
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
            Vreader_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("reader_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vreader_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreader_tb___024root___dump_triggers__stl(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vreader_tb___024root___act_comb__TOP__0(Vreader_tb___024root* vlSelf);

VL_ATTR_COLD void Vreader_tb___024root___eval_stl(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vreader_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vreader_tb___024root___eval_triggers__stl(Vreader_tb___024root* vlSelf);

VL_ATTR_COLD bool Vreader_tb___024root___eval_phase__stl(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vreader_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vreader_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreader_tb___024root___dump_triggers__act(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge reader_tb.clk or posedge reader_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reader_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreader_tb___024root___dump_triggers__nba(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge reader_tb.clk or posedge reader_tb.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reader_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreader_tb___024root___ctor_var_reset(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reader_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->reader_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->reader_tb__DOT__mem_data = VL_RAND_RESET_Q(64);
    vlSelf->reader_tb__DOT__be_mask = VL_RAND_RESET_I(8);
    vlSelf->reader_tb__DOT__f3 = VL_RAND_RESET_I(3);
    vlSelf->reader_tb__DOT__is_load_64 = VL_RAND_RESET_I(1);
    vlSelf->reader_tb__DOT__valid_in = VL_RAND_RESET_I(1);
    vlSelf->reader_tb__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->reader_tb__DOT__dut__DOT__masked_data = VL_RAND_RESET_Q(64);
    vlSelf->reader_tb__DOT__dut__DOT__raw_data = VL_RAND_RESET_Q(64);
    vlSelf->reader_tb__DOT__dut__DOT__load_pending = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__reader_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__reader_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reader_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reader_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
