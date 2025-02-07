// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24120011_top.h for the primary calling header

#ifndef VERILATED_VYSYX_24120011_TOP___024ROOT_H_
#define VERILATED_VYSYX_24120011_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_24120011_top__Syms;
class Vysyx_24120011_top___024unit;


class Vysyx_24120011_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_24120011_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*1:0*/ ysyx_24120011_top__DOT__pc_ctrl;
    CData/*3:0*/ ysyx_24120011_top__DOT__rd_ctrl;
    CData/*0:0*/ ysyx_24120011_top__DOT__ALUBctrl;
    CData/*0:0*/ ysyx_24120011_top__DOT__w_mem_en;
    CData/*0:0*/ ysyx_24120011_top__DOT__r_mem_en;
    CData/*0:0*/ ysyx_24120011_top__DOT__sign_extension;
    CData/*7:0*/ ysyx_24120011_top__DOT__r_mem_len;
    CData/*2:0*/ ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type;
    CData/*0:0*/ ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0;
    CData/*0:0*/ ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0;
    CData/*6:0*/ __Vtableidx2;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ __Vtableidx1;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_24120011_top__DOT__dnpc;
    IData/*31:0*/ ysyx_24120011_top__DOT__imme;
    IData/*31:0*/ ysyx_24120011_top__DOT__wdata;
    IData/*31:0*/ ysyx_24120011_top__DOT__rdata;
    IData/*31:0*/ ysyx_24120011_top__DOT__pc_add_imme_out;
    IData/*31:0*/ ysyx_24120011_top__DOT__alu_result;
    IData/*31:0*/ ysyx_24120011_top__DOT__i_MemProcessor__DOT__rdata_tmp;
    IData/*31:0*/ __Vfunc_rtl_pmem_read__4__Vfuncout;
    IData/*31:0*/ __Vtrigrprev__TOP__ysyx_24120011_top__DOT__wdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24120011_top__DOT__i_RegStack__DOT__Regs;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24120011_top__DOT__i_RegStack__DOT__regout;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24120011_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24120011_top___024root(Vysyx_24120011_top__Syms* symsp, const char* v__name);
    ~Vysyx_24120011_top___024root();
    VL_UNCOPYABLE(Vysyx_24120011_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
