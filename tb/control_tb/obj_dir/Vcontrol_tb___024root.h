// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol_tb.h for the primary calling header

#ifndef VERILATED_VCONTROL_TB___024ROOT_H_
#define VERILATED_VCONTROL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcontrol_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontrol_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*6:0*/ control_tb__DOT__opcode;
    CData/*2:0*/ control_tb__DOT__funct3;
    CData/*6:0*/ control_tb__DOT__funct7;
    CData/*0:0*/ control_tb__DOT__reg_write_en;
    CData/*0:0*/ control_tb__DOT__alu_src;
    CData/*0:0*/ control_tb__DOT__mem_read;
    CData/*0:0*/ control_tb__DOT__mem_write;
    CData/*0:0*/ control_tb__DOT__mem_to_reg;
    CData/*0:0*/ control_tb__DOT__branch;
    CData/*0:0*/ control_tb__DOT__is_npu_matrix_mul;
    CData/*0:0*/ control_tb__DOT__is_npu_conv;
    CData/*3:0*/ control_tb__DOT__dut__DOT__alu_control_enum;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontrol_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontrol_tb___024root(Vcontrol_tb__Syms* symsp, const char* v__name);
    ~Vcontrol_tb___024root();
    VL_UNCOPYABLE(Vcontrol_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
