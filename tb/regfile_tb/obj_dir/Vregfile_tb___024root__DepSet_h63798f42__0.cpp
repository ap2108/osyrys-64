// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb___024root.h"

VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(Vregfile_tb___024root* vlSelf);
VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__1(Vregfile_tb___024root* vlSelf);

void Vregfile_tb___024root___eval_initial(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vregfile_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 
        = vlSelf->regfile_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__1(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "regfile_tb.sv", 
                                           48);
        vlSelf->__Vdlyvval__regfile_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->regfile_tb__DOT__clk)));
        vlSelf->__Vdlyvset__regfile_tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vregfile_tb___024root___act_sequent__TOP__0(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->regfile_tb__DOT__read_data1 = ((0U == (IData)(vlSelf->regfile_tb__DOT__address1))
                                            ? 0ULL : 
                                           vlSelf->regfile_tb__DOT__uut__DOT__registers
                                           [vlSelf->regfile_tb__DOT__address1]);
    vlSelf->regfile_tb__DOT__read_data2 = ((0U == (IData)(vlSelf->regfile_tb__DOT__address2))
                                            ? 0ULL : 
                                           vlSelf->regfile_tb__DOT__uut__DOT__registers
                                           [vlSelf->regfile_tb__DOT__address2]);
    vlSelf->regfile_tb__DOT__ext_data1 = ((0U == (IData)(vlSelf->regfile_tb__DOT__ext_address1))
                                           ? 0ULL : 
                                          vlSelf->regfile_tb__DOT__uut__DOT__registers
                                          [vlSelf->regfile_tb__DOT__ext_address1]);
    vlSelf->regfile_tb__DOT__ext_data2 = ((0U == (IData)(vlSelf->regfile_tb__DOT__ext_address2))
                                           ? 0ULL : 
                                          vlSelf->regfile_tb__DOT__uut__DOT__registers
                                          [vlSelf->regfile_tb__DOT__ext_address2]);
}

