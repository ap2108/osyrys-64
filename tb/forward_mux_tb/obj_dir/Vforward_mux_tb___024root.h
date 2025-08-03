// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vforward_mux_tb.h for the primary calling header

#ifndef VERILATED_VFORWARD_MUX_TB___024ROOT_H_
#define VERILATED_VFORWARD_MUX_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vforward_mux_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vforward_mux_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ forward_mux_tb__DOT__forward_a;
    CData/*1:0*/ forward_mux_tb__DOT__forward_b;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ forward_mux_tb__DOT__rs1_val_in;
    QData/*63:0*/ forward_mux_tb__DOT__rs2_val_in;
    QData/*63:0*/ forward_mux_tb__DOT__ex_result;
    QData/*63:0*/ forward_mux_tb__DOT__mem_result;
    QData/*63:0*/ forward_mux_tb__DOT__wb_result;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vforward_mux_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vforward_mux_tb___024root(Vforward_mux_tb__Syms* symsp, const char* v__name);
    ~Vforward_mux_tb___024root();
    VL_UNCOPYABLE(Vforward_mux_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
