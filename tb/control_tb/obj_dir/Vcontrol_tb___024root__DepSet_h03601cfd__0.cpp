// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_tb.h for the primary calling header

#include "Vcontrol_tb__pch.h"
#include "Vcontrol_tb__Syms.h"
#include "Vcontrol_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6c5f7462U;
    __Vtemp_1[2U] = 0x6e74726fU;
    __Vtemp_1[3U] = 0x636fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->control_tb__DOT__opcode = 0x33U;
    vlSelf->control_tb__DOT__funct3 = 0U;
    vlSelf->control_tb__DOT__funct7 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "control_tb.sv", 
                                       45);
    vlSelf->control_tb__DOT__opcode = 0x33U;
    vlSelf->control_tb__DOT__funct3 = 0U;
    vlSelf->control_tb__DOT__funct7 = 0x20U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "control_tb.sv", 
                                       51);
    vlSelf->control_tb__DOT__opcode = 3U;
    vlSelf->control_tb__DOT__funct3 = 2U;
    vlSelf->control_tb__DOT__funct7 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "control_tb.sv", 
                                       57);
    vlSelf->control_tb__DOT__opcode = 0x23U;
    vlSelf->control_tb__DOT__funct3 = 2U;
    vlSelf->control_tb__DOT__funct7 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "control_tb.sv", 
                                       63);
    vlSelf->control_tb__DOT__opcode = 0x63U;
    vlSelf->control_tb__DOT__funct3 = 0U;
    vlSelf->control_tb__DOT__funct7 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "control_tb.sv", 
                                       69);
    vlSelf->control_tb__DOT__opcode = 0xbU;
    vlSelf->control_tb__DOT__funct3 = 0U;
    vlSelf->control_tb__DOT__funct7 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "control_tb.sv", 
                                       75);
    vlSelf->control_tb__DOT__opcode = 0xbU;
    vlSelf->control_tb__DOT__funct3 = 0U;
    vlSelf->control_tb__DOT__funct7 = 2U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "control_tb.sv", 
                                       81);
    VL_FINISH_MT("control_tb.sv", 83, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_tb___024root___dump_triggers__act(Vcontrol_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontrol_tb___024root___eval_triggers__act(Vcontrol_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontrol_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontrol_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
