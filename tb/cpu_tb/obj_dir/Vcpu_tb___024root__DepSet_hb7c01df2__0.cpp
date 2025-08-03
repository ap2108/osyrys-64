// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"
#include "Vcpu_tb__Syms.h"
#include "Vcpu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x755f7462U;
    __Vtemp_1[2U] = 0x6370U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->cpu_tb__DOT__clk = 0U;
    vlSelf->cpu_tb__DOT__rst_n = 0U;
    vlSelf->cpu_tb__DOT__instr = 0ULL;
    vlSelf->cpu_tb__DOT__read_data = 0ULL;
    vlSelf->cpu_tb__DOT__npu_done = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "cpu_tb.sv", 
                                       48);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->cpu_tb__DOT__rst_n = 1U;
    vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[6U] = 0x19ULL;
    vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[7U] = 0x11ULL;
    vlSelf->cpu_tb__DOT__instr = 0x730533ULL;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "cpu_tb.sv", 
                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("x5 = %0# (Expected: 42)\n",64,vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
              [5U]);
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "cpu_tb.sv", 
                                       66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("cpu_tb.sv", 67, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_tb___024root___eval_triggers__act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->cpu_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->cpu_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->cpu_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelf->cpu_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__rst_n__0 
        = vlSelf->cpu_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcpu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
