// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsignext_tb.h for the primary calling header

#include "Vsignext_tb__pch.h"
#include "Vsignext_tb__Syms.h"
#include "Vsignext_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vsignext_tb___024root___eval_initial__TOP__Vtiming__0(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_signext_tb__DOT__check__0__testname;
    QData/*63:0*/ __Vtask_signext_tb__DOT__check__0__expected;
    __Vtask_signext_tb__DOT__check__0__expected = 0;
    std::string __Vtask_signext_tb__DOT__check__1__testname;
    QData/*63:0*/ __Vtask_signext_tb__DOT__check__1__expected;
    __Vtask_signext_tb__DOT__check__1__expected = 0;
    std::string __Vtask_signext_tb__DOT__check__2__testname;
    QData/*63:0*/ __Vtask_signext_tb__DOT__check__2__expected;
    __Vtask_signext_tb__DOT__check__2__expected = 0;
    std::string __Vtask_signext_tb__DOT__check__3__testname;
    QData/*63:0*/ __Vtask_signext_tb__DOT__check__3__expected;
    __Vtask_signext_tb__DOT__check__3__expected = 0;
    std::string __Vtask_signext_tb__DOT__check__4__testname;
    QData/*63:0*/ __Vtask_signext_tb__DOT__check__4__expected;
    __Vtask_signext_tb__DOT__check__4__expected = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x745f7462U;
    __Vtemp_1[2U] = 0x676e6578U;
    __Vtemp_1[3U] = 0x7369U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->signext_tb__DOT__raw_instr = 0xfff00313U;
    vlSelf->signext_tb__DOT__imm_source = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "signext_tb.sv", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_signext_tb__DOT__check__0__expected = 0xffffffffffffffffULL;
    __Vtask_signext_tb__DOT__check__0__testname = std::string{"I-type"};
    if ((vlSelf->signext_tb__DOT__immediate != __Vtask_signext_tb__DOT__check__0__expected)) {
        VL_WRITEF("FAIL: %@ | Got: %x | Expected: %x\n",
                  -1,&(__Vtask_signext_tb__DOT__check__0__testname),
                  64,vlSelf->signext_tb__DOT__immediate,
                  64,__Vtask_signext_tb__DOT__check__0__expected);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_signext_tb__DOT__check__0__testname));
    }
    vlSelf->signext_tb__DOT__raw_instr = 0xf12223U;
    vlSelf->signext_tb__DOT__imm_source = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "signext_tb.sv", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_signext_tb__DOT__check__1__expected = 0x1e2ULL;
    __Vtask_signext_tb__DOT__check__1__testname = std::string{"S-type"};
    if ((vlSelf->signext_tb__DOT__immediate != __Vtask_signext_tb__DOT__check__1__expected)) {
        VL_WRITEF("FAIL: %@ | Got: %x | Expected: %x\n",
                  -1,&(__Vtask_signext_tb__DOT__check__1__testname),
                  64,vlSelf->signext_tb__DOT__immediate,
                  64,__Vtask_signext_tb__DOT__check__1__expected);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_signext_tb__DOT__check__1__testname));
    }
    vlSelf->signext_tb__DOT__raw_instr = 0xfe208063U;
    vlSelf->signext_tb__DOT__imm_source = 2U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "signext_tb.sv", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_signext_tb__DOT__check__2__expected = 0x7ffffffffffff840ULL;
    __Vtask_signext_tb__DOT__check__2__testname = std::string{"B-type"};
    if ((vlSelf->signext_tb__DOT__immediate != __Vtask_signext_tb__DOT__check__2__expected)) {
        VL_WRITEF("FAIL: %@ | Got: %x | Expected: %x\n",
                  -1,&(__Vtask_signext_tb__DOT__check__2__testname),
                  64,vlSelf->signext_tb__DOT__immediate,
                  64,__Vtask_signext_tb__DOT__check__2__expected);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_signext_tb__DOT__check__2__testname));
    }
    vlSelf->signext_tb__DOT__raw_instr = 0x8040006fU;
    vlSelf->signext_tb__DOT__imm_source = 3U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "signext_tb.sv", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_signext_tb__DOT__check__3__expected = 0x7ffffffffff00800ULL;
    __Vtask_signext_tb__DOT__check__3__testname = std::string{"J-type"};
    if ((vlSelf->signext_tb__DOT__immediate != __Vtask_signext_tb__DOT__check__3__expected)) {
        VL_WRITEF("FAIL: %@ | Got: %x | Expected: %x\n",
                  -1,&(__Vtask_signext_tb__DOT__check__3__testname),
                  64,vlSelf->signext_tb__DOT__immediate,
                  64,__Vtask_signext_tb__DOT__check__3__expected);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_signext_tb__DOT__check__3__testname));
    }
    vlSelf->signext_tb__DOT__raw_instr = 0x12345000U;
    vlSelf->signext_tb__DOT__imm_source = 4U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "signext_tb.sv", 
                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_signext_tb__DOT__check__4__expected = 0x12345000ULL;
    __Vtask_signext_tb__DOT__check__4__testname = std::string{"U-type"};
    if ((vlSelf->signext_tb__DOT__immediate != __Vtask_signext_tb__DOT__check__4__expected)) {
        VL_WRITEF("FAIL: %@ | Got: %x | Expected: %x\n",
                  -1,&(__Vtask_signext_tb__DOT__check__4__testname),
                  64,vlSelf->signext_tb__DOT__immediate,
                  64,__Vtask_signext_tb__DOT__check__4__expected);
    } else {
        VL_WRITEF("PASS: %@\n",-1,&(__Vtask_signext_tb__DOT__check__4__testname));
    }
    VL_FINISH_MT("signext_tb.sv", 56, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsignext_tb___024root___dump_triggers__act(Vsignext_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsignext_tb___024root___eval_triggers__act(Vsignext_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsignext_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignext_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsignext_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
