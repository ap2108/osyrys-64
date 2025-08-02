// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_tb.h for the primary calling header

#include "Vcontrol_tb__pch.h"
#include "Vcontrol_tb__Syms.h"
#include "Vcontrol_tb___024root.h"

void Vcontrol_tb___024root___ctor_var_reset(Vcontrol_tb___024root* vlSelf);

Vcontrol_tb___024root::Vcontrol_tb___024root(Vcontrol_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcontrol_tb___024root___ctor_var_reset(this);
}

void Vcontrol_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcontrol_tb___024root::~Vcontrol_tb___024root() {
}
