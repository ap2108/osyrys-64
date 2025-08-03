// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vreader_tb.h for the primary calling header

#ifndef VERILATED_VREADER_TB___024ROOT_H_
#define VERILATED_VREADER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vreader_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vreader_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ reader_tb__DOT__clk;
    CData/*0:0*/ reader_tb__DOT__rst;
    CData/*7:0*/ reader_tb__DOT__be_mask;
    CData/*2:0*/ reader_tb__DOT__f3;
    CData/*0:0*/ reader_tb__DOT__is_load_64;
    CData/*0:0*/ reader_tb__DOT__valid_in;
    CData/*0:0*/ reader_tb__DOT__valid;
    CData/*0:0*/ reader_tb__DOT__dut__DOT__load_pending;
    CData/*0:0*/ __Vdlyvval__reader_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__reader_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reader_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reader_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ reader_tb__DOT__mem_data;
    QData/*63:0*/ reader_tb__DOT__dut__DOT__masked_data;
    QData/*63:0*/ reader_tb__DOT__dut__DOT__raw_data;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5bae1d40__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vreader_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vreader_tb___024root(Vreader_tb__Syms* symsp, const char* v__name);
    ~Vreader_tb___024root();
    VL_UNCOPYABLE(Vreader_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
