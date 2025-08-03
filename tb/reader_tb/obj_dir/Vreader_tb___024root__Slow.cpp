// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreader_tb.h for the primary calling header

#include "Vreader_tb__pch.h"
#include "Vreader_tb__Syms.h"
#include "Vreader_tb___024root.h"

void Vreader_tb___024root___ctor_var_reset(Vreader_tb___024root* vlSelf);

Vreader_tb___024root::Vreader_tb___024root(Vreader_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vreader_tb___024root___ctor_var_reset(this);
}

void Vreader_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vreader_tb___024root::~Vreader_tb___024root() {
}
