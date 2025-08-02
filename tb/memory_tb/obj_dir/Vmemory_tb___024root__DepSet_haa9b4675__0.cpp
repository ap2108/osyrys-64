// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmemory_tb.h for the primary calling header

#include "Vmemory_tb__pch.h"
#include "Vmemory_tb___024root.h"

VL_ATTR_COLD void Vmemory_tb___024root___eval_initial__TOP(Vmemory_tb___024root* vlSelf);
VlCoroutine Vmemory_tb___024root___eval_initial__TOP__Vtiming__0(Vmemory_tb___024root* vlSelf);
VlCoroutine Vmemory_tb___024root___eval_initial__TOP__Vtiming__1(Vmemory_tb___024root* vlSelf);

void Vmemory_tb___024root___eval_initial(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_initial\n"); );
    // Body
    Vmemory_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vmemory_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmemory_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0 
        = vlSelf->memory_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__rst_n__0 
        = vlSelf->memory_tb__DOT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__cpu_ready__0 
        = vlSelf->memory_tb__DOT__cpu_ready;
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__npu_ready__0 
        = vlSelf->memory_tb__DOT__npu_ready;
}

VL_INLINE_OPT VlCoroutine Vmemory_tb___024root___eval_initial__TOP__Vtiming__1(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "memory_tb.sv", 
                                           18);
        vlSelf->__Vdlyvval__memory_tb__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->memory_tb__DOT__clk)));
        vlSelf->__Vdlyvset__memory_tb__DOT__clk__v0 = 1U;
    }
}

