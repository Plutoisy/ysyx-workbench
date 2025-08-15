// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24120011.h for the primary calling header

#ifndef VERILATED_VYSYX_24120011___024ROOT_H_
#define VERILATED_VYSYX_24120011___024ROOT_H_  // guard

#include "verilated.h"
class Vysyx_24120011___024unit;


class Vysyx_24120011__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_24120011___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_24120011___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_interrupt,0,0);
        VL_IN8(io_master_awready,0,0);
        VL_OUT8(io_master_awvalid,0,0);
        VL_OUT8(io_master_awid,3,0);
        VL_OUT8(io_master_awlen,7,0);
        VL_OUT8(io_master_awsize,2,0);
        VL_OUT8(io_master_awburst,1,0);
        VL_IN8(io_master_wready,0,0);
        VL_OUT8(io_master_wvalid,0,0);
        VL_OUT8(io_master_wstrb,3,0);
        VL_OUT8(io_master_wlast,0,0);
        VL_OUT8(io_master_bready,0,0);
        VL_IN8(io_master_bvalid,0,0);
        VL_IN8(io_master_bresp,1,0);
        VL_IN8(io_master_bid,3,0);
        VL_IN8(io_master_arready,0,0);
        VL_OUT8(io_master_arvalid,0,0);
        VL_OUT8(io_master_arid,3,0);
        VL_OUT8(io_master_arlen,7,0);
        VL_OUT8(io_master_arsize,2,0);
        VL_OUT8(io_master_arburst,1,0);
        VL_OUT8(io_master_rready,0,0);
        VL_IN8(io_master_rvalid,0,0);
        VL_IN8(io_master_rresp,1,0);
        VL_IN8(io_master_rlast,0,0);
        VL_IN8(io_master_rid,3,0);
        VL_OUT8(io_slave_awready,0,0);
        VL_IN8(io_slave_awvalid,0,0);
        VL_IN8(io_slave_awid,3,0);
        VL_IN8(io_slave_awlen,7,0);
        VL_IN8(io_slave_awsize,2,0);
        VL_IN8(io_slave_awburst,1,0);
        VL_OUT8(io_slave_wready,0,0);
        VL_IN8(io_slave_wvalid,0,0);
        VL_IN8(io_slave_wstrb,3,0);
        VL_IN8(io_slave_wlast,0,0);
        VL_IN8(io_slave_bready,0,0);
        VL_OUT8(io_slave_bvalid,0,0);
        VL_OUT8(io_slave_bresp,1,0);
        VL_OUT8(io_slave_bid,3,0);
        VL_OUT8(io_slave_arready,0,0);
        VL_IN8(io_slave_arvalid,0,0);
        VL_IN8(io_slave_arid,3,0);
        VL_IN8(io_slave_arlen,7,0);
        VL_IN8(io_slave_arsize,2,0);
        VL_IN8(io_slave_arburst,1,0);
        VL_IN8(io_slave_rready,0,0);
        VL_OUT8(io_slave_rvalid,0,0);
        VL_OUT8(io_slave_rresp,1,0);
        VL_OUT8(io_slave_rlast,0,0);
        VL_OUT8(io_slave_rid,3,0);
        CData/*1:0*/ ysyx_24120011__DOT__pc_ctrl;
        CData/*3:0*/ ysyx_24120011__DOT__rd_ctrl;
        CData/*1:0*/ ysyx_24120011__DOT__ALUBctrl;
        CData/*0:0*/ ysyx_24120011__DOT__w_mem_en;
        CData/*0:0*/ ysyx_24120011__DOT__r_mem_en;
        CData/*0:0*/ ysyx_24120011__DOT__sign_extension;
        CData/*7:0*/ ysyx_24120011__DOT__w_mem_len;
        CData/*7:0*/ ysyx_24120011__DOT__r_mem_len;
        CData/*3:0*/ ysyx_24120011__DOT__ALU_ctrl;
        CData/*3:0*/ ysyx_24120011__DOT__w_csr_data_ctrl;
        CData/*0:0*/ ysyx_24120011__DOT__w_csr_en;
    };
    struct {
        CData/*0:0*/ ysyx_24120011__DOT__r_csr_en;
        CData/*0:0*/ ysyx_24120011__DOT__w_csr_ecall;
        CData/*0:0*/ ysyx_24120011__DOT__LSU_valid;
        CData/*0:0*/ ysyx_24120011__DOT__LSU_ready;
        CData/*0:0*/ ysyx_24120011__DOT__EXU_ready;
        CData/*0:0*/ ysyx_24120011__DOT__M1_rvalid;
        CData/*0:0*/ ysyx_24120011__DOT__M1_wready;
        CData/*0:0*/ ysyx_24120011__DOT__M1_bvalid;
        CData/*0:0*/ ysyx_24120011__DOT__S0_arvalid;
        CData/*7:0*/ ysyx_24120011__DOT__S0_arlen;
        CData/*2:0*/ ysyx_24120011__DOT__S0_arsize;
        CData/*0:0*/ ysyx_24120011__DOT__S0_rready;
        CData/*0:0*/ ysyx_24120011__DOT__S0_awvalid;
        CData/*2:0*/ ysyx_24120011__DOT__S0_awsize;
        CData/*3:0*/ ysyx_24120011__DOT__S0_wstrb;
        CData/*0:0*/ ysyx_24120011__DOT__S0_wvalid;
        CData/*0:0*/ ysyx_24120011__DOT__S0_wlast;
        CData/*0:0*/ ysyx_24120011__DOT__S0_bready;
        CData/*0:0*/ ysyx_24120011__DOT__IFU_valid_delay;
        CData/*0:0*/ ysyx_24120011__DOT__IFU_valid_rising_edge;
        CData/*0:0*/ ysyx_24120011__DOT__LSU_rready_delay;
        CData/*0:0*/ ysyx_24120011__DOT__LSU_rready_rising_edge;
        CData/*0:0*/ ysyx_24120011__DOT__EXU_valid_delay;
        CData/*0:0*/ ysyx_24120011__DOT__EXU_valid_rising_edge;
        CData/*2:0*/ ysyx_24120011__DOT__i_IFU__DOT__state;
        CData/*2:0*/ ysyx_24120011__DOT__i_IFU__DOT__next_state;
        CData/*0:0*/ ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid;
        CData/*0:0*/ ysyx_24120011__DOT__i_IFU__DOT__hit;
        CData/*0:0*/ ysyx_24120011__DOT__i_IFU__DOT__rready;
        CData/*0:0*/ ysyx_24120011__DOT__i_IFU__DOT__rready_delay;
        CData/*0:0*/ ysyx_24120011__DOT__i_IFU__DOT__rvalid;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f54ddbf__0;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_0_3;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__carry;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__sless;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_3;
        CData/*2:0*/ ysyx_24120011__DOT__i_LSU__DOT__state;
        CData/*2:0*/ ysyx_24120011__DOT__i_LSU__DOT__next_state;
        CData/*0:0*/ ysyx_24120011__DOT__i_LSU__DOT__start_read_delay;
        CData/*0:0*/ ysyx_24120011__DOT__i_LSU__DOT__start_write_delay;
        CData/*0:0*/ ysyx_24120011__DOT__i_LSU__DOT__arvalid;
        CData/*0:0*/ ysyx_24120011__DOT__i_LSU__DOT__rready;
        CData/*0:0*/ ysyx_24120011__DOT__i_LSU__DOT__awvalid;
        CData/*0:0*/ ysyx_24120011__DOT__i_LSU__DOT__wvalid;
        CData/*0:0*/ ysyx_24120011__DOT__i_LSU__DOT__bready;
        CData/*7:0*/ ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt;
        CData/*7:0*/ ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt;
        CData/*7:0*/ ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt;
        CData/*7:0*/ ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt;
        CData/*7:0*/ ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt;
        CData/*7:0*/ ysyx_24120011__DOT__i_LSU__DOT__LSFR_in;
        CData/*7:0*/ ysyx_24120011__DOT__i_LSU__DOT__random_delay;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done;
    };
    struct {
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__random_delay;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__random_delay;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid;
        CData/*3:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid;
        CData/*3:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid;
        CData/*3:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid;
    };
    struct {
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready;
        CData/*7:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arlen;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize;
        CData/*2:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize;
        CData/*0:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast;
        CData/*3:0*/ __Vtableidx2;
        CData/*6:0*/ __Vtableidx3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_24120011__DOT__w_csr_addr;
        SData/*11:0*/ ysyx_24120011__DOT__r_csr_addr;
        SData/*9:0*/ __Vtableidx1;
        VL_OUT(io_master_awaddr,31,0);
        VL_OUT(io_master_wdata,31,0);
        VL_OUT(io_master_araddr,31,0);
        VL_IN(io_master_rdata,31,0);
        VL_IN(io_slave_awaddr,31,0);
        VL_IN(io_slave_wdata,31,0);
        VL_IN(io_slave_araddr,31,0);
        VL_OUT(io_slave_rdata,31,0);
        IData/*31:0*/ ysyx_24120011__DOT__dnpc;
        IData/*31:0*/ ysyx_24120011__DOT__imme;
        IData/*31:0*/ ysyx_24120011__DOT__rdata;
        IData/*31:0*/ ysyx_24120011__DOT__r_mem_data;
        IData/*31:0*/ ysyx_24120011__DOT__src1;
        IData/*31:0*/ ysyx_24120011__DOT__ALUB;
        IData/*31:0*/ ysyx_24120011__DOT__alu_result;
        IData/*31:0*/ ysyx_24120011__DOT__w_csr_data;
        IData/*31:0*/ ysyx_24120011__DOT__r_csr_data;
        IData/*31:0*/ ysyx_24120011__DOT__pc;
        IData/*31:0*/ ysyx_24120011__DOT__inst;
        IData/*31:0*/ ysyx_24120011__DOT__S0_araddr;
        IData/*31:0*/ ysyx_24120011__DOT__S0_awaddr;
        IData/*31:0*/ ysyx_24120011__DOT__S0_wdata;
        IData/*31:0*/ ysyx_24120011__DOT__i_IFU__DOT__cycle_counter;
        IData/*31:0*/ ysyx_24120011__DOT__i_IFU__DOT__miss_counter;
        IData/*31:0*/ ysyx_24120011__DOT__i_IFU__DOT__inst_cache;
        IData/*31:0*/ ysyx_24120011__DOT__i_IFU__DOT__araddr;
        IData/*31:0*/ ysyx_24120011__DOT__i_IFU__DOT__cached_size;
        IData/*31:0*/ ysyx_24120011__DOT__i_IFU__DOT____Vlvbound_h43cc13dc__0;
        IData/*31:0*/ ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__B_in;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_1;
        IData/*31:0*/ ysyx_24120011__DOT__i_Csr__DOT__mepc;
        IData/*31:0*/ ysyx_24120011__DOT__i_Csr__DOT__mstatus;
        IData/*31:0*/ ysyx_24120011__DOT__i_Csr__DOT__mcause;
        IData/*31:0*/ ysyx_24120011__DOT__i_Csr__DOT__mtvec;
        IData/*31:0*/ ysyx_24120011__DOT__i_Csr__DOT__mvendorid;
        IData/*31:0*/ ysyx_24120011__DOT__i_Csr__DOT__marchid;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata;
    };
    struct {
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr;
        IData/*31:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata;
        IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime;
        VlUnpacked<VlWide<3>/*89:0*/, 16> ysyx_24120011__DOT__i_IFU__DOT__icache;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24120011__DOT__i_RegStack__DOT__Regs;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24120011__DOT__i_RegStack__DOT__regout;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24120011__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24120011___024root(Vysyx_24120011__Syms* symsp, const char* v__name);
    ~Vysyx_24120011___024root();
    VL_UNCOPYABLE(Vysyx_24120011___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
