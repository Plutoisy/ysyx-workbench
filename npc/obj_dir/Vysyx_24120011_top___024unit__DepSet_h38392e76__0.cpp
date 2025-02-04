// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011_top__Syms.h"
#include "Vysyx_24120011_top___024unit.h"

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_24120011_top___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24120011_top___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" void npc_trap(int pc, int ret);

VL_INLINE_OPT void Vysyx_24120011_top___024unit____Vdpiimwrap_npc_trap_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24120011_top___024unit____Vdpiimwrap_npc_trap_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int ret__Vcvt;
    for (size_t ret__Vidx = 0; ret__Vidx < 1; ++ret__Vidx) ret__Vcvt = ret;
    npc_trap(pc__Vcvt, ret__Vcvt);
}
