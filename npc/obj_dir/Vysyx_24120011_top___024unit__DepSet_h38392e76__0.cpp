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

extern "C" void reg_out(const int* array);

VL_INLINE_OPT void Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> array) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit\n"); );
    // Body
    int array__Vcvt[32];
    for (size_t array__Vidx = 0; array__Vidx < 32; ++array__Vidx) array__Vcvt[array__Vidx] = (&array[0])[array__Vidx];
    reg_out(array__Vcvt);
}

extern "C" void rtl_pmem_write(int waddr, int wdata, char len);

VL_INLINE_OPT void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    rtl_pmem_write(waddr__Vcvt, wdata__Vcvt, len__Vcvt);
}
