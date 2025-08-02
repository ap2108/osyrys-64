// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmemory_tb.h for the primary calling header

#ifndef VERILATED_VMEMORY_TB___024ROOT_H_
#define VERILATED_VMEMORY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmemory_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmemory_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ memory_tb__DOT__clk;
    CData/*0:0*/ memory_tb__DOT__rst_n;
    CData/*0:0*/ memory_tb__DOT__cpu_valid;
    CData/*0:0*/ memory_tb__DOT__cpu_ready;
    CData/*0:0*/ memory_tb__DOT__cpu_write_enable;
    CData/*7:0*/ memory_tb__DOT__cpu_byte_enable;
    CData/*0:0*/ memory_tb__DOT__npu_valid;
    CData/*0:0*/ memory_tb__DOT__npu_ready;
    CData/*0:0*/ memory_tb__DOT__npu_write_enable;
    CData/*7:0*/ memory_tb__DOT__npu_byte_enable;
    CData/*3:0*/ memory_tb__DOT__burst_len;
    CData/*0:0*/ memory_tb__DOT__burst_mode;
    CData/*1:0*/ memory_tb__DOT__dut__DOT__state;
    CData/*3:0*/ memory_tb__DOT__dut__DOT__burst_cnt;
    CData/*0:0*/ memory_tb__DOT__dut__DOT__is_write;
    CData/*0:0*/ memory_tb__DOT__dut__DOT__is_cpu;
    CData/*1:0*/ memory_tb__DOT__dut__DOT__latency_counter;
    CData/*0:0*/ __Vdlyvval__memory_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__memory_tb__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__memory_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__memory_tb__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__memory_tb__DOT__cpu_ready__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__memory_tb__DOT__npu_ready__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ memory_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ memory_tb__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ memory_tb__DOT__dut__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ memory_tb__DOT__dut__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ memory_tb__DOT__dut__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ memory_tb__DOT__dut__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ memory_tb__DOT__cpu_address;
    QData/*63:0*/ memory_tb__DOT__cpu_write_data;
    QData/*63:0*/ memory_tb__DOT__cpu_read_data;
    QData/*63:0*/ memory_tb__DOT__npu_address;
    QData/*63:0*/ memory_tb__DOT__npu_write_data;
    QData/*63:0*/ memory_tb__DOT__npu_read_data;
    QData/*63:0*/ memory_tb__DOT__dut__DOT__addr_latched;
    VlUnpacked<QData/*63:0*/, 1024> memory_tb__DOT__dut__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4b52a4b2__0;
    VlTriggerScheduler __VtrigSched_h060bac42__0;
    VlTriggerScheduler __VtrigSched_h5de9f512__0;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmemory_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmemory_tb___024root(Vmemory_tb__Syms* symsp, const char* v__name);
    ~Vmemory_tb___024root();
    VL_UNCOPYABLE(Vmemory_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
