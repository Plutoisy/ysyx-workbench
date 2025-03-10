// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011__Syms.h"
#include "Vysyx_24120011___024unit.h"

void Vysyx_24120011___024unit___ctor_var_reset(Vysyx_24120011___024unit* vlSelf);

Vysyx_24120011___024unit::Vysyx_24120011___024unit(Vysyx_24120011__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_24120011___024unit___ctor_var_reset(this);
}

void Vysyx_24120011___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vysyx_24120011___024unit::~Vysyx_24120011___024unit() {
}
