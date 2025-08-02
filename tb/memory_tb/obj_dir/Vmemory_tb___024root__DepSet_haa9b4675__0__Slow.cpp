// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmemory_tb.h for the primary calling header

#include "Vmemory_tb__pch.h"
#include "Vmemory_tb___024root.h"

VL_ATTR_COLD void Vmemory_tb___024root___eval_static(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vmemory_tb___024root___eval_initial__TOP(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->memory_tb__DOT__dut__DOT__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->memory_tb__DOT__dut__DOT__unnamedblk5__DOT__i)) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[(0x3ffU 
                                               & vlSelf->memory_tb__DOT__dut__DOT__unnamedblk5__DOT__i)] = 0ULL;
        vlSelf->memory_tb__DOT__dut__DOT__unnamedblk5__DOT__i 
            = ((IData)(1U) + vlSelf->memory_tb__DOT__dut__DOT__unnamedblk5__DOT__i);
    }
}

VL_ATTR_COLD void Vmemory_tb___024root___eval_final(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmemory_tb___024root___eval_settle(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__act(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge memory_tb.clk or negedge memory_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge memory_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] memory_tb.cpu_ready)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] memory_tb.npu_ready)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__nba(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge memory_tb.clk or negedge memory_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge memory_tb.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] memory_tb.cpu_ready)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] memory_tb.npu_ready)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmemory_tb___024root___ctor_var_reset(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->memory_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__cpu_valid = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__cpu_ready = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__cpu_write_enable = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__cpu_address = VL_RAND_RESET_Q(64);
    vlSelf->memory_tb__DOT__cpu_write_data = VL_RAND_RESET_Q(64);
    vlSelf->memory_tb__DOT__cpu_read_data = VL_RAND_RESET_Q(64);
    vlSelf->memory_tb__DOT__cpu_byte_enable = VL_RAND_RESET_I(8);
    vlSelf->memory_tb__DOT__npu_valid = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__npu_ready = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__npu_write_enable = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__npu_address = VL_RAND_RESET_Q(64);
    vlSelf->memory_tb__DOT__npu_write_data = VL_RAND_RESET_Q(64);
    vlSelf->memory_tb__DOT__npu_read_data = VL_RAND_RESET_Q(64);
    vlSelf->memory_tb__DOT__npu_byte_enable = VL_RAND_RESET_I(8);
    vlSelf->memory_tb__DOT__burst_len = VL_RAND_RESET_I(4);
    vlSelf->memory_tb__DOT__burst_mode = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->memory_tb__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->memory_tb__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->memory_tb__DOT__dut__DOT__burst_cnt = VL_RAND_RESET_I(4);
    vlSelf->memory_tb__DOT__dut__DOT__addr_latched = VL_RAND_RESET_Q(64);
    vlSelf->memory_tb__DOT__dut__DOT__is_write = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__dut__DOT__is_cpu = VL_RAND_RESET_I(1);
    vlSelf->memory_tb__DOT__dut__DOT__latency_counter = VL_RAND_RESET_I(2);
    vlSelf->memory_tb__DOT__dut__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->memory_tb__DOT__dut__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->memory_tb__DOT__dut__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->memory_tb__DOT__dut__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->__Vdlyvval__memory_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__memory_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__cpu_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__npu_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
