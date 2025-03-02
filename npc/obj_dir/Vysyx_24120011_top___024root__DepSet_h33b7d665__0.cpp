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
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24120011_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ w_mem_addr, IData/*31:0*/ w_mem_data, CData/*7:0*/ w_mem_len);
void Vysyx_24120011_top___024unit____Vdpiimwrap_npc_trap_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ ret);
void Vysyx_24120011_top___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> array);
void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(IData/*31:0*/ r_mem_addr, IData/*31:0*/ &rtl_pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_h129a8bb7_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vysyx_24120011_top__ConstPool__TABLE_h284954d7_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_24120011_top__ConstPool__TABLE_h40570e4b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_h559258de_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_hc39dc0c5_0;

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rtl_pmem_read__3__Vfuncout;
    __Vfunc_rtl_pmem_read__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rtl_pmem_read__6__Vfuncout;
    __Vfunc_rtl_pmem_read__6__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr;
    __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr = 0;
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
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec = 0;
    // Body
    if ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state))) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr, 0U, 4U);
    }
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr 
        = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr;
    __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt;
    if ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
        if ((0xfU == ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                       ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                  ? 3U : 1U)))) {
            Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr, 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                                                                 ? vlSelf->ysyx_24120011_top__DOT__src2
                                                                                 : 0U), 4U);
        } else if ((3U == ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                            ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                       ? 3U : 1U)))) {
            Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr, 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                                                                 ? vlSelf->ysyx_24120011_top__DOT__src2
                                                                                 : 0U), 2U);
        } else if ((1U == ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                            ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                       ? 3U : 1U)))) {
            Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr, 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                                                                 ? vlSelf->ysyx_24120011_top__DOT__src2
                                                                                 : 0U), 1U);
        }
    }
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
    __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt 
        = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt;
    __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr 
        = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
    if ((0x100073U == vlSelf->ysyx_24120011_top__DOT__inst)) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_npc_trap_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__pc, 
                                                                           vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                                           [0xaU]);
        Vysyx_24120011_top___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 0U;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v32 = 0U;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 = 0U;
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay;
    }
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state))) {
        __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt 
            = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay;
    }
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
    vlSelf->ysyx_24120011_top__DOT__LSU_ready = (0U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state));
    if (vlSelf->rst) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr = 0U;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec 
            = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus 
            = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause 
            = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
        __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr = 0U;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
            = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
        __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 1U;
    } else {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr 
            = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))
                ? ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                    ? vlSelf->ysyx_24120011_top__DOT__alu_result
                    : 0U) : ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))
                              ? ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                  ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                  : 0U) : vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr));
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
        vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec 
            = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
        vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus 
            = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
        if (vlSelf->ysyx_24120011_top__DOT__w_csr_ecall) {
            __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause = 0xbU;
            __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
                = vlSelf->ysyx_24120011_top__DOT__pc;
        }
        vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause 
            = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
        __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr 
            = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state))
                ? vlSelf->ysyx_24120011_top__DOT__pc
                : ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state))
                    ? 0U : vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr));
        vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
            = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
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
    }
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
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay = 5U;
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay = 5U;
        vlSelf->ysyx_24120011_top__DOT__r_mem_data = 0U;
        vlSelf->ysyx_24120011_top__DOT__pc = 0x80000000U;
        vlSelf->ysyx_24120011_top__DOT__pc = 0x80000000U;
    } else {
        if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__r_mem_data 
                = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))
                    ? ((IData)(vlSelf->ysyx_24120011_top__DOT__sign_extension)
                        ? (((- (IData)((1U & (vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata))
                        : (0xffU & vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata))
                    : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))
                        ? ((IData)(vlSelf->ysyx_24120011_top__DOT__sign_extension)
                            ? (((- (IData)((1U & (vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata))
                            : (0xffffU & vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata))
                        : ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))
                            ? vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata
                            : 0xffU)));
        }
        if (vlSelf->ysyx_24120011_top__DOT__LSU_valid) {
            vlSelf->ysyx_24120011_top__DOT__pc = vlSelf->ysyx_24120011_top__DOT__dnpc;
        }
    }
    Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout);
    if (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)) 
         & (0U != vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt))) {
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt 
            = (vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt 
               - (IData)(1U));
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid = 0U;
    } else if (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)) 
                & (0U == vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt))) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr, __Vfunc_rtl_pmem_read__6__Vfuncout);
        __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt = 0xffffffffU;
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata 
            = __Vfunc_rtl_pmem_read__6__Vfuncout;
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid = 1U;
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid = 0U;
    }
    if (vlSelf->ysyx_24120011_top__DOT__IFU_valid) {
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
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt;
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr 
        = __Vdly__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr;
    if (vlSelf->rst) {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state = 0U;
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state = 0U;
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state 
            = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state;
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state 
            = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state;
    }
    if (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state)) 
         & (0U != vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt))) {
        __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt 
            = (vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt 
               - (IData)(1U));
        vlSelf->ysyx_24120011_top__DOT__IFU_valid = 0U;
    } else if (((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state)) 
                & (0U == vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt))) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr, __Vfunc_rtl_pmem_read__3__Vfuncout);
        __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt = 0xffffffffU;
        vlSelf->ysyx_24120011_top__DOT__inst = __Vfunc_rtl_pmem_read__3__Vfuncout;
        vlSelf->ysyx_24120011_top__DOT__IFU_valid = 1U;
    } else {
        vlSelf->ysyx_24120011_top__DOT__IFU_valid = 0U;
    }
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state));
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt 
        = __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt;
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr 
        = __Vdly__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr;
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
            if (((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)) 
                 & (5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 0U;
            }
        } else if (((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                    & (4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
            if (((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                 & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid) 
                    & (2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
        if (((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
             & (1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 2U;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state 
            = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                ? 1U : ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                         ? 3U : 0U));
    }
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            if (((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)) 
                 & (5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 0U;
            }
        } else if (((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                    & (4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            if (((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                 & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid) 
                    & (2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        if (((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
             & (1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 2U;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state 
            = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay)
                ? 1U : ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay)
                         ? 3U : 0U));
    }
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0 
        = (IData)((0x67U == (0x707fU & vlSelf->ysyx_24120011_top__DOT__inst)));
    vlSelf->ysyx_24120011_top__DOT__src1 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->ysyx_24120011_top__DOT__inst)));
    vlSelf->ysyx_24120011_top__DOT__src2 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                   >> 0x14U))];
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0 
        = (IData)((0x1073U == (0x707fU & vlSelf->ysyx_24120011_top__DOT__inst)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0 
        = (IData)((0x2073U == (0x707fU & vlSelf->ysyx_24120011_top__DOT__inst)));
    vlSelf->__Vtableidx4 = (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst);
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type 
        = Vysyx_24120011_top__ConstPool__TABLE_h129a8bb7_0
        [vlSelf->__Vtableidx4];
    if ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__w_mem_en = vlSelf->ysyx_24120011_top__DOT__IFU_valid;
        vlSelf->ysyx_24120011_top__DOT__w_mem_len = 
            ((0U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                           >> 0xcU))) ? 1U : ((1U == 
                                               (7U 
                                                & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                   >> 0xcU)))
                                               ? 2U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 4U
                                                   : 1U)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__w_mem_en = 0U;
        vlSelf->ysyx_24120011_top__DOT__w_mem_len = 1U;
    }
    vlSelf->ysyx_24120011_top__DOT__r_mem_en = ((0U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                                & ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                                   & (IData)(vlSelf->ysyx_24120011_top__DOT__IFU_valid)));
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                             << 9U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0) 
                                        << 8U) | ((
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0) 
                                                      << 6U) 
                                                     | (((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                                         << 5U) 
                                                        | (((0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                                     >> 7U))))))))));
    vlSelf->ysyx_24120011_top__DOT__rd_ctrl = Vysyx_24120011_top__ConstPool__TABLE_h284954d7_0
        [vlSelf->__Vtableidx2];
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__pc_ctrl = 0U;
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 0U;
            vlSelf->ysyx_24120011_top__DOT__imme = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011_top__DOT__ALU_ctrl 
                = ((0U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                 >> 0xcU))) ? 8U : 
                   ((1U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                  >> 0xcU))) ? 9U : 
                    ((5U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                   >> 0xcU))) ? 7U : 
                     ((7U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                    >> 0xcU))) ? 0xfU
                       : ((4U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                        >> 0xcU))) ? 3U
                           : ((6U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                            >> 0xcU)))
                               ? 0xbU : 0U))))));
            vlSelf->ysyx_24120011_top__DOT__imme = 
                (((- (IData)((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x1fU))) << 0xcU) 
                 | ((0x800U & (vlSelf->ysyx_24120011_top__DOT__inst 
                               << 4U)) | ((0x7e0U & 
                                           (vlSelf->ysyx_24120011_top__DOT__inst 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                >> 7U)))));
        } else {
            vlSelf->ysyx_24120011_top__DOT__ALU_ctrl 
                = ((IData)((0U == (0xfe007000U & vlSelf->ysyx_24120011_top__DOT__inst)))
                    ? 0U : ((IData)((0x40000000U == 
                                     (0xfe007000U & vlSelf->ysyx_24120011_top__DOT__inst)))
                             ? 1U : ((IData)((0x3000U 
                                              == (0xfe007000U 
                                                  & vlSelf->ysyx_24120011_top__DOT__inst)))
                                      ? 0xbU : ((IData)(
                                                        (0x2000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelf->ysyx_24120011_top__DOT__inst)))
                                                 ? 3U
                                                 : 
                                                ((IData)(
                                                         (0x4000U 
                                                          == 
                                                          (0xfe007000U 
                                                           & vlSelf->ysyx_24120011_top__DOT__inst)))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          (0x1000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSelf->ysyx_24120011_top__DOT__inst)))
                                                   ? 6U
                                                   : 
                                                  ((IData)(
                                                           (0x7000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelf->ysyx_24120011_top__DOT__inst)))
                                                    ? 0xdU
                                                    : 
                                                   ((IData)(
                                                            (0x40005000U 
                                                             == 
                                                             (0xfe007000U 
                                                              & vlSelf->ysyx_24120011_top__DOT__inst)))
                                                     ? 0xcU
                                                     : 
                                                    ((IData)(
                                                             (0x6000U 
                                                              == 
                                                              (0xfe007000U 
                                                               & vlSelf->ysyx_24120011_top__DOT__inst)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0x5000U 
                                                               == 
                                                               (0xfe007000U 
                                                                & vlSelf->ysyx_24120011_top__DOT__inst)))
                                                       ? 4U
                                                       : 0U))))))))));
            vlSelf->ysyx_24120011_top__DOT__imme = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011_top__DOT__pc_ctrl = 0U;
            vlSelf->ysyx_24120011_top__DOT__imme = 
                (((- (IData)((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x1fU))) << 0xcU) 
                 | ((0xfe0U & (vlSelf->ysyx_24120011_top__DOT__inst 
                               >> 0x14U)) | (0x1fU 
                                             & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                >> 7U))));
        } else {
            vlSelf->ysyx_24120011_top__DOT__pc_ctrl = 1U;
            vlSelf->ysyx_24120011_top__DOT__imme = 
                (((- (IData)((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x1fU))) << 0x15U) 
                 | ((0x100000U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                  >> 0xbU)) | ((0xff000U 
                                                & vlSelf->ysyx_24120011_top__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                        >> 0x14U))))));
        }
        vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 0U;
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__pc_ctrl = 0U;
        vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 0U;
        vlSelf->ysyx_24120011_top__DOT__imme = (0xfffff000U 
                                                & vlSelf->ysyx_24120011_top__DOT__inst);
    } else {
        vlSelf->ysyx_24120011_top__DOT__pc_ctrl = ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0)
                                                    ? 2U
                                                    : 
                                                   ((0x30200073U 
                                                     == vlSelf->ysyx_24120011_top__DOT__inst)
                                                     ? 3U
                                                     : 
                                                    ((0x73U 
                                                      == vlSelf->ysyx_24120011_top__DOT__inst)
                                                      ? 3U
                                                      : 0U)));
        vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 
            ((IData)((0x13U == (0x707fU & vlSelf->ysyx_24120011_top__DOT__inst)))
              ? 0U : ((IData)((0x3013U == (0x707fU 
                                           & vlSelf->ysyx_24120011_top__DOT__inst)))
                       ? 0xbU : ((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->ysyx_24120011_top__DOT__inst)))
                                  ? 0xdU : ((IData)(
                                                    (0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_24120011_top__DOT__inst)))
                                             ? 2U : 
                                            ((IData)(
                                                     (0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->ysyx_24120011_top__DOT__inst)))
                                              ? 5U : 
                                             (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->ysyx_24120011_top__DOT__inst 
                                                   >> 0x19U)))
                                               ? 0xcU
                                               : (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->ysyx_24120011_top__DOT__inst 
                                                       >> 0x19U)))
                                                   ? 4U
                                                   : 
                                                  ((IData)(
                                                           (0x1013U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->ysyx_24120011_top__DOT__inst)))
                                                    ? 6U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0)
                                                     ? 5U
                                                     : 0U)))))))));
        vlSelf->ysyx_24120011_top__DOT__imme = (((- (IData)(
                                                            (vlSelf->ysyx_24120011_top__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->ysyx_24120011_top__DOT__inst 
                                                   >> 0x14U));
    }
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((3U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst))) {
            vlSelf->ysyx_24120011_top__DOT__r_mem_len 
                = ((0U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                 >> 0xcU))) ? 1U : 
                   ((1U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                  >> 0xcU))) ? 2U : 
                    ((2U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                   >> 0xcU))) ? 4U : 
                     ((4U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                    >> 0xcU))) ? 1U
                       : ((5U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                        >> 0xcU))) ? 2U
                           : 1U)))));
            vlSelf->ysyx_24120011_top__DOT__sign_extension 
                = ((0U == (7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                 >> 0xcU))) | ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                    >> 0xcU))) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                      >> 0xcU)))));
        }
        vlSelf->ysyx_24120011_top__DOT__w_csr_en = 
            ((0x30200073U != vlSelf->ysyx_24120011_top__DOT__inst) 
             & ((0x73U != vlSelf->ysyx_24120011_top__DOT__inst) 
                & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                    ? (IData)(vlSelf->ysyx_24120011_top__DOT__IFU_valid)
                    : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                       & (IData)(vlSelf->ysyx_24120011_top__DOT__IFU_valid)))));
        if ((0x30200073U == vlSelf->ysyx_24120011_top__DOT__inst)) {
            vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 0U;
            vlSelf->ysyx_24120011_top__DOT__r_csr_en 
                = vlSelf->ysyx_24120011_top__DOT__IFU_valid;
            vlSelf->ysyx_24120011_top__DOT__w_csr_addr = 0U;
            vlSelf->ysyx_24120011_top__DOT__r_csr_addr = 0x341U;
        } else {
            if ((0x73U == vlSelf->ysyx_24120011_top__DOT__inst)) {
                vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 0U;
                vlSelf->ysyx_24120011_top__DOT__w_csr_addr = 0U;
                vlSelf->ysyx_24120011_top__DOT__r_csr_addr = 0U;
            } else if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0) {
                vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 1U;
                vlSelf->ysyx_24120011_top__DOT__w_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011_top__DOT__imme);
                vlSelf->ysyx_24120011_top__DOT__r_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011_top__DOT__imme);
            } else if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) {
                vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 2U;
                vlSelf->ysyx_24120011_top__DOT__w_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011_top__DOT__imme);
                vlSelf->ysyx_24120011_top__DOT__r_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011_top__DOT__imme);
            } else {
                vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 0U;
                vlSelf->ysyx_24120011_top__DOT__w_csr_addr 
                    = (0xfffU & 0U);
                vlSelf->ysyx_24120011_top__DOT__r_csr_addr 
                    = (0xfffU & 0U);
            }
            vlSelf->ysyx_24120011_top__DOT__r_csr_en 
                = ((0x73U != vlSelf->ysyx_24120011_top__DOT__inst) 
                   & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                       ? (IData)(vlSelf->ysyx_24120011_top__DOT__IFU_valid)
                       : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                          & (IData)(vlSelf->ysyx_24120011_top__DOT__IFU_valid))));
        }
        vlSelf->ysyx_24120011_top__DOT__w_csr_ecall 
            = ((0x30200073U != vlSelf->ysyx_24120011_top__DOT__inst) 
               & ((0x73U == vlSelf->ysyx_24120011_top__DOT__inst) 
                  & (IData)(vlSelf->ysyx_24120011_top__DOT__IFU_valid)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__r_mem_len = 1U;
        vlSelf->ysyx_24120011_top__DOT__sign_extension = 0U;
    }
    vlSelf->__Vtableidx3 = (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                             << 3U) | (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type));
    vlSelf->ysyx_24120011_top__DOT__ALUBctrl = Vysyx_24120011_top__ConstPool__TABLE_h40570e4b_0
        [vlSelf->__Vtableidx3];
    vlSelf->__Vtableidx1 = (((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state)) 
                             << 6U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_ready) 
                                        << 5U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__IFU_valid) 
                                                   << 4U) 
                                                  | (((5U 
                                                       == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state)) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state)))));
    if (Vysyx_24120011_top__ConstPool__TABLE_h559258de_0
        [vlSelf->__Vtableidx1]) {
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state 
            = Vysyx_24120011_top__ConstPool__TABLE_hc39dc0c5_0
            [vlSelf->__Vtableidx1];
    }
    vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out 
        = (vlSelf->ysyx_24120011_top__DOT__imme + vlSelf->ysyx_24120011_top__DOT__pc);
    if (vlSelf->ysyx_24120011_top__DOT__r_csr_en) {
        vlSelf->ysyx_24120011_top__DOT__r_csr_data 
            = ((0x341U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_csr_addr))
                ? vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc
                : ((0x300U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_csr_addr))
                    ? vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus
                    : ((0x342U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_csr_addr))
                        ? vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause
                        : ((0x305U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_csr_addr))
                            ? vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec
                            : 0U))));
    }
    if (vlSelf->ysyx_24120011_top__DOT__w_csr_ecall) {
        vlSelf->ysyx_24120011_top__DOT__r_csr_data 
            = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    }
    vlSelf->ysyx_24120011_top__DOT__ALUB = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__ALUBctrl))
                                             ? vlSelf->ysyx_24120011_top__DOT__imme
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__ALUBctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__src2
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__ALUBctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__r_csr_data
                                                  : 0U)));
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0 
        = (vlSelf->ysyx_24120011_top__DOT__ALUB ^ (- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl)))));
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in 
        = ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
            ? ((IData)(1U) + vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0)
            : vlSelf->ysyx_24120011_top__DOT__ALUB);
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry 
        = (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_24120011_top__DOT__src1)) 
                                  + (QData)((IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in))) 
                                 >> 0x20U))));
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
        = (vlSelf->ysyx_24120011_top__DOT__src1 + vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in);
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless 
        = (1U & ((vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                  >> 0x1fU) ^ (((vlSelf->ysyx_24120011_top__DOT__src1 
                                 >> 0x1fU) == (((1U 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                                 : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                               >> 0x1fU)) 
                               & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                   >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                                 >> 0x1fU)))));
    vlSelf->ysyx_24120011_top__DOT__alu_result = ((4U 
                                                   & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? 
                                                     ((0U 
                                                       == vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                       ? 1U
                                                       : (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry))
                                                      : 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp
                                                      : 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_24120011_top__DOT__ALUB))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      & vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                      : 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      | vlSelf->ysyx_24120011_top__DOT__ALUB))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->ysyx_24120011_top__DOT__ALUB))
                                                       ? vlSelf->ysyx_24120011_top__DOT__src1
                                                       : 
                                                      ((vlSelf->ysyx_24120011_top__DOT__src1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_24120011_top__DOT__ALUB)) 
                                                       | ((0x1fU 
                                                           >= 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_24120011_top__DOT__ALUB)))
                                                           ? 
                                                          ((- (IData)(
                                                                      (vlSelf->ysyx_24120011_top__DOT__src1 
                                                                       >> 0x1fU))) 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_24120011_top__DOT__ALUB)))
                                                           : 0U)))
                                                      : 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_24120011_top__DOT__ALUB)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? 
                                                     ((0U 
                                                       == vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                       ? 0U
                                                       : 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry))))
                                                      : (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp
                                                      : 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      ^ vlSelf->ysyx_24120011_top__DOT__ALUB)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      != vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                      : vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp)
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      == vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                      : vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp))));
    vlSelf->ysyx_24120011_top__DOT__w_csr_data = ((0U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl))
                                                    ? vlSelf->ysyx_24120011_top__DOT__src1
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl))
                                                     ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                                     : 0U)));
    vlSelf->ysyx_24120011_top__DOT__dnpc = ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__r_csr_data
                                                 : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                             : ((1U 
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
                                                  + vlSelf->ysyx_24120011_top__DOT__pc))));
}

void Vysyx_24120011_top___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc, IData/*31:0*/ inst, IData/*31:0*/ IFU_valid_int);

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_sequent__TOP__1(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_sequent__TOP__1\n"); );
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
