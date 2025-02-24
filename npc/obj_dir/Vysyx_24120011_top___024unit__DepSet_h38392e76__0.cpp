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

extern "C" void get_pc_inst(int pc, int inst);

VL_INLINE_OPT void Vysyx_24120011_top___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24120011_top___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    get_pc_inst(pc__Vcvt, inst__Vcvt);
}

extern "C" void reg_out(const int* array);

VL_INLINE_OPT void Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> array) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit\n"); );
    // Body
    int array__Vcvt[32];
    for (size_t array__Vidx = 0; array__Vidx < 32; ++array__Vidx) array__Vcvt[array__Vidx] = (&array[0])[array__Vidx];
    reg_out(array__Vcvt);
}

extern "C" void rtl_pmem_write(int w_mem_addr, int w_mem_data, char w_mem_len);

VL_INLINE_OPT void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ w_mem_addr, IData/*31:0*/ w_mem_data, CData/*7:0*/ w_mem_len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit\n"); );
    // Body
    int w_mem_addr__Vcvt;
    for (size_t w_mem_addr__Vidx = 0; w_mem_addr__Vidx < 1; ++w_mem_addr__Vidx) w_mem_addr__Vcvt = w_mem_addr;
    int w_mem_data__Vcvt;
    for (size_t w_mem_data__Vidx = 0; w_mem_data__Vidx < 1; ++w_mem_data__Vidx) w_mem_data__Vcvt = w_mem_data;
    char w_mem_len__Vcvt;
    for (size_t w_mem_len__Vidx = 0; w_mem_len__Vidx < 1; ++w_mem_len__Vidx) w_mem_len__Vcvt = w_mem_len;
    rtl_pmem_write(w_mem_addr__Vcvt, w_mem_data__Vcvt, w_mem_len__Vcvt);
}

extern "C" int rtl_pmem_read(int r_mem_addr);

VL_INLINE_OPT void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(IData/*31:0*/ r_mem_addr, IData/*31:0*/ &rtl_pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit\n"); );
    // Body
    int r_mem_addr__Vcvt;
    for (size_t r_mem_addr__Vidx = 0; r_mem_addr__Vidx < 1; ++r_mem_addr__Vidx) r_mem_addr__Vcvt = r_mem_addr;
    int rtl_pmem_read__Vfuncrtn__Vcvt;
    rtl_pmem_read__Vfuncrtn__Vcvt = rtl_pmem_read(r_mem_addr__Vcvt);
    rtl_pmem_read__Vfuncrtn = rtl_pmem_read__Vfuncrtn__Vcvt;
}
