// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhazard_unit_tb.h for the primary calling header

#ifndef VERILATED_VHAZARD_UNIT_TB___024ROOT_H_
#define VERILATED_VHAZARD_UNIT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vhazard_unit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhazard_unit_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ hazard_unit_tb__DOT__clk;
    CData/*0:0*/ hazard_unit_tb__DOT__rst_n;
    CData/*4:0*/ hazard_unit_tb__DOT__id_rs1;
    CData/*4:0*/ hazard_unit_tb__DOT__id_rs2;
    CData/*4:0*/ hazard_unit_tb__DOT__ex_rd;
    CData/*0:0*/ hazard_unit_tb__DOT__ex_reg_write;
    CData/*0:0*/ hazard_unit_tb__DOT__ex_mem_read;
    CData/*4:0*/ hazard_unit_tb__DOT__mem_rd;
    CData/*0:0*/ hazard_unit_tb__DOT__mem_reg_write;
    CData/*4:0*/ hazard_unit_tb__DOT__wb_rd;
    CData/*0:0*/ hazard_unit_tb__DOT__wb_reg_write;
    CData/*0:0*/ hazard_unit_tb__DOT__branch_mispredict;
    CData/*0:0*/ hazard_unit_tb__DOT__scoreboard_enable;
    CData/*0:0*/ hazard_unit_tb__DOT__id_valid_in;
    CData/*0:0*/ hazard_unit_tb__DOT__ex_valid_in;
    CData/*0:0*/ hazard_unit_tb__DOT__if_valid_in;
    CData/*1:0*/ hazard_unit_tb__DOT__forward_a;
    CData/*1:0*/ hazard_unit_tb__DOT__forward_b;
    CData/*0:0*/ hazard_unit_tb__DOT__stall;
    CData/*0:0*/ hazard_unit_tb__DOT__flush;
    CData/*0:0*/ __Vdlyvval__hazard_unit_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__hazard_unit_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ hazard_unit_tb__DOT__reg_write_bitmap;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhazard_unit_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhazard_unit_tb___024root(Vhazard_unit_tb__Syms* symsp, const char* v__name);
    ~Vhazard_unit_tb___024root();
    VL_UNCOPYABLE(Vhazard_unit_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
