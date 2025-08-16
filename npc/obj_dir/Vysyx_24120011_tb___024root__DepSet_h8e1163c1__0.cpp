// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_tb.h for the primary calling header

#include "Vysyx_24120011_tb__pch.h"
#include "Vysyx_24120011_tb__Syms.h"
#include "Vysyx_24120011_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_tb___024root___dump_triggers__act(Vysyx_24120011_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120011_tb___024root___eval_triggers__act(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___eval_triggers__act\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.clock)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24120011_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_24120011_tb___024unit____Vdpiimwrap_branch_count_TOP____024unit(IData/*31:0*/ all_counter_branch, IData/*31:0*/ miss_counter_branch);
void Vysyx_24120011_tb___024unit____Vdpiimwrap_npc_trap_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ ret);
void Vysyx_24120011_tb___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vysyx_24120011_tb___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(IData/*31:0*/ Performancetype);
void Vysyx_24120011_tb___024unit____Vdpiimwrap_icahce_miss_count_TOP____024unit(IData/*31:0*/ miss_count);
void Vysyx_24120011_tb___024unit____Vdpiimwrap_IFU_clktime_count_TOP____024unit(IData/*31:0*/ ifu_clk_count, IData/*31:0*/ hit);
void Vysyx_24120011_tb___024unit____Vdpiimwrap_LSU_clktime_count_TOP____024unit(IData/*31:0*/ lsu_clk_count);
extern const VlUnpacked<CData/*3:0*/, 1024> Vysyx_24120011_tb__ConstPool__TABLE_h644530c1_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vysyx_24120011_tb__ConstPool__TABLE_h29c5c868_0;
void Vysyx_24120011_tb___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 16> array);
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_tb__ConstPool__TABLE_hd20d1557_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vysyx_24120011_tb__ConstPool__TABLE_h0d11ff25_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_24120011_tb__ConstPool__TABLE_h53c35a41_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_tb__ConstPool__TABLE_hbfe48bf0_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_24120011_tb__ConstPool__TABLE_hce00ea1d_0;

