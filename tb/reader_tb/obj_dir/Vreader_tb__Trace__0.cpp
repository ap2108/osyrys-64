// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vreader_tb__Syms.h"


void Vreader_tb___024root__trace_chg_0_sub_0(Vreader_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vreader_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_chg_0\n"); );
    // Init
    Vreader_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreader_tb___024root*>(voidSelf);
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vreader_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vreader_tb___024root__trace_chg_0_sub_0(Vreader_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->reader_tb__DOT__rst));
        bufp->chgQData(oldp+1,(vlSelf->reader_tb__DOT__mem_data),64);
        bufp->chgCData(oldp+3,(vlSelf->reader_tb__DOT__be_mask),8);
        bufp->chgCData(oldp+4,(vlSelf->reader_tb__DOT__f3),3);
        bufp->chgBit(oldp+5,(vlSelf->reader_tb__DOT__is_load_64));
        bufp->chgBit(oldp+6,(vlSelf->reader_tb__DOT__valid_in));
        bufp->chgBit(oldp+7,((1U & (~ ((IData)(vlSelf->reader_tb__DOT__f3) 
                                       >> 2U)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+8,((1U & (~ (IData)(vlSelf->reader_tb__DOT__dut__DOT__load_pending)))));
        bufp->chgBit(oldp+9,(vlSelf->reader_tb__DOT__dut__DOT__load_pending));
        bufp->chgBit(oldp+10,(vlSelf->reader_tb__DOT__valid));
    }
    bufp->chgBit(oldp+11,(vlSelf->reader_tb__DOT__clk));
    bufp->chgQData(oldp+12,(((2U & (IData)(vlSelf->reader_tb__DOT__f3))
                              ? ((1U & (IData)(vlSelf->reader_tb__DOT__f3))
                                  ? ((IData)(vlSelf->reader_tb__DOT__is_load_64)
                                      ? vlSelf->reader_tb__DOT__dut__DOT__raw_data
                                      : 0ULL) : ((4U 
                                                  & (IData)(vlSelf->reader_tb__DOT__f3))
                                                  ? (QData)((IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->reader_tb__DOT__dut__DOT__raw_data 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data)))))
                              : ((1U & (IData)(vlSelf->reader_tb__DOT__f3))
                                  ? ((4U & (IData)(vlSelf->reader_tb__DOT__f3))
                                      ? (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))
                                      : (((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->reader_tb__DOT__dut__DOT__raw_data 
                                                                         >> 0xfU)))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))))
                                  : ((4U & (IData)(vlSelf->reader_tb__DOT__f3))
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))
                                      : (((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->reader_tb__DOT__dut__DOT__raw_data 
                                                                         >> 7U)))))) 
                                          << 8U) | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->reader_tb__DOT__dut__DOT__raw_data))))))))),64);
    bufp->chgQData(oldp+14,(vlSelf->reader_tb__DOT__dut__DOT__masked_data),64);
    bufp->chgQData(oldp+16,(vlSelf->reader_tb__DOT__dut__DOT__raw_data),64);
}

void Vreader_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreader_tb___024root__trace_cleanup\n"); );
    // Init
    Vreader_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreader_tb___024root*>(voidSelf);
    Vreader_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
