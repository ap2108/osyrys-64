// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregfile_tb.h for the primary calling header

#include "Vregfile_tb__pch.h"
#include "Vregfile_tb__Syms.h"
#include "Vregfile_tb___024root.h"

void Vregfile_tb___024root___ctor_var_reset(Vregfile_tb___024root* vlSelf);

Vregfile_tb___024root::Vregfile_tb___024root(Vregfile_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vregfile_tb___024root___ctor_var_reset(this);
}

void Vregfile_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vregfile_tb___024root::~Vregfile_tb___024root() {
}
