// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile_tb__Syms.h"


void Vregfile_tb___024root__trace_chg_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregfile_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_chg_0\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregfile_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vregfile_tb___024root__trace_chg_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->regfile_tb__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelf->regfile_tb__DOT__address1),5);
        bufp->chgCData(oldp+2,(vlSelf->regfile_tb__DOT__address2),5);
        bufp->chgCData(oldp+3,(vlSelf->regfile_tb__DOT__address3),5);
        bufp->chgBit(oldp+4,(vlSelf->regfile_tb__DOT__write_enable_a));
        bufp->chgBit(oldp+5,(vlSelf->regfile_tb__DOT__write_enable_b));
        bufp->chgCData(oldp+6,(vlSelf->regfile_tb__DOT__write_addr_a),5);
        bufp->chgCData(oldp+7,(vlSelf->regfile_tb__DOT__write_addr_b),5);
        bufp->chgQData(oldp+8,(vlSelf->regfile_tb__DOT__write_data_a),64);
        bufp->chgQData(oldp+10,(vlSelf->regfile_tb__DOT__write_data_b),64);
        bufp->chgCData(oldp+12,(vlSelf->regfile_tb__DOT__ext_address1),5);
        bufp->chgCData(oldp+13,(vlSelf->regfile_tb__DOT__ext_address2),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+14,(vlSelf->regfile_tb__DOT__uut__DOT__scoreboard),32);
        bufp->chgQData(oldp+15,(vlSelf->regfile_tb__DOT__uut__DOT__registers[0]),64);
        bufp->chgQData(oldp+17,(vlSelf->regfile_tb__DOT__uut__DOT__registers[1]),64);
        bufp->chgQData(oldp+19,(vlSelf->regfile_tb__DOT__uut__DOT__registers[2]),64);
        bufp->chgQData(oldp+21,(vlSelf->regfile_tb__DOT__uut__DOT__registers[3]),64);
        bufp->chgQData(oldp+23,(vlSelf->regfile_tb__DOT__uut__DOT__registers[4]),64);
        bufp->chgQData(oldp+25,(vlSelf->regfile_tb__DOT__uut__DOT__registers[5]),64);
        bufp->chgQData(oldp+27,(vlSelf->regfile_tb__DOT__uut__DOT__registers[6]),64);
        bufp->chgQData(oldp+29,(vlSelf->regfile_tb__DOT__uut__DOT__registers[7]),64);
        bufp->chgQData(oldp+31,(vlSelf->regfile_tb__DOT__uut__DOT__registers[8]),64);
        bufp->chgQData(oldp+33,(vlSelf->regfile_tb__DOT__uut__DOT__registers[9]),64);
        bufp->chgQData(oldp+35,(vlSelf->regfile_tb__DOT__uut__DOT__registers[10]),64);
        bufp->chgQData(oldp+37,(vlSelf->regfile_tb__DOT__uut__DOT__registers[11]),64);
        bufp->chgQData(oldp+39,(vlSelf->regfile_tb__DOT__uut__DOT__registers[12]),64);
        bufp->chgQData(oldp+41,(vlSelf->regfile_tb__DOT__uut__DOT__registers[13]),64);
        bufp->chgQData(oldp+43,(vlSelf->regfile_tb__DOT__uut__DOT__registers[14]),64);
        bufp->chgQData(oldp+45,(vlSelf->regfile_tb__DOT__uut__DOT__registers[15]),64);
        bufp->chgQData(oldp+47,(vlSelf->regfile_tb__DOT__uut__DOT__registers[16]),64);
        bufp->chgQData(oldp+49,(vlSelf->regfile_tb__DOT__uut__DOT__registers[17]),64);
        bufp->chgQData(oldp+51,(vlSelf->regfile_tb__DOT__uut__DOT__registers[18]),64);
        bufp->chgQData(oldp+53,(vlSelf->regfile_tb__DOT__uut__DOT__registers[19]),64);
        bufp->chgQData(oldp+55,(vlSelf->regfile_tb__DOT__uut__DOT__registers[20]),64);
        bufp->chgQData(oldp+57,(vlSelf->regfile_tb__DOT__uut__DOT__registers[21]),64);
        bufp->chgQData(oldp+59,(vlSelf->regfile_tb__DOT__uut__DOT__registers[22]),64);
        bufp->chgQData(oldp+61,(vlSelf->regfile_tb__DOT__uut__DOT__registers[23]),64);
        bufp->chgQData(oldp+63,(vlSelf->regfile_tb__DOT__uut__DOT__registers[24]),64);
        bufp->chgQData(oldp+65,(vlSelf->regfile_tb__DOT__uut__DOT__registers[25]),64);
        bufp->chgQData(oldp+67,(vlSelf->regfile_tb__DOT__uut__DOT__registers[26]),64);
        bufp->chgQData(oldp+69,(vlSelf->regfile_tb__DOT__uut__DOT__registers[27]),64);
        bufp->chgQData(oldp+71,(vlSelf->regfile_tb__DOT__uut__DOT__registers[28]),64);
        bufp->chgQData(oldp+73,(vlSelf->regfile_tb__DOT__uut__DOT__registers[29]),64);
        bufp->chgQData(oldp+75,(vlSelf->regfile_tb__DOT__uut__DOT__registers[30]),64);
        bufp->chgQData(oldp+77,(vlSelf->regfile_tb__DOT__uut__DOT__registers[31]),64);
        bufp->chgIData(oldp+79,(vlSelf->regfile_tb__DOT__uut__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+80,(vlSelf->regfile_tb__DOT__clk));
    bufp->chgQData(oldp+81,(((0U == (IData)(vlSelf->regfile_tb__DOT__address1))
                              ? 0ULL : vlSelf->regfile_tb__DOT__uut__DOT__registers
                             [vlSelf->regfile_tb__DOT__address1])),64);
    bufp->chgQData(oldp+83,(((0U == (IData)(vlSelf->regfile_tb__DOT__address2))
                              ? 0ULL : vlSelf->regfile_tb__DOT__uut__DOT__registers
                             [vlSelf->regfile_tb__DOT__address2])),64);
    bufp->chgQData(oldp+85,(((0U == (IData)(vlSelf->regfile_tb__DOT__ext_address1))
                              ? 0ULL : vlSelf->regfile_tb__DOT__uut__DOT__registers
                             [vlSelf->regfile_tb__DOT__ext_address1])),64);
    bufp->chgQData(oldp+87,(((0U == (IData)(vlSelf->regfile_tb__DOT__ext_address2))
                              ? 0ULL : vlSelf->regfile_tb__DOT__uut__DOT__registers
                             [vlSelf->regfile_tb__DOT__ext_address2])),64);
}

void Vregfile_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_cleanup\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
