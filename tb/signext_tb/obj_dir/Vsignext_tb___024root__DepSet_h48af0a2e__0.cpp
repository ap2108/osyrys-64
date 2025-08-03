// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsignext_tb.h for the primary calling header

#include "Vsignext_tb__pch.h"
#include "Vsignext_tb___024root.h"

VlCoroutine Vsignext_tb___024root___eval_initial__TOP__Vtiming__0(Vsignext_tb___024root* vlSelf);

void Vsignext_tb___024root___eval_initial(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vsignext_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Vsignext_tb___024root___act_sequent__TOP__0(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->signext_tb__DOT__immediate = ((4U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                           ? ((2U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                               ? 0ULL
                                               : ((1U 
                                                   & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                                   ? 0ULL
                                                   : (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->signext_tb__DOT__raw_instr)))))
                                           : ((2U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                               ? ((1U 
                                                   & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                                   ? 
                                                  ((0x7ffffffffff00000ULL 
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
                                                   : 
                                                  ((0x7ffffffffffff000ULL 
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
                                               : ((1U 
                                                   & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                                   ? 
                                                  (((- (QData)((IData)(
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
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->signext_tb__DOT__raw_instr 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->signext_tb__DOT__raw_instr 
                                                                      >> 0x14U)))))));
}

void Vsignext_tb___024root___eval_act(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vsignext_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsignext_tb___024root___eval_nba(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsignext_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vsignext_tb___024root___timing_resume(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vsignext_tb___024root___eval_triggers__act(Vsignext_tb___024root* vlSelf);

bool Vsignext_tb___024root___eval_phase__act(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsignext_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vsignext_tb___024root___timing_resume(vlSelf);
        Vsignext_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsignext_tb___024root___eval_phase__nba(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsignext_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsignext_tb___024root___dump_triggers__nba(Vsignext_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsignext_tb___024root___dump_triggers__act(Vsignext_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsignext_tb___024root___eval(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsignext_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("signext_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vsignext_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("signext_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vsignext_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vsignext_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsignext_tb___024root___eval_debug_assertions(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