void Vmemory_tb___024root___eval_act(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmemory_tb___024root___nba_sequent__TOP__0(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__memory_tb__DOT__dut__DOT__burst_cnt;
    __Vdly__memory_tb__DOT__dut__DOT__burst_cnt = 0;
    CData/*1:0*/ __Vdly__memory_tb__DOT__dut__DOT__state;
    __Vdly__memory_tb__DOT__dut__DOT__state = 0;
    CData/*0:0*/ __Vdly__memory_tb__DOT__dut__DOT__is_write;
    __Vdly__memory_tb__DOT__dut__DOT__is_write = 0;
    QData/*63:0*/ __Vdly__memory_tb__DOT__dut__DOT__addr_latched;
    __Vdly__memory_tb__DOT__dut__DOT__addr_latched = 0;
    CData/*1:0*/ __Vdly__memory_tb__DOT__dut__DOT__latency_counter;
    __Vdly__memory_tb__DOT__dut__DOT__latency_counter = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v0;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v0;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v0;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v0;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v1;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v1;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v1;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v1;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v1 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v2;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v2 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v2;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v2;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v2;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v2 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v3;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v3 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v3;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v3;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v3;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v3 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v4;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v4 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v4;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v4 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v4;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v4 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v4;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v4 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v5;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v5 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v5;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v5 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v5;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v5 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v5;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v5 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v6;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v6 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v6;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v6 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v6;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v6 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v6;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v6 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v7;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v7 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v7;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v7 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v7;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v7 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v7;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v7 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v8;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v8 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v8;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v8 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v8;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v8 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v8;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v8 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v9;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v9 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v9;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v9 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v9;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v9 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v9;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v9 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v10;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v10 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v10;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v10 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v10;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v10 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v10;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v10 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v11;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v11 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v11;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v11 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v11;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v11 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v11;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v11 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v12;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v12 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v12;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v12 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v12;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v12 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v12;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v12 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v13;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v13 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v13;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v13 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v13;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v13 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v13;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v13 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v14;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v14 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v14;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v14 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v14;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v14 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v14;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v14 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v15;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v15 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v15;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v15 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v15;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v15 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v15;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v15 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v16;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v16 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v16;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v16 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v16;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v16 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v16;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v16 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v17;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v17 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v17;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v17 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v17;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v17 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v17;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v17 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v18;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v18 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v18;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v18 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v18;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v18 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v18;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v18 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v19;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v19 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v19;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v19 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v19;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v19 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v19;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v19 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v20;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v20 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v20;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v20 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v20;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v20 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v20;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v20 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v21;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v21 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v21;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v21 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v21;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v21 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v21;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v21 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v22;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v22 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v22;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v22 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v22;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v22 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v22;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v22 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v23;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v23 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v23;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v23 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v23;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v23 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v23;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v23 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v24;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v24 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v24;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v24 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v24;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v24 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v24;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v24 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v25;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v25 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v25;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v25 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v25;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v25 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v25;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v25 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v26;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v26 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v26;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v26 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v26;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v26 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v26;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v26 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v27;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v27 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v27;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v27 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v27;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v27 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v27;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v27 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v28;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v28 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v28;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v28 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v28;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v28 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v28;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v28 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v29;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v29 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v29;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v29 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v29;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v29 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v29;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v29 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v30;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v30 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v30;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v30 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v30;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v30 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v30;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v30 = 0;
    SData/*9:0*/ __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v31;
    __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v31 = 0;
    CData/*5:0*/ __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v31;
    __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v31 = 0;
    CData/*7:0*/ __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v31;
    __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v31 = 0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v31;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v31 = 0;
    // Body
    __Vdly__memory_tb__DOT__dut__DOT__latency_counter 
        = vlSelf->memory_tb__DOT__dut__DOT__latency_counter;
    __Vdly__memory_tb__DOT__dut__DOT__addr_latched 
        = vlSelf->memory_tb__DOT__dut__DOT__addr_latched;
    __Vdly__memory_tb__DOT__dut__DOT__is_write = vlSelf->memory_tb__DOT__dut__DOT__is_write;
    __Vdly__memory_tb__DOT__dut__DOT__state = vlSelf->memory_tb__DOT__dut__DOT__state;
    __Vdly__memory_tb__DOT__dut__DOT__burst_cnt = vlSelf->memory_tb__DOT__dut__DOT__burst_cnt;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v0 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v1 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v2 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v3 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v4 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v5 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v6 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v7 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v8 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v9 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v10 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v11 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v12 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v13 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v14 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v15 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v16 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v17 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v18 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v19 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v20 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v21 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v22 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v23 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v24 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v25 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v26 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v27 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v28 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v29 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v30 = 0U;
    __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v31 = 0U;
    if (vlSelf->memory_tb__DOT__rst_n) {
        if ((0U == (IData)(vlSelf->memory_tb__DOT__dut__DOT__state))) {
            vlSelf->memory_tb__DOT__cpu_ready = 0U;
            vlSelf->memory_tb__DOT__npu_ready = 0U;
            __Vdly__memory_tb__DOT__dut__DOT__burst_cnt = 0U;
            if (vlSelf->memory_tb__DOT__cpu_valid) {
                __Vdly__memory_tb__DOT__dut__DOT__state = 1U;
                __Vdly__memory_tb__DOT__dut__DOT__is_write 
                    = vlSelf->memory_tb__DOT__cpu_write_enable;
                vlSelf->memory_tb__DOT__dut__DOT__is_cpu = 1U;
                __Vdly__memory_tb__DOT__dut__DOT__addr_latched 
                    = (vlSelf->memory_tb__DOT__cpu_address 
                       >> 3U);
                __Vdly__memory_tb__DOT__dut__DOT__latency_counter = 2U;
            } else if (vlSelf->memory_tb__DOT__npu_valid) {
                __Vdly__memory_tb__DOT__dut__DOT__state = 2U;
                __Vdly__memory_tb__DOT__dut__DOT__is_write 
                    = vlSelf->memory_tb__DOT__npu_write_enable;
                vlSelf->memory_tb__DOT__dut__DOT__is_cpu = 0U;
                __Vdly__memory_tb__DOT__dut__DOT__addr_latched 
                    = (vlSelf->memory_tb__DOT__npu_address 
                       >> 3U);
                __Vdly__memory_tb__DOT__dut__DOT__latency_counter = 2U;
            }
        } else if ((1U == (IData)(vlSelf->memory_tb__DOT__dut__DOT__state))) {
            if ((0U != (IData)(vlSelf->memory_tb__DOT__dut__DOT__latency_counter))) {
                __Vdly__memory_tb__DOT__dut__DOT__latency_counter 
                    = (3U & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__latency_counter) 
                             - (IData)(1U)));
            } else {
                vlSelf->memory_tb__DOT__cpu_ready = 1U;
                if (vlSelf->memory_tb__DOT__burst_mode) {
                    if (((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt) 
                         < (IData)(vlSelf->memory_tb__DOT__burst_len))) {
                        if (vlSelf->memory_tb__DOT__dut__DOT__is_write) {
                            vlSelf->memory_tb__DOT__dut__DOT__unnamedblk2__DOT__i = 8U;
                            if ((1U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v0 
                                    = (0xffU & (IData)(vlSelf->memory_tb__DOT__cpu_write_data));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v0 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v0 = 0U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v0 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((2U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v1 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__cpu_write_data 
                                                        >> 8U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v1 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v1 = 8U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v1 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((4U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v2 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__cpu_write_data 
                                                        >> 0x10U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v2 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v2 = 0x10U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v2 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((8U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v3 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__cpu_write_data 
                                                        >> 0x18U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v3 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v3 = 0x18U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v3 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((0x10U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v4 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__cpu_write_data 
                                                        >> 0x20U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v4 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v4 = 0x20U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v4 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((0x20U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v5 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__cpu_write_data 
                                                        >> 0x28U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v5 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v5 = 0x28U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v5 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((0x40U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v6 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__cpu_write_data 
                                                        >> 0x30U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v6 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v6 = 0x30U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v6 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((0x80U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v7 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__cpu_write_data 
                                                        >> 0x38U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v7 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v7 = 0x38U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v7 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                        } else {
                            vlSelf->memory_tb__DOT__cpu_read_data 
                                = vlSelf->memory_tb__DOT__dut__DOT__mem
                                [(0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                            + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))))];
                        }
                        __Vdly__memory_tb__DOT__dut__DOT__burst_cnt 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)));
                    } else {
                        vlSelf->memory_tb__DOT__cpu_ready = 0U;
                        __Vdly__memory_tb__DOT__dut__DOT__state = 0U;
                    }
                } else {
                    if (vlSelf->memory_tb__DOT__dut__DOT__is_write) {
                        vlSelf->memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i = 8U;
                        if ((1U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v8 
                                = (0xffU & (IData)(vlSelf->memory_tb__DOT__cpu_write_data));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v8 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v8 = 0U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v8 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((2U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v9 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__cpu_write_data 
                                                    >> 8U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v9 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v9 = 8U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v9 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((4U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v10 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__cpu_write_data 
                                                    >> 0x10U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v10 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v10 = 0x10U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v10 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((8U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v11 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__cpu_write_data 
                                                    >> 0x18U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v11 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v11 = 0x18U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v11 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((0x10U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v12 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__cpu_write_data 
                                                    >> 0x20U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v12 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v12 = 0x20U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v12 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((0x20U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v13 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__cpu_write_data 
                                                    >> 0x28U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v13 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v13 = 0x28U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v13 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((0x40U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v14 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__cpu_write_data 
                                                    >> 0x30U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v14 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v14 = 0x30U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v14 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((0x80U & (IData)(vlSelf->memory_tb__DOT__cpu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v15 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__cpu_write_data 
                                                    >> 0x38U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v15 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v15 = 0x38U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v15 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                    } else {
                        vlSelf->memory_tb__DOT__cpu_read_data 
                            = vlSelf->memory_tb__DOT__dut__DOT__mem
                            [(0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched))];
                    }
                    __Vdly__memory_tb__DOT__dut__DOT__state = 0U;
                }
            }
        } else if ((2U == (IData)(vlSelf->memory_tb__DOT__dut__DOT__state))) {
            if ((0U != (IData)(vlSelf->memory_tb__DOT__dut__DOT__latency_counter))) {
                __Vdly__memory_tb__DOT__dut__DOT__latency_counter 
                    = (3U & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__latency_counter) 
                             - (IData)(1U)));
            } else {
                vlSelf->memory_tb__DOT__npu_ready = 1U;
                if (vlSelf->memory_tb__DOT__burst_mode) {
                    if (((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt) 
                         < (IData)(vlSelf->memory_tb__DOT__burst_len))) {
                        if (vlSelf->memory_tb__DOT__dut__DOT__is_write) {
                            vlSelf->memory_tb__DOT__dut__DOT__unnamedblk4__DOT__i = 8U;
                            if ((1U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v16 
                                    = (0xffU & (IData)(vlSelf->memory_tb__DOT__npu_write_data));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v16 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v16 = 0U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v16 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((2U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v17 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__npu_write_data 
                                                        >> 8U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v17 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v17 = 8U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v17 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((4U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v18 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__npu_write_data 
                                                        >> 0x10U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v18 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v18 = 0x10U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v18 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((8U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v19 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__npu_write_data 
                                                        >> 0x18U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v19 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v19 = 0x18U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v19 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((0x10U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v20 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__npu_write_data 
                                                        >> 0x20U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v20 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v20 = 0x20U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v20 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((0x20U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v21 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__npu_write_data 
                                                        >> 0x28U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v21 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v21 = 0x28U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v21 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((0x40U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v22 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__npu_write_data 
                                                        >> 0x30U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v22 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v22 = 0x30U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v22 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                            if ((0x80U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                                __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v23 
                                    = (0xffU & (IData)(
                                                       (vlSelf->memory_tb__DOT__npu_write_data 
                                                        >> 0x38U)));
                                __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v23 = 1U;
                                __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v23 = 0x38U;
                                __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v23 
                                    = (0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                                 + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))));
                            }
                        } else {
                            vlSelf->memory_tb__DOT__npu_read_data 
                                = vlSelf->memory_tb__DOT__dut__DOT__mem
                                [(0x3ffU & ((IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched) 
                                            + (IData)((QData)((IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)))))];
                        }
                        __Vdly__memory_tb__DOT__dut__DOT__burst_cnt 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt)));
                    } else {
                        vlSelf->memory_tb__DOT__npu_ready = 0U;
                        __Vdly__memory_tb__DOT__dut__DOT__state = 0U;
                    }
                } else {
                    if (vlSelf->memory_tb__DOT__dut__DOT__is_write) {
                        vlSelf->memory_tb__DOT__dut__DOT__unnamedblk3__DOT__i = 8U;
                        if ((1U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v24 
                                = (0xffU & (IData)(vlSelf->memory_tb__DOT__npu_write_data));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v24 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v24 = 0U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v24 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((2U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v25 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__npu_write_data 
                                                    >> 8U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v25 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v25 = 8U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v25 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((4U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v26 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__npu_write_data 
                                                    >> 0x10U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v26 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v26 = 0x10U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v26 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((8U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v27 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__npu_write_data 
                                                    >> 0x18U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v27 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v27 = 0x18U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v27 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((0x10U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v28 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__npu_write_data 
                                                    >> 0x20U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v28 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v28 = 0x20U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v28 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((0x20U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v29 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__npu_write_data 
                                                    >> 0x28U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v29 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v29 = 0x28U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v29 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((0x40U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v30 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__npu_write_data 
                                                    >> 0x30U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v30 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v30 = 0x30U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v30 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                        if ((0x80U & (IData)(vlSelf->memory_tb__DOT__npu_byte_enable))) {
                            __Vdlyvval__memory_tb__DOT__dut__DOT__mem__v31 
                                = (0xffU & (IData)(
                                                   (vlSelf->memory_tb__DOT__npu_write_data 
                                                    >> 0x38U)));
                            __Vdlyvset__memory_tb__DOT__dut__DOT__mem__v31 = 1U;
                            __Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v31 = 0x38U;
                            __Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v31 
                                = (0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched));
                        }
                    } else {
                        vlSelf->memory_tb__DOT__npu_read_data 
                            = vlSelf->memory_tb__DOT__dut__DOT__mem
                            [(0x3ffU & (IData)(vlSelf->memory_tb__DOT__dut__DOT__addr_latched))];
                    }
                    __Vdly__memory_tb__DOT__dut__DOT__state = 0U;
                }
            }
        } else {
            __Vdly__memory_tb__DOT__dut__DOT__state = 0U;
        }
    } else {
        __Vdly__memory_tb__DOT__dut__DOT__state = 0U;
        vlSelf->memory_tb__DOT__cpu_ready = 0U;
        vlSelf->memory_tb__DOT__npu_ready = 0U;
        __Vdly__memory_tb__DOT__dut__DOT__burst_cnt = 0U;
        __Vdly__memory_tb__DOT__dut__DOT__latency_counter = 0U;
    }
    vlSelf->memory_tb__DOT__dut__DOT__burst_cnt = __Vdly__memory_tb__DOT__dut__DOT__burst_cnt;
    vlSelf->memory_tb__DOT__dut__DOT__state = __Vdly__memory_tb__DOT__dut__DOT__state;
    vlSelf->memory_tb__DOT__dut__DOT__is_write = __Vdly__memory_tb__DOT__dut__DOT__is_write;
    vlSelf->memory_tb__DOT__dut__DOT__addr_latched 
        = __Vdly__memory_tb__DOT__dut__DOT__addr_latched;
    vlSelf->memory_tb__DOT__dut__DOT__latency_counter 
        = __Vdly__memory_tb__DOT__dut__DOT__latency_counter;
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v0) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v0] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v0))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v0]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v0)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v0)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v1) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v1))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v1]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v1)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v1)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v2) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v2] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v2))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v2]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v2)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v2)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v3) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v3] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v3))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v3]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v3)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v3)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v4) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v4] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v4))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v4]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v4)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v4)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v5) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v5] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v5))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v5]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v5)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v5)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v6) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v6] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v6))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v6]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v6)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v6)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v7) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v7] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v7))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v7]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v7)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v7)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v8) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v8] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v8))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v8]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v8)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v8)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v9) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v9] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v9))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v9]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v9)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v9)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v10) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v10] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v10))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v10]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v10)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v10)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v11) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v11] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v11))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v11]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v11)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v11)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v12) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v12] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v12))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v12]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v12)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v12)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v13) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v13] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v13))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v13]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v13)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v13)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v14) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v14] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v14))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v14]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v14)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v14)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v15) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v15] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v15))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v15]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v15)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v15)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v16) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v16] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v16))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v16]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v16)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v16)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v17) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v17] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v17))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v17]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v17)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v17)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v18) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v18] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v18))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v18]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v18)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v18)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v19) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v19] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v19))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v19]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v19)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v19)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v20) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v20] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v20))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v20]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v20)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v20)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v21) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v21] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v21))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v21]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v21)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v21)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v22) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v22] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v22))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v22]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v22)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v22)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v23) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v23] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v23))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v23]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v23)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v23)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v24) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v24] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v24))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v24]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v24)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v24)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v25) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v25] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v25))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v25]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v25)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v25)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v26) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v26] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v26))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v26]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v26)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v26)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v27) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v27] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v27))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v27]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v27)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v27)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v28) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v28] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v28))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v28]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v28)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v28)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v29) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v29] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v29))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v29]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v29)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v29)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v30) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v30] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v30))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v30]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v30)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v30)));
    }
    if (__Vdlyvset__memory_tb__DOT__dut__DOT__mem__v31) {
        vlSelf->memory_tb__DOT__dut__DOT__mem[__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v31] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v31))) 
                & vlSelf->memory_tb__DOT__dut__DOT__mem
                [__Vdlyvdim0__memory_tb__DOT__dut__DOT__mem__v31]) 
               | ((QData)((IData)(__Vdlyvval__memory_tb__DOT__dut__DOT__mem__v31)) 
                  << (IData)(__Vdlyvlsb__memory_tb__DOT__dut__DOT__mem__v31)));
    }
}

