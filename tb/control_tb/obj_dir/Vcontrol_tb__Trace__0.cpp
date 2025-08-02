// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcontrol_tb__Syms.h"


void Vcontrol_tb___024root__trace_chg_0_sub_0(Vcontrol_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcontrol_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_chg_0\n"); );
    // Init
    Vcontrol_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_tb___024root*>(voidSelf);
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcontrol_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcontrol_tb___024root__trace_chg_0_sub_0(Vcontrol_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->control_tb__DOT__dut__DOT__alu_control_enum),4);
        bufp->chgBit(oldp+1,(vlSelf->control_tb__DOT__reg_write_en));
        bufp->chgBit(oldp+2,(vlSelf->control_tb__DOT__alu_src));
        bufp->chgBit(oldp+3,(vlSelf->control_tb__DOT__mem_read));
        bufp->chgBit(oldp+4,(vlSelf->control_tb__DOT__mem_write));
        bufp->chgBit(oldp+5,(vlSelf->control_tb__DOT__mem_to_reg));
        bufp->chgBit(oldp+6,(vlSelf->control_tb__DOT__branch));
        bufp->chgBit(oldp+7,(vlSelf->control_tb__DOT__is_npu_matrix_mul));
        bufp->chgBit(oldp+8,(vlSelf->control_tb__DOT__is_npu_conv));
    }
    bufp->chgCData(oldp+9,(vlSelf->control_tb__DOT__opcode),7);
    bufp->chgCData(oldp+10,(vlSelf->control_tb__DOT__funct3),3);
    bufp->chgCData(oldp+11,(vlSelf->control_tb__DOT__funct7),7);
}

void Vcontrol_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root__trace_cleanup\n"); );
    // Init
    Vcontrol_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcontrol_tb___024root*>(voidSelf);
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
