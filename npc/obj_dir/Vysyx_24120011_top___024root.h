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
    CData/*1:0*/ ysyx_24120011_top__DOT__ALUBctrl;
    CData/*0:0*/ ysyx_24120011_top__DOT__w_mem_en;
    CData/*0:0*/ ysyx_24120011_top__DOT__r_mem_en;
    CData/*0:0*/ ysyx_24120011_top__DOT__sign_extension;
    CData/*7:0*/ ysyx_24120011_top__DOT__r_mem_len;
    CData/*3:0*/ ysyx_24120011_top__DOT__ALU_ctrl;
    CData/*3:0*/ ysyx_24120011_top__DOT__w_csr_data_ctrl;
    CData/*0:0*/ ysyx_24120011_top__DOT__w_csr_en;
    CData/*0:0*/ ysyx_24120011_top__DOT__r_csr_en;
    CData/*0:0*/ ysyx_24120011_top__DOT__w_csr_ecall;
    CData/*0:0*/ ysyx_24120011_top__DOT__IFU_valid;
    CData/*0:0*/ ysyx_24120011_top__DOT__LSU_valid;
    CData/*0:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__i_SRAM__DOT__read_request;
    CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type;
    CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0;
    CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0;
    CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0;
    CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0;
    CData/*0:0*/ ysyx_24120011_top__DOT__i_ALU__DOT__carry;
    CData/*0:0*/ ysyx_24120011_top__DOT__i_ALU__DOT__sless;
    CData/*0:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__LSU_valid_tmp;
    CData/*0:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__i_SRAM__DOT__read_request;
    CData/*3:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ ysyx_24120011_top__DOT__w_csr_addr;
    SData/*11:0*/ ysyx_24120011_top__DOT__r_csr_addr;
    SData/*9:0*/ __Vtableidx1;
    IData/*31:0*/ ysyx_24120011_top__DOT__dnpc;
    IData/*31:0*/ ysyx_24120011_top__DOT__imme;
    IData/*31:0*/ ysyx_24120011_top__DOT__rdata;
    IData/*31:0*/ ysyx_24120011_top__DOT__r_mem_data;
    IData/*31:0*/ ysyx_24120011_top__DOT__src1;
    IData/*31:0*/ ysyx_24120011_top__DOT__src2;
    IData/*31:0*/ ysyx_24120011_top__DOT__pc_add_imme_out;
    IData/*31:0*/ ysyx_24120011_top__DOT__ALUB;
    IData/*31:0*/ ysyx_24120011_top__DOT__alu_result;
    IData/*31:0*/ ysyx_24120011_top__DOT__w_csr_data;
    IData/*31:0*/ ysyx_24120011_top__DOT__r_csr_data;
    IData/*31:0*/ ysyx_24120011_top__DOT__pc;
    IData/*31:0*/ ysyx_24120011_top__DOT__inst;
    IData/*31:0*/ ysyx_24120011_top__DOT__i_ALU__DOT__B_in;
    IData/*31:0*/ ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp;
    IData/*31:0*/ ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0;
    IData/*31:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__r_mem_data_tmp;
    IData/*31:0*/ ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
    IData/*31:0*/ ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
    IData/*31:0*/ ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
    IData/*31:0*/ ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24120011_top__DOT__i_RegStack__DOT__Regs;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24120011_top__DOT__i_RegStack__DOT__regout;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
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
