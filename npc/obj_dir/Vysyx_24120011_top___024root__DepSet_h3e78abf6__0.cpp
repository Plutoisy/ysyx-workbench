// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011_top___024root.h"

void Vysyx_24120011_top___024root___eval_act(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_sequent__TOP__2(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__pc = ((IData)(vlSelf->rst)
                                           ? 0x80000000U
                                           : vlSelf->ysyx_24120011_top__DOT__dnpc);
}

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_comb__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__src1 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_24120011_top__DOT__src2 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                   >> 0x14U))];
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
    vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out 
        = (vlSelf->ysyx_24120011_top__DOT__imme + vlSelf->ysyx_24120011_top__DOT__pc);
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

void Vysyx_24120011_top___024root___nba_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf);
void Vysyx_24120011_top___024root___nba_sequent__TOP__1(Vysyx_24120011_top___024root* vlSelf);

void Vysyx_24120011_top___024root___eval_nba(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24120011_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24120011_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24120011_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_24120011_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vysyx_24120011_top___024root___eval_triggers__act(Vysyx_24120011_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__act(Vysyx_24120011_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__nba(Vysyx_24120011_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120011_top___024root___eval(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_24120011_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_24120011_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_top.v", 5, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_24120011_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120011_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_top.v", 5, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_24120011_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_24120011_top___024root___eval_debug_assertions(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
