// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_tb.h for the primary calling header

#ifndef VERILATED_VCPU_TB___024ROOT_H_
#define VERILATED_VCPU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_tb__DOT__clk;
    CData/*0:0*/ cpu_tb__DOT__rst_n;
    CData/*0:0*/ cpu_tb__DOT__npu_done;
    CData/*2:0*/ cpu_tb__DOT__uut__DOT__imm_source;
    CData/*0:0*/ cpu_tb__DOT__uut__DOT__reg_write_en;
    CData/*0:0*/ cpu_tb__DOT__uut__DOT__mem_read;
    CData/*0:0*/ cpu_tb__DOT__uut__DOT__mem_write;
    CData/*0:0*/ cpu_tb__DOT__uut__DOT__branch;
    CData/*0:0*/ cpu_tb__DOT__uut__DOT__alu_src;
    CData/*0:0*/ cpu_tb__DOT__uut__DOT__mem_to_reg;
    CData/*0:0*/ cpu_tb__DOT__uut__DOT__is_npu_matrix_mul;
    CData/*0:0*/ cpu_tb__DOT__uut__DOT__is_npu_conv;
    CData/*3:0*/ cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum;
    CData/*0:0*/ __Vdlyvval__cpu_tb__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard;
    IData/*31:0*/ cpu_tb__DOT__uut__DOT__regfile_unit__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ cpu_tb__DOT__instr;
    QData/*63:0*/ cpu_tb__DOT__read_data;
    QData/*63:0*/ cpu_tb__DOT__write_data;
    QData/*63:0*/ cpu_tb__DOT__uut__DOT__pc_reg;
    QData/*63:0*/ cpu_tb__DOT__uut__DOT__pc_next;
    QData/*63:0*/ cpu_tb__DOT__uut__DOT__imm_ext;
    QData/*63:0*/ cpu_tb__DOT__uut__DOT__alu_in2;
    QData/*63:0*/ cpu_tb__DOT__uut__DOT__alu_out;
    VlUnpacked<QData/*63:0*/, 32> cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_tb___024root(Vcpu_tb__Syms* symsp, const char* v__name);
    ~Vcpu_tb___024root();
    VL_UNCOPYABLE(Vcpu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
