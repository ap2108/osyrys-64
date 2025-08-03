// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vforward_mux_tb.h for the primary calling header

#include "Vforward_mux_tb__pch.h"
#include "Vforward_mux_tb__Syms.h"
#include "Vforward_mux_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vforward_mux_tb___024root___eval_initial__TOP__Vtiming__0(Vforward_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x785f7462U;
    __Vtemp_1[2U] = 0x645f6d75U;
    __Vtemp_1[3U] = 0x72776172U;
    __Vtemp_1[4U] = 0x666fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->forward_mux_tb__DOT__rs1_val_in = 0xaaaaaaaaaaaaaaaaULL;
    vlSelf->forward_mux_tb__DOT__rs2_val_in = 0xbbbbbbbbbbbbbbbbULL;
    vlSelf->forward_mux_tb__DOT__ex_result = 0x1111111111111111ULL;
    vlSelf->forward_mux_tb__DOT__mem_result = 0x2222222222222222ULL;
    vlSelf->forward_mux_tb__DOT__wb_result = 0x3333333333333333ULL;
    vlSelf->forward_mux_tb__DOT__forward_a = 0U;
    vlSelf->forward_mux_tb__DOT__forward_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "forward_mux_tb.sv", 
                                       36);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->forward_mux_tb__DOT__forward_a = 1U;
    vlSelf->forward_mux_tb__DOT__forward_b = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "forward_mux_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->forward_mux_tb__DOT__forward_a = 2U;
    vlSelf->forward_mux_tb__DOT__forward_b = 2U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "forward_mux_tb.sv", 
                                       46);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->forward_mux_tb__DOT__forward_a = 3U;
    vlSelf->forward_mux_tb__DOT__forward_b = 3U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "forward_mux_tb.sv", 
                                       51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->forward_mux_tb__DOT__forward_a = 0U;
    vlSelf->forward_mux_tb__DOT__forward_b = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "forward_mux_tb.sv", 
                                       56);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("forward_mux_tb.sv", 58, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vforward_mux_tb___024root___dump_triggers__act(Vforward_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vforward_mux_tb___024root___eval_triggers__act(Vforward_mux_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vforward_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vforward_mux_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vforward_mux_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
