// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"
#include "Vcpu_tb___024root.h"

VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_initial(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelf->cpu_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__rst_n__0 
        = vlSelf->cpu_tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "cpu_tb.sv", 
                                           17);
        vlSelf->__Vdlyvval__cpu_tb__DOT__clk__v0 = 
            (1U & (~ (IData)(vlSelf->cpu_tb__DOT__clk)));
        vlSelf->__Vdlyvset__cpu_tb__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vcpu_tb___024root___act_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__mem_read = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__mem_write = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__mem_to_reg = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__branch = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 0U;
    if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr >> 6U)))) {
        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                           >> 5U)))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 4U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                vlSelf->cpu_tb__DOT__uut__DOT__branch = 1U;
                                vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 5U)))) {
        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                           >> 4U)))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 3U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                            vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum 
                                = ((0U == ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelf->cpu_tb__DOT__instr 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelf->cpu_tb__DOT__instr 
                                                            >> 0xcU)))))
                                    ? 0U : ((0x100U 
                                             == ((0x3f8U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_tb__DOT__instr 
                                                              >> 0x19U)) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (IData)(
                                                              (vlSelf->cpu_tb__DOT__instr 
                                                               >> 0xcU)))))
                                             ? 1U : 0U));
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                     >> 3U))))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                        vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 4U)))) {
        if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 3U))))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                        vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                 >> 3U))))) {
        if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 2U))))) {
            if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                    vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 0U;
                }
            }
        }
    }
    vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 0U;
    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                          >> 6U))))) {
        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                           >> 5U)))) {
            if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                               >> 4U)))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en = 1U;
                                vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                         >> 3U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                            vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 1U;
                        }
                    }
                }
            }
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 4U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                vlSelf->cpu_tb__DOT__uut__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 4U)))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 3U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                            vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en = 1U;
                            vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                     >> 3U))))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                        vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en = 1U;
                        vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 1U;
                    }
                }
            }
        }
        if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 5U))))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 4U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                vlSelf->cpu_tb__DOT__uut__DOT__mem_read = 1U;
                                vlSelf->cpu_tb__DOT__uut__DOT__mem_to_reg = 1U;
                            }
                        }
                    }
                }
                if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                   >> 3U)))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                if ((1U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_tb__DOT__instr 
                                                             >> 0x19U))))) {
                                    vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul = 1U;
                                }
                                if ((1U != (0x7fU & (IData)(
                                                            (vlSelf->cpu_tb__DOT__instr 
                                                             >> 0x19U))))) {
                                    if ((2U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->cpu_tb__DOT__instr 
                                                           >> 0x19U))))) {
                                        vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->cpu_tb__DOT__uut__DOT__imm_source = (((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->cpu_tb__DOT__instr))) 
                                                  | (3U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->cpu_tb__DOT__instr))))
                                                  ? 0U
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->cpu_tb__DOT__instr)))
                                                   ? 1U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->cpu_tb__DOT__instr)))
                                                    ? 2U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->cpu_tb__DOT__instr)))
                                                     ? 3U
                                                     : 
                                                    (((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->cpu_tb__DOT__instr))) 
                                                      | (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->cpu_tb__DOT__instr))))
                                                      ? 4U
                                                      : 0U)))));
    vlSelf->cpu_tb__DOT__uut__DOT__imm_ext = ((4U & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                               ? ((2U 
                                                   & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                    ? 0ULL
                                                    : (QData)((IData)(
                                                                      ((IData)(
                                                                               (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0xcU)) 
                                                                       << 0xcU)))))
                                               : ((2U 
                                                   & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                    ? 
                                                   ((0x7ffffffffff00000ULL 
                                                     & ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x1fU)))))) 
                                                        << 0x14U)) 
                                                    | (QData)((IData)(
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
                                                                                << 1U)))))))
                                                    : 
                                                   ((0x7ffffffffffff000ULL 
                                                     & ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x1fU)))))) 
                                                        << 0xcU)) 
                                                    | (QData)((IData)(
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
                                                                                << 1U))))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & ((IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x19U)) 
                                                                           << 5U)) 
                                                                       | (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 7U)))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x14U)))))))));
    vlSelf->cpu_tb__DOT__uut__DOT__alu_in2 = ((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_src)
                                               ? vlSelf->cpu_tb__DOT__uut__DOT__imm_ext
                                               : ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->cpu_tb__DOT__instr 
                                                               >> 0x14U))))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->cpu_tb__DOT__instr 
                                                              >> 0x14U)))]));
    if ((0xaU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = ((IData)(((0U == (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU))))
                         ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                        [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 0xfU)))])) 
               + (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else if ((0xbU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = ((IData)(((0U == (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU))))
                         ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                        [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 0xfU)))])) 
               - (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else if ((0xcU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = ((IData)(((0U == (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU))))
                         ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                        [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 0xfU)))])) 
               << (0x1fU & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2)));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else if ((0xdU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = ((IData)(((0U == (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU))))
                         ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                        [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 0xfU)))])) 
               >> (0x1fU & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2)));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else if ((0xeU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = VL_SHIFTRS_III(32,32,5, (IData)(((0U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->cpu_tb__DOT__instr 
                                                            >> 0xfU))))
                                                ? 0ULL
                                                : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                                               [(0x1fU 
                                                 & (IData)(
                                                           (vlSelf->cpu_tb__DOT__instr 
                                                            >> 0xfU)))])), 
                             (0x1fU & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2)));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = 0ULL;
    }
    vlSelf->cpu_tb__DOT__write_data = ((IData)(vlSelf->cpu_tb__DOT__uut__DOT__mem_to_reg)
                                        ? vlSelf->cpu_tb__DOT__read_data
                                        : vlSelf->cpu_tb__DOT__uut__DOT__alu_out);
    vlSelf->cpu_tb__DOT__uut__DOT__pc_next = (((IData)(vlSelf->cpu_tb__DOT__uut__DOT__branch) 
                                               & (0ULL 
                                                  == vlSelf->cpu_tb__DOT__uut__DOT__alu_out))
                                               ? (vlSelf->cpu_tb__DOT__uut__DOT__imm_ext 
                                                  + vlSelf->cpu_tb__DOT__uut__DOT__pc_reg)
                                               : (4ULL 
                                                  + vlSelf->cpu_tb__DOT__uut__DOT__pc_reg));
}

