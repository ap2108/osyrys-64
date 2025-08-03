// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"
#include "Vcpu_tb___024root.h"

VL_ATTR_COLD void Vcpu_tb___024root___eval_static(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_final(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_tb___024root___eval_phase__stl(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_settle(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_settle\n"); );
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
            Vcpu_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("cpu_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcpu_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcpu_tb___024root___act_sequent__TOP__0(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_stl(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcpu_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_triggers__stl(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcpu_tb___024root___eval_phase__stl(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcpu_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vcpu_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge cpu_tb.clk or negedge cpu_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge cpu_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__nba(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge cpu_tb.clk or negedge cpu_tb.rst_n)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge cpu_tb.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root___ctor_var_reset(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->cpu_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__instr = VL_RAND_RESET_Q(64);
    vlSelf->cpu_tb__DOT__read_data = VL_RAND_RESET_Q(64);
    vlSelf->cpu_tb__DOT__write_data = VL_RAND_RESET_Q(64);
    vlSelf->cpu_tb__DOT__npu_done = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__uut__DOT__pc_reg = VL_RAND_RESET_Q(64);
    vlSelf->cpu_tb__DOT__uut__DOT__pc_next = VL_RAND_RESET_Q(64);
    vlSelf->cpu_tb__DOT__uut__DOT__imm_source = VL_RAND_RESET_I(3);
    vlSelf->cpu_tb__DOT__uut__DOT__imm_ext = VL_RAND_RESET_Q(64);
    vlSelf->cpu_tb__DOT__uut__DOT__alu_in2 = VL_RAND_RESET_Q(64);
    vlSelf->cpu_tb__DOT__uut__DOT__alu_out = VL_RAND_RESET_Q(64);
    vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__uut__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__uut__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__uut__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__uut__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__uut__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul = VL_RAND_RESET_I(1);
    vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 = VL_RAND_RESET_I(32);
    vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__cpu_tb__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu_tb__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
