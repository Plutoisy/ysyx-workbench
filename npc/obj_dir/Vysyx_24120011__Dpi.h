// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_24120011__DPI_H_
#define VERILATED_VYSYX_24120011__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:5:30
    extern void Performance_Counters(int Performancetype);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:2:30
    extern void ebreak();
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:4:30
    extern void get_pc_inst(int pc, int dnpc, int inst, int IFU_valid_int);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v:3:30
    extern void npc_trap(int pc, int ret);
    // DPI import at /home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_RegStack.v:2:30
    extern void reg_out(const int* array);

#ifdef __cplusplus
}
#endif

#endif  // guard
