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

void Vysyx_24120011___024unit____Vdpiimwrap_npc_trap_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ ret);
void Vysyx_24120011___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vysyx_24120011___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(IData/*31:0*/ Performancetype);
void Vysyx_24120011___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ w_mem_addr, IData/*31:0*/ w_mem_data, CData/*7:0*/ w_mem_len);
void Vysyx_24120011___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(IData/*31:0*/ r_mem_addr, IData/*31:0*/ &rtl_pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011__ConstPool__TABLE_hd20d1557_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vysyx_24120011__ConstPool__TABLE_h5b5fa3b7_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_24120011__ConstPool__TABLE_h2fb4a9dc_0;
void Vysyx_24120011___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> array);
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_24120011__ConstPool__TABLE_h9ca343f8_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_24120011__ConstPool__TABLE_haf93202d_0;

VL_INLINE_OPT void Vysyx_24120011___024root___nba_sequent__TOP__0(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___nba_sequent__TOP__0\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_rtl_pmem_read__7__Vfuncout;
    __Vfunc_rtl_pmem_read__7__Vfuncout = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev = 0;
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
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt;
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
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt;
    __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt;
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
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev 
        = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev;
    __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt 
        = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mvendorid 
        = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mvendorid;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__marchid 
        = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__marchid;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mstatus 
        = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mstatus;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mtvec = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mtvec;
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause 
        = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mcause;
    if ((0x100073U == vlSelfRef.ysyx_24120011__DOT__inst)) {
        Vysyx_24120011___024unit____Vdpiimwrap_npc_trap_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__pc, 
                                                                       vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                                                                       [0xaU]);
        Vysyx_24120011___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc = vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mepc;
    __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v0 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v32 = 0U;
    __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v33 = 0U;
    if (vlSelfRef.ysyx_24120011__DOT__IFU_valid_rising_edge) {
        Vysyx_24120011___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(1U);
    }
    if (vlSelfRef.ysyx_24120011__DOT__LSU_rready_rising_edge) {
        Vysyx_24120011___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(2U);
    }
    if (vlSelfRef.ysyx_24120011__DOT__EXU_valid_rising_edge) {
        Vysyx_24120011___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(3U);
    }
    if ((0U != vlSelfRef.ysyx_24120011__DOT__M0_rdata)) {
        vlSelfRef.ysyx_24120011__DOT__inst = vlSelfRef.ysyx_24120011__DOT__M0_rdata;
    }
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__random_delay;
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
    if ((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay;
    }
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay;
    }
    if ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay;
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
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state))) {
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt 
            = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__random_delay;
    }
    if (((IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_en) 
         | (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_en))) {
        vlSelfRef.ysyx_24120011__DOT__LSU_ready = 0U;
    } else if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state))) {
        vlSelfRef.ysyx_24120011__DOT__LSU_ready = 1U;
    }
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_write_delay 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_en));
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_read_delay 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_en));
    if (((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid 
            = (((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt))) 
               && (1U & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arready))));
    }
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
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime = 0ULL;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr = 0U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr = 0U;
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr = 0U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mvendorid = 0x79737978U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__marchid = 0x1700acbU;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mstatus = 0U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mtvec = 0U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause = 0U;
        __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc = 0U;
        __VdlySet__ysyx_24120011__DOT__i_RegStack__DOT__Regs__v0 = 1U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__LSFR_in = 1U;
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__LSFR_in = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in = 1U;
    } else {
        __Vdly__ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime 
            = (1ULL + vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime);
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
            __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mcause = 0xbU;
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
        Vysyx_24120011___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr, __Vfunc_rtl_pmem_read__7__Vfuncout);
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg 
            = __Vfunc_rtl_pmem_read__7__Vfuncout;
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
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master = 0U;
            } else if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
                vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master = 1U;
            }
        }
    }
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f54ddbf__0 
        = (IData)((0x67U == (0x707fU & vlSelfRef.ysyx_24120011__DOT__inst)));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_0_3 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_24120011__DOT__inst)));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyx_24120011__DOT__inst)));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyx_24120011__DOT__inst)));
    vlSelfRef.__Vtableidx4 = (0x7fU & vlSelfRef.ysyx_24120011__DOT__inst);
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type 
        = Vysyx_24120011__ConstPool__TABLE_hd20d1557_0
        [vlSelfRef.__Vtableidx4];
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
    vlSelfRef.ysyx_24120011__DOT__i_Csr__DOT__mepc 
        = __Vdly__ysyx_24120011__DOT__i_Csr__DOT__mepc;
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
    vlSelfRef.ysyx_24120011__DOT__LSU_rready_rising_edge 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready) 
           & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__LSU_rready_delay)));
    vlSelfRef.ysyx_24120011__DOT__IFU_valid_rising_edge 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready) 
           & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__IFU_valid_delay)));
    vlSelfRef.ysyx_24120011__DOT__EXU_valid_rising_edge 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__EXU_ready) 
           & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__EXU_valid_delay)));
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt;
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
    vlSelfRef.__Vtableidx2 = (((((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) 
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
        [vlSelfRef.__Vtableidx2];
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
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 1U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 1U;
        vlSelfRef.ysyx_24120011__DOT__r_mem_data = 0U;
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
    vlSelfRef.__Vtableidx3 = (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) 
                               << 3U) | (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type));
    vlSelfRef.ysyx_24120011__DOT__ALUBctrl = Vysyx_24120011__ConstPool__TABLE_h2fb4a9dc_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__random_delay = 0U;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__random_delay = 0U;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__random_delay = 0U;
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay = 0U;
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__random_delay = 0U;
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
    vlSelfRef.ysyx_24120011__DOT__src1 = vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                   >> 0xfU))];
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_3 
        = (vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
           [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                      >> 0xfU))] >> 0x1fU);
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                       : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                   : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                      && (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg))));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011__DOT__pc = 0x80000000U;
        vlSelfRef.ysyx_24120011__DOT__pc = 0x80000000U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state = 0U;
    } else {
        if (vlSelfRef.ysyx_24120011__DOT__LSU_valid) {
            vlSelfRef.ysyx_24120011__DOT__pc = vlSelfRef.ysyx_24120011__DOT__dnpc;
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
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((0x30200073U == vlSelfRef.ysyx_24120011__DOT__inst)) {
            vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl = 0U;
            vlSelfRef.ysyx_24120011__DOT__w_csr_addr = 0U;
            vlSelfRef.ysyx_24120011__DOT__r_csr_addr = 0x341U;
        } else if ((0x73U == vlSelfRef.ysyx_24120011__DOT__inst)) {
            vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl = 0U;
            vlSelfRef.ysyx_24120011__DOT__w_csr_addr = 0U;
            vlSelfRef.ysyx_24120011__DOT__r_csr_addr = 0U;
        } else if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0) {
            vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl = 1U;
            vlSelfRef.ysyx_24120011__DOT__w_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011__DOT__imme);
            vlSelfRef.ysyx_24120011__DOT__r_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011__DOT__imme);
        } else if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) {
            vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl = 2U;
            vlSelfRef.ysyx_24120011__DOT__w_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011__DOT__imme);
            vlSelfRef.ysyx_24120011__DOT__r_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011__DOT__imme);
        } else {
            vlSelfRef.ysyx_24120011__DOT__w_csr_data_ctrl = 0U;
            vlSelfRef.ysyx_24120011__DOT__w_csr_addr 
                = (0xfffU & 0U);
            vlSelfRef.ysyx_24120011__DOT__r_csr_addr 
                = (0xfffU & 0U);
        }
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
    } else {
        vlSelfRef.ysyx_24120011__DOT__sign_extension = 0U;
        vlSelfRef.ysyx_24120011__DOT__r_mem_len = 1U;
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
    vlSelfRef.ysyx_24120011__DOT__LSU_rready_delay 
        = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready;
    vlSelfRef.ysyx_24120011__DOT__IFU_valid_delay = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready;
    vlSelfRef.ysyx_24120011__DOT__EXU_valid_delay = vlSelfRef.ysyx_24120011__DOT__EXU_ready;
    vlSelfRef.ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme 
        = (vlSelfRef.ysyx_24120011__DOT__imme + vlSelfRef.ysyx_24120011__DOT__pc);
    if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid) {
        if (((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
             & ((~ (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_en)) 
                & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_en))))) {
            vlSelfRef.ysyx_24120011__DOT__LSU_valid = 1U;
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__LSU_valid = (
                                                   (0U 
                                                    != (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state)) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state)));
    }
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? (5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                       : (5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                   : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      && (5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                       : (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state)))
                                   : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                      && (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state)))));
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
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state = 0U;
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state;
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state 
            = vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state;
    }
    if (vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready) {
        vlSelfRef.ysyx_24120011__DOT__EXU_ready = 0U;
    } else if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid) {
        vlSelfRef.ysyx_24120011__DOT__EXU_ready = 1U;
    }
    vlSelfRef.ysyx_24120011__DOT__M1_bvalid = ((2U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                               & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelfRef.ysyx_24120011__DOT__S0_wstrb = 0xfU;
        vlSelfRef.ysyx_24120011__DOT__S0_awsize = 2U;
        vlSelfRef.ysyx_24120011__DOT__S0_awvalid = 0U;
        vlSelfRef.ysyx_24120011__DOT__S0_bready = 1U;
        vlSelfRef.ysyx_24120011__DOT__S0_wlast = 0U;
        vlSelfRef.ysyx_24120011__DOT__S0_wvalid = 0U;
        vlSelfRef.ysyx_24120011__DOT__S0_wdata = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
            vlSelfRef.ysyx_24120011__DOT__S0_wstrb 
                = ((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))
                    ? 0xfU : ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))
                               ? 3U : 1U));
            if (vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid) {
                vlSelfRef.ysyx_24120011__DOT__S0_awsize = 2U;
                vlSelfRef.ysyx_24120011__DOT__S0_awvalid = 1U;
            } else {
                vlSelfRef.ysyx_24120011__DOT__S0_awsize 
                    = (7U & ((1U & (- (IData)((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len))))) 
                             | (2U & (- (IData)((4U 
                                                 == (IData)(vlSelfRef.ysyx_24120011__DOT__w_mem_len)))))));
                vlSelfRef.ysyx_24120011__DOT__S0_awvalid = 0U;
            }
            vlSelfRef.ysyx_24120011__DOT__S0_bready 
                = (1U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__bready));
            vlSelfRef.ysyx_24120011__DOT__S0_wdata 
                = ((4U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))
                    ? vlSelfRef.ysyx_24120011__DOT__i_RegStack__DOT__Regs
                   [(0x1fU & (vlSelfRef.ysyx_24120011__DOT__inst 
                              >> 0x14U))] : 0U);
        } else {
            vlSelfRef.ysyx_24120011__DOT__S0_wstrb = 0U;
            vlSelfRef.ysyx_24120011__DOT__S0_awsize = 0U;
            vlSelfRef.ysyx_24120011__DOT__S0_awvalid = 0U;
            vlSelfRef.ysyx_24120011__DOT__S0_bready = 0U;
            vlSelfRef.ysyx_24120011__DOT__S0_wdata = 0U;
        }
        vlSelfRef.ysyx_24120011__DOT__S0_wlast = (1U 
                                                  & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0);
        vlSelfRef.ysyx_24120011__DOT__S0_wvalid = (1U 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_0_0);
    }
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
    if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        vlSelfRef.ysyx_24120011__DOT__M0_rdata = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata;
        vlSelfRef.ysyx_24120011__DOT__S0_arsize = 2U;
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arready 
            = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready;
    } else {
        vlSelfRef.ysyx_24120011__DOT__M0_rdata = 0U;
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
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arready = 0U;
    }
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__M1_rvalid = ((2U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                               & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
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
    vlSelfRef.ysyx_24120011__DOT__S0_arvalid = (1U 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                    ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid)
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
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready));
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
    if (((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
         & (0U != (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt)))) {
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt 
            = (0xffU & ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev = 0U;
    } else if (((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)) 
                & (0U == (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt)))) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready 
            = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid) 
               & (~ (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev)));
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev 
            = vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid;
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready = 0U;
        __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev = 0U;
    }
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelfRef.ysyx_24120011__DOT__w_csr_en = ((0x30200073U 
                                                   != vlSelfRef.ysyx_24120011__DOT__inst) 
                                                  && ((0x73U 
                                                       != vlSelfRef.ysyx_24120011__DOT__inst) 
                                                      && ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0)
                                                           ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready)
                                                           : 
                                                          ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) 
                                                           && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready)))));
        vlSelfRef.ysyx_24120011__DOT__w_csr_ecall = 
            ((0x30200073U != vlSelfRef.ysyx_24120011__DOT__inst) 
             && ((0x73U == vlSelfRef.ysyx_24120011__DOT__inst) 
                 && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready)));
        vlSelfRef.ysyx_24120011__DOT__r_csr_en = ((0x30200073U 
                                                   == vlSelfRef.ysyx_24120011__DOT__inst)
                                                   ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready)
                                                   : 
                                                  ((0x73U 
                                                    != vlSelfRef.ysyx_24120011__DOT__inst) 
                                                   && ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0)
                                                        ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready)
                                                        : 
                                                       ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0) 
                                                        && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready)))));
    }
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__next_state));
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev 
        = __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev;
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt 
        = __Vdly__ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt;
    vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
           & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelfRef.ysyx_24120011__DOT__w_mem_en = ((3U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                              && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready));
    vlSelfRef.ysyx_24120011__DOT__r_mem_en = ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                              && ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.ysyx_24120011__DOT__inst)) 
                                                  && (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready)));
    vlSelfRef.ysyx_24120011__DOT__S0_rready = (1U & 
                                               ((1U 
                                                 == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                 ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                  ? (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready)
                                                  : 0U)));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_rready) 
           & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
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
    vlSelfRef.__Vtableidx1 = (((((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready) 
                                 << 8U) | (((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rvalid) 
                                            << 7U) 
                                           | ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arready) 
                                              << 6U))) 
                               | (((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid) 
                                   << 5U) | ((IData)(vlSelfRef.ysyx_24120011__DOT__EXU_ready) 
                                             << 4U))) 
                              | (((IData)(vlSelfRef.ysyx_24120011__DOT__LSU_ready) 
                                  << 3U) | (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)));
    if (Vysyx_24120011__ConstPool__TABLE_h9ca343f8_0
        [vlSelfRef.__Vtableidx1]) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__next_state 
            = Vysyx_24120011__ConstPool__TABLE_haf93202d_0
            [vlSelfRef.__Vtableidx1];
    }
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                    ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                             ? 2U : 0U));
        } else if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                             ? 1U : 0U));
        }
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                             ? 1U : 0U));
        }
    } else if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid)
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
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_1 
        = (vlSelfRef.ysyx_24120011__DOT__ALUB ^ (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.ysyx_24120011__DOT__ALU_ctrl)))));
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
                                                ? vlSelfRef.ysyx_24120011__DOT__pc
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
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state = 0U;
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
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
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
    } else {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize 
                = vlSelfRef.ysyx_24120011__DOT__S0_arsize;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
                = vlSelfRef.ysyx_24120011__DOT__S0_araddr;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                    ? 0U : 1U);
        } else {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_arvalid)
                    ? (((0xa0000048U == vlSelfRef.ysyx_24120011__DOT__S0_araddr) 
                        | (0xa000004cU == vlSelfRef.ysyx_24120011__DOT__S0_araddr))
                        ? 3U : 1U) : 0U);
        }
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
