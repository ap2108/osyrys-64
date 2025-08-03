// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreader_tb.h for the primary calling header

#include "Vreader_tb__pch.h"
#include "Vreader_tb__Syms.h"
#include "Vreader_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vreader_tb___024root___eval_initial__TOP__Vtiming__0(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*2:0*/ __Vtask_reader_tb__DOT__drive_load__0__funct3;
    __Vtask_reader_tb__DOT__drive_load__0__funct3 = 0;
    QData/*63:0*/ __Vtask_reader_tb__DOT__drive_load__0__data;
    __Vtask_reader_tb__DOT__drive_load__0__data = 0;
    CData/*7:0*/ __Vtask_reader_tb__DOT__drive_load__0__mask;
    __Vtask_reader_tb__DOT__drive_load__0__mask = 0;
    CData/*0:0*/ __Vtask_reader_tb__DOT__drive_load__0__load64;
    __Vtask_reader_tb__DOT__drive_load__0__load64 = 0;
    CData/*2:0*/ __Vtask_reader_tb__DOT__drive_load__1__funct3;
    __Vtask_reader_tb__DOT__drive_load__1__funct3 = 0;
    QData/*63:0*/ __Vtask_reader_tb__DOT__drive_load__1__data;
    __Vtask_reader_tb__DOT__drive_load__1__data = 0;
    CData/*7:0*/ __Vtask_reader_tb__DOT__drive_load__1__mask;
    __Vtask_reader_tb__DOT__drive_load__1__mask = 0;
    CData/*0:0*/ __Vtask_reader_tb__DOT__drive_load__1__load64;
    __Vtask_reader_tb__DOT__drive_load__1__load64 = 0;
    CData/*2:0*/ __Vtask_reader_tb__DOT__drive_load__2__funct3;
    __Vtask_reader_tb__DOT__drive_load__2__funct3 = 0;
    QData/*63:0*/ __Vtask_reader_tb__DOT__drive_load__2__data;
    __Vtask_reader_tb__DOT__drive_load__2__data = 0;
    CData/*7:0*/ __Vtask_reader_tb__DOT__drive_load__2__mask;
    __Vtask_reader_tb__DOT__drive_load__2__mask = 0;
    CData/*0:0*/ __Vtask_reader_tb__DOT__drive_load__2__load64;
    __Vtask_reader_tb__DOT__drive_load__2__load64 = 0;
    CData/*2:0*/ __Vtask_reader_tb__DOT__drive_load__3__funct3;
    __Vtask_reader_tb__DOT__drive_load__3__funct3 = 0;
    QData/*63:0*/ __Vtask_reader_tb__DOT__drive_load__3__data;
    __Vtask_reader_tb__DOT__drive_load__3__data = 0;
    CData/*7:0*/ __Vtask_reader_tb__DOT__drive_load__3__mask;
    __Vtask_reader_tb__DOT__drive_load__3__mask = 0;
    CData/*0:0*/ __Vtask_reader_tb__DOT__drive_load__3__load64;
    __Vtask_reader_tb__DOT__drive_load__3__load64 = 0;
    CData/*2:0*/ __Vtask_reader_tb__DOT__drive_load__4__funct3;
    __Vtask_reader_tb__DOT__drive_load__4__funct3 = 0;
    QData/*63:0*/ __Vtask_reader_tb__DOT__drive_load__4__data;
    __Vtask_reader_tb__DOT__drive_load__4__data = 0;
    CData/*7:0*/ __Vtask_reader_tb__DOT__drive_load__4__mask;
    __Vtask_reader_tb__DOT__drive_load__4__mask = 0;
    CData/*0:0*/ __Vtask_reader_tb__DOT__drive_load__4__load64;
    __Vtask_reader_tb__DOT__drive_load__4__load64 = 0;
    CData/*2:0*/ __Vtask_reader_tb__DOT__drive_load__5__funct3;
    __Vtask_reader_tb__DOT__drive_load__5__funct3 = 0;
    QData/*63:0*/ __Vtask_reader_tb__DOT__drive_load__5__data;
    __Vtask_reader_tb__DOT__drive_load__5__data = 0;
    CData/*7:0*/ __Vtask_reader_tb__DOT__drive_load__5__mask;
    __Vtask_reader_tb__DOT__drive_load__5__mask = 0;
    CData/*0:0*/ __Vtask_reader_tb__DOT__drive_load__5__load64;
    __Vtask_reader_tb__DOT__drive_load__5__load64 = 0;
    CData/*2:0*/ __Vtask_reader_tb__DOT__drive_load__6__funct3;
    __Vtask_reader_tb__DOT__drive_load__6__funct3 = 0;
    QData/*63:0*/ __Vtask_reader_tb__DOT__drive_load__6__data;
    __Vtask_reader_tb__DOT__drive_load__6__data = 0;
    CData/*7:0*/ __Vtask_reader_tb__DOT__drive_load__6__mask;
    __Vtask_reader_tb__DOT__drive_load__6__mask = 0;
    CData/*0:0*/ __Vtask_reader_tb__DOT__drive_load__6__load64;
    __Vtask_reader_tb__DOT__drive_load__6__load64 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x725f7462U;
    __Vtemp_1[2U] = 0x65616465U;
    __Vtemp_1[3U] = 0x72U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->reader_tb__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       62);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->reader_tb__DOT__rst = 0U;
    __Vtask_reader_tb__DOT__drive_load__0__load64 = 0U;
    __Vtask_reader_tb__DOT__drive_load__0__mask = 1U;
    __Vtask_reader_tb__DOT__drive_load__0__data = 0xffULL;
    __Vtask_reader_tb__DOT__drive_load__0__funct3 = 0U;
    vlSelf->reader_tb__DOT__f3 = __Vtask_reader_tb__DOT__drive_load__0__funct3;
    vlSelf->reader_tb__DOT__mem_data = __Vtask_reader_tb__DOT__drive_load__0__data;
    vlSelf->reader_tb__DOT__be_mask = __Vtask_reader_tb__DOT__drive_load__0__mask;
    vlSelf->reader_tb__DOT__is_load_64 = __Vtask_reader_tb__DOT__drive_load__0__load64;
    vlSelf->reader_tb__DOT__valid_in = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->reader_tb__DOT__valid_in = 0U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_reader_tb__DOT__drive_load__1__load64 = 0U;
    __Vtask_reader_tb__DOT__drive_load__1__mask = 1U;
    __Vtask_reader_tb__DOT__drive_load__1__data = 0xffULL;
    __Vtask_reader_tb__DOT__drive_load__1__funct3 = 4U;
    vlSelf->reader_tb__DOT__f3 = __Vtask_reader_tb__DOT__drive_load__1__funct3;
    vlSelf->reader_tb__DOT__mem_data = __Vtask_reader_tb__DOT__drive_load__1__data;
    vlSelf->reader_tb__DOT__be_mask = __Vtask_reader_tb__DOT__drive_load__1__mask;
    vlSelf->reader_tb__DOT__is_load_64 = __Vtask_reader_tb__DOT__drive_load__1__load64;
    vlSelf->reader_tb__DOT__valid_in = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->reader_tb__DOT__valid_in = 0U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_reader_tb__DOT__drive_load__2__load64 = 0U;
    __Vtask_reader_tb__DOT__drive_load__2__mask = 3U;
    __Vtask_reader_tb__DOT__drive_load__2__data = 0xffffULL;
    __Vtask_reader_tb__DOT__drive_load__2__funct3 = 1U;
    vlSelf->reader_tb__DOT__f3 = __Vtask_reader_tb__DOT__drive_load__2__funct3;
    vlSelf->reader_tb__DOT__mem_data = __Vtask_reader_tb__DOT__drive_load__2__data;
    vlSelf->reader_tb__DOT__be_mask = __Vtask_reader_tb__DOT__drive_load__2__mask;
    vlSelf->reader_tb__DOT__is_load_64 = __Vtask_reader_tb__DOT__drive_load__2__load64;
    vlSelf->reader_tb__DOT__valid_in = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->reader_tb__DOT__valid_in = 0U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_reader_tb__DOT__drive_load__3__load64 = 0U;
    __Vtask_reader_tb__DOT__drive_load__3__mask = 3U;
    __Vtask_reader_tb__DOT__drive_load__3__data = 0xffffULL;
    __Vtask_reader_tb__DOT__drive_load__3__funct3 = 5U;
    vlSelf->reader_tb__DOT__f3 = __Vtask_reader_tb__DOT__drive_load__3__funct3;
    vlSelf->reader_tb__DOT__mem_data = __Vtask_reader_tb__DOT__drive_load__3__data;
    vlSelf->reader_tb__DOT__be_mask = __Vtask_reader_tb__DOT__drive_load__3__mask;
    vlSelf->reader_tb__DOT__is_load_64 = __Vtask_reader_tb__DOT__drive_load__3__load64;
    vlSelf->reader_tb__DOT__valid_in = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->reader_tb__DOT__valid_in = 0U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_reader_tb__DOT__drive_load__4__load64 = 0U;
    __Vtask_reader_tb__DOT__drive_load__4__mask = 0xfU;
    __Vtask_reader_tb__DOT__drive_load__4__data = 0xffffffffULL;
    __Vtask_reader_tb__DOT__drive_load__4__funct3 = 2U;
    vlSelf->reader_tb__DOT__f3 = __Vtask_reader_tb__DOT__drive_load__4__funct3;
    vlSelf->reader_tb__DOT__mem_data = __Vtask_reader_tb__DOT__drive_load__4__data;
    vlSelf->reader_tb__DOT__be_mask = __Vtask_reader_tb__DOT__drive_load__4__mask;
    vlSelf->reader_tb__DOT__is_load_64 = __Vtask_reader_tb__DOT__drive_load__4__load64;
    vlSelf->reader_tb__DOT__valid_in = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->reader_tb__DOT__valid_in = 0U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_reader_tb__DOT__drive_load__5__load64 = 0U;
    __Vtask_reader_tb__DOT__drive_load__5__mask = 0xfU;
    __Vtask_reader_tb__DOT__drive_load__5__data = 0xffffffffULL;
    __Vtask_reader_tb__DOT__drive_load__5__funct3 = 6U;
    vlSelf->reader_tb__DOT__f3 = __Vtask_reader_tb__DOT__drive_load__5__funct3;
    vlSelf->reader_tb__DOT__mem_data = __Vtask_reader_tb__DOT__drive_load__5__data;
    vlSelf->reader_tb__DOT__be_mask = __Vtask_reader_tb__DOT__drive_load__5__mask;
    vlSelf->reader_tb__DOT__is_load_64 = __Vtask_reader_tb__DOT__drive_load__5__load64;
    vlSelf->reader_tb__DOT__valid_in = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->reader_tb__DOT__valid_in = 0U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_reader_tb__DOT__drive_load__6__load64 = 1U;
    __Vtask_reader_tb__DOT__drive_load__6__mask = 0xffU;
    __Vtask_reader_tb__DOT__drive_load__6__data = 0x123456789abcdef0ULL;
    __Vtask_reader_tb__DOT__drive_load__6__funct3 = 3U;
    vlSelf->reader_tb__DOT__f3 = __Vtask_reader_tb__DOT__drive_load__6__funct3;
    vlSelf->reader_tb__DOT__mem_data = __Vtask_reader_tb__DOT__drive_load__6__data;
    vlSelf->reader_tb__DOT__be_mask = __Vtask_reader_tb__DOT__drive_load__6__mask;
    vlSelf->reader_tb__DOT__is_load_64 = __Vtask_reader_tb__DOT__drive_load__6__load64;
    vlSelf->reader_tb__DOT__valid_in = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->reader_tb__DOT__valid_in = 0U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h5bae1d40__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge reader_tb.clk)", 
                                                       "reader_tb.sv", 
                                                       52);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("All test cases applied.\n");
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "reader_tb.sv", 
                                       81);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("reader_tb.sv", 82, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreader_tb___024root___dump_triggers__act(Vreader_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vreader_tb___024root___eval_triggers__act(Vreader_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->reader_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reader_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->reader_tb__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reader_tb__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->reader_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reader_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__reader_tb__DOT__clk__0 
        = vlSelf->reader_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__reader_tb__DOT__rst__0 
        = vlSelf->reader_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vreader_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
