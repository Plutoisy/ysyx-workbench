// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011_top__Syms.h"
#include "Vysyx_24120011_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__act(Vysyx_24120011_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120011_top___024root___eval_triggers__act(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->ysyx_24120011_top__DOT__clint_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_24120011_top__DOT__clint_clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_24120011_top__DOT__clint_clk 
        = vlSelf->ysyx_24120011_top__DOT__clint_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24120011_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_24120011_top___024unit____Vdpiimwrap_npc_trap_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ ret);
void Vysyx_24120011_top___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ w_mem_addr, IData/*31:0*/ w_mem_data, CData/*7:0*/ w_mem_len);
void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(IData/*31:0*/ r_mem_addr, IData/*31:0*/ &rtl_pmem_read__Vfuncrtn);
void Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> array);

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_sequent__TOP__1(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rtl_pmem_read__4__Vfuncout;
    __Vfunc_rtl_pmem_read__4__Vfuncout = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v32;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v32 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33;
    __Vdlyvdim0__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33;
    __Vdlyvval__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 0;
    CData/*7:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr = 0;
    // Body
    __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt;
    __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt;
    if ((0x100073U == vlSelf->ysyx_24120011_top__DOT__inst)) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_npc_trap_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__pc, 
                                                                           vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                                           [0xaU]);
        Vysyx_24120011_top___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 0U;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v32 = 0U;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 = 0U;
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__random_delay;
    }
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay;
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay;
    }
    if ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay;
    }
    if ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay;
    }
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay;
    }
    if ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay;
    }
    if ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay;
    }
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__random_delay;
    }
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay;
    }
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay;
    }
    if (((IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_en) 
         | (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_en))) {
        vlSelf->ysyx_24120011_top__DOT__LSU_ready = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state))) {
        vlSelf->ysyx_24120011_top__DOT__LSU_ready = 1U;
    }
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
    if (((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid 
            = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state)) 
               & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt)));
    }
    if (((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid 
            = (((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt))) 
               & (IData)(vlSelf->ysyx_24120011_top__DOT__M1_wready));
    }
    if (((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid 
            = ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
               & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt)));
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr = 0U;
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr = 0U;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec = 0U;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus = 0U;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause = 0U;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc = 0U;
        __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 1U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state = 0U;
    } else {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr 
            = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))
                ? vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr
                : ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))
                    ? vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr
                    : vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr));
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr 
            = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                ? vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr
                : ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                    ? vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr
                    : vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr));
        if (vlSelf->ysyx_24120011_top__DOT__w_csr_en) {
            if ((0x341U != (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                if ((0x300U != (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                    if ((0x342U != (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec 
                            = ((0x305U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))
                                ? vlSelf->ysyx_24120011_top__DOT__w_csr_data
                                : vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec);
                    }
                    if ((0x342U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause 
                            = vlSelf->ysyx_24120011_top__DOT__w_csr_data;
                    } else if ((0x305U != (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause 
                            = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
                    }
                }
                if ((0x300U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus 
                        = vlSelf->ysyx_24120011_top__DOT__w_csr_data;
                } else if ((0x342U != (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                    if ((0x305U != (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus 
                            = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
                    }
                }
            }
            if ((0x341U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
                    = vlSelf->ysyx_24120011_top__DOT__w_csr_data;
            } else if ((0x300U != (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                if ((0x342U != (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                    if ((0x305U != (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_addr))) {
                        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
                            = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
                    }
                }
            }
        }
        if (vlSelf->ysyx_24120011_top__DOT__w_csr_ecall) {
            __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause = 0xbU;
            __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
                = vlSelf->ysyx_24120011_top__DOT__pc;
        }
        __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v32 = 1U;
        if (((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_valid) 
             & (4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl)))) {
            __Vdlyvval__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 
                = ((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                    ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                             ? ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                 ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                     ? 0U : vlSelf->ysyx_24120011_top__DOT__r_csr_data)
                                 : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                     ? vlSelf->ysyx_24120011_top__DOT__r_mem_data
                                     : 0U)) : ((2U 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                    ? vlSelf->ysyx_24120011_top__DOT__imme
                                                    : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                    ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24120011_top__DOT__pc)))));
            __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 = 1U;
            __Vdlyvdim0__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 
                = (0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                            >> 7U));
        }
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state 
            = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state;
    }
    if (((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 0U;
    } else if ((((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt))) 
                & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed)))) {
        if ((0xa00003f8U == vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr)) {
            if (VL_UNLIKELY((0xfU == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb)))) {
                VL_WRITEF("%c",8,(0xffU & vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata));
            } else if (VL_UNLIKELY((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb)))) {
                VL_WRITEF("%c",8,(0xffU & vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata));
            } else if (VL_UNLIKELY((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb)))) {
                VL_WRITEF("%c",8,(0xffU & vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata));
            }
        }
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 1U;
    } else if ((((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt))) 
                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed))) {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 1U;
    } else {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg = 0U;
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = 0U;
    }
    if (((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 0U;
    } else if ((((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt))) 
                & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed)))) {
        if ((0xfU == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
            Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr, vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata, 4U);
        } else if ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
            Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr, vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata, 2U);
        } else if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
            Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr, vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata, 1U);
        }
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 1U;
    } else if ((((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt))) 
                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed))) {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg = 1U;
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 1U;
    } else {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg = 0U;
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = 0U;
    }
    if (((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid 
            = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
               & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt)));
    }
    if (((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready 
            = (((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt))) 
               & (IData)(vlSelf->ysyx_24120011_top__DOT__M1_bvalid));
    }
    if (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt) 
                        - (IData)(1U)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready 
            = (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt))) 
               & (IData)(vlSelf->ysyx_24120011_top__DOT__M1_rvalid));
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master = 0U;
            } else if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master = 1U;
            }
        }
    }
    if (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 0U;
    } else if ((((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt))) 
                & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed)))) {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg = 0U;
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 1U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg = 1U;
    } else if ((((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt))) 
                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 1U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg = 1U;
    } else {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = 0U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg = 0U;
    }
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state));
    if (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt) 
                        - (IData)(1U)));
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 0U;
    } else if ((((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt))) 
                & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed)))) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr, __Vfunc_rtl_pmem_read__4__Vfuncout);
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg 
            = __Vfunc_rtl_pmem_read__4__Vfuncout;
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 1U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg = 1U;
    } else if ((((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt))) 
                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed))) {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 1U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg = 1U;
    } else {
        __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = 0U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg = 0U;
    }
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec 
        = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus 
        = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause 
        = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
        = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
    if (__Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0) {
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0xaU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0xbU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0xcU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0xdU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0xeU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0xfU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x10U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x11U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x12U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x13U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x14U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x15U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x16U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x17U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x18U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x19U] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x1aU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x1bU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x1cU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x1dU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x1eU] = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v32) {
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0U] = 0U;
    }
    if (__Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33) {
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[__Vdlyvdim0__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33] 
            = __Vdlyvval__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33;
    }
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr 
        = __Vdly__ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr;
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay 
        = ((0x80U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in))) 
                     << 7U)) | (0x7fU & ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in) 
                                         >> 1U)));
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__random_delay 
        = ((0x80U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in))) 
                     << 7U)) | (0x7fU & ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in) 
                                         >> 1U)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay 
        = ((0x80U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in))) 
                     << 7U)) | (0x7fU & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in) 
                                         >> 1U)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay 
        = ((0x80U & (VL_REDXOR_8((0x1dU & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in))) 
                     << 7U)) | (0x7fU & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in) 
                                         >> 1U)));
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [1U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [2U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [3U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [4U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [5U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [6U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [7U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [8U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [9U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xaU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xaU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xbU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xbU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xcU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xcU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xdU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xdU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xeU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xeU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xfU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xfU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x10U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x10U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x11U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x11U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x12U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x12U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x13U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x13U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x14U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x14U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x15U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x15U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x16U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x16U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x17U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x17U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x18U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x18U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x19U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x19U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1aU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1aU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1bU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1bU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1cU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1cU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1dU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1dU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1eU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1eU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1fU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1fU];
    if (vlSelf->rst) {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 1U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 1U;
        vlSelf->ysyx_24120011_top__DOT__r_mem_data = 0U;
        vlSelf->ysyx_24120011_top__DOT__pc = 0x80000000U;
        vlSelf->ysyx_24120011_top__DOT__pc = 0x80000000U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state = 0U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state = 0U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state = 0U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state = 0U;
    } else {
        if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 0U;
            } else if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = 1U;
            }
        }
        if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__r_mem_data 
                = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))
                    ? ((IData)(vlSelf->ysyx_24120011_top__DOT__sign_extension)
                        ? (((- (IData)((1U & (vlSelf->ysyx_24120011_top__DOT__M1_rdata 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->ysyx_24120011_top__DOT__M1_rdata))
                        : (0xffU & vlSelf->ysyx_24120011_top__DOT__M1_rdata))
                    : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))
                        ? ((IData)(vlSelf->ysyx_24120011_top__DOT__sign_extension)
                            ? (((- (IData)((1U & (vlSelf->ysyx_24120011_top__DOT__M1_rdata 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120011_top__DOT__M1_rdata))
                            : (0xffffU & vlSelf->ysyx_24120011_top__DOT__M1_rdata))
                        : ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))
                            ? vlSelf->ysyx_24120011_top__DOT__M1_rdata
                            : 0xffU)));
        }
        if (vlSelf->ysyx_24120011_top__DOT__LSU_valid) {
            vlSelf->ysyx_24120011_top__DOT__pc = vlSelf->ysyx_24120011_top__DOT__dnpc;
        }
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state 
            = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state 
            = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state 
            = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state 
            = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state;
    }
    Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout);
    if (vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready) {
        if (((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
             & ((~ (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_en)) 
                & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_en))))) {
            vlSelf->ysyx_24120011_top__DOT__LSU_valid = 1U;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__LSU_valid = 
            ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
             & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state)));
    }
    vlSelf->ysyx_24120011_top__DOT__M1_wready = ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                                 & ((0U 
                                                     != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                        ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                                        & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg)))));
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelf->ysyx_24120011_top__DOT__S0_wvalid = 0U;
        vlSelf->ysyx_24120011_top__DOT__S0_awvalid = 0U;
        vlSelf->ysyx_24120011_top__DOT__S0_bready = 1U;
    } else if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelf->ysyx_24120011_top__DOT__S0_wvalid = 
            (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid));
        vlSelf->ysyx_24120011_top__DOT__S0_awvalid 
            = (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid));
        vlSelf->ysyx_24120011_top__DOT__S0_bready = 
            (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready));
    } else {
        vlSelf->ysyx_24120011_top__DOT__S0_wvalid = 0U;
        vlSelf->ysyx_24120011_top__DOT__S0_awvalid = 0U;
        vlSelf->ysyx_24120011_top__DOT__S0_bready = 0U;
    }
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid 
        = ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
               ? (5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
               : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                  & (5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)))));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid 
        = ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_wvalid)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid 
        = ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           & ((1U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              & ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                 & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_wvalid))));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid 
        = ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_awvalid)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid 
        = ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           & ((1U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              & ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                 & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_awvalid))));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready 
        = ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_bready)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready 
        = ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           & ((1U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              & ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                 & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_bready))));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done 
        = ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_bready) 
           & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    vlSelf->ysyx_24120011_top__DOT__M1_bvalid = ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    vlSelf->ysyx_24120011_top__DOT__S0_arvalid = (1U 
                                                  & ((1U 
                                                      == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                      ? (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                       ? (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid)
                                                       : 0U)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid 
        = (IData)(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_arvalid)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid 
        = (IData)(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_arvalid)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid 
        = (IData)(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_arvalid)));
    if (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state)) 
         & (0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt)))) {
        __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt 
            = (0xffU & ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt) 
                        - (IData)(1U)));
    } else if (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state)) 
                & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt)))) {
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready 
            = ((IData)(vlSelf->ysyx_24120011_top__DOT__M0_rvalid) 
               & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rvalid_prev)));
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rvalid_prev 
            = vlSelf->ysyx_24120011_top__DOT__M0_rvalid;
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready = 0U;
    }
    vlSelf->ysyx_24120011_top__DOT__S0_rready = (1U 
                                                 & ((1U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                     ? (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                      ? (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready)
                                                      : 0U)));
    if (vlSelf->rst) {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in = 1U;
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in = 1U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in = 1U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in = 1U;
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state = 0U;
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state 
            = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state;
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state 
            = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__next_state;
    }
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        } else if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state = 0U;
    }
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready 
        = (IData)(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_rready)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready 
        = (IData)(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_rready)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready 
        = (IData)(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_rready)));
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
            if (((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid) 
                    & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
            if (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid) 
                 & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                    & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        if (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid) 
             & (1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 2U;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state 
            = ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid)
                ? 1U : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid)
                         ? 3U : 0U));
    }
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))) {
            if (((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid) 
                    & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))) {
            if (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid) 
                 & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                    & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))) {
        if (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid) 
             & (1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state = 2U;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state 
            = ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid)
                ? 1U : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid)
                         ? 3U : 0U));
    }
}

void Vysyx_24120011_top___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc, IData/*31:0*/ inst, IData/*31:0*/ IFU_valid_int);

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_sequent__TOP__2(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    Vysyx_24120011_top___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__pc, 
                                                                          ((2U 
                                                                            & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                                            ? 
                                                                           ((1U 
                                                                             & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                                             ? vlSelf->ysyx_24120011_top__DOT__r_csr_data
                                                                             : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                                             ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                                             : 
                                                                            (((0x63U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                                                              & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                                                              ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                                              : 
                                                                             ((IData)(4U) 
                                                                              + vlSelf->ysyx_24120011_top__DOT__pc)))), vlSelf->ysyx_24120011_top__DOT__inst, (IData)(vlSelf->ysyx_24120011_top__DOT__LSU_valid));
}
