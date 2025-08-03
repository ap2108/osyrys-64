// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsignext_tb.h for the primary calling header

#include "Vsignext_tb__pch.h"
#include "Vsignext_tb__Syms.h"
#include "Vsignext_tb___024root.h"

void Vsignext_tb___024root___ctor_var_reset(Vsignext_tb___024root* vlSelf);

Vsignext_tb___024root::Vsignext_tb___024root(Vsignext_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsignext_tb___024root___ctor_var_reset(this);
}

void Vsignext_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsignext_tb___024root::~Vsignext_tb___024root() {
}
