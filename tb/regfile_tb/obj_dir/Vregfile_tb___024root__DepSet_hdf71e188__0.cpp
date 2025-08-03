// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb__Syms.h"
#include "Vregfile_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vregfile_tb___024root___eval_initial__TOP__Vtiming__0(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x655f7462U;
    __Vtemp_1[2U] = 0x6766696cU;
    __Vtemp_1[3U] = 0x7265U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->regfile_tb__DOT__address1 = 0U;
    vlSelf->regfile_tb__DOT__address2 = 0U;
    vlSelf->regfile_tb__DOT__address3 = 0U;
    vlSelf->regfile_tb__DOT__write_enable_a = 0U;
    vlSelf->regfile_tb__DOT__write_enable_b = 0U;
    vlSelf->regfile_tb__DOT__write_addr_a = 0U;
    vlSelf->regfile_tb__DOT__write_data_a = 0ULL;
    vlSelf->regfile_tb__DOT__write_addr_b = 0U;
    vlSelf->regfile_tb__DOT__write_data_b = 0ULL;
    vlSelf->regfile_tb__DOT__ext_address1 = 0U;
    vlSelf->regfile_tb__DOT__ext_address2 = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       68);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__rst_n = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       69);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       72);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__write_enable_a = 1U;
    vlSelf->regfile_tb__DOT__write_addr_a = 5U;
    vlSelf->regfile_tb__DOT__write_data_a = 0xdeadbeefdeadbeefULL;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       76);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__write_enable_a = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__write_enable_b = 1U;
    vlSelf->regfile_tb__DOT__write_addr_b = 0xaU;
    vlSelf->regfile_tb__DOT__write_data_b = 0xcafef00dcafef00dULL;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__write_enable_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       88);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->regfile_tb__DOT__address1 = 5U;
    vlSelf->regfile_tb__DOT__address2 = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("CPU Read x5 = 0x%x (Expected: 0xdeadbeefdeadbeef)\nCPU Read x10 = 0x%x (Expected: 0xcafef00dcafef00d)\n",
              64,vlSelf->regfile_tb__DOT__read_data1,
              64,vlSelf->regfile_tb__DOT__read_data2);
    vlSelf->regfile_tb__DOT__ext_address1 = 5U;
    vlSelf->regfile_tb__DOT__ext_address2 = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("EXT Read x5 = 0x%x\nEXT Read x10 = 0x%x\nScoreboard: %b\n",
              64,vlSelf->regfile_tb__DOT__ext_data1,
              64,vlSelf->regfile_tb__DOT__ext_data2,
              32,vlSelf->regfile_tb__DOT__uut__DOT__scoreboard);
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "regfile_tb.sv", 
                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("regfile_tb.sv", 106, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregfile_tb___024root___dump_triggers__act(Vregfile_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vregfile_tb___024root___eval_triggers__act(Vregfile_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->regfile_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__regfile_tb__DOT__clk__0 
        = vlSelf->regfile_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregfile_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