void Vregfile_tb___024root___eval_act(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vregfile_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregfile_tb___024root___nba_sequent__TOP__0(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__regfile_tb__DOT__uut__DOT__registers__v0;
    __Vdlyvdim0__regfile_tb__DOT__uut__DOT__registers__v0 = 0;
    QData/*63:0*/ __Vdlyvval__regfile_tb__DOT__uut__DOT__registers__v0;
    __Vdlyvval__regfile_tb__DOT__uut__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v0;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__regfile_tb__DOT__uut__DOT__registers__v1;
    __Vdlyvdim0__regfile_tb__DOT__uut__DOT__registers__v1 = 0;
    QData/*63:0*/ __Vdlyvval__regfile_tb__DOT__uut__DOT__registers__v1;
    __Vdlyvval__regfile_tb__DOT__uut__DOT__registers__v1 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v1;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v1 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v2;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v2 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v3;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v3 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v4;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v4 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v5;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v5 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v6;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v6 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v7;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v7 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v8;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v8 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v9;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v9 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v10;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v10 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v11;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v11 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v12;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v12 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v13;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v13 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v14;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v14 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v15;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v15 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v16;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v16 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v17;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v17 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v18;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v18 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v19;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v19 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v20;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v20 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v21;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v21 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v22;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v22 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v23;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v23 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v24;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v24 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v25;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v25 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v26;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v26 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v27;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v27 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v28;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v28 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v29;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v29 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v30;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v30 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v31;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v31 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v32;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v32 = 0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v33;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v33 = 0;
    // Body
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v0 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v1 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v2 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v3 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v4 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v5 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v6 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v7 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v8 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v9 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v10 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v11 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v12 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v13 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v14 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v15 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v16 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v17 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v18 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v19 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v20 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v21 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v22 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v23 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v24 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v25 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v26 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v27 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v28 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v29 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v30 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v31 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v32 = 0U;
    __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v33 = 0U;
    if (vlSelf->regfile_tb__DOT__rst_n) {
        if (VL_UNLIKELY(((IData)(vlSelf->regfile_tb__DOT__write_enable_a) 
                         & (0U != (IData)(vlSelf->regfile_tb__DOT__write_addr_a))))) {
            VL_WRITEF("[regfile] Write A: x%0# <= 0x%x\n",
                      5,vlSelf->regfile_tb__DOT__write_addr_a,
                      64,vlSelf->regfile_tb__DOT__write_data_a);
            __Vdlyvval__regfile_tb__DOT__uut__DOT__registers__v0 
                = vlSelf->regfile_tb__DOT__write_data_a;
            __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v0 = 1U;
            __Vdlyvdim0__regfile_tb__DOT__uut__DOT__registers__v0 
                = vlSelf->regfile_tb__DOT__write_addr_a;
            vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
                = ((~ ((IData)(1U) << (IData)(vlSelf->regfile_tb__DOT__write_addr_a))) 
                   & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        }
        if (VL_UNLIKELY((((IData)(vlSelf->regfile_tb__DOT__write_enable_b) 
                          & (0U != (IData)(vlSelf->regfile_tb__DOT__write_addr_b))) 
                         & ((IData)(vlSelf->regfile_tb__DOT__write_addr_b) 
                            != (IData)(vlSelf->regfile_tb__DOT__write_addr_a))))) {
            VL_WRITEF("[regfile] Write B: x%0# <= 0x%x\n",
                      5,vlSelf->regfile_tb__DOT__write_addr_b,
                      64,vlSelf->regfile_tb__DOT__write_data_b);
            __Vdlyvval__regfile_tb__DOT__uut__DOT__registers__v1 
                = vlSelf->regfile_tb__DOT__write_data_b;
            __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v1 = 1U;
            __Vdlyvdim0__regfile_tb__DOT__uut__DOT__registers__v1 
                = vlSelf->regfile_tb__DOT__write_addr_b;
            vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
                = ((~ ((IData)(1U) << (IData)(vlSelf->regfile_tb__DOT__write_addr_b))) 
                   & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        }
        if (((IData)(vlSelf->regfile_tb__DOT__write_enable_a) 
             & (0U != (IData)(vlSelf->regfile_tb__DOT__write_addr_a)))) {
            vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
                = (vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (IData)(vlSelf->regfile_tb__DOT__write_addr_a))));
        }
        if (((IData)(vlSelf->regfile_tb__DOT__write_enable_b) 
             & (0U != (IData)(vlSelf->regfile_tb__DOT__write_addr_b)))) {
            vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
                = (vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (IData)(vlSelf->regfile_tb__DOT__write_addr_b))));
        }
    } else {
        vlSelf->regfile_tb__DOT__uut__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v2 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffffffeU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v3 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffffffdU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v4 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffffffbU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v5 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffffff7U & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v6 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffffffefU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v7 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffffffdfU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v8 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffffffbfU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v9 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffffff7fU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v10 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffffeffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v11 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffffdffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v12 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffffbffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v13 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffff7ffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v14 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffffefffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v15 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffffdfffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v16 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffffbfffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v17 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffff7fffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v18 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffeffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v19 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffdffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v20 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfffbffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v21 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfff7ffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v22 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffefffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v23 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffdfffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v24 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xffbfffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v25 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xff7fffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v26 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfeffffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v27 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfdffffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v28 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xfbffffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v29 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xf7ffffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v30 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xefffffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v31 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xdfffffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v32 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0xbfffffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
        __Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v33 = 1U;
        vlSelf->regfile_tb__DOT__uut__DOT__scoreboard 
            = (0x7fffffffU & vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v0) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[__Vdlyvdim0__regfile_tb__DOT__uut__DOT__registers__v0] 
            = __Vdlyvval__regfile_tb__DOT__uut__DOT__registers__v0;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v1) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[__Vdlyvdim0__regfile_tb__DOT__uut__DOT__registers__v1] 
            = __Vdlyvval__regfile_tb__DOT__uut__DOT__registers__v1;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v2) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v3) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[1U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v4) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[2U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v5) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[3U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v6) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[4U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v7) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[5U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v8) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[6U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v9) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[7U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v10) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[8U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v11) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[9U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v12) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0xaU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v13) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0xbU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v14) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0xcU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v15) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0xdU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v16) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0xeU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v17) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0xfU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v18) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x10U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v19) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x11U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v20) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x12U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v21) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x13U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v22) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x14U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v23) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x15U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v24) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x16U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v25) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x17U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v26) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x18U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v27) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x19U] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v28) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x1aU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v29) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x1bU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v30) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x1cU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v31) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x1dU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v32) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x1eU] = 0ULL;
    }
    if (__Vdlyvset__regfile_tb__DOT__uut__DOT__registers__v33) {
        vlSelf->regfile_tb__DOT__uut__DOT__registers[0x1fU] = 0ULL;
    }
}

VL_INLINE_OPT void Vregfile_tb___024root___nba_sequent__TOP__1(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__regfile_tb__DOT__clk__v0) {
        vlSelf->regfile_tb__DOT__clk = vlSelf->__Vdlyvval__regfile_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__regfile_tb__DOT__clk__v0 = 0U;
    }
}

void Vregfile_tb___024root___eval_nba(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregfile_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregfile_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregfile_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vregfile_tb___024root___timing_resume(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vregfile_tb___024root___eval_triggers__act(Vregfile_tb___024root* vlSelf);

bool Vregfile_tb___024root___eval_phase__act(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregfile_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vregfile_tb___024root___timing_resume(vlSelf);
        Vregfile_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregfile_tb___024root___eval_phase__nba(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregfile_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__nba(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile_tb___024root___eval(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vregfile_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("regfile_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vregfile_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("regfile_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vregfile_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vregfile_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregfile_tb___024root___eval_debug_assertions(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
