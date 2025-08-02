// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmemory_tb.h for the primary calling header

#include "Vmemory_tb__pch.h"
#include "Vmemory_tb__Syms.h"
#include "Vmemory_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmemory_tb___024root___eval_initial__TOP__Vtiming__0(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x795f7462U;
    __Vtemp_1[2U] = 0x656d6f72U;
    __Vtemp_1[3U] = 0x6dU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->memory_tb__DOT__clk = 0U;
    vlSelf->memory_tb__DOT__rst_n = 0U;
    vlSelf->memory_tb__DOT__cpu_valid = 0U;
    vlSelf->memory_tb__DOT__cpu_write_enable = 0U;
    vlSelf->memory_tb__DOT__npu_valid = 0U;
    vlSelf->memory_tb__DOT__npu_write_enable = 0U;
    vlSelf->memory_tb__DOT__burst_mode = 0U;
    vlSelf->memory_tb__DOT__burst_len = 0U;
    co_await vlSelf->__VdlySched.delay(0x2ee0ULL, nullptr, 
                                       "memory_tb.sv", 
                                       58);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__rst_n = 1U;
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       63);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__cpu_valid = 1U;
    vlSelf->memory_tb__DOT__cpu_write_enable = 1U;
    vlSelf->memory_tb__DOT__cpu_address = 8ULL;
    vlSelf->memory_tb__DOT__cpu_write_data = 0xcafebabedeadbeefULL;
    vlSelf->memory_tb__DOT__cpu_byte_enable = 0xffU;
    while ((1U & (~ (IData)(vlSelf->memory_tb__DOT__cpu_ready)))) {
        co_await vlSelf->__VtrigSched_h060bac42__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] memory_tb.cpu_ready)", 
                                                           "memory_tb.sv", 
                                                           70);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__cpu_valid = 0U;
    vlSelf->memory_tb__DOT__cpu_write_enable = 0U;
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__cpu_valid = 1U;
    vlSelf->memory_tb__DOT__cpu_write_enable = 0U;
    vlSelf->memory_tb__DOT__cpu_address = 8ULL;
    while ((1U & (~ (IData)(vlSelf->memory_tb__DOT__cpu_ready)))) {
        co_await vlSelf->__VtrigSched_h060bac42__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] memory_tb.cpu_ready)", 
                                                           "memory_tb.sv", 
                                                           83);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       84);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("CPU single read = %x\n",64,vlSelf->memory_tb__DOT__cpu_read_data);
    vlSelf->memory_tb__DOT__cpu_valid = 0U;
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__npu_valid = 1U;
    vlSelf->memory_tb__DOT__npu_write_enable = 1U;
    vlSelf->memory_tb__DOT__npu_address = 0x10ULL;
    vlSelf->memory_tb__DOT__npu_write_data = 0x1122334455667788ULL;
    vlSelf->memory_tb__DOT__npu_byte_enable = 0xffU;
    while ((1U & (~ (IData)(vlSelf->memory_tb__DOT__npu_ready)))) {
        co_await vlSelf->__VtrigSched_h5de9f512__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] memory_tb.npu_ready)", 
                                                           "memory_tb.sv", 
                                                           98);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       99);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__npu_valid = 0U;
    vlSelf->memory_tb__DOT__npu_write_enable = 0U;
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       106);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__npu_valid = 1U;
    vlSelf->memory_tb__DOT__npu_write_enable = 0U;
    vlSelf->memory_tb__DOT__npu_address = 0x10ULL;
    while ((1U & (~ (IData)(vlSelf->memory_tb__DOT__npu_ready)))) {
        co_await vlSelf->__VtrigSched_h5de9f512__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] memory_tb.npu_ready)", 
                                                           "memory_tb.sv", 
                                                           111);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       112);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("NPU single read = %x\n",64,vlSelf->memory_tb__DOT__npu_read_data);
    vlSelf->memory_tb__DOT__npu_valid = 0U;
    vlSelf->memory_tb__DOT__burst_mode = 1U;
    vlSelf->memory_tb__DOT__burst_len = 4U;
    vlSelf->memory_tb__DOT__unnamedblk1__DOT__i = 0U;
    while ((vlSelf->memory_tb__DOT__unnamedblk1__DOT__i 
            < (IData)(vlSelf->memory_tb__DOT__burst_len))) {
        co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge memory_tb.clk)", 
                                                           "memory_tb.sv", 
                                                           123);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->memory_tb__DOT__cpu_valid = 1U;
        vlSelf->memory_tb__DOT__cpu_write_enable = 1U;
        vlSelf->memory_tb__DOT__cpu_byte_enable = 0xffU;
        vlSelf->memory_tb__DOT__cpu_address = (0x100ULL 
                                               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->memory_tb__DOT__unnamedblk1__DOT__i)), 3U));
        vlSelf->memory_tb__DOT__cpu_write_data = (0xaabbccdd00000000ULL 
                                                  + (QData)((IData)(vlSelf->memory_tb__DOT__unnamedblk1__DOT__i)));
        while ((1U & (~ (IData)(vlSelf->memory_tb__DOT__cpu_ready)))) {
            co_await vlSelf->__VtrigSched_h060bac42__0.trigger(1U, 
                                                               nullptr, 
                                                               "@([changed] memory_tb.cpu_ready)", 
                                                               "memory_tb.sv", 
                                                               129);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        vlSelf->memory_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->memory_tb__DOT__unnamedblk1__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       131);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__cpu_valid = 0U;
    vlSelf->memory_tb__DOT__cpu_write_enable = 0U;
    vlSelf->memory_tb__DOT__burst_mode = 0U;
    vlSelf->memory_tb__DOT__burst_mode = 1U;
    vlSelf->memory_tb__DOT__burst_len = 4U;
    vlSelf->memory_tb__DOT__unnamedblk2__DOT__i = 0U;
    while ((vlSelf->memory_tb__DOT__unnamedblk2__DOT__i 
            < (IData)(vlSelf->memory_tb__DOT__burst_len))) {
        co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge memory_tb.clk)", 
                                                           "memory_tb.sv", 
                                                           143);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->memory_tb__DOT__cpu_valid = 1U;
        vlSelf->memory_tb__DOT__cpu_write_enable = 0U;
        vlSelf->memory_tb__DOT__cpu_byte_enable = 0xffU;
        vlSelf->memory_tb__DOT__cpu_address = (0x100ULL 
                                               + VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->memory_tb__DOT__unnamedblk2__DOT__i)), 3U));
        while ((1U & (~ (IData)(vlSelf->memory_tb__DOT__cpu_ready)))) {
            co_await vlSelf->__VtrigSched_h060bac42__0.trigger(1U, 
                                                               nullptr, 
                                                               "@([changed] memory_tb.cpu_ready)", 
                                                               "memory_tb.sv", 
                                                               148);
            vlSelf->__Vm_traceActivity[2U] = 1U;
        }
        co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge memory_tb.clk)", 
                                                           "memory_tb.sv", 
                                                           149);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VL_WRITEF("CPU burst read @ %x = %x\n",64,vlSelf->memory_tb__DOT__cpu_address,
                  64,vlSelf->memory_tb__DOT__cpu_read_data);
        vlSelf->memory_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->memory_tb__DOT__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__cpu_valid = 0U;
    vlSelf->memory_tb__DOT__burst_mode = 0U;
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__cpu_valid = 1U;
    vlSelf->memory_tb__DOT__cpu_write_enable = 0U;
    vlSelf->memory_tb__DOT__cpu_address = 0x80000000ULL;
    while ((1U & (~ (IData)(vlSelf->memory_tb__DOT__cpu_ready)))) {
        co_await vlSelf->__VtrigSched_h060bac42__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] memory_tb.cpu_ready)", 
                                                           "memory_tb.sv", 
                                                           164);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       165);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("MMIO read from NPU result region = %x\n",
              64,vlSelf->memory_tb__DOT__cpu_read_data);
    vlSelf->memory_tb__DOT__cpu_valid = 0U;
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       172);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__npu_valid = 1U;
    vlSelf->memory_tb__DOT__npu_write_enable = 1U;
    vlSelf->memory_tb__DOT__npu_address = 0x80000010ULL;
    vlSelf->memory_tb__DOT__npu_write_data = 0xdeadcafebeef1122ULL;
    vlSelf->memory_tb__DOT__npu_byte_enable = 0xffU;
    while ((1U & (~ (IData)(vlSelf->memory_tb__DOT__npu_ready)))) {
        co_await vlSelf->__VtrigSched_h5de9f512__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] memory_tb.npu_ready)", 
                                                           "memory_tb.sv", 
                                                           179);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       180);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__npu_valid = 0U;
    vlSelf->memory_tb__DOT__npu_write_enable = 0U;
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       187);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->memory_tb__DOT__npu_valid = 1U;
    vlSelf->memory_tb__DOT__npu_write_enable = 0U;
    vlSelf->memory_tb__DOT__npu_address = 0x80000010ULL;
    while ((1U & (~ (IData)(vlSelf->memory_tb__DOT__npu_ready)))) {
        co_await vlSelf->__VtrigSched_h5de9f512__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] memory_tb.npu_ready)", 
                                                           "memory_tb.sv", 
                                                           192);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h4b52a4b2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge memory_tb.clk)", 
                                                       "memory_tb.sv", 
                                                       193);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("MMIO readback from NPU MMIO region = %x\n",
              64,vlSelf->memory_tb__DOT__npu_read_data);
    vlSelf->memory_tb__DOT__npu_valid = 0U;
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "memory_tb.sv", 
                                       197);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("memory_tb.sv", 197, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmemory_tb___024root___dump_triggers__act(Vmemory_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmemory_tb___024root___eval_triggers__act(Vmemory_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmemory_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmemory_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->memory_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->memory_tb__DOT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__rst_n__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->memory_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->memory_tb__DOT__cpu_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__cpu_ready__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->memory_tb__DOT__npu_ready) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__npu_ready__0)));
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__clk__0 
        = vlSelf->memory_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__rst_n__0 
        = vlSelf->memory_tb__DOT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__cpu_ready__0 
        = vlSelf->memory_tb__DOT__cpu_ready;
    vlSelf->__Vtrigprevexpr___TOP__memory_tb__DOT__npu_ready__0 
        = vlSelf->memory_tb__DOT__npu_ready;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmemory_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
