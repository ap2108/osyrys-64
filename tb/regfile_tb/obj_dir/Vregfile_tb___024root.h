// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregfile_tb.h for the primary calling header

#ifndef VERILATED_VREGFILE_TB___024ROOT_H_
#define VERILATED_VREGFILE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vregfile_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregfile_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ regfile_tb__DOT__clk;
    CData/*0:0*/ regfile_tb__DOT__rst_n;
    CData/*4:0*/ regfile_tb__DOT__address1;
    CData/*4:0*/ regfile_tb__DOT__address2;
    CData/*4:0*/ regfile_tb__DOT__address3;
    CData/*0:0*/ regfile_tb__DOT__write_enable_a;
    CData/*0:0*/ regfile_tb__DOT__write_enable_b;
    CData/*4:0*/ regfile_tb__DOT__write_addr_a;
    CData/*4:0*/ regfile_tb__DOT__write_addr_b;
    CData/*4:0*/ regfile_tb__DOT__ext_address1;
    CData/*4:0*/ regfile_tb__DOT__ext_address2;
    CData/*0:0*/ __Vdlyvval__regfile_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__regfile_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ regfile_tb__DOT__uut__DOT__scoreboard;
    IData/*31:0*/ regfile_tb__DOT__uut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ regfile_tb__DOT__read_data1;
    QData/*63:0*/ regfile_tb__DOT__read_data2;
    QData/*63:0*/ regfile_tb__DOT__write_data_a;
    QData/*63:0*/ regfile_tb__DOT__write_data_b;
    QData/*63:0*/ regfile_tb__DOT__ext_data1;
    QData/*63:0*/ regfile_tb__DOT__ext_data2;
    VlUnpacked<QData/*63:0*/, 32> regfile_tb__DOT__uut__DOT__registers;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregfile_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregfile_tb___024root(Vregfile_tb__Syms* symsp, const char* v__name);
    ~Vregfile_tb___024root();
    VL_UNCOPYABLE(Vregfile_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
