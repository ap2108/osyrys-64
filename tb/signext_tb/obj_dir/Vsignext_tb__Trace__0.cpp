// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsignext_tb__Syms.h"


void Vsignext_tb___024root__trace_chg_0_sub_0(Vsignext_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsignext_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root__trace_chg_0\n"); );
    // Init
    Vsignext_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsignext_tb___024root*>(voidSelf);
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsignext_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsignext_tb___024root__trace_chg_0_sub_0(Vsignext_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->signext_tb__DOT__raw_instr),32);
        bufp->chgCData(oldp+1,(vlSelf->signext_tb__DOT__imm_source),3);
        bufp->chgQData(oldp+2,(((4U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                 ? ((2U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                     ? 0ULL : ((1U 
                                                & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                                ? 0ULL
                                                : (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->signext_tb__DOT__raw_instr)))))
                                 : ((2U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                     ? ((1U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                         ? ((0x7ffffffffff00000ULL 
                                             & ((- (QData)((IData)(
                                                                   (vlSelf->signext_tb__DOT__raw_instr 
                                                                    >> 0x1fU)))) 
                                                << 0x14U)) 
                                            | (QData)((IData)(
                                                              ((0xff000U 
                                                                & vlSelf->signext_tb__DOT__raw_instr) 
                                                               | ((0x800U 
                                                                   & (vlSelf->signext_tb__DOT__raw_instr 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->signext_tb__DOT__raw_instr 
                                                                        >> 0x14U)))))))
                                         : ((0x7ffffffffffff000ULL 
                                             & ((- (QData)((IData)(
                                                                   (vlSelf->signext_tb__DOT__raw_instr 
                                                                    >> 0x1fU)))) 
                                                << 0xcU)) 
                                            | (QData)((IData)(
                                                              ((0x800U 
                                                                & (vlSelf->signext_tb__DOT__raw_instr 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->signext_tb__DOT__raw_instr 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->signext_tb__DOT__raw_instr 
                                                                        >> 7U))))))))
                                     : ((1U & (IData)(vlSelf->signext_tb__DOT__imm_source))
                                         ? (((- (QData)((IData)(
                                                                (vlSelf->signext_tb__DOT__raw_instr 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0xfe0U 
                                                                & (vlSelf->signext_tb__DOT__raw_instr 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlSelf->signext_tb__DOT__raw_instr 
                                                                     >> 7U))))))
                                         : (((- (QData)((IData)(
                                                                (vlSelf->signext_tb__DOT__raw_instr 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              (vlSelf->signext_tb__DOT__raw_instr 
                                                               >> 0x14U)))))))),64);
        bufp->chgQData(oldp+4,((((- (QData)((IData)(
                                                    (vlSelf->signext_tb__DOT__raw_instr 
                                                     >> 0x1fU)))) 
                                 << 0xcU) | (QData)((IData)(
                                                            (vlSelf->signext_tb__DOT__raw_instr 
                                                             >> 0x14U))))),64);
        bufp->chgQData(oldp+6,((((- (QData)((IData)(
                                                    (vlSelf->signext_tb__DOT__raw_instr 
                                                     >> 0x1fU)))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((0xfe0U 
                                                              & (vlSelf->signext_tb__DOT__raw_instr 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelf->signext_tb__DOT__raw_instr 
                                                                   >> 7U))))))),64);
        bufp->chgQData(oldp+8,(((0x7ffffffffffff000ULL 
                                 & ((- (QData)((IData)(
                                                       (vlSelf->signext_tb__DOT__raw_instr 
                                                        >> 0x1fU)))) 
                                    << 0xcU)) | (QData)((IData)(
                                                                ((0x800U 
                                                                  & (vlSelf->signext_tb__DOT__raw_instr 
                                                                     << 4U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->signext_tb__DOT__raw_instr 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->signext_tb__DOT__raw_instr 
                                                                          >> 7U)))))))),64);
        bufp->chgQData(oldp+10,(((0x7ffffffffff00000ULL 
                                  & ((- (QData)((IData)(
                                                        (vlSelf->signext_tb__DOT__raw_instr 
                                                         >> 0x1fU)))) 
                                     << 0x14U)) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->signext_tb__DOT__raw_instr) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->signext_tb__DOT__raw_instr 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->signext_tb__DOT__raw_instr 
                                                                            >> 0x14U)))))))),64);
        bufp->chgQData(oldp+12,((QData)((IData)((0xfffff000U 
                                                 & vlSelf->signext_tb__DOT__raw_instr)))),64);
    }
}

void Vsignext_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root__trace_cleanup\n"); );
    // Init
    Vsignext_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsignext_tb___024root*>(voidSelf);
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
