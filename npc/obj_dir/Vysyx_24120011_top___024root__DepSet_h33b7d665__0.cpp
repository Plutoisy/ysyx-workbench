// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011_top__Syms.h"
#include "Vysyx_24120011_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__ico(Vysyx_24120011_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120011_top___024root___eval_triggers__ico(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24120011_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

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
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
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

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_rtl_pmem_read__4__Vfuncout;
    __Vfunc_rtl_pmem_read__4__Vfuncout = 0;
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
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause = 0;
    IData/*31:0*/ __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec = 0;
    // Body
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
    __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
        = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc;
    if ((0x100073U == vlSelf->inst)) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_npc_trap_TOP____024unit(vlSelf->pc, 
                                                                           vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                                           [0xaU]);
        Vysyx_24120011_top___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 0U;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v32 = 0U;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 = 0U;
    if (((IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_en) 
         & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_en)))) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__alu_result, vlSelf->ysyx_24120011_top__DOT__src2, 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                                                                 ? 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU)))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU)))
                                                                                 ? 4U
                                                                                 : 1U)))
                                                                                 : 1U));
        vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp = 0U;
        vlSelf->ysyx_24120011_top__DOT__r_mem_data = 0U;
    } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_en) 
                & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_en)))) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__alu_result, __Vfunc_rtl_pmem_read__4__Vfuncout);
        vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp 
            = __Vfunc_rtl_pmem_read__4__Vfuncout;
        vlSelf->ysyx_24120011_top__DOT__r_mem_data 
            = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))
                ? ((IData)(vlSelf->ysyx_24120011_top__DOT__sign_extension)
                    ? (((- (IData)((1U & (vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp))
                    : (0xffU & vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp))
                : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))
                    ? ((IData)(vlSelf->ysyx_24120011_top__DOT__sign_extension)
                        ? (((- (IData)((1U & (vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp))
                        : (0xffffU & vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp))
                    : ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))
                        ? vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp
                        : 0xffU)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp = 0xffU;
        vlSelf->ysyx_24120011_top__DOT__r_mem_data = 0xffU;
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec = 0U;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause = 0U;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus = 0U;
        __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc = 0U;
        __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 1U;
        vlSelf->pc = 0x80000000U;
    } else {
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
            __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus = 0xbU;
            __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mepc 
                = vlSelf->pc;
        }
        __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v32 = 1U;
        if ((4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))) {
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
                                                    + vlSelf->pc)))));
            __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 = 1U;
            __Vdlyvdim0__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v33 
                = (0x1fU & (vlSelf->inst >> 7U));
        }
        vlSelf->pc = vlSelf->ysyx_24120011_top__DOT__dnpc;
    }
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec 
        = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause 
        = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mcause;
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus 
        = __Vdly__ysyx_24120011_top__DOT__i_Csr__DOT__mstatus;
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
    vlSelf->ysyx_24120011_top__DOT__src1 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->ysyx_24120011_top__DOT__src2 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout);
}
