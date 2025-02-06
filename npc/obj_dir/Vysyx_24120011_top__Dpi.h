// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_24120011_TOP__DPI_H_
#define VERILATED_VYSYX_24120011_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_top.v:1:30
    extern void ebreak();
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_top.v:2:30
    extern void npc_trap(int pc, int ret);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_RegStack.v:1:30
    extern void reg_out(const int* array);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_MemProcessor.v:1:30
    extern void rtl_pmem_write(int waddr, int wdata, char len);

#ifdef __cplusplus
}
#endif

#endif  // guard
