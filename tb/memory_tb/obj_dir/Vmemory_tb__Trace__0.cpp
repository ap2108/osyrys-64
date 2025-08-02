// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmemory_tb__Syms.h"


void Vmemory_tb___024root__trace_chg_0_sub_0(Vmemory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmemory_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root__trace_chg_0\n"); );
    // Init
    Vmemory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmemory_tb___024root*>(voidSelf);
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmemory_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmemory_tb___024root__trace_chg_0_sub_0(Vmemory_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->memory_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelf->memory_tb__DOT__cpu_valid));
        bufp->chgBit(oldp+2,(vlSelf->memory_tb__DOT__cpu_write_enable));
        bufp->chgQData(oldp+3,(vlSelf->memory_tb__DOT__cpu_address),64);
        bufp->chgQData(oldp+5,(vlSelf->memory_tb__DOT__cpu_write_data),64);
        bufp->chgCData(oldp+7,(vlSelf->memory_tb__DOT__cpu_byte_enable),8);
        bufp->chgBit(oldp+8,(vlSelf->memory_tb__DOT__npu_valid));
        bufp->chgBit(oldp+9,(vlSelf->memory_tb__DOT__npu_write_enable));
        bufp->chgQData(oldp+10,(vlSelf->memory_tb__DOT__npu_address),64);
        bufp->chgQData(oldp+12,(vlSelf->memory_tb__DOT__npu_write_data),64);
        bufp->chgCData(oldp+14,(vlSelf->memory_tb__DOT__npu_byte_enable),8);
        bufp->chgCData(oldp+15,(vlSelf->memory_tb__DOT__burst_len),4);
        bufp->chgBit(oldp+16,(vlSelf->memory_tb__DOT__burst_mode));
        bufp->chgIData(oldp+17,(vlSelf->memory_tb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+18,(vlSelf->memory_tb__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+19,(vlSelf->memory_tb__DOT__cpu_ready));
        bufp->chgQData(oldp+20,(vlSelf->memory_tb__DOT__cpu_read_data),64);
        bufp->chgBit(oldp+22,(vlSelf->memory_tb__DOT__npu_ready));
        bufp->chgQData(oldp+23,(vlSelf->memory_tb__DOT__npu_read_data),64);
        bufp->chgCData(oldp+25,(vlSelf->memory_tb__DOT__dut__DOT__state),2);
        bufp->chgCData(oldp+26,(vlSelf->memory_tb__DOT__dut__DOT__burst_cnt),4);
        bufp->chgQData(oldp+27,(vlSelf->memory_tb__DOT__dut__DOT__addr_latched),64);
        bufp->chgBit(oldp+29,(vlSelf->memory_tb__DOT__dut__DOT__is_write));
        bufp->chgBit(oldp+30,(vlSelf->memory_tb__DOT__dut__DOT__is_cpu));
        bufp->chgCData(oldp+31,(vlSelf->memory_tb__DOT__dut__DOT__latency_counter),2);
        bufp->chgIData(oldp+32,(vlSelf->memory_tb__DOT__dut__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+33,(vlSelf->memory_tb__DOT__dut__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+34,(vlSelf->memory_tb__DOT__dut__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+35,(vlSelf->memory_tb__DOT__dut__DOT__unnamedblk4__DOT__i),32);
    }
    bufp->chgBit(oldp+36,(vlSelf->memory_tb__DOT__clk));
    bufp->chgIData(oldp+37,(vlSelf->memory_tb__DOT__dut__DOT__unnamedblk5__DOT__i),32);
}

void Vmemory_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root__trace_cleanup\n"); );
    // Init
    Vmemory_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmemory_tb___024root*>(voidSelf);
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
