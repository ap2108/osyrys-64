// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreader_tb.h for the primary calling header

#include "Vreader_tb__pch.h"
#include "Vreader_tb___024root.h"

VlCoroutine Vreader_tb___024root___eval_initial__TOP__Vtiming__0(Vreader_tb___024root* vlSelf);
VlCoroutine Vreader_tb___024root___eval_initial__TOP__Vtiming__1(Vreader_tb___024root* vlSelf);

void Vreader_tb___024root___eval_initial(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vreader_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vreader_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__reader_tb__DOT__clk__0 
        = vlSelf->reader_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__reader_tb__DOT__rst__0 
        = vlSelf->reader_tb__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vreader_tb___024root___eval_initial__TOP__Vtiming__1(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "reader_tb.sv", 
                                           39);
        vlSelf->__Vdlyvval__reader_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->reader_tb__DOT__clk)));
        vlSelf->__Vdlyvset__reader_tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vreader_tb___024root___act_comb__TOP__0(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->reader_tb__DOT__dut__DOT__masked_data = 
        ((0xffffffffffff0000ULL & vlSelf->reader_tb__DOT__dut__DOT__masked_data) 
         | (IData)((IData)(((((2U & (IData)(vlSelf->reader_tb__DOT__be_mask))
                               ? (0xffU & (IData)((vlSelf->reader_tb__DOT__mem_data 
                                                   >> 8U)))
                               : 0U) << 8U) | ((1U 
                                                & (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                ? (0xffU 
                                                   & (IData)(vlSelf->reader_tb__DOT__mem_data))
                                                : 0U)))));
    vlSelf->reader_tb__DOT__dut__DOT__masked_data = 
        ((0xffffffff0000ffffULL & vlSelf->reader_tb__DOT__dut__DOT__masked_data) 
         | ((QData)((IData)(((((8U & (IData)(vlSelf->reader_tb__DOT__be_mask))
                                ? (0xffU & (IData)(
                                                   (vlSelf->reader_tb__DOT__mem_data 
                                                    >> 0x18U)))
                                : 0U) << 8U) | ((4U 
                                                 & (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                 ? 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->reader_tb__DOT__mem_data 
                                                            >> 0x10U)))
                                                 : 0U)))) 
            << 0x10U));
    vlSelf->reader_tb__DOT__dut__DOT__masked_data = 
        ((0xffff0000ffffffffULL & vlSelf->reader_tb__DOT__dut__DOT__masked_data) 
         | ((QData)((IData)(((((0x20U & (IData)(vlSelf->reader_tb__DOT__be_mask))
                                ? (0xffU & (IData)(
                                                   (vlSelf->reader_tb__DOT__mem_data 
                                                    >> 0x28U)))
                                : 0U) << 8U) | ((0x10U 
                                                 & (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                 ? 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->reader_tb__DOT__mem_data 
                                                            >> 0x20U)))
                                                 : 0U)))) 
            << 0x20U));
    vlSelf->reader_tb__DOT__dut__DOT__masked_data = 
        ((0xffffffffffffULL & vlSelf->reader_tb__DOT__dut__DOT__masked_data) 
         | ((QData)((IData)(((((0x80U & (IData)(vlSelf->reader_tb__DOT__be_mask))
                                ? (0xffU & (IData)(
                                                   (vlSelf->reader_tb__DOT__mem_data 
                                                    >> 0x38U)))
                                : 0U) << 8U) | ((0x40U 
                                                 & (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                 ? 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->reader_tb__DOT__mem_data 
                                                            >> 0x30U)))
                                                 : 0U)))) 
            << 0x30U));
    vlSelf->reader_tb__DOT__dut__DOT__raw_data = ((2U 
                                                   & (IData)(vlSelf->reader_tb__DOT__f3))
                                                   ? vlSelf->reader_tb__DOT__dut__DOT__masked_data
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->reader_tb__DOT__f3))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                     ? vlSelf->reader_tb__DOT__dut__DOT__masked_data
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                      ? 
                                                     VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 0x10U)
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                       ? 
                                                      VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 0x20U)
                                                       : 
                                                      ((0xc0U 
                                                        == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                        ? 
                                                       VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 0x30U)
                                                        : 0ULL))))
                                                    : 
                                                   (((((((((1U 
                                                            == (IData)(vlSelf->reader_tb__DOT__be_mask)) 
                                                           | (2U 
                                                              == (IData)(vlSelf->reader_tb__DOT__be_mask))) 
                                                          | (4U 
                                                             == (IData)(vlSelf->reader_tb__DOT__be_mask))) 
                                                         | (8U 
                                                            == (IData)(vlSelf->reader_tb__DOT__be_mask))) 
                                                        | (0x10U 
                                                           == (IData)(vlSelf->reader_tb__DOT__be_mask))) 
                                                       | (0x20U 
                                                          == (IData)(vlSelf->reader_tb__DOT__be_mask))) 
                                                      | (0x40U 
                                                         == (IData)(vlSelf->reader_tb__DOT__be_mask))) 
                                                     | (0x80U 
                                                        == (IData)(vlSelf->reader_tb__DOT__be_mask)))
                                                     ? 
                                                    ((1U 
                                                      == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                      ? vlSelf->reader_tb__DOT__dut__DOT__masked_data
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                       ? 
                                                      VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 8U)
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                        ? 
                                                       VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 0x10U)
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                         ? 
                                                        VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 0x18U)
                                                         : 
                                                        ((0x10U 
                                                          == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                          ? 
                                                         VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 0x20U)
                                                          : 
                                                         ((0x20U 
                                                           == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                           ? 
                                                          VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 0x28U)
                                                           : 
                                                          ((0x40U 
                                                            == (IData)(vlSelf->reader_tb__DOT__be_mask))
                                                            ? 
                                                           VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 0x30U)
                                                            : 
                                                           VL_SHIFTR_QQI(64,64,32, vlSelf->reader_tb__DOT__dut__DOT__masked_data, 0x38U))))))))
                                                     : 0ULL)));
}

