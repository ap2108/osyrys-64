// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhazard_unit_tb__Syms.h"


void Vhazard_unit_tb___024root__trace_chg_0_sub_0(Vhazard_unit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhazard_unit_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root__trace_chg_0\n"); );
    // Init
    Vhazard_unit_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhazard_unit_tb___024root*>(voidSelf);
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhazard_unit_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhazard_unit_tb___024root__trace_chg_0_sub_0(Vhazard_unit_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->hazard_unit_tb__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelf->hazard_unit_tb__DOT__id_rs1),5);
        bufp->chgCData(oldp+2,(vlSelf->hazard_unit_tb__DOT__id_rs2),5);
        bufp->chgCData(oldp+3,(vlSelf->hazard_unit_tb__DOT__ex_rd),5);
        bufp->chgBit(oldp+4,(vlSelf->hazard_unit_tb__DOT__ex_reg_write));
        bufp->chgBit(oldp+5,(vlSelf->hazard_unit_tb__DOT__ex_mem_read));
        bufp->chgCData(oldp+6,(vlSelf->hazard_unit_tb__DOT__mem_rd),5);
        bufp->chgBit(oldp+7,(vlSelf->hazard_unit_tb__DOT__mem_reg_write));
        bufp->chgCData(oldp+8,(vlSelf->hazard_unit_tb__DOT__wb_rd),5);
        bufp->chgBit(oldp+9,(vlSelf->hazard_unit_tb__DOT__wb_reg_write));
        bufp->chgBit(oldp+10,(vlSelf->hazard_unit_tb__DOT__branch_mispredict));
        bufp->chgIData(oldp+11,(vlSelf->hazard_unit_tb__DOT__reg_write_bitmap),32);
        bufp->chgBit(oldp+12,(vlSelf->hazard_unit_tb__DOT__scoreboard_enable));
        bufp->chgBit(oldp+13,(vlSelf->hazard_unit_tb__DOT__id_valid_in));
        bufp->chgBit(oldp+14,(vlSelf->hazard_unit_tb__DOT__ex_valid_in));
        bufp->chgBit(oldp+15,(vlSelf->hazard_unit_tb__DOT__if_valid_in));
        bufp->chgBit(oldp+16,(((~ (IData)(vlSelf->hazard_unit_tb__DOT__branch_mispredict)) 
                               & (IData)(vlSelf->hazard_unit_tb__DOT__ex_valid_in))));
    }
    bufp->chgBit(oldp+17,(vlSelf->hazard_unit_tb__DOT__clk));
    bufp->chgCData(oldp+18,(vlSelf->hazard_unit_tb__DOT__forward_a),2);
    bufp->chgCData(oldp+19,(vlSelf->hazard_unit_tb__DOT__forward_b),2);
    bufp->chgBit(oldp+20,(vlSelf->hazard_unit_tb__DOT__stall));
    bufp->chgBit(oldp+21,(((~ (IData)(vlSelf->hazard_unit_tb__DOT__stall)) 
                           & (IData)(vlSelf->hazard_unit_tb__DOT__id_valid_in))));
    bufp->chgBit(oldp+22,(((~ (IData)(vlSelf->hazard_unit_tb__DOT__stall)) 
                           & (IData)(vlSelf->hazard_unit_tb__DOT__if_valid_in))));
}

void Vhazard_unit_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit_tb___024root__trace_cleanup\n"); );
    // Init
    Vhazard_unit_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhazard_unit_tb___024root*>(voidSelf);
    Vhazard_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
