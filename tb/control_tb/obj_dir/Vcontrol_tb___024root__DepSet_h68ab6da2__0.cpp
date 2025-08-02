// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_tb.h for the primary calling header

#include "Vcontrol_tb__pch.h"
#include "Vcontrol_tb___024root.h"

VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0(Vcontrol_tb___024root* vlSelf);

void Vcontrol_tb___024root___eval_initial(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_initial\n"); );
    // Body
    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT void Vcontrol_tb___024root___act_sequent__TOP__0(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->control_tb__DOT__reg_write_en = 0U;
    vlSelf->control_tb__DOT__alu_src = 0U;
    vlSelf->control_tb__DOT__mem_read = 0U;
    vlSelf->control_tb__DOT__mem_write = 0U;
    vlSelf->control_tb__DOT__mem_to_reg = 0U;
    vlSelf->control_tb__DOT__branch = 0U;
    vlSelf->control_tb__DOT__is_npu_matrix_mul = 0U;
    vlSelf->control_tb__DOT__is_npu_conv = 0U;
    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelf->control_tb__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                                vlSelf->control_tb__DOT__reg_write_en = 1U;
                                vlSelf->control_tb__DOT__alu_src = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                            vlSelf->control_tb__DOT__alu_src = 1U;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                                vlSelf->control_tb__DOT__mem_write = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                            vlSelf->control_tb__DOT__reg_write_en = 1U;
                            vlSelf->control_tb__DOT__alu_src = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                        vlSelf->control_tb__DOT__reg_write_en = 1U;
                        vlSelf->control_tb__DOT__alu_src = 1U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                                vlSelf->control_tb__DOT__mem_read = 1U;
                                vlSelf->control_tb__DOT__mem_to_reg = 1U;
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                                if ((1U == (IData)(vlSelf->control_tb__DOT__funct7))) {
                                    vlSelf->control_tb__DOT__is_npu_matrix_mul = 1U;
                                }
                                if ((1U != (IData)(vlSelf->control_tb__DOT__funct7))) {
                                    if ((2U == (IData)(vlSelf->control_tb__DOT__funct7))) {
                                        vlSelf->control_tb__DOT__is_npu_conv = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->control_tb__DOT__dut__DOT__alu_control_enum = 0U;
    if ((0x40U & (IData)(vlSelf->control_tb__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->control_tb__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                                vlSelf->control_tb__DOT__branch = 1U;
                                vlSelf->control_tb__DOT__dut__DOT__alu_control_enum = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelf->control_tb__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->control_tb__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                            vlSelf->control_tb__DOT__dut__DOT__alu_control_enum 
                                = ((0U == (((IData)(vlSelf->control_tb__DOT__funct7) 
                                            << 3U) 
                                           | (IData)(vlSelf->control_tb__DOT__funct3)))
                                    ? 0U : ((0x100U 
                                             == (((IData)(vlSelf->control_tb__DOT__funct7) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->control_tb__DOT__funct3)))
                                             ? 1U : 0U));
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                        vlSelf->control_tb__DOT__dut__DOT__alu_control_enum = 0U;
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelf->control_tb__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                        vlSelf->control_tb__DOT__dut__DOT__alu_control_enum = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->control_tb__DOT__opcode) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->control_tb__DOT__opcode))) {
                    vlSelf->control_tb__DOT__dut__DOT__alu_control_enum = 0U;
                }
            }
        }
    }
}

void Vcontrol_tb___024root___eval_act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vcontrol_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vcontrol_tb___024root___eval_nba(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontrol_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vcontrol_tb___024root___timing_resume(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vcontrol_tb___024root___eval_triggers__act(Vcontrol_tb___024root* vlSelf);

bool Vcontrol_tb___024root___eval_phase__act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcontrol_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcontrol_tb___024root___timing_resume(vlSelf);
        Vcontrol_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcontrol_tb___024root___eval_phase__nba(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcontrol_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__nba(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__act(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontrol_tb___024root___eval(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcontrol_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("control_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcontrol_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("control_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcontrol_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcontrol_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcontrol_tb___024root___eval_debug_assertions(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
