// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_mul_top.h"

void VysyxSoCFull_mul_top___ctor_var_reset(VysyxSoCFull_mul_top* vlSelf);

VysyxSoCFull_mul_top::VysyxSoCFull_mul_top(VysyxSoCFull__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VysyxSoCFull_mul_top___ctor_var_reset(this);
}

void VysyxSoCFull_mul_top::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VysyxSoCFull_mul_top::~VysyxSoCFull_mul_top() {
}
