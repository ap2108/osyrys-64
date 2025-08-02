// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhazard_unit_tb.h for the primary calling header

#include "Vhazard_unit_tb__pch.h"
#include "Vhazard_unit_tb__Syms.h"
#include "Vhazard_unit_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vhazard_unit_tb___024root___eval_initial__TOP__Vtiming__0(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x745f7462U;
    __Vtemp_1[2U] = 0x5f756e69U;
    __Vtemp_1[3U] = 0x7a617264U;
    __Vtemp_1[4U] = 0x6861U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->hazard_unit_tb__DOT__clk = 0U;
    vlSelf->hazard_unit_tb__DOT__rst_n = 0U;
    vlSelf->hazard_unit_tb__DOT__id_rs1 = 0U;
    vlSelf->hazard_unit_tb__DOT__id_rs2 = 0U;
    vlSelf->hazard_unit_tb__DOT__ex_rd = 0U;
    vlSelf->hazard_unit_tb__DOT__ex_reg_write = 0U;
    vlSelf->hazard_unit_tb__DOT__ex_mem_read = 0U;
    vlSelf->hazard_unit_tb__DOT__mem_rd = 0U;
    vlSelf->hazard_unit_tb__DOT__mem_reg_write = 0U;
    vlSelf->hazard_unit_tb__DOT__wb_rd = 0U;
    vlSelf->hazard_unit_tb__DOT__wb_reg_write = 0U;
    vlSelf->hazard_unit_tb__DOT__branch_mispredict = 0U;
    vlSelf->hazard_unit_tb__DOT__reg_write_bitmap = 0U;
    vlSelf->hazard_unit_tb__DOT__scoreboard_enable = 0U;
    vlSelf->hazard_unit_tb__DOT__id_valid_in = 1U;
    vlSelf->hazard_unit_tb__DOT__ex_valid_in = 1U;
    vlSelf->hazard_unit_tb__DOT__if_valid_in = 1U;
    co_await vlSelf->__VdlySched.delay(0x2ee0ULL, nullptr, 
                                       "hazard_unit_tb.sv", 
                                       87);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->hazard_unit_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "hazard_unit_tb.sv", 
                                       90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->hazard_unit_tb__DOT__id_rs1 = 1U;
    vlSelf->hazard_unit_tb__DOT__id_rs2 = 2U;
    vlSelf->hazard_unit_tb__DOT__ex_rd = 3U;
    vlSelf->hazard_unit_tb__DOT__ex_reg_write = 1U;
    vlSelf->hazard_unit_tb__DOT__ex_mem_read = 0U;
    vlSelf->hazard_unit_tb__DOT__mem_rd = 4U;
    vlSelf->hazard_unit_tb__DOT__mem_reg_write = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "hazard_unit_tb.sv", 
                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("TC1 | forward_a = %b, forward_b = %b, stall = %b, flush = %b\n",
              2,vlSelf->hazard_unit_tb__DOT__forward_a,
              2,(IData)(vlSelf->hazard_unit_tb__DOT__forward_b),
              1,vlSelf->hazard_unit_tb__DOT__stall,
              1,(IData)(vlSelf->hazard_unit_tb__DOT__flush));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "hazard_unit_tb.sv", 
                                       103);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->hazard_unit_tb__DOT__ex_rd = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "hazard_unit_tb.sv", 
                                       105);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("TC2 | forward_a = %b, forward_b = %b, stall = %b, flush = %b\n",
              2,vlSelf->hazard_unit_tb__DOT__forward_a,
              2,(IData)(vlSelf->hazard_unit_tb__DOT__forward_b),
              1,vlSelf->hazard_unit_tb__DOT__stall,
              1,(IData)(vlSelf->hazard_unit_tb__DOT__flush));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "hazard_unit_tb.sv", 
                                       109);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->hazard_unit_tb__DOT__ex_mem_read = 1U;
    vlSelf->hazard_unit_tb__DOT__ex_rd = 2U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "hazard_unit_tb.sv", 
                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("TC3 | forward_a = %b, forward_b = %b, stall = %b, flush = %b\n",
              2,vlSelf->hazard_unit_tb__DOT__forward_a,
              2,(IData)(vlSelf->hazard_unit_tb__DOT__forward_b),
              1,vlSelf->hazard_unit_tb__DOT__stall,
              1,(IData)(vlSelf->hazard_unit_tb__DOT__flush));
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "hazard_unit_tb.sv", 
                                       116);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->hazard_unit_tb__DOT__branch_mispredict = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "hazard_unit_tb.sv", 
                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("TC4 | forward_a = %b, forward_b = %b, stall = %b, flush = %b\n",
              2,vlSelf->hazard_unit_tb__DOT__forward_a,
              2,(IData)(vlSelf->hazard_unit_tb__DOT__forward_b),
              1,vlSelf->hazard_unit_tb__DOT__stall,
              1,(IData)(vlSelf->hazard_unit_tb__DOT__flush));
    co_await vlSelf->__VdlySched.delay(0xf4240ULL, 
                                       nullptr, "hazard_unit_tb.sv", 
                                       122);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("hazard_unit_tb.sv", 123, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit_tb___024root___dump_triggers__act(Vhazard_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhazard_unit_tb___024root___eval_triggers__act(Vhazard_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhazard_unit_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
