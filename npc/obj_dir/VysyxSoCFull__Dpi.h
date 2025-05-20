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
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_IFU.v:1:30
    extern void IFU_clktime_count(int ifu_clk_count, int hit);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_LSU.v:1:30
    extern void LSU_clktime_count(int lsu_clk_count);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:5:30
    extern void Performance_Counters(int Performancetype);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:2:30
    extern void ebreak();
    // DPI import at /home/plutoisy/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:4:30
    extern void get_pc_inst(int pc, int dnpc, int inst, int IFU_valid_int);
    // DPI import at /home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:4627:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:3:30
    extern void npc_trap(int pc, int ret);
    // DPI import at /home/plutoisy/ysyx-workbench/ysyxSoC/perip/psram/psram.v:161:32
    extern void psram_read(int addr, int* data);
    // DPI import at /home/plutoisy/ysyx-workbench/ysyxSoC/perip/psram/psram.v:162:32
    extern void psram_write(int addr, int data, int mask);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_RegStack.v:2:30
    extern void reg_out(const int* array);

#ifdef __cplusplus
}
#endif

#endif  // guard