void Vcpu_tb___024root___eval_act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vcpu_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0;
    __Vdlyvdim0__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0 = 0;
    QData/*63:0*/ __Vdlyvval__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0;
    __Vdlyvval__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v1;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v1 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v2;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v2 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v3;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v3 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v4;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v4 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v5;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v5 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v6;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v6 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v7;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v7 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v8;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v8 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v9;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v9 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v10;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v10 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v11;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v11 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v12;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v12 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v13;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v13 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v14;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v14 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v15;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v15 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v16;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v16 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v17;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v17 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v18;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v18 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v19;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v19 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v20;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v20 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v21;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v21 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v22;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v22 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v23;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v23 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v24;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v24 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v25;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v25 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v26;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v26 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v27;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v27 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v28;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v28 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v29;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v29 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v30;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v30 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v31;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v31 = 0;
    CData/*0:0*/ __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v32;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v32 = 0;
    // Body
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v1 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v2 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v3 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v4 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v5 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v6 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v7 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v8 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v9 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v10 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v11 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v12 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v13 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v14 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v15 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v16 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v17 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v18 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v19 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v20 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v21 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v22 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v23 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v24 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v25 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v26 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v27 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v28 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v29 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v30 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v31 = 0U;
    __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v32 = 0U;
    if (vlSelf->cpu_tb__DOT__rst_n) {
        if (VL_UNLIKELY(((IData)(vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en) 
                         & (0U != (0x1fU & (IData)(
                                                   (vlSelf->cpu_tb__DOT__instr 
                                                    >> 7U))))))) {
            VL_WRITEF("[regfile] Write A: x%0# <= 0x%x\n",
                      5,(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 7U))),
                      64,vlSelf->cpu_tb__DOT__write_data);
            __Vdlyvval__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0 
                = vlSelf->cpu_tb__DOT__write_data;
            __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0 = 1U;
            __Vdlyvdim0__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0 
                = (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                    >> 7U)));
            vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
                = ((~ ((IData)(1U) << (0x1fU & (IData)(
                                                       (vlSelf->cpu_tb__DOT__instr 
                                                        >> 7U))))) 
                   & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        }
        if (((IData)(vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en) 
             & (0U != (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                        >> 7U)))))) {
            vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
                = (vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & (IData)(
                                                           (vlSelf->cpu_tb__DOT__instr 
                                                            >> 7U))))));
        }
    } else {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v1 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffffffeU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v2 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffffffdU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v3 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffffffbU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v4 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffffff7U & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v5 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffffffefU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v6 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffffffdfU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v7 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffffffbfU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v8 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffffff7fU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v9 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffffeffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v10 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffffdffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v11 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffffbffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v12 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffff7ffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v13 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffffefffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v14 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffffdfffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v15 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffffbfffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v16 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffff7fffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v17 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffeffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v18 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffdffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v19 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfffbffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v20 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfff7ffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v21 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffefffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v22 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffdfffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v23 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xffbfffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v24 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xff7fffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v25 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfeffffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v26 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfdffffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v27 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xfbffffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v28 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xf7ffffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v29 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xefffffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v30 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xdfffffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v31 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0xbfffffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
        __Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v32 = 1U;
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard 
            = (0x7fffffffU & vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__scoreboard);
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[__Vdlyvdim0__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0] 
            = __Vdlyvval__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v0;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v1) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v2) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[1U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v3) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[2U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v4) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[3U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v5) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[4U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v6) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[5U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v7) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[6U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v8) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[7U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v9) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[8U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v10) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[9U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v11) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0xaU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v12) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0xbU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v13) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0xcU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v14) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0xdU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v15) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0xeU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v16) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0xfU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v17) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x10U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v18) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x11U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v19) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x12U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v20) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x13U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v21) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x14U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v22) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x15U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v23) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x16U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v24) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x17U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v25) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x18U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v26) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x19U] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v27) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x1aU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v28) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x1bU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v29) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x1cU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v30) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x1dU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v31) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x1eU] = 0ULL;
    }
    if (__Vdlyvset__cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers__v32) {
        vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers[0x1fU] = 0ULL;
    }
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__1(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->cpu_tb__DOT__uut__DOT__mem_read = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__mem_write = 0U;
    if (vlSelf->__Vdlyvset__cpu_tb__DOT__clk__v0) {
        vlSelf->cpu_tb__DOT__clk = vlSelf->__Vdlyvval__cpu_tb__DOT__clk__v0;
        vlSelf->__Vdlyvset__cpu_tb__DOT__clk__v0 = 0U;
    }
    vlSelf->cpu_tb__DOT__uut__DOT__mem_to_reg = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__branch = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 0U;
    if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr >> 6U)))) {
        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                           >> 5U)))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 4U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                vlSelf->cpu_tb__DOT__uut__DOT__branch = 1U;
                                vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 5U)))) {
        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                           >> 4U)))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 3U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                            vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum 
                                = ((0U == ((0x3f8U 
                                            & ((IData)(
                                                       (vlSelf->cpu_tb__DOT__instr 
                                                        >> 0x19U)) 
                                               << 3U)) 
                                           | (7U & (IData)(
                                                           (vlSelf->cpu_tb__DOT__instr 
                                                            >> 0xcU)))))
                                    ? 0U : ((0x100U 
                                             == ((0x3f8U 
                                                  & ((IData)(
                                                             (vlSelf->cpu_tb__DOT__instr 
                                                              >> 0x19U)) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (IData)(
                                                              (vlSelf->cpu_tb__DOT__instr 
                                                               >> 0xcU)))))
                                             ? 1U : 0U));
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                     >> 3U))))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                        vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 0U;
                    }
                }
            }
        }
    } else if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 4U)))) {
        if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 3U))))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                        vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                 >> 3U))))) {
        if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 2U))))) {
            if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                               >> 1U)))) {
                if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                    vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum = 0U;
                }
            }
        }
    }
    vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__imm_source = (((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->cpu_tb__DOT__instr))) 
                                                  | (3U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->cpu_tb__DOT__instr))))
                                                  ? 0U
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->cpu_tb__DOT__instr)))
                                                   ? 1U
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->cpu_tb__DOT__instr)))
                                                    ? 2U
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->cpu_tb__DOT__instr)))
                                                     ? 3U
                                                     : 
                                                    (((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->cpu_tb__DOT__instr))) 
                                                      | (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->cpu_tb__DOT__instr))))
                                                      ? 4U
                                                      : 0U)))));
    vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en = 0U;
    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                          >> 6U))))) {
        if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 5U))))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 4U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                vlSelf->cpu_tb__DOT__uut__DOT__mem_read = 1U;
                                vlSelf->cpu_tb__DOT__uut__DOT__mem_to_reg = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                           >> 5U)))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 4U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                vlSelf->cpu_tb__DOT__uut__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
            if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                               >> 4U)))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 3U))))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 0U;
                                vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                         >> 3U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                            vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 4U)))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 3U))))) {
                if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                      >> 2U))))) {
                    if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                       >> 1U)))) {
                        if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                            vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 1U;
                            vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                     >> 3U))))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 2U))))) {
                if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                   >> 1U)))) {
                    if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                        vlSelf->cpu_tb__DOT__uut__DOT__alu_src = 1U;
                        vlSelf->cpu_tb__DOT__uut__DOT__reg_write_en = 1U;
                    }
                }
            }
        }
    }
    vlSelf->cpu_tb__DOT__uut__DOT__imm_ext = ((4U & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                               ? ((2U 
                                                   & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                    ? 0ULL
                                                    : (QData)((IData)(
                                                                      ((IData)(
                                                                               (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0xcU)) 
                                                                       << 0xcU)))))
                                               : ((2U 
                                                   & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                    ? 
                                                   ((0x7ffffffffff00000ULL 
                                                     & ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x1fU)))))) 
                                                        << 0x14U)) 
                                                    | (QData)((IData)(
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
                                                                                << 1U)))))))
                                                    : 
                                                   ((0x7ffffffffffff000ULL 
                                                     & ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x1fU)))))) 
                                                        << 0xcU)) 
                                                    | (QData)((IData)(
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
                                                                                << 1U))))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__imm_source))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & ((IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x19U)) 
                                                                           << 5U)) 
                                                                       | (0x1fU 
                                                                          & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 7U)))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->cpu_tb__DOT__instr 
                                                                                >> 0x14U)))))))));
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__2(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->cpu_tb__DOT__rst_n) {
        if ((1U & (~ ((~ (IData)(vlSelf->cpu_tb__DOT__npu_done)) 
                      & ((IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv) 
                         | (IData)(vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul)))))) {
            vlSelf->cpu_tb__DOT__uut__DOT__pc_reg = vlSelf->cpu_tb__DOT__uut__DOT__pc_next;
        }
    } else {
        vlSelf->cpu_tb__DOT__uut__DOT__pc_reg = 0ULL;
    }
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_comb__TOP__0(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->cpu_tb__DOT__uut__DOT__alu_in2 = ((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_src)
                                               ? vlSelf->cpu_tb__DOT__uut__DOT__imm_ext
                                               : ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->cpu_tb__DOT__instr 
                                                               >> 0x14U))))
                                                   ? 0ULL
                                                   : 
                                                  vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->cpu_tb__DOT__instr 
                                                              >> 0x14U)))]));
    if ((0xaU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = ((IData)(((0U == (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU))))
                         ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                        [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 0xfU)))])) 
               + (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else if ((0xbU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = ((IData)(((0U == (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU))))
                         ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                        [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 0xfU)))])) 
               - (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else if ((0xcU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = ((IData)(((0U == (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU))))
                         ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                        [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 0xfU)))])) 
               << (0x1fU & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2)));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else if ((0xdU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = ((IData)(((0U == (0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                                 >> 0xfU))))
                         ? 0ULL : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                        [(0x1fU & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 0xfU)))])) 
               >> (0x1fU & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2)));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else if ((0xeU == (IData)(vlSelf->cpu_tb__DOT__uut__DOT__control_unit__DOT__alu_control_enum))) {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
            = VL_SHIFTRS_III(32,32,5, (IData)(((0U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->cpu_tb__DOT__instr 
                                                            >> 0xfU))))
                                                ? 0ULL
                                                : vlSelf->cpu_tb__DOT__uut__DOT__regfile_unit__DOT__registers
                                               [(0x1fU 
                                                 & (IData)(
                                                           (vlSelf->cpu_tb__DOT__instr 
                                                            >> 0xfU)))])), 
                             (0x1fU & (IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_in2)));
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->cpu_tb__DOT__uut__DOT__alu_unit__DOT__result32)));
    } else {
        vlSelf->cpu_tb__DOT__uut__DOT__alu_out = 0ULL;
    }
    vlSelf->cpu_tb__DOT__write_data = ((IData)(vlSelf->cpu_tb__DOT__uut__DOT__mem_to_reg)
                                        ? vlSelf->cpu_tb__DOT__read_data
                                        : vlSelf->cpu_tb__DOT__uut__DOT__alu_out);
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__3(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv = 0U;
    vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul = 0U;
    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                          >> 6U))))) {
        if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                              >> 5U))))) {
            if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                  >> 4U))))) {
                if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                   >> 3U)))) {
                    if ((1U & (~ (IData)((vlSelf->cpu_tb__DOT__instr 
                                          >> 2U))))) {
                        if ((1U & (IData)((vlSelf->cpu_tb__DOT__instr 
                                           >> 1U)))) {
                            if ((1U & (IData)(vlSelf->cpu_tb__DOT__instr))) {
                                if ((1U != (0x7fU & (IData)(
                                                            (vlSelf->cpu_tb__DOT__instr 
                                                             >> 0x19U))))) {
                                    if ((2U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->cpu_tb__DOT__instr 
                                                           >> 0x19U))))) {
                                        vlSelf->cpu_tb__DOT__uut__DOT__is_npu_conv = 1U;
                                    }
                                }
                                if ((1U == (0x7fU & (IData)(
                                                            (vlSelf->cpu_tb__DOT__instr 
                                                             >> 0x19U))))) {
                                    vlSelf->cpu_tb__DOT__uut__DOT__is_npu_matrix_mul = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vcpu_tb___024root___nba_comb__TOP__1(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->cpu_tb__DOT__uut__DOT__pc_next = (((IData)(vlSelf->cpu_tb__DOT__uut__DOT__branch) 
                                               & (0ULL 
                                                  == vlSelf->cpu_tb__DOT__uut__DOT__alu_out))
                                               ? (vlSelf->cpu_tb__DOT__uut__DOT__imm_ext 
                                                  + vlSelf->cpu_tb__DOT__uut__DOT__pc_reg)
                                               : (4ULL 
                                                  + vlSelf->cpu_tb__DOT__uut__DOT__pc_reg));
}

void Vcpu_tb___024root___eval_nba(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vcpu_tb___024root___timing_resume(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vcpu_tb___024root___eval_triggers__act(Vcpu_tb___024root* vlSelf);

bool Vcpu_tb___024root___eval_phase__act(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcpu_tb___024root___timing_resume(vlSelf);
        Vcpu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_tb___024root___eval_phase__nba(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__nba(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_tb___024root___eval(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcpu_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("cpu_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcpu_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("cpu_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcpu_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcpu_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu_tb___024root___eval_debug_assertions(Vcpu_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
