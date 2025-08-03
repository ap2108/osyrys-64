// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregfile_tb__Syms.h"


VL_ATTR_COLD void Vregfile_tb___024root__trace_init_sub__TOP__0(Vregfile_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("regfile_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"address1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"address2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"address3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+82,0,"read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"write_enable_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"write_enable_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"write_addr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"write_addr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+9,0,"write_data_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+11,0,"write_data_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+13,0,"ext_address1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"ext_address2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+86,0,"ext_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"ext_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"reg_pending_writes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+4,0,"address3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+82,0,"read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+5,0,"write_enable_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"write_addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+9,0,"write_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+6,0,"write_enable_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"write_addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+11,0,"write_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+13,0,"ext_address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"ext_address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+86,0,"ext_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+88,0,"ext_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+15,0,"reg_pending_writes",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+16+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+15,0,"scoreboard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_init_top(Vregfile_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_init_top\n"); );
    // Body
    Vregfile_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vregfile_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vregfile_tb___024root__trace_register(Vregfile_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vregfile_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vregfile_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vregfile_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vregfile_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_const_0\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_full_0\n"); );
    // Init
    Vregfile_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregfile_tb___024root*>(voidSelf);
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vregfile_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vregfile_tb___024root__trace_full_0_sub_0(Vregfile_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregfile_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregfile_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->regfile_tb__DOT__rst_n));
    bufp->fullCData(oldp+2,(vlSelf->regfile_tb__DOT__address1),5);
    bufp->fullCData(oldp+3,(vlSelf->regfile_tb__DOT__address2),5);
    bufp->fullCData(oldp+4,(vlSelf->regfile_tb__DOT__address3),5);
    bufp->fullBit(oldp+5,(vlSelf->regfile_tb__DOT__write_enable_a));
    bufp->fullBit(oldp+6,(vlSelf->regfile_tb__DOT__write_enable_b));
    bufp->fullCData(oldp+7,(vlSelf->regfile_tb__DOT__write_addr_a),5);
    bufp->fullCData(oldp+8,(vlSelf->regfile_tb__DOT__write_addr_b),5);
    bufp->fullQData(oldp+9,(vlSelf->regfile_tb__DOT__write_data_a),64);
    bufp->fullQData(oldp+11,(vlSelf->regfile_tb__DOT__write_data_b),64);
    bufp->fullCData(oldp+13,(vlSelf->regfile_tb__DOT__ext_address1),5);
    bufp->fullCData(oldp+14,(vlSelf->regfile_tb__DOT__ext_address2),5);
    bufp->fullIData(oldp+15,(vlSelf->regfile_tb__DOT__uut__DOT__scoreboard),32);
    bufp->fullQData(oldp+16,(vlSelf->regfile_tb__DOT__uut__DOT__registers[0]),64);
    bufp->fullQData(oldp+18,(vlSelf->regfile_tb__DOT__uut__DOT__registers[1]),64);
    bufp->fullQData(oldp+20,(vlSelf->regfile_tb__DOT__uut__DOT__registers[2]),64);
    bufp->fullQData(oldp+22,(vlSelf->regfile_tb__DOT__uut__DOT__registers[3]),64);
    bufp->fullQData(oldp+24,(vlSelf->regfile_tb__DOT__uut__DOT__registers[4]),64);
    bufp->fullQData(oldp+26,(vlSelf->regfile_tb__DOT__uut__DOT__registers[5]),64);
    bufp->fullQData(oldp+28,(vlSelf->regfile_tb__DOT__uut__DOT__registers[6]),64);
    bufp->fullQData(oldp+30,(vlSelf->regfile_tb__DOT__uut__DOT__registers[7]),64);
    bufp->fullQData(oldp+32,(vlSelf->regfile_tb__DOT__uut__DOT__registers[8]),64);
    bufp->fullQData(oldp+34,(vlSelf->regfile_tb__DOT__uut__DOT__registers[9]),64);
    bufp->fullQData(oldp+36,(vlSelf->regfile_tb__DOT__uut__DOT__registers[10]),64);
    bufp->fullQData(oldp+38,(vlSelf->regfile_tb__DOT__uut__DOT__registers[11]),64);
    bufp->fullQData(oldp+40,(vlSelf->regfile_tb__DOT__uut__DOT__registers[12]),64);
    bufp->fullQData(oldp+42,(vlSelf->regfile_tb__DOT__uut__DOT__registers[13]),64);
    bufp->fullQData(oldp+44,(vlSelf->regfile_tb__DOT__uut__DOT__registers[14]),64);
    bufp->fullQData(oldp+46,(vlSelf->regfile_tb__DOT__uut__DOT__registers[15]),64);
    bufp->fullQData(oldp+48,(vlSelf->regfile_tb__DOT__uut__DOT__registers[16]),64);
    bufp->fullQData(oldp+50,(vlSelf->regfile_tb__DOT__uut__DOT__registers[17]),64);
    bufp->fullQData(oldp+52,(vlSelf->regfile_tb__DOT__uut__DOT__registers[18]),64);
    bufp->fullQData(oldp+54,(vlSelf->regfile_tb__DOT__uut__DOT__registers[19]),64);
    bufp->fullQData(oldp+56,(vlSelf->regfile_tb__DOT__uut__DOT__registers[20]),64);
    bufp->fullQData(oldp+58,(vlSelf->regfile_tb__DOT__uut__DOT__registers[21]),64);
    bufp->fullQData(oldp+60,(vlSelf->regfile_tb__DOT__uut__DOT__registers[22]),64);
    bufp->fullQData(oldp+62,(vlSelf->regfile_tb__DOT__uut__DOT__registers[23]),64);
    bufp->fullQData(oldp+64,(vlSelf->regfile_tb__DOT__uut__DOT__registers[24]),64);
    bufp->fullQData(oldp+66,(vlSelf->regfile_tb__DOT__uut__DOT__registers[25]),64);
    bufp->fullQData(oldp+68,(vlSelf->regfile_tb__DOT__uut__DOT__registers[26]),64);
    bufp->fullQData(oldp+70,(vlSelf->regfile_tb__DOT__uut__DOT__registers[27]),64);
    bufp->fullQData(oldp+72,(vlSelf->regfile_tb__DOT__uut__DOT__registers[28]),64);
    bufp->fullQData(oldp+74,(vlSelf->regfile_tb__DOT__uut__DOT__registers[29]),64);
    bufp->fullQData(oldp+76,(vlSelf->regfile_tb__DOT__uut__DOT__registers[30]),64);
    bufp->fullQData(oldp+78,(vlSelf->regfile_tb__DOT__uut__DOT__registers[31]),64);
    bufp->fullIData(oldp+80,(vlSelf->regfile_tb__DOT__uut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+81,(vlSelf->regfile_tb__DOT__clk));
    bufp->fullQData(oldp+82,(((0U == (IData)(vlSelf->regfile_tb__DOT__address1))
                               ? 0ULL : vlSelf->regfile_tb__DOT__uut__DOT__registers
                              [vlSelf->regfile_tb__DOT__address1])),64);
    bufp->fullQData(oldp+84,(((0U == (IData)(vlSelf->regfile_tb__DOT__address2))
                               ? 0ULL : vlSelf->regfile_tb__DOT__uut__DOT__registers
                              [vlSelf->regfile_tb__DOT__address2])),64);
    bufp->fullQData(oldp+86,(((0U == (IData)(vlSelf->regfile_tb__DOT__ext_address1))
                               ? 0ULL : vlSelf->regfile_tb__DOT__uut__DOT__registers
                              [vlSelf->regfile_tb__DOT__ext_address1])),64);
    bufp->fullQData(oldp+88,(((0U == (IData)(vlSelf->regfile_tb__DOT__ext_address2))
                               ? 0ULL : vlSelf->regfile_tb__DOT__uut__DOT__registers
                              [vlSelf->regfile_tb__DOT__ext_address2])),64);
}
