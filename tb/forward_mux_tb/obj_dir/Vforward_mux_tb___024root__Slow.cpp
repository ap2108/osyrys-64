// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vforward_mux_tb.h for the primary calling header

#include "Vforward_mux_tb__pch.h"
#include "Vforward_mux_tb__Syms.h"
#include "Vforward_mux_tb___024root.h"

void Vforward_mux_tb___024root___ctor_var_reset(Vforward_mux_tb___024root* vlSelf);

Vforward_mux_tb___024root::Vforward_mux_tb___024root(Vforward_mux_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vforward_mux_tb___024root___ctor_var_reset(this);
}

void Vforward_mux_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vforward_mux_tb___024root::~Vforward_mux_tb___024root() {
}
