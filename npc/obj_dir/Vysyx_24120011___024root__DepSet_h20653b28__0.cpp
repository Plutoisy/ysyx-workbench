// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011.h for the primary calling header

#include "Vysyx_24120011__pch.h"
#include "Vysyx_24120011__Syms.h"
#include "Vysyx_24120011___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__act(Vysyx_24120011___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120011___024root___eval_triggers__act(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_triggers__act\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.clock)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24120011___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_24120011___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(IData/*31:0*/ Performancetype);
void Vysyx_24120011___024unit____Vdpiimwrap_npc_trap_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ ret);
void Vysyx_24120011___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vysyx_24120011___024unit____Vdpiimwrap_icahce_miss_count_TOP____024unit(IData/*31:0*/ miss_count);
void Vysyx_24120011___024unit____Vdpiimwrap_IFU_clktime_count_TOP____024unit(IData/*31:0*/ ifu_clk_count, IData/*31:0*/ hit);
void Vysyx_24120011___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ w_mem_addr, IData/*31:0*/ w_mem_data, CData/*7:0*/ w_mem_len);
void Vysyx_24120011___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(IData/*31:0*/ r_mem_addr, IData/*31:0*/ &rtl_pmem_read__Vfuncrtn);
void Vysyx_24120011___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> array);
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011__ConstPool__TABLE_hd20d1557_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vysyx_24120011__ConstPool__TABLE_h5b5fa3b7_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_24120011__ConstPool__TABLE_h2fb4a9dc_0;