VL_INLINE_OPT void Vysyx_24120011_tb___024root___nba_sequent__TOP__0(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___nba_sequent__TOP__0\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus = 0;
    QData/*63:0*/ __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v0;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v1;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v1 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2;
    __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2 = 0;
    CData/*3:0*/ __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2;
    __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2 = 0;
    CData/*7:0*/ __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0;
    __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0 = 0;
    IData/*25:0*/ __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0;
    __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1;
    __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1 = 0;
    IData/*25:0*/ __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1;
    __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1 = 0;
    CData/*7:0*/ __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2;
    __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2 = 0;
    IData/*25:0*/ __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2;
    __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2 = 0;
    CData/*7:0*/ __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3;
    __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3 = 0;
    IData/*25:0*/ __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3;
    __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3 = 0;
    CData/*0:0*/ __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3 = 0;
    // Body
    Vysyx_24120011_tb___024unit____Vdpiimwrap_branch_count_TOP____024unit(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch, vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch);
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter;
    if ((0x100073U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst)) {
        Vysyx_24120011_tb___024unit____Vdpiimwrap_npc_trap_TOP____024unit(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc, 
                                                                          vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                                                                          [0xaU]);
        Vysyx_24120011_tb___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0 = 0U;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1 = 0U;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2 = 0U;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3 = 0U;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter;
    if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid_rising_edge) {
        Vysyx_24120011_tb___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(1U);
    }
    if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__LSU_rready_rising_edge) {
        Vysyx_24120011_tb___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(2U);
    }
    if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid_rising_edge) {
        Vysyx_24120011_tb___024unit____Vdpiimwrap_Performance_Counters_TOP____024unit(3U);
    }
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v0 = 0U;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v1 = 0U;
    __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2 = 0U;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus;
    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause;
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime = 0ULL;
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch = 0U;
    } else {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime 
            = (1ULL + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime);
        if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid) {
            __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch 
                = ((IData)(1U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch);
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter = 0U;
    } else {
        Vysyx_24120011_tb___024unit____Vdpiimwrap_icahce_miss_count_TOP____024unit(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter);
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter 
            = (((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                & (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__next_state)))
                ? ((IData)(1U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter)
                : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter);
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__araddr = 0U;
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch = 0U;
    } else {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size 
            = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M0_rvalid)
                ? ((IData)(4U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size)
                : ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                    ? 0U : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__araddr 
            = (((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                & (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__next_state)))
                ? (0xfffffff8U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc)
                : (((4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                    & (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__next_state)))
                    ? (((0xa0000000U <= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc) 
                        & (0xbfffffffU >= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc))
                        ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__araddr
                        : ((IData)(4U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__araddr))
                    : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__araddr));
        if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid) {
            if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state))) {
                if ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                     != vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc)) {
                    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch 
                        = ((IData)(1U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch);
                }
            } else if ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__pc 
                        != vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc)) {
                __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch 
                    = ((IData)(1U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch);
            }
        }
    }
    if ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))) {
        if (VL_UNLIKELY(((0xa00003f8U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr)))) {
            VL_WRITEF_NX("%c",0,8,(0xffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata));
        } else {
            if ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
                __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0 
                    = (0xffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata);
                __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0 
                    = (0x3fffffcU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr);
                __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
                __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1 
                    = (0xffU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata 
                                >> 8U));
                __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1 
                    = (0x3ffffffU & ((IData)(1U) + 
                                     (0x3fffffcU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr)));
                __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
                __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2 
                    = (0xffU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata 
                                >> 0x10U));
                __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2 
                    = (0x3ffffffU & ((IData)(2U) + 
                                     (0x3fffffcU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr)));
                __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb))) {
                __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3 
                    = (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata 
                       >> 0x18U);
                __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3 
                    = (0x3ffffffU & ((IData)(3U) + 
                                     (0x3fffffcU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr)));
                __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3 = 1U;
            }
        }
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter = 0U;
    } else {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter 
            = ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                ? 0U : ((IData)(1U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter));
        if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid) {
            if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cache_IFU_valid) {
                Vysyx_24120011_tb___024unit____Vdpiimwrap_IFU_clktime_count_TOP____024unit(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter, 1U);
            } else {
                Vysyx_24120011_tb___024unit____Vdpiimwrap_IFU_clktime_count_TOP____024unit(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter, 0U);
            }
        }
    }
    if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_en) {
        if ((0x341U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
            __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_data;
        } else if ((0x300U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
            if ((0x342U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
                if ((0x305U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
                    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc 
                        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc;
                }
            }
        }
        if ((0x341U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
            if ((0x300U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
                if ((0x342U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
                    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec 
                        = ((0x305U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))
                            ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_data
                            : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec);
                }
                if ((0x342U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
                    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause 
                        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_data;
                } else if ((0x305U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
                    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause 
                        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause;
                }
            }
            if ((0x300U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
                __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus 
                    = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_data;
            } else if ((0x342U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
                if ((0x305U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr))) {
                    __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus 
                        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus;
                }
            }
        }
    }
    if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_ecall) {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause = 0xbU;
    }
    if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg 
            = ((0x2000048U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr)
                ? (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime)
                : ((0x200004cU == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr)
                    ? (IData)((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime 
                               >> 0x20U)) : 0U));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg = 1U;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg = 0U;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc = 0x80000000U;
        __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v0 = 1U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush)) 
                   & (~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing))))) {
            if (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid) 
                 & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)))) {
                __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                    = ((IData)((0x80000063U == (0x8000007fU 
                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst)))
                        ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                           + (((- (IData)((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst 
                                                    >> 7U))))))
                        : ((0x6fU == (0x7fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst))
                            ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                               + ((((- (IData)((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst 
                                                >> 0x1fU))) 
                                    << 0x15U) | (0x100000U 
                                                 & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst 
                                                    >> 0xbU))) 
                                  | (((0xff000U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst) 
                                      | (0x800U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst 
                                                   >> 9U))) 
                                     | (0x7feU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst 
                                                  >> 0x14U)))))
                            : ((IData)(4U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc)));
            }
        } else if (((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                    | (1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)))) {
            __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc;
        }
        if (((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type)) 
             & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
                & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__next_state))))) {
            if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd))) {
                __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v1 = 1U;
            } else {
                __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2 
                    = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_rd_data;
                __VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2 
                    = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd;
                __VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2 = 1U;
            }
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state;
    }
    if (vlSelfRef.reset) {
        __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__LSU_working_delay = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))) {
            Vysyx_24120011_tb___024unit____Vdpiimwrap_LSU_clktime_count_TOP____024unit(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter);
            __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter = 0U;
        } else {
            __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter 
                = ((IData)(1U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter);
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__LSU_working_delay 
            = (0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state));
    }
    if (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid) 
         & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_data;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src2;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__w_csr_addr;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_ecall 
            = (1U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl) 
                     >> 2U));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_en 
            = (0U != (3U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl)));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_data 
            = ((1U == (3U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl)))
                ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1
                : ((2U == (3U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl)))
                    ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result
                    : ((3U == (3U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl)))
                        ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc
                        : 0U)));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_master = 1U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__r_mem_data = 0U;
    } else {
        if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__done) {
            if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_master = 0U;
            } else if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_master = 1U;
            }
        }
        if ((4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__r_mem_data 
                = ((0U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                                 >> 3U))) ? ((0x40U 
                                              & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask))
                                              : (0xffU 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask))
                    : ((1U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                                     >> 3U))) ? ((0x40U 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask))
                                                  : 
                                                 (0xffffU 
                                                  & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask))
                        : ((2U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                                         >> 3U))) ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask
                            : 0xffU)));
        }
    }
    if (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid) 
         & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__mem_ctrl;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wvalid 
        = ((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
           && (1U & (~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awready))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid 
        = ((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
           && (1U & (~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awready))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid 
        = ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
           && (1U & (~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arready))));
    if (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDU_valid) 
         & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__rd_ctrl;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__r_csr_data 
            = ((0x341U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc
                : ((0x300U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                    ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus
                    : ((0x342U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                        ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause
                        : ((0x305U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                            ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec
                            : ((0xf11U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                                ? 0x79737978U : ((0xf12U 
                                                  == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr))
                                                  ? 0x1700acbU
                                                  : 0U))))));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl 
            = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                    ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                             ? 4U : 0U)) : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                                 ? 0U
                                                 : 1U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f454d46__0)
                                                  ? 2U
                                                  : 
                                                 ((0x30200073U 
                                                   == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)
                                                   ? 3U
                                                   : 
                                                  ((0x73U 
                                                    == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)
                                                    ? 3U
                                                    : 0U))))));
        if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_bypass) {
            if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_rs1_or_rs2) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src2 
                    = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata;
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                    = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                    [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                              >> 0xfU))];
            } else {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src2 
                    = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                    [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                              >> 0x14U))];
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                    = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata;
            }
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src2 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                          >> 0x14U))];
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
                [(0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                          >> 0xfU))];
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd 
            = (0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                       >> 7U));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__w_csr_addr 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__pc;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__mem_ctrl 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch;
    if (__VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram[__VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0] 
            = __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v0;
    }
    if (__VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram[__VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1] 
            = __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v1;
    }
    if (__VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram[__VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2] 
            = __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v2;
    }
    if (__VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram[__VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3] 
            = __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram__v3;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid_rising_edge 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid) 
           & (~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid_delay)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid_rising_edge 
        = ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)) 
           & (~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid_delay)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__LSU_rready_rising_edge 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rready) 
           & (~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__LSU_rready_delay)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec;
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[0U] = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[1U] = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[2U] = 0U;
    } else if ((0x100fU == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst_cache)) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[0U] = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[1U] = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[2U] = 0U;
    } else if ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) {
        if ((2U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) {
            if ((3U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) {
                if ((4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) {
                    if (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M0_rvalid) 
                         & (4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)))) {
                        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[2U] 
                            = (0x3fffffffU & (0x20000000U 
                                              | (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                                                 >> 3U)));
                        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT____Vlvbound_ha0981349__0 
                            = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                : 0U);
                        if ((0x5dU >= (0x7fU & VL_SHIFTL_III(7,32,32, 
                                                             (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size 
                                                              >> 2U), 5U)))) {
                            VL_ASSIGNSEL_WI(94,32,(0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size 
                                                                    >> 2U), 5U)), vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache, vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT____Vlvbound_ha0981349__0);
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cache_IFU_valid 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (0U 
                                                    != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                                                   && ((1U 
                                                        != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                                                       && ((2U 
                                                            == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                                                           && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid_delay 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid_delay 
        = (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__LSU_rready_delay 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rready;
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type 
        = ((4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
            ? 0U : ((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                     ? 1U : 2U));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__next_state));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                ? (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))
                : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg))));
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing = 0U;
    } else if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing = 1U;
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing = 0U;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid) 
           && ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state))
                ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                   != vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc)
                : (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__pc 
                   != vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_rd_data 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type))
            ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__r_mem_data
            : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                ? (1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))
                : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   && (1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)))));
    vlSelfRef.__Vtableidx4 = (((2U == (3U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result)) 
                               << 9U) | (((1U == (3U 
                                                  & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result)) 
                                          << 8U) | 
                                         (((0U == (3U 
                                                   & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result)) 
                                           << 7U) | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wstrb 
        = Vysyx_24120011_tb__ConstPool__TABLE_h644530c1_0
        [vlSelfRef.__Vtableidx4];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format 
        = Vysyx_24120011_tb__ConstPool__TABLE_h29c5c868_0
        [vlSelfRef.__Vtableidx4];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state 
        = ((IData)(vlSelfRef.reset) ? 0U : (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__next_state));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awready 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                  && (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wready 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                  && (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B 
        = ((0U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl) 
                         >> 4U))) ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm
            : ((1U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl) 
                             >> 4U))) ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src2
                : ((2U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl) 
                                 >> 4U))) ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__r_csr_data
                    : 0U)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M0_rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rready 
        = ((4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
           && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rvalid));
    if (__VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v0) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[0U] = 0U;
    }
    if (__VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v1) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[0U] = 0U;
    }
    if (__VdlySet__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[__VdlyDim0__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2] 
            = __VdlyVal__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs__v2;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arready 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wdata 
        = (((((((((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format)) 
                  | (1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
                 | (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
                | (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
               | (4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
              | (5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
             | (6U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
            | (7U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format)))
            ? ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                ? (0xffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2)
                : ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                    ? (0xff00U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                  << 8U)) : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                              ? (0xff0000U 
                                                 & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                                    << 0x10U))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                                  ? 
                                                 (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                                  << 0x18U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                                    ? 
                                                   (0xffff00U 
                                                    & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                                       << 8U))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                                     ? 
                                                    (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                                     << 0x10U)
                                                     : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2)))))))
            : 0xdeadbeefU);
    if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize = 2U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize = 2U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid = 0U;
    } else if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize 
            = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid)
                ? (7U & ((1U & (- (IData)((1U == (3U 
                                                  & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                                                     >> 3U)))))) 
                         | (2U & (- (IData)((2U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                                               >> 3U))))))))
                : 2U);
        if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize 
                = (7U & ((1U & (- (IData)((1U == (3U 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl)))))) 
                         | (2U & (- (IData)((2U == 
                                             (3U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))))))));
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid = 1U;
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize = 2U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid = 0U;
        }
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid = 0U;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT____VdfgRegularize_he4da4b0f_3_1 
        = (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B 
           ^ (- (IData)((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rvalid 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    if (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid) 
         & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state)))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__pc 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[1U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [1U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[2U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [2U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[3U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [3U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[4U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [4U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[5U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [5U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[6U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [6U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[7U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [7U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[8U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [8U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[9U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [9U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xaU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xaU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xbU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xbU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xcU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xcU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xdU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xdU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xeU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xeU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xfU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xfU];
    vlSelfRef.__VdfgRegularize_hd87f99a1_2_3 = ((2U 
                                                 == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                 ? (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wvalid)
                                                 : 0U);
    if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb = 0xfU;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid = 0U;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb 
            = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                ? (0xfU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wstrb))
                : 0U);
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid 
            = (1U & vlSelfRef.__VdfgRegularize_hd87f99a1_2_3);
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wlast 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
            ? 0U : (1U & vlSelfRef.__VdfgRegularize_hd87f99a1_2_3));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wlast))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wlast)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in 
        = ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
            ? ((IData)(1U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT____VdfgRegularize_he4da4b0f_3_1)
            : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
        = __Vdly__ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc;
    vlSelfRef.__VdfgRegularize_hd87f99a1_2_2 = ((2U 
                                                 == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                 ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result
                                                 : 0U);
    if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__araddr;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_2_2;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_2_2;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state = 0U;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__next_state;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__next_state;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
            ? 0U : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                     ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wdata
                     : 0U));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
        if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr;
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
    }
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr;
    } else {
        if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr;
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
    }
    Vysyx_24120011_tb___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout);
    if (vlSelfRef.reset) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state = 1U;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__next_state;
        if ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) {
            if ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) {
                if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) {
                    if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit) {
                        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst 
                            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst_cache;
                    }
                }
            }
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__next_state;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arlen 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
            ? (((0xa0000000U <= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc) 
                & (0xbfffffffU >= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc))
                ? 1U : 0U) : 0U);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
        = ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
            ? 0U : ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                     ? (((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                          [(0x3ffffffU & ((IData)(3U) 
                                          + (0x3fffffcU 
                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr)))] 
                          << 0x18U) | (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                                       [(0x3ffffffU 
                                         & ((IData)(2U) 
                                            + (0x3fffffcU 
                                               & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr)))] 
                                       << 0x10U)) | 
                        ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                          [(0x3ffffffU & ((IData)(1U) 
                                          + (0x3fffffcU 
                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr)))] 
                          << 8U) | vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                         [(0x3fffffcU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr)]))
                     : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                         ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg
                         : 0U)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
            ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
            : 0U);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid 
        = ((~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush)) 
           & ((~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing)) 
              & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cache_IFU_valid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp 
        = (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
           + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_1_3 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f454d46__0 
        = (IData)((0x67U == (0x707fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f76f74c__0 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)));
    vlSelfRef.__Vtableidx2 = (0x7fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type 
        = Vysyx_24120011_tb__ConstPool__TABLE_hd20d1557_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_exu 
        = ((~ ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)) 
               | (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type)))) 
           & (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd) 
               == (0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                           >> 0xfU))) | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd) 
                                         == (0xfU & 
                                             (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                              >> 0x14U)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__sless 
        = (1U & ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp 
                  >> 0x1fU) ^ (((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                 >> 0x1fU) == (((1U 
                                                 & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                                                 ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT____VdfgRegularize_he4da4b0f_3_1
                                                 : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B) 
                                               >> 0x1fU)) 
                               & ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                   >> 0x1fU) != (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp 
                                                 >> 0x1fU)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M1_bready 
        = ((7U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
           | (6U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)));
    if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready = 1U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid 
            = (1U & (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready 
            = (1U & (4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)));
    } else if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready 
            = (1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M1_bready));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid 
            = (1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready 
            = (1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rready));
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid 
            = (1U & 0U);
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready 
            = (1U & 0U);
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_mem 
        = ((((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                      >> 0xfU)) == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd)) 
            | ((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                        >> 0x14U)) == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd))) 
           & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
              & (0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl 
        = ((0xfU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl)) 
           | (((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                ? 1U : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                         ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                             ? 0U : 1U) : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0)
                                             ? 2U : 0U)))) 
              << 4U));
    if ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
            = (4U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
            = ((0x7cU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl)) 
               | ((0U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                >> 0xcU))) ? 0U : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 2U
                                                     : 0U))));
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
            = (0x78U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl 
        = ((0x30U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl)) 
           | ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
               ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                   ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                            ? ((0U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                             >> 0xcU)))
                                ? 8U : ((1U == (7U 
                                                & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                   >> 0xcU)))
                                         ? 9U : ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 7U
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 0xfU
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 0xbU
                                                     : 0U))))))
                            : ((IData)((0U == (0xfe007000U 
                                               & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                ? 0U : ((IData)((0x40000000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                         ? 1U : ((IData)(
                                                         (0x3000U 
                                                          == 
                                                          (0xfe007000U 
                                                           & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                  ? 0xbU
                                                  : 
                                                 ((IData)(
                                                          (0x2000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           (0x4000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            (0x1000U 
                                                             == 
                                                             (0xfe007000U 
                                                              & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                     ? 6U
                                                     : 
                                                    ((IData)(
                                                             (0x7000U 
                                                              == 
                                                              (0xfe007000U 
                                                               & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                      ? 0xdU
                                                      : 
                                                     ((IData)(
                                                              (0x40005000U 
                                                               == 
                                                               (0xfe007000U 
                                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                       ? 0xcU
                                                       : 
                                                      ((IData)(
                                                               (0x6000U 
                                                                == 
                                                                (0xfe007000U 
                                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                        ? 5U
                                                        : 
                                                       ((IData)(
                                                                (0x5000U 
                                                                 == 
                                                                 (0xfe007000U 
                                                                  & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                         ? 4U
                                                         : 0U))))))))))))
               : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                   ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                            ? 0U : ((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                     ? 0U : ((IData)(
                                                     (0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                              ? 0xbU
                                              : ((IData)(
                                                         (0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                  ? 0xdU
                                                  : 
                                                 ((IData)(
                                                          (0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                   ? 2U
                                                   : 
                                                  ((IData)(
                                                           (0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                    ? 5U
                                                    : 
                                                   (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_1_3) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                         >> 0x19U)))
                                                     ? 0xcU
                                                     : 
                                                    (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_1_3) 
                                                      & (0U 
                                                         == 
                                                         (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                          >> 0x19U)))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              (0x1013U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0)
                                                        ? 5U
                                                        : 0U)))))))))))));
    vlSelfRef.__Vtableidx3 = (((((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0) 
                                 << 9U) | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f76f74c__0) 
                                            << 8U) 
                                           | ((3U == 
                                               (0x7fU 
                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) 
                                              << 7U))) 
                               | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f454d46__0) 
                                   << 6U) | ((0x37U 
                                              == (0x7fU 
                                                  & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) 
                                             << 5U))) 
                              | (((0x17U == (0x7fU 
                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) 
                                  << 4U) | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type) 
                                             << 1U) 
                                            | (0U == 
                                               (0xfU 
                                                & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                   >> 7U))))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__rd_ctrl 
        = Vysyx_24120011_tb__ConstPool__TABLE_h0d11ff25_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                         ? (((- (IData)((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | ((0x800U & 
                                          (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                  >> 7U)))))
                         : 0U)) : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                        ? (((- (IData)(
                                                       (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                    >> 7U))))
                                        : ((((- (IData)(
                                                        (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | (0x100000U 
                                               & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                  >> 0xbU))) 
                                           | (((0xff000U 
                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst) 
                                               | (0x800U 
                                                  & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                     >> 9U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                    >> 0x14U)))))
                                    : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                        ? (0xfffff000U 
                                           & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)
                                        : (((- (IData)(
                                                       (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                              >> 0x14U)))));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((3U == (0x7fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                = (0x20U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            if ((0U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                              >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x40U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else if ((1U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                     >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (8U | (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl)));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x40U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else if ((2U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                     >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x10U | (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl)));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x40U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else if ((4U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                     >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x3fU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else if ((5U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                     >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (8U | (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl)));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x3fU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x3fU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            }
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                = (7U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
        }
        if ((0x30200073U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr = 0x341U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr = 0U;
        } else if ((0x73U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 7U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr = 0x305U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr = 0x341U;
        } else if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f76f74c__0) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 1U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm);
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm);
        } else if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 2U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm);
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm);
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr 
                = (0xfffU & 0U);
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr 
                = (0xfffU & 0U);
        }
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
            = (7U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr = 0U;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_0 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_exu) 
           & (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask 
        = ((0U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                         >> 3U))) ? ((0U == (3U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                      ? ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                          ? (0xffU 
                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                          : 0U) : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                        >> 8U))
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                         >> 0x10U))
                                                      : 0U)
                                                     : 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata, 0x18U))))
            : ((1U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                             >> 3U))) ? ((0U == (3U 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                          ? ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                              ? (0xffffU 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                              : 0U)
                                          : ((1U == 
                                              (3U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                              ? ((2U 
                                                  == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                  ? 
                                                 (0xffffU 
                                                  & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                     >> 8U))
                                                  : 0U)
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                                  ? 
                                                 VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata, 0x10U)
                                                  : 0xdeadbeefU)))
                : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result 
        = ((8U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
            ? ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? ((0U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                            ? 1U : (1U & (IData)((1ULL 
                                                  & (((QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1)) 
                                                      + (QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in))) 
                                                     >> 0x20U)))))
                        : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp)
                    : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                        : ((0U == (0x1fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B))
                            ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1
                            : ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                >> (0x1fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)) 
                               | VL_SHIFTL_III(32,32,32, 
                                               (- (IData)(
                                                          (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                                           >> 0x1fU))), 
                                               ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)))))))
                : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? ((0U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                            ? 0U : (1U & (~ (IData)(
                                                    (1ULL 
                                                     & (((QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1)) 
                                                         + (QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in))) 
                                                        >> 0x20U))))))
                        : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp)
                    : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           != vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                        : (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B 
                           == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1))))
            : ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (1U & (~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__sless)))
                        : (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           << (0x1fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)))
                    : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           | vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                        : (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           >> (0x1fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B))))
                : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__sless)
                        : (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           ^ vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B))
                    : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_1 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_mem) 
           & (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_stop_pipe 
        = (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_exu) 
            & (2U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type))) 
           | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_mem) 
              & (2U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                ? 0x80000000U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                                  ? 0x80000000U : (
                                                   (1U 
                                                    & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result)
                                                    ? 
                                                   (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc 
                                                    + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc))))
            : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                    ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__r_csr_data
                    : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result)
                : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                    ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc 
                       + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm)
                    : ((IData)(4U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_data 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                    ? 0U : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__r_csr_data)
                : 0U) : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                          ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                              ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm
                              : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result)
                          : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                              ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc 
                                 + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm)
                              : ((IData)(4U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc))));
    if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_0) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_rs1_or_rs2 
            = ((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                        >> 0xfU)) != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_data;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_rs1_or_rs2 
            = ((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                        >> 0xfU)) != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata 
            = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_1)
                ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_rd_data
                : 0U);
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready)));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
            = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
            = (((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                ? 0U : 1U);
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = 0U;
        if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state = 2U;
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state = 0U;
        }
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_bypass 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_0) 
           | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_1));
    vlSelfRef.__Vtableidx1 = (((((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)) 
                                 << 6U) | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_stop_pipe) 
                                           << 5U)) 
                               | (((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state)) 
                                   << 4U) | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid) 
                                             << 3U))) 
                              | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush) 
                                  << 2U) | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__next_state 
        = Vysyx_24120011_tb__ConstPool__TABLE_h53c35a41_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDU_valid 
        = ((~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush)) 
           & ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state)) 
              & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__next_state))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit 
        = (IData)((((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                    & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[2U] 
                       >> 0x1dU)) & ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                                      >> 3U) == (0x1fffffffU 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[2U]))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state))
            ? (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDU_valid) 
                & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state))
                               ? ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                                   ? 0U : 1U) : 0U));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst_cache 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit)
            ? ((4U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc)
                ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[1U]
                : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[0U])
            : 0U);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__next_state 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                         ? 0U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M0_rvalid) 
                                  & (4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)))
                                  ? ((4U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size)
                                      ? 2U : (((0xa0000000U 
                                                <= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc) 
                                               & (0xbfffffffU 
                                                  >= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc))
                                               ? 4U
                                               : 3U))
                                  : 4U))) : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                                                  ? 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                                                   & ((1U 
                                                       == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                                                      & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready)))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit)
                                                   ? 0U
                                                   : 3U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state))
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) 
                                                   | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush) 
                                                      | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing)))
                                                   ? 1U
                                                   : 0U))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__done 
        = ((((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
             && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                  ? (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))
                  : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                     && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)))) 
            & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready) 
               & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid))) 
           | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready) 
              & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready)));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
            = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid)
                ? (((0x2000048U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr) 
                    | (0x200004cU == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr))
                    ? 2U : 1U) : 0U);
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arlen;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
            = (((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                ? 0U : 1U);
    } else {
        if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arlen;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                    ? 0U : 2U);
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state = 0U;
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen = 0U;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)) 
           & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__next_state)));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_master))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__next_state 
                = ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                    ? 1U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                             | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                             ? 2U : 0U));
        } else if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_master))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__next_state 
                = (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                    | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                    ? 2U : ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                             ? 1U : 0U));
        }
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__done) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__next_state 
                = (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                    | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                    ? 2U : ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                             ? 1U : 0U));
        }
    } else if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__done) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__next_state 
                = ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                    ? 1U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                             | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                             ? 2U : 0U));
        }
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__next_state = 0U;
    }
    vlSelfRef.__Vtableidx5 = ((((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready) 
                                << 6U) | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                          << 5U)) | 
                              (((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                << 4U) | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid) 
                                           << 3U) | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state 
        = Vysyx_24120011_tb__ConstPool__TABLE_hbfe48bf0_0
        [vlSelfRef.__Vtableidx5];
    vlSelfRef.__Vtableidx6 = (((((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                 << 0xaU) | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
                                                << 8U))) 
                               | (((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                   << 7U) | (((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                              << 6U) 
                                             | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid) 
                                                << 5U)))) 
                              | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                                  << 4U) | (((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                             << 3U) 
                                            | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__next_state 
        = Vysyx_24120011_tb__ConstPool__TABLE_hce00ea1d_0
        [vlSelfRef.__Vtableidx6];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__next_state 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                    ? ((((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                         & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid)) 
                        & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M1_bready))
                        ? 0U : 7U) : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wvalid) 
                                       & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wready))
                                       ? 7U : 6U)) : 
               ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                 ? (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wvalid) 
                     & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wready))
                     ? 7U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid) 
                              & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awready))
                              ? 6U : 5U)) : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rvalid) 
                                              & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rready))
                                              ? 0U : 4U)))
            : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                    ? (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                        & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arready))
                        ? 4U : 3U) : ((0x20U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))
                                       ? 3U : ((4U 
                                                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))
                                                ? 5U
                                                : 0U)))
                : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                    ? 2U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid) 
                             & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)))
                             ? 1U : 0U))));
}

void Vysyx_24120011_tb___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc, IData/*31:0*/ inst, IData/*31:0*/ IFU_valid_int);

VL_INLINE_OPT void Vysyx_24120011_tb___024root___nba_sequent__TOP__1(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___nba_sequent__TOP__1\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_24120011_tb___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc, vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc, vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst, (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid));
}
