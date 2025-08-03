// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->cpu_tb__DOT__rst_n));
        bufp->chgQData(oldp+1,(vlSelf->cpu_tb__DOT__instr),64);
        bufp->chgQData(oldp+3,(vlSelf->cpu_tb__DOT__read_data),64);
        bufp->chgBit(oldp+5,(vlSelf->cpu_tb__DOT__npu_done));
        bufp->chgCData(oldp+6,((0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU)))),5);
        bufp->chgCData(oldp+7,((0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0x14U)))),5);
        bufp->chgCData(oldp+8,((0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 7U)))),5);
        bufp->chgCData(oldp+9,((0x7fU & (IData)(vlSelf->cpu_tb__DOT__instr))),7);
        bufp->chgCData(oldp+10,((7U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                               >> 0xcU)))),3);
        bufp->chgCData(oldp+11,((0x7fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                  >> 0x19U)))),7);
        bufp->chgIData(oldp+12,((IData)(vlSelf->cpu_tb__DOT__instr)),32);
        bufp->chgQData(oldp+13,((((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                 >> 0x1fU)))))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (0xfffU 
                                                              & (IData)(
                                                                        (vlSelf->cpu_tb__DOT__instr 
                                                                         >> 0x14U))))))),64);
        bufp->chgQData(oldp+15,((((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                 >> 0x1fU)))))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & ((IData)(
                                                                          (vlSelf->cpu_tb__DOT__instr 
                                                                           >> 0x19U)) 
                                                                  << 5U)) 
                                                              | (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->cpu_tb__DOT__instr 
                                                                            >> 7U)))))))),64);
        bufp->chgQData(oldp+17,(((0x7ffffffffffff000ULL 
                                  & ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->cpu_tb__DOT__instr 
                                                                    >> 0x1fU)))))) 
                                     << 0xcU)) | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & ((IData)(
                                                                              (vlSelf->cpu_tb__DOT__instr 
                                                                               >> 7U)) 
                                                                      << 0xbU)) 
                                                                  | ((0x7e0U 
                                                                      & ((IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x19U)) 
                                                                         << 5U)) 
                                                                     | (0x1eU 
                                                                        & ((IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 8U)) 
                                                                           << 1U)))))))),64);
        bufp->chgQData(oldp+19,(((0x7ffffffffff00000ULL 
                                  & ((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->cpu_tb__DOT__instr 
                                                                    >> 0x1fU)))))) 
                                     << 0x14U)) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & ((IData)(
                                                                               (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0xcU)) 
                                                                       << 0xcU)) 
                                                                   | ((0x800U 
                                                                       & ((IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x14U)) 
                                                                          << 0xbU)) 
                                                                      | (0x7feU 
                                                                         & ((IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x15U)) 
                                                                            << 1U)))))))),64);
        bufp->chgQData(oldp+21,((QData)((IData)(((IData)(
                                                         (vlSelf->cpu_tb__DOT__instr 
                                                          >> 0xcU)) 
                                                 << 0xcU)))),64);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[2U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+23,(((0U == (0x1fU & (IData)(
                                                         (vlSelf->cpu_tb__DOT__instr 
                                                          >> 0xfU))))
                                  ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                                 [(0x1fU & (IData)(
                                                   (vlSelf->cpu_tb__DOT__instr 
                                                    >> 0xfU)))])),64);
        bufp->chgQData(oldp+25,(((0U == (0x1fU & (IData)(
                                                         (vlSelf->cpu_tb__DOT__instr 
                                                          >> 0x14U))))
                                  ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                                 [(0x1fU & (IData)(
                                                   (vlSelf->cpu_tb__DOT__instr 
                                                    >> 0x14U)))])),64);
        bufp->chgQData(oldp+27,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0]),64);
        bufp->chgQData(oldp+29,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[1]),64);
        bufp->chgQData(oldp+31,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[2]),64);
        bufp->chgQData(oldp+33,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[3]),64);
        bufp->chgQData(oldp+35,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[4]),64);
        bufp->chgQData(oldp+37,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[5]),64);
        bufp->chgQData(oldp+39,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[6]),64);
        bufp->chgQData(oldp+41,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[7]),64);
        bufp->chgQData(oldp+43,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[8]),64);
        bufp->chgQData(oldp+45,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[9]),64);
        bufp->chgQData(oldp+47,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[10]),64);
        bufp->chgQData(oldp+49,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[11]),64);
        bufp->chgQData(oldp+51,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[12]),64);
        bufp->chgQData(oldp+53,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[13]),64);
        bufp->chgQData(oldp+55,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[14]),64);
        bufp->chgQData(oldp+57,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[15]),64);
        bufp->chgQData(oldp+59,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[16]),64);
        bufp->chgQData(oldp+61,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[17]),64);
        bufp->chgQData(oldp+63,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[18]),64);
        bufp->chgQData(oldp+65,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[19]),64);
        bufp->chgQData(oldp+67,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[20]),64);
        bufp->chgQData(oldp+69,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[21]),64);
        bufp->chgQData(oldp+71,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[22]),64);
        bufp->chgQData(oldp+73,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[23]),64);
        bufp->chgQData(oldp+75,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[24]),64);
        bufp->chgQData(oldp+77,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[25]),64);
        bufp->chgQData(oldp+79,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[26]),64);
        bufp->chgQData(oldp+81,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[27]),64);
        bufp->chgQData(oldp+83,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[28]),64);
        bufp->chgQData(oldp+85,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[29]),64);
        bufp->chgQData(oldp+87,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[30]),64);
        bufp->chgQData(oldp+89,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[31]),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+91,(vlSelf->cpu_tb__DOT__uut__DOT__mem_write));
        bufp->chgCData(oldp+92,(vlSelf->cpu_tb__DOT__uut__DOT__imm_source),3);
        bufp->chgQData(oldp+93,(vlSelf->cpu_tb__DOT__uut__DOT__imm_ext),64);
        bufp->chgBit(oldp+95,(vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en));
        bufp->chgBit(oldp+96,(vlSelf->cpu_tb__DOT__uut__DOT__mem_read));
        bufp->chgBit(oldp+97,(vlSelf->cpu_tb__DOT__uut__DOT__branch));
        bufp->chgBit(oldp+98,(vlSelf->cpu_tb__DOT__uut__DOT__alu_src));
        bufp->chgBit(oldp+99,(vlSelf->cpu_tb__DOT__uut__DOT__mem_to_reg));
        bufp->chgCData(oldp+100,(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum),4);
        bufp->chgCData(oldp+101,(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgQData(oldp+102,(vlSelf->cpu_tb__DOT__uut__DOT__alu_out),64);
        bufp->chgQData(oldp+104,(vlSelf->cpu_tb__DOT__write_data),64);
        bufp->chgQData(oldp+106,(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2),64);
        bufp->chgBit(oldp+108,((0ULL == vlSelf->cpu_tb__DOT__uut__DOT__alu_out)));
        bufp->chgCData(oldp+109,((0x1fU & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2))),5);
        bufp->chgIData(oldp+110,(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32),32);
    }
    bufp->chgBit(oldp+111,(vlSelf->cpu_tb__DOT__clk));
    bufp->chgQData(oldp+112,(vlSelf->cpu_tb__DOT__uut__DOT__pc_reg),64);
    bufp->chgBit(oldp+114,(((~ (IData)(vlSelf->cpu_tb__DOT__npu_done)) 
                            & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul))));
    bufp->chgBit(oldp+115,(((~ (IData)(vlSelf->cpu_tb__DOT__npu_done)) 
                            & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv))));
    bufp->chgQData(oldp+116,((((IData)(vlSelf->cpu_tb__DOT__uut__DOT__branch) 
                               & (0ULL == vlSelf->cpu_tb__DOT__uut__DOT__alu_out))
                               ? (vlSelf->cpu_tb__DOT__uut__DOT__imm_ext 
                                  + vlSelf->cpu_tb__DOT__uut__DOT__pc_reg)
                               : (4ULL + vlSelf->cpu_tb__DOT__uut__DOT__pc_reg))),64);
    bufp->chgBit(oldp+118,(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul));
    bufp->chgBit(oldp+119,(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv));
    bufp->chgBit(oldp+120,(((~ (IData)(vlSelf->cpu_tb__DOT__npu_done)) 
                            & ((IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv) 
                               | (IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul)))));
    bufp->chgIData(oldp+121,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard),32);
    bufp->chgIData(oldp+122,(vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__unnamedblk1__DOT__i),32);
}

void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_cleanup\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
