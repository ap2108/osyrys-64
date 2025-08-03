// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsignext_tb.h for the primary calling header

#ifndef VERILATED_VSIGNEXT_TB___024ROOT_H_
#define VERILATED_VSIGNEXT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsignext_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsignext_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*2:0*/ signext_tb__DOT__imm_source;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ signext_tb__DOT__raw_instr;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ signext_tb__DOT__immediate;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsignext_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsignext_tb___024root(Vsignext_tb__Syms* symsp, const char* v__name);
    ~Vsignext_tb___024root();
    VL_UNCOPYABLE(Vsignext_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
