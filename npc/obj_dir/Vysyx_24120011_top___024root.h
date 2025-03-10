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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*1:0*/ ysyx_24120011_top__DOT__pc_ctrl;
        CData/*3:0*/ ysyx_24120011_top__DOT__rd_ctrl;
        CData/*1:0*/ ysyx_24120011_top__DOT__ALUBctrl;
        CData/*0:0*/ ysyx_24120011_top__DOT__w_mem_en;
        CData/*0:0*/ ysyx_24120011_top__DOT__r_mem_en;
        CData/*0:0*/ ysyx_24120011_top__DOT__sign_extension;
        CData/*7:0*/ ysyx_24120011_top__DOT__w_mem_len;
        CData/*7:0*/ ysyx_24120011_top__DOT__r_mem_len;
        CData/*3:0*/ ysyx_24120011_top__DOT__ALU_ctrl;
        CData/*3:0*/ ysyx_24120011_top__DOT__w_csr_data_ctrl;
        CData/*0:0*/ ysyx_24120011_top__DOT__w_csr_en;
        CData/*0:0*/ ysyx_24120011_top__DOT__r_csr_en;
        CData/*0:0*/ ysyx_24120011_top__DOT__w_csr_ecall;
        CData/*0:0*/ ysyx_24120011_top__DOT__LSU_valid;
        CData/*0:0*/ ysyx_24120011_top__DOT__LSU_ready;
        CData/*0:0*/ ysyx_24120011_top__DOT__M0_rvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__M1_rvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__M1_wready;
        CData/*0:0*/ ysyx_24120011_top__DOT__M1_bvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__S0_arvalid;
        CData/*2:0*/ ysyx_24120011_top__DOT__S0_arsize;
        CData/*0:0*/ ysyx_24120011_top__DOT__S0_rready;
        CData/*0:0*/ ysyx_24120011_top__DOT__S0_awvalid;
        CData/*2:0*/ ysyx_24120011_top__DOT__S0_awsize;
        CData/*3:0*/ ysyx_24120011_top__DOT__S0_wstrb;
        CData/*0:0*/ ysyx_24120011_top__DOT__S0_wvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__S0_wlast;
        CData/*0:0*/ ysyx_24120011_top__DOT__S0_bready;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__rready;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__rvalid_prev;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__arvalid;
        CData/*2:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__state;
        CData/*2:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__next_state;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__start_read_delay;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_IFU__DOT__random_delay;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_ALU__DOT__carry;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_ALU__DOT__sless;
        CData/*2:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__state;
        CData/*2:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__next_state;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__arvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__rready;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__awvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__wvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__bready;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in;
        CData/*7:0*/ ysyx_24120011_top__DOT__i_LSU__DOT__random_delay;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state;
    };
    struct {
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__next_state;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in;
        CData/*7:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__random_delay;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__wready_reg;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid;
        CData/*3:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid;
        CData/*3:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast;
    };
    struct {
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid;
        CData/*3:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize;
        CData/*2:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize;
        CData/*0:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast;
        CData/*7:0*/ __Vtableidx1;
        CData/*3:0*/ __Vtableidx3;
        CData/*6:0*/ __Vtableidx4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_24120011_top__DOT__w_csr_addr;
        SData/*11:0*/ ysyx_24120011_top__DOT__r_csr_addr;
        SData/*9:0*/ __Vtableidx2;
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
        IData/*31:0*/ ysyx_24120011_top__DOT__M0_rdata;
        IData/*31:0*/ ysyx_24120011_top__DOT__M1_rdata;
        IData/*31:0*/ ysyx_24120011_top__DOT__S0_araddr;
        IData/*31:0*/ ysyx_24120011_top__DOT__S0_awaddr;
        IData/*31:0*/ ysyx_24120011_top__DOT__S0_wdata;
        IData/*31:0*/ ysyx_24120011_top__DOT__i_ALU__DOT__B_in;
        IData/*31:0*/ ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp;
        IData/*31:0*/ ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0;
        IData/*31:0*/ ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
        IData/*31:0*/ ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
        IData/*31:0*/ ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
        IData/*31:0*/ ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__addr;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr;
        IData/*31:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata;
        IData/*31:0*/ __VdfgTmp_ha164d301__0;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__mtime;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24120011_top__DOT__i_RegStack__DOT__Regs;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24120011_top__DOT__i_RegStack__DOT__regout;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
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
