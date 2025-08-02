// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhazard_unit_tb.h for the primary calling header

#include "Vhazard_unit_tb__pch.h"
#include "Vhazard_unit_tb___024root.h"

VlCoroutine Vhazard_unit_tb___024root___eval_initial__TOP__Vtiming__0(Vhazard_unit_tb___024root* vlSelf);
VlCoroutine Vhazard_unit_tb___024root___eval_initial__TOP__Vtiming__1(Vhazard_unit_tb___024root* vlSelf);

void Vhazard_unit_tb___024root___eval_initial(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vhazard_unit_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vhazard_unit_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vhazard_unit_tb___024root___eval_initial__TOP__Vtiming__1(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "hazard_unit_tb.sv", 
                                           59);
        vlSelf->__Vdlyvval__hazard_unit_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->hazard_unit_tb__DOT__clk)));
        vlSelf->__Vdlyvset__hazard_unit_tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vhazard_unit_tb___024root___act_sequent__TOP__0(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->hazard_unit_tb__DOT__flush = vlSelf->hazard_unit_tb__DOT__branch_mispredict;
    vlSelf->hazard_unit_tb__DOT__stall = ((IData)(vlSelf->hazard_unit_tb__DOT__ex_mem_read) 
                                          & ((0U != (IData)(vlSelf->hazard_unit_tb__DOT__ex_rd)) 
                                             & (((IData)(vlSelf->hazard_unit_tb__DOT__ex_rd) 
                                                 == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs1)) 
                                                | ((IData)(vlSelf->hazard_unit_tb__DOT__ex_rd) 
                                                   == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs2)))));
    vlSelf->hazard_unit_tb__DOT__forward_a = 0U;
    if ((((IData)(vlSelf->hazard_unit_tb__DOT__ex_reg_write) 
          & (0U != (IData)(vlSelf->hazard_unit_tb__DOT__ex_rd))) 
         & ((IData)(vlSelf->hazard_unit_tb__DOT__ex_rd) 
            == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs1)))) {
        vlSelf->hazard_unit_tb__DOT__forward_a = 2U;
    } else if ((((IData)(vlSelf->hazard_unit_tb__DOT__mem_reg_write) 
                 & (0U != (IData)(vlSelf->hazard_unit_tb__DOT__mem_rd))) 
                & ((IData)(vlSelf->hazard_unit_tb__DOT__mem_rd) 
                   == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs1)))) {
        vlSelf->hazard_unit_tb__DOT__forward_a = 1U;
    }
    vlSelf->hazard_unit_tb__DOT__forward_b = 0U;
    if ((((IData)(vlSelf->hazard_unit_tb__DOT__ex_reg_write) 
          & (0U != (IData)(vlSelf->hazard_unit_tb__DOT__ex_rd))) 
         & ((IData)(vlSelf->hazard_unit_tb__DOT__ex_rd) 
            == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs2)))) {
        vlSelf->hazard_unit_tb__DOT__forward_b = 2U;
    } else if ((((IData)(vlSelf->hazard_unit_tb__DOT__mem_reg_write) 
                 & (0U != (IData)(vlSelf->hazard_unit_tb__DOT__mem_rd))) 
                & ((IData)(vlSelf->hazard_unit_tb__DOT__mem_rd) 
                   == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs2)))) {
        vlSelf->hazard_unit_tb__DOT__forward_b = 1U;
    }
}

void Vhazard_unit_tb___024root___eval_act(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vhazard_unit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhazard_unit_tb___024root___nba_sequent__TOP__0(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->hazard_unit_tb__DOT__flush = vlSelf->hazard_unit_tb__DOT__branch_mispredict;
    if (vlSelf->__Vdlyvset__hazard_unit_tb__DOT__clk__v0) {
        vlSelf->hazard_unit_tb__DOT__clk = vlSelf->__Vdlyvval__hazard_unit_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__hazard_unit_tb__DOT__clk__v0 = 0U;
    }
    vlSelf->hazard_unit_tb__DOT__stall = ((IData)(vlSelf->hazard_unit_tb__DOT__ex_mem_read) 
                                          & ((0U != (IData)(vlSelf->hazard_unit_tb__DOT__ex_rd)) 
                                             & (((IData)(vlSelf->hazard_unit_tb__DOT__ex_rd) 
                                                 == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs1)) 
                                                | ((IData)(vlSelf->hazard_unit_tb__DOT__ex_rd) 
                                                   == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs2)))));
    vlSelf->hazard_unit_tb__DOT__forward_a = 0U;
    if ((((IData)(vlSelf->hazard_unit_tb__DOT__ex_reg_write) 
          & (0U != (IData)(vlSelf->hazard_unit_tb__DOT__ex_rd))) 
         & ((IData)(vlSelf->hazard_unit_tb__DOT__ex_rd) 
            == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs1)))) {
        vlSelf->hazard_unit_tb__DOT__forward_a = 2U;
    } else if ((((IData)(vlSelf->hazard_unit_tb__DOT__mem_reg_write) 
                 & (0U != (IData)(vlSelf->hazard_unit_tb__DOT__mem_rd))) 
                & ((IData)(vlSelf->hazard_unit_tb__DOT__mem_rd) 
                   == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs1)))) {
        vlSelf->hazard_unit_tb__DOT__forward_a = 1U;
    }
    vlSelf->hazard_unit_tb__DOT__forward_b = 0U;
    if ((((IData)(vlSelf->hazard_unit_tb__DOT__ex_reg_write) 
          & (0U != (IData)(vlSelf->hazard_unit_tb__DOT__ex_rd))) 
         & ((IData)(vlSelf->hazard_unit_tb__DOT__ex_rd) 
            == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs2)))) {
        vlSelf->hazard_unit_tb__DOT__forward_b = 2U;
    } else if ((((IData)(vlSelf->hazard_unit_tb__DOT__mem_reg_write) 
                 & (0U != (IData)(vlSelf->hazard_unit_tb__DOT__mem_rd))) 
                & ((IData)(vlSelf->hazard_unit_tb__DOT__mem_rd) 
                   == (IData)(vlSelf->hazard_unit_tb__DOT__id_rs2)))) {
        vlSelf->hazard_unit_tb__DOT__forward_b = 1U;
    }
}

void Vhazard_unit_tb___024root___eval_nba(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vhazard_unit_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vhazard_unit_tb___024root___timing_resume(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vhazard_unit_tb___024root___eval_triggers__act(Vhazard_unit_tb___024root* vlSelf);

bool Vhazard_unit_tb___024root___eval_phase__act(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhazard_unit_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vhazard_unit_tb___024root___timing_resume(vlSelf);
        Vhazard_unit_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhazard_unit_tb___024root___eval_phase__nba(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhazard_unit_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit_tb___024root___dump_triggers__nba(Vhazard_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit_tb___024root___dump_triggers__act(Vhazard_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhazard_unit_tb___024root___eval(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vhazard_unit_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hazard_unit_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vhazard_unit_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hazard_unit_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vhazard_unit_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vhazard_unit_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhazard_unit_tb___024root___eval_debug_assertions(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
