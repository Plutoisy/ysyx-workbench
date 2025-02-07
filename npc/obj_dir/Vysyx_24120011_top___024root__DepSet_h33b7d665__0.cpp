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

extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_h3a54036f_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_24120011_top__ConstPool__TABLE_h7a0e4422_0;
void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ len);

VL_INLINE_OPT void Vysyx_24120011_top___024root___ico_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0 
        = (IData)((0x67U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0 
        = (IData)((0x13U == (0x707fU & vlSelf->inst)));
    vlSelf->__Vtableidx2 = (0x7fU & vlSelf->inst);
    vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type 
        = Vysyx_24120011_top__ConstPool__TABLE_h3a54036f_0
        [vlSelf->__Vtableidx2];
    vlSelf->ysyx_24120011_top__DOT__w_mem_en = (3U 
                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0) 
                             << 7U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0) 
                                        << 6U) | ((
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst)) 
                                                   << 5U) 
                                                  | (((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst)) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type) 
                                                         << 1U) 
                                                        | (0U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->inst 
                                                               >> 7U))))))));
    vlSelf->ysyx_24120011_top__DOT__rd_ctrl = Vysyx_24120011_top__ConstPool__TABLE_h7a0e4422_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_24120011_top__DOT__pc_ctrl = ((0U 
                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                ? ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0)
                                                    ? 2U
                                                    : 0U)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                    ? 1U
                                                    : 0U));
    vlSelf->ysyx_24120011_top__DOT__imme = ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->inst 
                                                           >> 7U))))
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   << 0x15U) 
                                                  | ((0x100000U 
                                                      & (vlSelf->inst 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & vlSelf->inst) 
                                                        | ((0x800U 
                                                            & (vlSelf->inst 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U)))))))
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->inst)
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->inst 
                                                     >> 0x14U)))));
    vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out 
        = (vlSelf->pc + vlSelf->ysyx_24120011_top__DOT__imme);
    vlSelf->ysyx_24120011_top__DOT__alu_result = (vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))] 
                                                  + 
                                                  ((1U 
                                                    & ((0U 
                                                        == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0))
                                                        : 
                                                       (3U 
                                                        != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))))
                                                    ? 
                                                   vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                   [
                                                   (0xfU 
                                                    & (vlSelf->inst 
                                                       >> 0x14U))]
                                                    : vlSelf->ysyx_24120011_top__DOT__imme));
    if (vlSelf->ysyx_24120011_top__DOT__w_mem_en) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__alu_result, 
                                                                                vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))], 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
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
    }
    vlSelf->ysyx_24120011_top__DOT__dnpc = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                             ? ((IData)(4U) 
                                                + vlSelf->pc)
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                                  : 0x80000000U)));
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
void Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 16> array);

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v16;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17;
    __Vdlyvdim0__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17;
    __Vdlyvval__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17 = 0;
    // Body
    if ((0x100073U == vlSelf->inst)) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_npc_trap_TOP____024unit(vlSelf->pc, 
                                                                           vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                                           [0xaU]);
        Vysyx_24120011_top___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 0U;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v16 = 0U;
    __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17 = 0U;
    if (vlSelf->rst) {
        __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v0 = 1U;
        vlSelf->pc = 0x80000000U;
    } else {
        __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v16 = 1U;
        if ((4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))) {
            __Vdlyvval__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17 
                = ((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                    ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                             ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                      ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                          ? vlSelf->ysyx_24120011_top__DOT__imme
                                          : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                      : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                          ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                          : ((IData)(4U) 
                                             + vlSelf->pc)))));
            __Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17 = 1U;
            __Vdlyvdim0__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17 
                = (0xfU & (vlSelf->inst >> 7U));
        }
        vlSelf->pc = vlSelf->ysyx_24120011_top__DOT__dnpc;
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
    }
    if (__Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v16) {
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0U] = 0U;
    }
    if (__Vdlyvset__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17) {
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[__Vdlyvdim0__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17] 
            = __Vdlyvval__ysyx_24120011_top__DOT__i_RegStack__DOT__Regs__v17;
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
    Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout);
}

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_sequent__TOP__1(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__alu_result = (vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                  [
                                                  (0xfU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))] 
                                                  + 
                                                  ((1U 
                                                    & ((0U 
                                                        == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0))
                                                        : 
                                                       (3U 
                                                        != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))))
                                                    ? 
                                                   vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                   [
                                                   (0xfU 
                                                    & (vlSelf->inst 
                                                       >> 0x14U))]
                                                    : vlSelf->ysyx_24120011_top__DOT__imme));
    vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out 
        = (vlSelf->pc + vlSelf->ysyx_24120011_top__DOT__imme);
    if (vlSelf->ysyx_24120011_top__DOT__w_mem_en) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__alu_result, 
                                                                                vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                                                [
                                                                                (0xfU 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U))], 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
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
    }
    vlSelf->ysyx_24120011_top__DOT__dnpc = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                             ? ((IData)(4U) 
                                                + vlSelf->pc)
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                                  : 0x80000000U)));
}
