// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void reg_out(const int* array);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 16> array) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_reg_out_TOP____024unit\n"); );
    // Body
    int array__Vcvt[16];
    for (size_t array__Vidx = 0; array__Vidx < 16; ++array__Vidx) array__Vcvt[array__Vidx] = (&array[0])[array__Vidx];
    reg_out(array__Vcvt);
}

extern "C" void LSU_clktime_count(int lsu_clk_count);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_LSU_clktime_count_TOP____024unit(IData/*31:0*/ lsu_clk_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_LSU_clktime_count_TOP____024unit\n"); );
    // Body
    int lsu_clk_count__Vcvt;
    for (size_t lsu_clk_count__Vidx = 0; lsu_clk_count__Vidx < 1; ++lsu_clk_count__Vidx) lsu_clk_count__Vcvt = lsu_clk_count;
    LSU_clktime_count(lsu_clk_count__Vcvt);
}

extern "C" void ebreak();

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" void npc_trap(int pc, int ret);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_npc_trap_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_npc_trap_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int ret__Vcvt;
    for (size_t ret__Vidx = 0; ret__Vidx < 1; ++ret__Vidx) ret__Vcvt = ret;
    npc_trap(pc__Vcvt, ret__Vcvt);
}

extern "C" void get_pc_inst(int pc, int dnpc, int inst, int IFU_valid_int);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc, IData/*31:0*/ inst, IData/*31:0*/ IFU_valid_int) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int dnpc__Vcvt;
    for (size_t dnpc__Vidx = 0; dnpc__Vidx < 1; ++dnpc__Vidx) dnpc__Vcvt = dnpc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int IFU_valid_int__Vcvt;
    for (size_t IFU_valid_int__Vidx = 0; IFU_valid_int__Vidx < 1; ++IFU_valid_int__Vidx) IFU_valid_int__Vcvt = IFU_valid_int;
    get_pc_inst(pc__Vcvt, dnpc__Vcvt, inst__Vcvt, IFU_valid_int__Vcvt);
}

extern "C" void Performance_Counters(int Performancetype);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(IData/*31:0*/ Performancetype) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit\n"); );
    // Body
    int Performancetype__Vcvt;
    for (size_t Performancetype__Vidx = 0; Performancetype__Vidx < 1; ++Performancetype__Vidx) Performancetype__Vcvt = Performancetype;
    Performance_Counters(Performancetype__Vcvt);
}

extern "C" void IFU_clktime_count(int ifu_clk_count, int hit);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_IFU_clktime_count_TOP____024unit(IData/*31:0*/ ifu_clk_count, IData/*31:0*/ hit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_IFU_clktime_count_TOP____024unit\n"); );
    // Body
    int ifu_clk_count__Vcvt;
    for (size_t ifu_clk_count__Vidx = 0; ifu_clk_count__Vidx < 1; ++ifu_clk_count__Vidx) ifu_clk_count__Vcvt = ifu_clk_count;
    int hit__Vcvt;
    for (size_t hit__Vidx = 0; hit__Vidx < 1; ++hit__Vidx) hit__Vcvt = hit;
    IFU_clktime_count(ifu_clk_count__Vcvt, hit__Vcvt);
}

extern "C" void icahce_miss_count(int miss_count);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_icahce_miss_count_TOP____024unit(IData/*31:0*/ miss_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_icahce_miss_count_TOP____024unit\n"); );
    // Body
    int miss_count__Vcvt;
    for (size_t miss_count__Vidx = 0; miss_count__Vidx < 1; ++miss_count__Vidx) miss_count__Vcvt = miss_count;
    icahce_miss_count(miss_count__Vcvt);
}

extern "C" void flash_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}
