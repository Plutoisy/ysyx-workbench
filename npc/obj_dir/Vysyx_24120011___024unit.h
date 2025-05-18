// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24120011.h for the primary calling header

#ifndef VERILATED_VYSYX_24120011___024UNIT_H_
#define VERILATED_VYSYX_24120011___024UNIT_H_  // guard

#include "verilated.h"


class Vysyx_24120011__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_24120011___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vysyx_24120011__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24120011___024unit(Vysyx_24120011__Syms* symsp, const char* v__name);
    ~Vysyx_24120011___024unit();
    VL_UNCOPYABLE(Vysyx_24120011___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