VL_INLINE_OPT void Vysyx_24120011___024root___nba_sequent__TOP__0(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___nba_sequent__TOP__0\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_rtl_pmem_read__10__Vfuncout;
    __Vfunc_rtl_pmem_read__10__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cycle_counter;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cycle_counter = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__i_IFU__DOT__miss_counter;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__miss_counter = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cached_size;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cached_size = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mstatus;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mtvec;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mtvec = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mvendorid;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mvendorid = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__i_Csr__DOT__marchid;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__marchid = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr = 0;
    QData/*63:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v0;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v1;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v2;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v2 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v3;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v3 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v4;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v4 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v5;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v5 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v6;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v6 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v7;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v7 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v8;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v8 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v9;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v9 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v10;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v10 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v11;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v11 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v12;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v12 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v13;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v13 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v14;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v14 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v15;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v15 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v16;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v16 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v17;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v17 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v18;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v18 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v19;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v19 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v20;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v20 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v21;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v21 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v22;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v22 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v23;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v23 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v24;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v24 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v25;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v25 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v26;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v26 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v27;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v27 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v28;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v28 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v29;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v29 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v30;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v30 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v31;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v31 = 0;
    IData/*25:0*/ __VdlyVal__ysyx_24120011__DOT__i_IFU__DOT__icache__v32;
    __VdlyVal__ysyx_24120011__DOT__i_IFU__DOT__icache__v32 = 0;
    CData/*3:0*/ __VdlyDim0__ysyx_24120011__DOT__i_IFU__DOT__icache__v32;
    __VdlyDim0__ysyx_24120011__DOT__i_IFU__DOT__icache__v32 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v32;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v32 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_24120011__DOT__i_IFU__DOT__icache__v33;
    __VdlyVal__ysyx_24120011__DOT__i_IFU__DOT__icache__v33 = 0;
    CData/*6:0*/ __VdlyLsb__ysyx_24120011__DOT__i_IFU__DOT__icache__v33;
    __VdlyLsb__ysyx_24120011__DOT__i_IFU__DOT__icache__v33 = 0;
    CData/*3:0*/ __VdlyDim0__ysyx_24120011__DOT__i_IFU__DOT__icache__v33;
    __VdlyDim0__ysyx_24120011__DOT__i_IFU__DOT__icache__v33 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v33;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v33 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v0;
    __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v32;
    __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v32 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33;
    __VdlyVal__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33;
    __VdlyDim0__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33;
    __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33 = 0;
    // Body
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v0 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v1 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v2 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v3 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v4 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v5 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v6 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v7 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v8 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v9 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v10 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v11 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v12 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v13 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v14 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v15 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v16 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v17 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v18 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v19 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v20 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v21 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v22 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v23 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v24 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v25 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v26 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v27 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v28 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v29 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v30 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v31 = 0U;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__miss_counter 
        = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__miss_counter;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cached_size 
        = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cached_size;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mvendorid 
        = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mvendorid;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__marchid 
        = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__marchid;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mstatus 
        = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mstatus;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mtvec = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mtvec;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause 
        = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mcause;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cycle_counter 
        = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cycle_counter;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v32 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v33 = 0U;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mepc;
    if (vlSelfRef.ysyx_24120011__DOT__IFU_valid_rising_edge) {
        Vysyx_24120011___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(1U);
    }
    if (vlSelfRef.ysyx_24120011__DOT__LSU_rready_rising_edge) {
        Vysyx_24120011___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(2U);
    }
    if (vlSelfRef.ysyx_24120011__DOT__EXU_valid_rising_edge) {
        Vysyx_24120011___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(3U);
    }
    if ((0x100073U == vlSelfRef.ysyx_24120011__DOT__inst)) {
        Vysyx_24120011___024unit____Vdpiimwrap_npc_trap_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__pc, 
                                                                       vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                                                       [0xaU]);
        Vysyx_24120011___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v0 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v32 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33 = 0U;
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime = 0ULL;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v0 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v2 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v4 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v6 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v8 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v10 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v12 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v14 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v16 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v18 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v20 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v22 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v24 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v26 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v28 = 1U;
        __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v30 = 1U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr = 0U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr = 0U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr = 0U;
    } else {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime 
            = (1ULL + vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime);
        if ((0x100fU == vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__inst_cache)) {
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v1 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v3 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v5 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v7 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v9 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v11 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v13 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v15 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v17 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v19 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v21 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v23 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v25 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v27 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v29 = 1U;
            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v31 = 1U;
        }
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr 
            = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))
                ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr
                : ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))
                    ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr
                    : vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr));
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr 
            = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr
                : ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                    ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr
                    : vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr));
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr 
            = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))
                ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr
                : ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))
                    ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr
                    : vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr));
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__miss_counter = 0U;
    } else {
        Vysyx_24120011___024unit____Vdpiimwrap_icahce_miss_count_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__miss_counter);
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__miss_counter 
            = (((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                & (2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__next_state)))
                ? ((IData)(1U) + vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__miss_counter)
                : vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__miss_counter);
    }
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay;
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay;
    }
    if ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay;
    }
    if ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay;
    }
    if ((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay;
    }
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay;
    }
    if ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__random_delay;
    }
    if ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__random_delay;
    }
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__random_delay;
    }
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__random_delay;
    }
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cached_size = 0U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mvendorid = 0x79737978U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__marchid = 0x1700acbU;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mstatus = 0U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mtvec = 0U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause = 0U;
    } else {
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cached_size 
            = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid)
                ? ((IData)(4U) + vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cached_size)
                : ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                    ? 0U : vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cached_size));
        if (vlSelfRef.ysyx_24120011__DOT__w_csr_en) {
            if ((0x341U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                if ((0x300U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                    if ((0x342U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                        if ((0x305U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                            __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mvendorid 
                                = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mvendorid;
                            __Vdly__ysyx_24120011__DOT__i_Csr__DOT__marchid 
                                = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__marchid;
                        }
                        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mtvec 
                            = ((0x305U == (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))
                                ? vlSelfRef.ysyx_24120011__DOT__w_csr_data
                                : vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mtvec);
                    }
                    if ((0x342U == (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause 
                            = vlSelfRef.ysyx_24120011__DOT__w_csr_data;
                    } else if ((0x305U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause 
                            = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mcause;
                    }
                }
                if ((0x300U == (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mstatus 
                        = vlSelfRef.ysyx_24120011__DOT__w_csr_data;
                } else if ((0x342U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                    if ((0x305U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mstatus 
                            = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mstatus;
                    }
                }
            }
        }
        if (vlSelfRef.ysyx_24120011__DOT__w_csr_ecall) {
            __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause = 0xbU;
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cycle_counter = 0U;
    } else {
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cycle_counter 
            = ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                ? 0U : ((IData)(1U) + vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cycle_counter));
        if (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid) {
            if (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid) {
                Vysyx_24120011___024unit____Vdpiimwrap_IFU_clktime_count_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cycle_counter, 1U);
            } else {
                Vysyx_24120011___024unit____Vdpiimwrap_IFU_clktime_count_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cycle_counter, 0U);
            }
        }
    }
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_write_delay 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_en));
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_read_delay 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_en));
    if (((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed = 0U;
    } else if ((((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt))) 
                & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed)))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed = 1U;
    } else if ((((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt))) 
                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed = 1U;
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg = 0U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if ((0U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))) {
            if ((1U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))) {
                if ((2U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))) {
                    if ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))) {
                        if (((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid) 
                             & (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)))) {
                            __VdlyVal__ysyx_24120011__DOT__i_IFU__DOT__icache__v32 
                                = (0x2000000U | (vlSelfRef.ysyx_24120011__DOT__pc 
                                                 >> 7U));
                            __VdlyDim0__ysyx_24120011__DOT__i_IFU__DOT__icache__v32 
                                = (0xfU & (vlSelfRef.ysyx_24120011__DOT__pc 
                                           >> 3U));
                            __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v32 = 1U;
                            vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT____Vlvbound_h43cc13dc__0 
                                = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                    ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                    : 0U);
                            if ((0x59U >= (0x7fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cached_size 
                                                          >> 2U), 5U)))) {
                                __VdlyVal__ysyx_24120011__DOT__i_IFU__DOT__icache__v33 
                                    = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT____Vlvbound_h43cc13dc__0;
                                __VdlyLsb__ysyx_24120011__DOT__i_IFU__DOT__icache__v33 
                                    = (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cached_size 
                                                              >> 2U), 5U));
                                __VdlyDim0__ysyx_24120011__DOT__i_IFU__DOT__icache__v33 
                                    = (0xfU & (vlSelfRef.ysyx_24120011__DOT__pc 
                                               >> 3U));
                                __VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v33 = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__araddr = 0U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc = 0U;
        __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v0 = 1U;
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__LSFR_in = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in = 1U;
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__araddr 
            = (((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                & (2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__next_state)))
                ? (0xfffffff8U & vlSelfRef.ysyx_24120011__DOT__pc)
                : (((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                    & (2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__next_state)))
                    ? ((0xa0U == (vlSelfRef.ysyx_24120011__DOT__pc 
                                  >> 0x18U)) ? vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__araddr
                        : ((IData)(4U) + vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__araddr))
                    : vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__araddr));
        if (vlSelfRef.ysyx_24120011__DOT__w_csr_en) {
            if ((0x341U == (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc 
                    = vlSelfRef.ysyx_24120011__DOT__w_csr_data;
            } else if ((0x300U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                if ((0x342U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                    if ((0x305U != (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_addr))) {
                        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc 
                            = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mepc;
                    }
                }
            }
        }
        if (vlSelfRef.ysyx_24120011__DOT__w_csr_ecall) {
            __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc 
                = vlSelfRef.ysyx_24120011__DOT__pc;
        }
        __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v32 = 1U;
        if (((IData)(vlSelfRef.ysyx_24120011__DOT__LSU_valid) 
             & (4U != (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl)))) {
            __VdlyVal__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33 
                = ((8U & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                    ? 0U : ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                             ? ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                 ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                     ? 0U : vlSelfRef.ysyx_24120011__DOT__r_csr_data)
                                 : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                     ? vlSelfRef.ysyx_24120011__DOT__r_mem_data
                                     : 0U)) : ((2U 
                                                & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                                    ? vlSelfRef.ysyx_24120011__DOT__imme
                                                    : vlSelfRef.ysyx_24120011__DOT__alu_result)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__rd_ctrl))
                                                    ? vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.ysyx_24120011__DOT__pc)))));
            __VdlyDim0__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33 
                = (0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                            >> 7U));
            __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33 = 1U;
        }
    }
    if (((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 0U;
    } else if ((((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt))) 
                & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed)))) {
        if ((0xa00003f8U == vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr)) {
            if (VL_UNLIKELY(((0xfU == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb))))) {
                VL_WRITEF_NX("%c",0,8,(0xffU & vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata));
            } else if (VL_UNLIKELY(((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb))))) {
                VL_WRITEF_NX("%c",0,8,(0xffU & vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata));
            } else if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb))))) {
                VL_WRITEF_NX("%c",0,8,(0xffU & vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata));
            }
        }
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 1U;
    } else if ((((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt))) 
                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 1U;
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg = 0U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 0U;
    }
    if (((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 0U;
    } else if ((((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt))) 
                & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed)))) {
        if ((0xfU == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
            Vysyx_24120011___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr, vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata, 4U);
        } else if ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
            Vysyx_24120011___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr, vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata, 2U);
        } else if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
            Vysyx_24120011___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr, vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata, 1U);
        }
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 1U;
    } else if ((((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt))) 
                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 1U;
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg = 0U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 0U;
    }
    if (((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid 
            = ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
               & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt)));
    }
    if (((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid 
            = (((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
                & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt))) 
               && (IData)(vlSelfRef.ysyx_24120011__DOT__M1_wready));
    }
    if (((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid 
            = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
               & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt)));
    }
    if (((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready 
            = (((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
                & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt))) 
               && (IData)(vlSelfRef.ysyx_24120011__DOT__M1_bvalid));
    }
    if (((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 0U;
    } else if ((((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt))) 
                & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed)))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg = 0U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg = 1U;
    } else if ((((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt))) 
                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg = 1U;
    } else {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg = 0U;
    }
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state));
    if (((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 0U;
    } else if ((((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt))) 
                & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed)))) {
        Vysyx_24120011___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr, __Vfunc_rtl_pmem_read__10__Vfuncout);
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg 
            = __Vfunc_rtl_pmem_read__10__Vfuncout;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg = 1U;
    } else if ((((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt))) 
                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg = 1U;
    } else {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master = 0U;
            } else if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master = 1U;
            }
        }
    }
    if (((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed = 0U;
    } else if ((((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt))) 
                & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed)))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg 
            = ((0xa0000048U == vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr)
                ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime)
                : ((0xa000004cU == vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr)
                    ? (IData)((vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime 
                               >> 0x20U)) : 0U));
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg = 1U;
    } else if ((((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt))) 
                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg = 1U;
    } else {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg = 0U;
    }
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__miss_counter 
        = __Vdly__ysyx_24120011__DOT__i_IFU__DOT__miss_counter;
    vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mvendorid 
        = __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mvendorid;
    vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__marchid 
        = __Vdly__ysyx_24120011__DOT__i_Csr__DOT__marchid;
    vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mstatus 
        = __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mstatus;
    vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mtvec 
        = __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mtvec;
    vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mcause 
        = __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause;
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cycle_counter 
        = __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cycle_counter;
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cached_size 
        = __Vdly__ysyx_24120011__DOT__i_IFU__DOT__cached_size;
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v0) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v1) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v2) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[1U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[1U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[1U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v3) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[1U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[1U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[1U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v4) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[2U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[2U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[2U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v5) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[2U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[2U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[2U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v6) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[3U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[3U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[3U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v7) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[3U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[3U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[3U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v8) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[4U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[4U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[4U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v9) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[4U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[4U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[4U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v10) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[5U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[5U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[5U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v11) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[5U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[5U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[5U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v12) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[6U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[6U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[6U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v13) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[6U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[6U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[6U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v14) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[7U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[7U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[7U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v15) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[7U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[7U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[7U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v16) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[8U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[8U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[8U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v17) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[8U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[8U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[8U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v18) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[9U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[9U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[9U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v19) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[9U][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[9U][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[9U][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v20) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xaU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xaU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xaU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v21) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xaU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xaU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xaU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v22) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xbU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xbU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xbU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v23) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xbU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xbU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xbU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v24) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xcU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xcU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xcU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v25) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xcU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xcU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xcU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v26) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xdU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xdU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xdU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v27) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xdU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xdU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xdU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v28) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xeU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xeU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xeU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v29) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xeU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xeU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xeU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v30) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xfU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xfU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xfU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v31) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xfU][0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xfU][1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[0xfU][2U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v32) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache[__VdlyDim0__ysyx_24120011__DOT__i_IFU__DOT__icache__v32][2U] 
            = (0x3ffffffU & __VdlyVal__ysyx_24120011__DOT__i_IFU__DOT__icache__v32);
    }
    if (__VdlySet__ysyx_24120011__DOT__i_IFU__DOT__icache__v33) {
        VL_ASSIGNSEL_WI(90,32,(IData)(__VdlyLsb__ysyx_24120011__DOT__i_IFU__DOT__icache__v33), 
                        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache
                        [__VdlyDim0__ysyx_24120011__DOT__i_IFU__DOT__icache__v33], __VdlyVal__ysyx_24120011__DOT__i_IFU__DOT__icache__v33);
    }
    vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mepc 
        = __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc;
    vlSelfRef.ysyx_24120011__DOT__LSU_rready_rising_edge 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready) 
           & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__LSU_rready_delay)));
    vlSelfRef.ysyx_24120011__DOT__IFU_valid_rising_edge 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid) 
           & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__IFU_valid_delay)));
    vlSelfRef.ysyx_24120011__DOT__EXU_valid_rising_edge 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__EXU_ready) 
           & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__EXU_valid_delay)));
    if (__VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v0) {
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[1U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[2U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[3U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[4U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[5U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[6U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[7U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[8U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[9U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0xaU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0xbU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0xcU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0xdU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0xeU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0xfU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x10U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x11U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x12U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x13U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x14U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x15U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x16U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x17U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x18U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x19U] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x1aU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x1bU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x1cU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x1dU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x1eU] = 0U;
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0x1fU] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v32) {
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[0U] = 0U;
    }
    if (__VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33) {
        vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs[__VdlyDim0__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33] 
            = __VdlyVal__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33;
    }
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay = 0U;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__random_delay = 0U;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__random_delay = 0U;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay = 0U;
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[1U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [1U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[2U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [2U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[3U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [3U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[4U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [4U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[5U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [5U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[6U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [6U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[7U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [7U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[8U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [8U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[9U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [9U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0xaU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0xaU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0xbU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0xbU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0xcU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0xcU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0xdU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0xdU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0xeU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0xeU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0xfU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0xfU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x10U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x10U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x11U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x11U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x12U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x12U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x13U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x13U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x14U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x14U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x15U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x15U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x16U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x16U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x17U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x17U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x18U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x18U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x19U] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x19U];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x1aU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x1aU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x1bU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x1bU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x1cU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x1cU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x1dU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x1dU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x1eU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x1eU];
    vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout[0x1fU] 
        = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [0x1fU];
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                       : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                   : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                      && (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg))));
    vlSelfRef.ysyx_24120011__DOT__LSU_rready_delay 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready;
    vlSelfRef.ysyx_24120011__DOT__IFU_valid_delay = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid;
    vlSelfRef.ysyx_24120011__DOT__EXU_valid_delay = vlSelfRef.ysyx_24120011__DOT__EXU_ready;
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 1U;
        vlSelfRef.ysyx_24120011__DOT__r_mem_data = 0U;
        vlSelfRef.ysyx_24120011__DOT__pc = 0x80000000U;
        vlSelfRef.ysyx_24120011__DOT__pc = 0x80000000U;
        vlSelfRef.ysyx_24120011__DOT__inst = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state = 0U;
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state;
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 0U;
            } else if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 1U;
            }
        }
        if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
            vlSelfRef.ysyx_24120011__DOT__r_mem_data 
                = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_len))
                    ? ((IData)(vlSelfRef.ysyx_24120011__DOT__sign_extension)
                        ? (((- (IData)((1U & (((2U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                                : 0U) 
                                              >> 7U)))) 
                            << 8U) | ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                       ? (0xffU & vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                       : 0U)) : ((2U 
                                                  == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                  ? 
                                                 (0xffU 
                                                  & vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                                  : 0U))
                    : ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_len))
                        ? ((IData)(vlSelfRef.ysyx_24120011__DOT__sign_extension)
                            ? (((- (IData)((1U & ((
                                                   (2U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                    ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                                    : 0U) 
                                                  >> 0xfU)))) 
                                << 0x10U) | ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                              ? (0xffffU 
                                                 & vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                              : 0U))
                            : ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                ? (0xffffU & vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                : 0U)) : ((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_len))
                                           ? ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                               ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                               : 0U)
                                           : 0xffU)));
        }
        if (vlSelfRef.ysyx_24120011__DOT__LSU_valid) {
            vlSelfRef.ysyx_24120011__DOT__pc = vlSelfRef.ysyx_24120011__DOT__dnpc;
        }
        if ((0U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))) {
            if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))) {
                if (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__hit) {
                    vlSelfRef.ysyx_24120011__DOT__inst 
                        = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__inst_cache;
                }
            }
        }
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state;
    }
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
            ? 0U : ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                     ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                         ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg
                         : vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg)
                     : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                         ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg
                         : 0U)));
    Vysyx_24120011___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__regout);
    if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid) {
        if (((IData)(vlSelfRef.ysyx_24120011__DOT__LSU_ready) 
             & ((~ (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_en)) 
                & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_en))))) {
            vlSelfRef.ysyx_24120011__DOT__LSU_valid = 1U;
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__LSU_valid = (
                                                   (~ (IData)(vlSelfRef.ysyx_24120011__DOT__LSU_ready)) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state)));
    }
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f54ddbf__0 
        = (IData)((0x67U == (0x707fU & vlSelfRef.ysyx_24120011__DOT__inst)));
    vlSelfRef.ysyx_24120011__DOT__src1 = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                   >> 0xfU))];
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_3 
        = (vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
           [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                      >> 0xfU))] >> 0x1fU);
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_0_3 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_24120011__DOT__inst)));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyx_24120011__DOT__inst)));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyx_24120011__DOT__inst)));
    vlSelfRef.__Vtableidx3 = (0x7fU & vlSelfRef.ysyx_24120011__DOT__inst);
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type 
        = Vysyx_24120011__ConstPool__TABLE_hd20d1557_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                       : (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                   : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                      && (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? (5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                       : (5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                   : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      && (5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)))));
    if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelfRef.ysyx_24120011__DOT__M1_wready = (1U 
                                                   & ((1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                           >> 2U))) 
                                                      && ((2U 
                                                           & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                            ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                            : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))
                                                           : 
                                                          ((1U 
                                                            & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                                           && (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)))));
        vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid;
    } else {
        vlSelfRef.ysyx_24120011__DOT__M1_wready = 0U;
        vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = 0U;
    }
    if (((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready 
            = (((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
                & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt))) 
               && (IData)(vlSelfRef.ysyx_24120011__DOT__M1_rvalid));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state = 0U;
        vlSelfRef.ysyx_24120011__DOT__EXU_ready = 1U;
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state;
    }
    if (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid) {
        vlSelfRef.ysyx_24120011__DOT__EXU_ready = 0U;
    } else if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid) {
        vlSelfRef.ysyx_24120011__DOT__EXU_ready = 1U;
    }
    vlSelfRef.__Vtableidx1 = (((((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) 
                                 << 9U) | (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0) 
                                            << 8U) 
                                           | ((3U == 
                                               (0x7fU 
                                                & vlSelfRef.ysyx_24120011__DOT__inst)) 
                                              << 7U))) 
                               | (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f54ddbf__0) 
                                   << 6U) | ((0x37U 
                                              == (0x7fU 
                                                  & vlSelfRef.ysyx_24120011__DOT__inst)) 
                                             << 5U))) 
                              | (((0x17U == (0x7fU 
                                             & vlSelfRef.ysyx_24120011__DOT__inst)) 
                                  << 4U) | (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type) 
                                             << 1U) 
                                            | (0U == 
                                               (0x1fU 
                                                & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                   >> 7U))))));
    vlSelfRef.ysyx_24120011__DOT__rd_ctrl = Vysyx_24120011__ConstPool__TABLE_h5b5fa3b7_0
        [vlSelfRef.__Vtableidx1];
    if ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelfRef.ysyx_24120011__DOT__pc_ctrl = 0U;
        if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelfRef.ysyx_24120011__DOT__ALU_ctrl = 0U;
            vlSelfRef.ysyx_24120011__DOT__imme = 0U;
        } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelfRef.ysyx_24120011__DOT__ALU_ctrl 
                = ((0U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                 >> 0xcU))) ? 8U : 
                   ((1U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                  >> 0xcU))) ? 9U : 
                    ((5U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                   >> 0xcU))) ? 7U : 
                     ((7U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                    >> 0xcU))) ? 0xfU
                       : ((4U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                        >> 0xcU))) ? 3U
                           : ((6U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                            >> 0xcU)))
                               ? 0xbU : 0U))))));
            vlSelfRef.ysyx_24120011__DOT__imme = ((
                                                   (- (IData)(
                                                              (vlSelfRef.ysyx_24120011__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                              >> 7U)))));
        } else {
            vlSelfRef.ysyx_24120011__DOT__ALU_ctrl 
                = ((IData)((0U == (0xfe007000U & vlSelfRef.ysyx_24120011__DOT__inst)))
                    ? 0U : ((IData)((0x40000000U == 
                                     (0xfe007000U & vlSelfRef.ysyx_24120011__DOT__inst)))
                             ? 1U : ((IData)((0x3000U 
                                              == (0xfe007000U 
                                                  & vlSelfRef.ysyx_24120011__DOT__inst)))
                                      ? 0xbU : ((IData)(
                                                        (0x2000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                 ? 3U
                                                 : 
                                                ((IData)(
                                                         (0x4000U 
                                                          == 
                                                          (0xfe007000U 
                                                           & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          (0x1000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                   ? 6U
                                                   : 
                                                  ((IData)(
                                                           (0x7000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                    ? 0xdU
                                                    : 
                                                   ((IData)(
                                                            (0x40005000U 
                                                             == 
                                                             (0xfe007000U 
                                                              & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                     ? 0xcU
                                                     : 
                                                    ((IData)(
                                                             (0x6000U 
                                                              == 
                                                              (0xfe007000U 
                                                               & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0x5000U 
                                                               == 
                                                               (0xfe007000U 
                                                                & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                       ? 4U
                                                       : 0U))))))))));
            vlSelfRef.ysyx_24120011__DOT__imme = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelfRef.ysyx_24120011__DOT__pc_ctrl = 0U;
            vlSelfRef.ysyx_24120011__DOT__imme = ((
                                                   (- (IData)(
                                                              (vlSelfRef.ysyx_24120011__DOT__inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                           >> 7U))));
        } else {
            vlSelfRef.ysyx_24120011__DOT__pc_ctrl = 1U;
            vlSelfRef.ysyx_24120011__DOT__imme = ((
                                                   ((- (IData)(
                                                               (vlSelfRef.ysyx_24120011__DOT__inst 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | (0x100000U 
                                                      & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                         >> 0xbU))) 
                                                  | (((0xff000U 
                                                       & vlSelfRef.ysyx_24120011__DOT__inst) 
                                                      | (0x800U 
                                                         & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                            >> 9U))) 
                                                     | (0x7feU 
                                                        & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                           >> 0x14U))));
        }
        vlSelfRef.ysyx_24120011__DOT__ALU_ctrl = 0U;
    } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelfRef.ysyx_24120011__DOT__pc_ctrl = 0U;
        vlSelfRef.ysyx_24120011__DOT__ALU_ctrl = 0U;
        vlSelfRef.ysyx_24120011__DOT__imme = (0xfffff000U 
                                              & vlSelfRef.ysyx_24120011__DOT__inst);
    } else {
        vlSelfRef.ysyx_24120011__DOT__pc_ctrl = ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f54ddbf__0)
                                                  ? 2U
                                                  : 
                                                 ((0x30200073U 
                                                   == vlSelfRef.ysyx_24120011__DOT__inst)
                                                   ? 3U
                                                   : 
                                                  ((0x73U 
                                                    == vlSelfRef.ysyx_24120011__DOT__inst)
                                                    ? 3U
                                                    : 0U)));
        vlSelfRef.ysyx_24120011__DOT__ALU_ctrl = ((IData)(
                                                          (0x13U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(
                                                           (0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                    ? 0xbU
                                                    : 
                                                   ((IData)(
                                                            (0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                     ? 0xdU
                                                     : 
                                                    ((IData)(
                                                             (0x4013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                      ? 2U
                                                      : 
                                                     ((IData)(
                                                              (0x6013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                       ? 5U
                                                       : 
                                                      (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_0_3) 
                                                        & (0x20U 
                                                           == 
                                                           (vlSelfRef.ysyx_24120011__DOT__inst 
                                                            >> 0x19U)))
                                                        ? 0xcU
                                                        : 
                                                       (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_0_3) 
                                                         & (0U 
                                                            == 
                                                            (vlSelfRef.ysyx_24120011__DOT__inst 
                                                             >> 0x19U)))
                                                         ? 4U
                                                         : 
                                                        ((IData)(
                                                                 (0x1013U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelfRef.ysyx_24120011__DOT__inst)))
                                                          ? 6U
                                                          : 
                                                         ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0)
                                                           ? 5U
                                                           : 0U)))))))));
        vlSelfRef.ysyx_24120011__DOT__imme = (((- (IData)(
                                                          (vlSelfRef.ysyx_24120011__DOT__inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSelfRef.ysyx_24120011__DOT__inst 
                                                 >> 0x14U));
    }
    vlSelfRef.ysyx_24120011__DOT__w_mem_len = ((3U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 2U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                          >> 0xcU)))
                                                      ? 4U
                                                      : 1U)))
                                                : 1U);
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state));
    vlSelfRef.__Vtableidx2 = (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) 
                               << 3U) | (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type));
    vlSelfRef.ysyx_24120011__DOT__ALUBctrl = Vysyx_24120011__ConstPool__TABLE_h2fb4a9dc_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.ysyx_24120011__DOT__M1_bvalid = ((2U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                               & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    vlSelfRef.ysyx_24120011__DOT__S0_awvalid = ((1U 
                                                 == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                  ? 
                                                 (1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid))
                                                  : 0U));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                            >> 1U))) 
                                  && ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_awvalid))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_awvalid))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_awvalid))));
    vlSelfRef.ysyx_24120011__DOT__S0_bready = ((1U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                ? 1U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                    ? 
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready))
                                                    : 0U));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_bready) 
           & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                            >> 1U))) 
                                  && ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_bready))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_bready))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_bready))));
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
           & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((3U == (0x7fU & vlSelfRef.ysyx_24120011__DOT__inst))) {
            vlSelfRef.ysyx_24120011__DOT__sign_extension 
                = ((0U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                 >> 0xcU))) || ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                     >> 0xcU))) 
                                                || (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                        >> 0xcU)))));
            vlSelfRef.ysyx_24120011__DOT__r_mem_len 
                = ((0U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                 >> 0xcU))) ? 1U : 
                   ((1U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                  >> 0xcU))) ? 2U : 
                    ((2U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                   >> 0xcU))) ? 4U : 
                     ((4U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                    >> 0xcU))) ? 1U
                       : ((5U == (7U & (vlSelfRef.ysyx_24120011__DOT__inst 
                                        >> 0xcU))) ? 2U
                           : 1U)))));
        }
        vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl 
            = ((0x30200073U == vlSelfRef.ysyx_24120011__DOT__inst)
                ? 0U : ((0x73U == vlSelfRef.ysyx_24120011__DOT__inst)
                         ? 0U : ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0)
                                  ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0)
                                           ? 2U : 0U))));
    } else {
        vlSelfRef.ysyx_24120011__DOT__sign_extension = 0U;
        vlSelfRef.ysyx_24120011__DOT__r_mem_len = 1U;
    }
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        vlSelfRef.ysyx_24120011__DOT__S0_arlen = ((0xa0U 
                                                   == 
                                                   (vlSelfRef.ysyx_24120011__DOT__pc 
                                                    >> 0x18U))
                                                   ? 1U
                                                   : 0U);
        vlSelfRef.ysyx_24120011__DOT__S0_arsize = 2U;
    } else {
        vlSelfRef.ysyx_24120011__DOT__S0_arlen = 0U;
        vlSelfRef.ysyx_24120011__DOT__S0_arsize = (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                    ? 
                                                   ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                                                     ? 2U
                                                     : 
                                                    (7U 
                                                     & ((1U 
                                                         & (- (IData)(
                                                                      (2U 
                                                                       == (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_len))))) 
                                                        | (2U 
                                                           & (- (IData)(
                                                                        (4U 
                                                                         == (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_len))))))))
                                                    : 0U);
    }
    vlSelfRef.ysyx_24120011__DOT__M1_rvalid = ((2U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                               & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    if (((IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_en) 
         | (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_en))) {
        vlSelfRef.ysyx_24120011__DOT__LSU_ready = 0U;
    } else if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state))) {
        vlSelfRef.ysyx_24120011__DOT__LSU_ready = 1U;
    }
    vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme 
        = (vlSelfRef.ysyx_24120011__DOT__imme + vlSelfRef.ysyx_24120011__DOT__pc);
    vlSelfRef.ysyx_24120011__DOT__S0_wlast = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                               ? 0U
                                               : (1U 
                                                  & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                            >> 1U))) 
                                  && ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_wlast))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_wlast))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_wlast))));
    vlSelfRef.ysyx_24120011__DOT__S0_wvalid = ((1U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                ? 0U
                                                : (1U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_wvalid))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                            >> 1U))) 
                                  && ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_wvalid))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_wvalid))));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        } else if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state = 0U;
    }
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid));
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelfRef.ysyx_24120011__DOT__S0_wstrb = 0xfU;
        vlSelfRef.ysyx_24120011__DOT__S0_awsize = 2U;
        vlSelfRef.ysyx_24120011__DOT__S0_wdata = 0U;
    } else if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelfRef.ysyx_24120011__DOT__S0_wstrb = ((4U 
                                                   == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))
                                                   ? 0xfU
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))
                                                    ? 3U
                                                    : 1U));
        vlSelfRef.ysyx_24120011__DOT__S0_awsize = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                                                    ? 2U
                                                    : 
                                                   (7U 
                                                    & ((1U 
                                                        & (- (IData)(
                                                                     (2U 
                                                                      == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))))) 
                                                       | (2U 
                                                          & (- (IData)(
                                                                       (4U 
                                                                        == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))))))));
        vlSelfRef.ysyx_24120011__DOT__S0_wdata = ((4U 
                                                   == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))
                                                   ? 
                                                  vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                                  [
                                                  (0x1fU 
                                                   & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                      >> 0x14U))]
                                                   : 0U);
    } else {
        vlSelfRef.ysyx_24120011__DOT__S0_wstrb = 0U;
        vlSelfRef.ysyx_24120011__DOT__S0_awsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__S0_wdata = 0U;
    }
    if ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
            vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
            if (((IData)(vlSelfRef.ysyx_24120011__DOT__M1_bvalid) 
                 & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready))) {
                vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__M1_wready))) {
            vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
            if (((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid) 
                 & ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                    & ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                 >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                   : 
                                                  (3U 
                                                   == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                                  && (3U 
                                                      == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)))))))) {
                vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__M1_rvalid) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready))) {
            vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        if (((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid) 
             & ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready)))) {
            vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state 
            = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_read_delay)
                ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_write_delay)
                         ? 3U : 0U));
    }
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0U 
                                                    != (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                                                   && ((1U 
                                                        == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                                                       && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__hit))));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((0x30200073U == vlSelfRef.ysyx_24120011__DOT__inst)) {
            vlSelfRef.ysyx_24120011__DOT__w_csr_addr = 0U;
            vlSelfRef.ysyx_24120011__DOT__r_csr_addr = 0x341U;
            vlSelfRef.ysyx_24120011__DOT__r_csr_en 
                = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid;
        } else {
            if ((0x73U == vlSelfRef.ysyx_24120011__DOT__inst)) {
                vlSelfRef.ysyx_24120011__DOT__w_csr_addr = 0U;
                vlSelfRef.ysyx_24120011__DOT__r_csr_addr = 0U;
            } else if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0) {
                vlSelfRef.ysyx_24120011__DOT__w_csr_addr 
                    = (0xfffU & vlSelfRef.ysyx_24120011__DOT__imme);
                vlSelfRef.ysyx_24120011__DOT__r_csr_addr 
                    = (0xfffU & vlSelfRef.ysyx_24120011__DOT__imme);
            } else if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) {
                vlSelfRef.ysyx_24120011__DOT__w_csr_addr 
                    = (0xfffU & vlSelfRef.ysyx_24120011__DOT__imme);
                vlSelfRef.ysyx_24120011__DOT__r_csr_addr 
                    = (0xfffU & vlSelfRef.ysyx_24120011__DOT__imme);
            } else {
                vlSelfRef.ysyx_24120011__DOT__w_csr_addr 
                    = (0xfffU & 0U);
                vlSelfRef.ysyx_24120011__DOT__r_csr_addr 
                    = (0xfffU & 0U);
            }
            vlSelfRef.ysyx_24120011__DOT__r_csr_en 
                = ((0x73U != vlSelfRef.ysyx_24120011__DOT__inst) 
                   && ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0)
                        ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid)
                        : ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) 
                           && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid))));
        }
        vlSelfRef.ysyx_24120011__DOT__w_csr_en = ((0x30200073U 
                                                   != vlSelfRef.ysyx_24120011__DOT__inst) 
                                                  && ((0x73U 
                                                       != vlSelfRef.ysyx_24120011__DOT__inst) 
                                                      && ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0)
                                                           ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid)
                                                           : 
                                                          ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) 
                                                           && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid)))));
        vlSelfRef.ysyx_24120011__DOT__w_csr_ecall = 
            ((0x30200073U != vlSelfRef.ysyx_24120011__DOT__inst) 
             && ((0x73U == vlSelfRef.ysyx_24120011__DOT__inst) 
                 && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid)));
    }
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__next_state));
    vlSelfRef.ysyx_24120011__DOT__w_mem_en = ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                              && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid));
    vlSelfRef.ysyx_24120011__DOT__r_mem_en = ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                              && ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.ysyx_24120011__DOT__inst)) 
                                                  && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid)));
    if (vlSelfRef.ysyx_24120011__DOT__r_csr_en) {
        vlSelfRef.ysyx_24120011__DOT__r_csr_data = 
            ((0x341U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_csr_addr))
              ? vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mepc
              : ((0x300U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_csr_addr))
                  ? vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mstatus
                  : ((0x342U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_csr_addr))
                      ? vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mcause
                      : ((0x305U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_csr_addr))
                          ? vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mtvec
                          : ((0xf11U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_csr_addr))
                              ? vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mvendorid
                              : ((0xf12U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_csr_addr))
                                  ? vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__marchid
                                  : 0U))))));
    }
    if (vlSelfRef.ysyx_24120011__DOT__w_csr_ecall) {
        vlSelfRef.ysyx_24120011__DOT__r_csr_data = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mtvec;
    }
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__hit = (IData)(
                                                            ((1U 
                                                              == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                                                             & ((vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache
                                                                 [
                                                                 (0xfU 
                                                                  & (vlSelfRef.ysyx_24120011__DOT__pc 
                                                                     >> 3U))][2U] 
                                                                 >> 0x19U) 
                                                                & ((vlSelfRef.ysyx_24120011__DOT__pc 
                                                                    >> 7U) 
                                                                   == 
                                                                   (0x1ffffffU 
                                                                    & vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache
                                                                    [
                                                                    (0xfU 
                                                                     & (vlSelfRef.ysyx_24120011__DOT__pc 
                                                                        >> 3U))][2U])))));
    vlSelfRef.ysyx_24120011__DOT__ALUB = ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__ALUBctrl))
                                           ? vlSelfRef.ysyx_24120011__DOT__imme
                                           : ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__ALUBctrl))
                                               ? vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                              [(0x1fU 
                                                & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                   >> 0x14U))]
                                               : ((2U 
                                                   == (IData)(vlSelfRef.ysyx_24120011__DOT__ALUBctrl))
                                                   ? vlSelfRef.ysyx_24120011__DOT__r_csr_data
                                                   : 0U)));
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__inst_cache 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__hit)
            ? ((0x59U >= (0x7fU & VL_SHIFTL_III(7,7,32, 
                                                (1U 
                                                 & (vlSelfRef.ysyx_24120011__DOT__pc 
                                                    >> 2U)), 5U)))
                ? (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                  (1U 
                                                   & (vlSelfRef.ysyx_24120011__DOT__pc 
                                                      >> 2U)), 5U)))
                     ? 0U : (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache
                             [(0xfU & (vlSelfRef.ysyx_24120011__DOT__pc 
                                       >> 3U))][(((IData)(0x1fU) 
                                                  + 
                                                  (0x7fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   (1U 
                                                                    & (vlSelfRef.ysyx_24120011__DOT__pc 
                                                                       >> 2U)), 5U))) 
                                                 >> 5U)] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & VL_SHIFTL_III(7,7,32, 
                                                                   (1U 
                                                                    & (vlSelfRef.ysyx_24120011__DOT__pc 
                                                                       >> 2U)), 5U))))) 
                   | (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__icache
                      [(0xfU & (vlSelfRef.ysyx_24120011__DOT__pc 
                                >> 3U))][(3U & (VL_SHIFTL_III(7,7,32, 
                                                              (1U 
                                                               & (vlSelfRef.ysyx_24120011__DOT__pc 
                                                                  >> 2U)), 5U) 
                                                >> 5U))] 
                      >> (0x1fU & VL_SHIFTL_III(7,7,32, 
                                                (1U 
                                                 & (vlSelfRef.ysyx_24120011__DOT__pc 
                                                    >> 2U)), 5U))))
                : 0U) : 0U);
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__next_state 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
            ? 0U : ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                     ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                         ? (((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid) 
                             & (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)))
                             ? ((4U == vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cached_size)
                                 ? 1U : ((0xa0U == 
                                          (vlSelfRef.ysyx_24120011__DOT__pc 
                                           >> 0x18U))
                                          ? 3U : 2U))
                             : 3U) : (((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                                       & ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                          & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready)))
                                       ? 3U : 2U)) : 
                    ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                      ? ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__hit)
                          ? 0U : 2U) : ((((IData)(vlSelfRef.ysyx_24120011__DOT__LSU_ready) 
                                          & (IData)(vlSelfRef.ysyx_24120011__DOT__EXU_ready)) 
                                         & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid)))
                                         ? 1U : 0U))));
    vlSelfRef.ysyx_24120011__DOT__S0_arvalid = (1U 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                    ? 
                                                   (2U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                     ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                                                     : 0U)));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                            >> 1U))) 
                                  && ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                      && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_arvalid))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_arvalid))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_arvalid))));
    vlSelfRef.ysyx_24120011__DOT__S0_rready = (1U & 
                                               ((1U 
                                                 == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                 ? 
                                                (3U 
                                                 == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                  ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready)
                                                  : 0U)));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done 
        = (((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                      >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                        : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                    : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                       && (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg)))) 
           & ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_rready) 
              & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid)));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                            >> 1U))) 
                                  && ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                      && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_rready))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_rready))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((1U & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                         >> 1U)) && 
                                  ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                   && (IData)(vlSelfRef.ysyx_24120011__DOT__S0_rready))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_1 
        = (vlSelfRef.ysyx_24120011__DOT__ALUB ^ (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl)))));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                    ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                             ? 2U : 0U));
        } else if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                             ? 1U : 0U));
        }
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                             ? 1U : 0U));
        }
    } else if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))
                    ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                             ? 2U : 0U));
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state = 0U;
    }
    if ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
            if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid) 
                 & (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid) 
             & (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state 
            = ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid)
                ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid)
                         ? 3U : 0U));
    }
    if ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))) {
            if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid) 
                 & (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid) 
             & (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state 
            = ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid)
                ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid)
                         ? 3U : 0U));
    }
    if ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                 & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
            if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid) 
                 & (3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
        if (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid) 
             & (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state 
            = ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid)
                ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid)
                         ? 3U : 0U));
    }
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__B_in 
        = ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
            ? ((IData)(1U) + vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_1)
            : vlSelfRef.ysyx_24120011__DOT__ALUB);
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__carry 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                                  [
                                                  (0x1fU 
                                                   & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                      >> 0xfU))])) 
                                  + (QData)((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__B_in))) 
                                 >> 0x20U))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp 
        = (vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
           [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                      >> 0xfU))] + vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__B_in);
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__sless 
        = (1U & ((vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp 
                  >> 0x1fU) ^ (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_3) 
                                == (((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                      ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_1
                                      : vlSelfRef.ysyx_24120011__DOT__ALUB) 
                                    >> 0x1fU)) & ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_3) 
                                                  != 
                                                  (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp 
                                                   >> 0x1fU)))));
    vlSelfRef.ysyx_24120011__DOT__alu_result = ((4U 
                                                 & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   ((0U 
                                                     == vlSelfRef.ysyx_24120011__DOT__ALUB)
                                                     ? 1U
                                                     : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__carry))
                                                    : 
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__sless))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                    ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp
                                                    : 
                                                   (vlSelfRef.ysyx_24120011__DOT__src1 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelfRef.ysyx_24120011__DOT__ALUB))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   (vlSelfRef.ysyx_24120011__DOT__src1 
                                                    & vlSelfRef.ysyx_24120011__DOT__ALUB)
                                                    : 
                                                   (vlSelfRef.ysyx_24120011__DOT__src1 
                                                    | vlSelfRef.ysyx_24120011__DOT__ALUB))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelfRef.ysyx_24120011__DOT__ALUB))
                                                     ? vlSelfRef.ysyx_24120011__DOT__src1
                                                     : 
                                                    ((vlSelfRef.ysyx_24120011__DOT__src1 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelfRef.ysyx_24120011__DOT__ALUB)) 
                                                     | VL_SHIFTL_III(32,32,32, 
                                                                     (- (IData)(
                                                                                (vlSelfRef.ysyx_24120011__DOT__src1 
                                                                                >> 0x1fU))), 
                                                                     ((IData)(0x20U) 
                                                                      - 
                                                                      (0x1fU 
                                                                       & vlSelfRef.ysyx_24120011__DOT__ALUB)))))
                                                    : 
                                                   (vlSelfRef.ysyx_24120011__DOT__src1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelfRef.ysyx_24120011__DOT__ALUB)))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   ((0U 
                                                     == vlSelfRef.ysyx_24120011__DOT__ALUB)
                                                     ? 0U
                                                     : 
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__carry))))
                                                    : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__sless))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                    ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp
                                                    : 
                                                   (vlSelfRef.ysyx_24120011__DOT__src1 
                                                    ^ vlSelfRef.ysyx_24120011__DOT__ALUB)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   (vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                                    [
                                                    (0x1fU 
                                                     & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                        >> 0xfU))] 
                                                    != vlSelfRef.ysyx_24120011__DOT__ALUB)
                                                    : vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp)
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   (vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                                    [
                                                    (0x1fU 
                                                     & (vlSelfRef.ysyx_24120011__DOT__inst 
                                                        >> 0xfU))] 
                                                    == vlSelfRef.ysyx_24120011__DOT__ALUB)
                                                    : vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp))));
    vlSelfRef.ysyx_24120011__DOT__S0_araddr = ((1U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                ? vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__araddr
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))
                                                     ? vlSelfRef.ysyx_24120011__DOT__alu_result
                                                     : 0U)
                                                    : 0U));
    if ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arlen = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state = 0U;
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen = 0U;
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arlen 
                = vlSelfRef.ysyx_24120011__DOT__S0_arlen;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize 
                = vlSelfRef.ysyx_24120011__DOT__S0_arsize;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr 
                = vlSelfRef.ysyx_24120011__DOT__S0_araddr;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                    ? 0U : 3U);
        } else {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen 
                = vlSelfRef.ysyx_24120011__DOT__S0_arlen;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arlen = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize 
                = vlSelfRef.ysyx_24120011__DOT__S0_arsize;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr 
                = vlSelfRef.ysyx_24120011__DOT__S0_araddr;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                    ? 0U : 2U);
        }
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
    } else {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen 
                = vlSelfRef.ysyx_24120011__DOT__S0_arlen;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize 
                = vlSelfRef.ysyx_24120011__DOT__S0_arsize;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
                = vlSelfRef.ysyx_24120011__DOT__S0_araddr;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                    ? 0U : 1U);
        } else {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_arvalid)
                    ? (((0xa0000048U == vlSelfRef.ysyx_24120011__DOT__S0_araddr) 
                        | (0xa000004cU == vlSelfRef.ysyx_24120011__DOT__S0_araddr))
                        ? 3U : 1U) : 0U);
        }
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arlen = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr = 0U;
    }
    vlSelfRef.ysyx_24120011__DOT__S0_awaddr = ((1U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))
                                                     ? vlSelfRef.ysyx_24120011__DOT__alu_result
                                                     : 0U)
                                                    : 0U));
    if ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state = 0U;
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb 
                = vlSelfRef.ysyx_24120011__DOT__S0_wstrb;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize 
                = vlSelfRef.ysyx_24120011__DOT__S0_awsize;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata 
                = vlSelfRef.ysyx_24120011__DOT__S0_wdata;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr 
                = vlSelfRef.ysyx_24120011__DOT__S0_awaddr;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
                = (((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                    ? 0U : 3U);
        } else {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb 
                = vlSelfRef.ysyx_24120011__DOT__S0_wstrb;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize 
                = vlSelfRef.ysyx_24120011__DOT__S0_awsize;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata 
                = vlSelfRef.ysyx_24120011__DOT__S0_wdata;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr 
                = vlSelfRef.ysyx_24120011__DOT__S0_awaddr;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
                = (((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                    ? 0U : 2U);
        }
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb 
                = vlSelfRef.ysyx_24120011__DOT__S0_wstrb;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize 
                = vlSelfRef.ysyx_24120011__DOT__S0_awsize;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata 
                = vlSelfRef.ysyx_24120011__DOT__S0_wdata;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr 
                = vlSelfRef.ysyx_24120011__DOT__S0_awaddr;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
                = (((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                    ? 0U : 1U);
        } else {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_awvalid)
                    ? ((0xa00003f8U == vlSelfRef.ysyx_24120011__DOT__S0_awaddr)
                        ? 2U : 1U) : 0U);
        }
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr = 0U;
    }
    vlSelfRef.ysyx_24120011__DOT__w_csr_data = ((0U 
                                                 == (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl))
                                                  ? vlSelfRef.ysyx_24120011__DOT__src1
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl))
                                                   ? vlSelfRef.ysyx_24120011__DOT__alu_result
                                                   : 0U)));
    vlSelfRef.ysyx_24120011__DOT__dnpc = ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__pc_ctrl))
                                           ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__pc_ctrl))
                                               ? vlSelfRef.ysyx_24120011__DOT__r_csr_data
                                               : vlSelfRef.ysyx_24120011__DOT__alu_result)
                                           : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__pc_ctrl))
                                               ? vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                               : ((
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.ysyx_24120011__DOT__inst)) 
                                                   & vlSelfRef.ysyx_24120011__DOT__alu_result)
                                                   ? vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.ysyx_24120011__DOT__pc))));
}