VL_INLINE_OPT void Vmemory_tb___024root___nba_sequent__TOP__1(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__memory_tb__DOT__clk__v0) {
        vlSelf->memory_tb__DOT__clk = vlSelf->__Vdlyvval__memory_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__memory_tb__DOT__clk__v0 = 0U;
    }
}

void Vmemory_tb___024root___eval_nba(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmemory_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmemory_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vmemory_tb___024root___timing_resume(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4b52a4b2__0.resume("@(posedge memory_tb.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h060bac42__0.resume("@([changed] memory_tb.cpu_ready)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h5de9f512__0.resume("@([changed] memory_tb.npu_ready)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vmemory_tb___024root___timing_commit(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4b52a4b2__0.commit("@(posedge memory_tb.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h060bac42__0.commit("@([changed] memory_tb.cpu_ready)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h5de9f512__0.commit("@([changed] memory_tb.npu_ready)");
    }
}

void Vmemory_tb___024root___eval_triggers__act(Vmemory_tb___024root* vlSelf);

bool Vmemory_tb___024root___eval_phase__act(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmemory_tb___024root___eval_triggers__act(vlSelf);
    Vmemory_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmemory_tb___024root___timing_resume(vlSelf);
        Vmemory_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmemory_tb___024root___eval_phase__nba(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmemory_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__nba(Vmemory_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__act(Vmemory_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmemory_tb___024root___eval(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmemory_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("memory_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmemory_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("memory_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmemory_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmemory_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmemory_tb___024root___eval_debug_assertions(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