void Vreader_tb___024root___eval_act(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vreader_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vreader_tb___024root___nba_sequent__TOP__0(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->reader_tb__DOT__valid)) {
        VL_WRITEF("[reader] f3=%b | is64=%b | raw_data=0x%x | wb_data=0x%x | valid=%b\n",
                  3,vlSelf->reader_tb__DOT__f3,1,(IData)(vlSelf->reader_tb__DOT__is_load_64),
                  64,vlSelf->reader_tb__DOT__dut__DOT__raw_data,
                  64,((2U & (IData)(vlSelf->reader_tb__DOT__f3))
                       ? ((1U & (IData)(vlSelf->reader_tb__DOT__f3))
                           ? ((IData)(vlSelf->reader_tb__DOT__is_load_64)
                               ? vlSelf->reader_tb__DOT__dut__DOT__raw_data
                               : 0ULL) : ((4U & (IData)(vlSelf->reader_tb__DOT__f3))
                                           ? (QData)((IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))
                                           : (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->reader_tb__DOT__dut__DOT__raw_data 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data)))))
                       : ((1U & (IData)(vlSelf->reader_tb__DOT__f3))
                           ? ((4U & (IData)(vlSelf->reader_tb__DOT__f3))
                               ? (QData)((IData)((0xffffU 
                                                  & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))
                               : (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->reader_tb__DOT__dut__DOT__raw_data 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))))
                           : ((4U & (IData)(vlSelf->reader_tb__DOT__f3))
                               ? (QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))
                               : (((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->reader_tb__DOT__dut__DOT__raw_data 
                                                                  >> 7U)))))) 
                                   << 8U) | (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data)))))))),
                  1,(IData)(vlSelf->reader_tb__DOT__valid));
    }
}

VL_INLINE_OPT void Vreader_tb___024root___nba_sequent__TOP__1(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__reader_tb__DOT__clk__v0) {
        vlSelf->reader_tb__DOT__clk = vlSelf->__Vdlyvval__reader_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__reader_tb__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vreader_tb___024root___nba_sequent__TOP__2(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->reader_tb__DOT__dut__DOT__load_pending 
        = ((1U & (~ (IData)(vlSelf->reader_tb__DOT__rst))) 
           && (1U & (~ (IData)(vlSelf->reader_tb__DOT__valid_in))));
    vlSelf->reader_tb__DOT__valid = ((1U & (~ (IData)(vlSelf->reader_tb__DOT__rst))) 
                                     && (IData)(vlSelf->reader_tb__DOT__valid_in));
}

void Vreader_tb___024root___eval_nba(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreader_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreader_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreader_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vreader_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vreader_tb___024root___timing_resume(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h5bae1d40__0.resume("@(posedge reader_tb.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vreader_tb___024root___timing_commit(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h5bae1d40__0.commit("@(posedge reader_tb.clk)");
    }
}

void Vreader_tb___024root___eval_triggers__act(Vreader_tb___024root* vlSelf);

bool Vreader_tb___024root___eval_phase__act(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vreader_tb___024root___eval_triggers__act(vlSelf);
    Vreader_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vreader_tb___024root___timing_resume(vlSelf);
        Vreader_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vreader_tb___024root___eval_phase__nba(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vreader_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreader_tb___024root___dump_triggers__nba(Vreader_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vreader_tb___024root___dump_triggers__act(Vreader_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vreader_tb___024root___eval(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vreader_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("reader_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vreader_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("reader_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vreader_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vreader_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vreader_tb___024root___eval_debug_assertions(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
