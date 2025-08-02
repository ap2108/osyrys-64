// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhazard_unit_tb.h for the primary calling header

#include "Vhazard_unit_tb__pch.h"
#include "Vhazard_unit_tb__Syms.h"
#include "Vhazard_unit_tb___024root.h"

void Vhazard_unit_tb___024root___ctor_var_reset(Vhazard_unit_tb___024root* vlSelf);

Vhazard_unit_tb___024root::Vhazard_unit_tb___024root(Vhazard_unit_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhazard_unit_tb___024root___ctor_var_reset(this);
}

void Vhazard_unit_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vhazard_unit_tb___024root::~Vhazard_unit_tb___024root() {
}