void Vysyx_24120011___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc, IData/*31:0*/ inst, IData/*31:0*/ IFU_valid_int);

VL_INLINE_OPT void Vysyx_24120011___024root___nba_sequent__TOP__1(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___nba_sequent__TOP__1\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_24120011___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__pc, 
                                                                      ((2U 
                                                                        & (IData)(vlSelfRef.ysyx_24120011__DOT__pc_ctrl))
                                                                        ? 
                                                                       ((1U 
                                                                         & (IData)(vlSelfRef.ysyx_24120011__DOT__pc_ctrl))
                                                                         ? vlSelfRef.ysyx_24120011__DOT__r_csr_data
                                                                         : vlSelfRef.ysyx_24120011__DOT__alu_result)
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(vlSelfRef.ysyx_24120011__DOT__pc_ctrl))
                                                                         ? vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                                                         : 
                                                                        (((0x63U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.ysyx_24120011__DOT__inst)) 
                                                                          & vlSelfRef.ysyx_24120011__DOT__alu_result)
                                                                          ? vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                                                          : 
                                                                         ((IData)(4U) 
                                                                          + vlSelfRef.ysyx_24120011__DOT__pc)))), vlSelfRef.ysyx_24120011__DOT__inst, (IData)(vlSelfRef.ysyx_24120011__DOT__LSU_valid));
}
