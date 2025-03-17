// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:2:30
    extern void ebreak();
    // DPI import at /home/plutoisy/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:4:30
    extern void get_pc_inst(int pc, int dnpc, int inst, int IFU_valid_int);
    // DPI import at /home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:4618:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:3:30
    extern void npc_trap(int pc, int ret);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_RegStack.v:2:30
    extern void reg_out(const int* array);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_LSU.v:3:29
    extern int rtl_pmem_read(int r_mem_addr);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_LSU.v:2:30
    extern void rtl_pmem_write(int w_mem_addr, int w_mem_data, char w_mem_len);

#ifdef __cplusplus
}
#endif

#endif  // guard
