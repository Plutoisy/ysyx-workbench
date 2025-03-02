// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011_top___024root.h"

VL_INLINE_OPT void Vysyx_24120011_top___024root___act_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid 
        = (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state));
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
        } else if (((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state)) 
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
}

extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_h559258de_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_hc39dc0c5_0;

VL_INLINE_OPT void Vysyx_24120011_top___024root___act_sequent__TOP__1(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__IFU_valid = (0U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state));
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
    vlSelf->ysyx_24120011_top__DOT__w_mem_en = ((3U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state)));
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__r_mem_en = 
            ((3U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
             & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state)));
        vlSelf->ysyx_24120011_top__DOT__w_csr_en = 
            ((0x30200073U != vlSelf->ysyx_24120011_top__DOT__inst) 
             & ((0x73U != vlSelf->ysyx_24120011_top__DOT__inst) 
                & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                    ? (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))
                    : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                       & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))))));
        vlSelf->ysyx_24120011_top__DOT__w_csr_ecall 
            = ((0x30200073U != vlSelf->ysyx_24120011_top__DOT__inst) 
               & ((0x73U == vlSelf->ysyx_24120011_top__DOT__inst) 
                  & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))));
        vlSelf->ysyx_24120011_top__DOT__r_csr_en = 
            ((0x30200073U == vlSelf->ysyx_24120011_top__DOT__inst)
              ? (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))
              : ((0x73U != vlSelf->ysyx_24120011_top__DOT__inst) 
                 & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                     ? (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))
                     : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                        & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))))));
    } else {
        vlSelf->ysyx_24120011_top__DOT__r_mem_en = 0U;
    }
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

void Vysyx_24120011_top___024root___eval_act(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        Vysyx_24120011_top___024root___act_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        Vysyx_24120011_top___024root___act_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_24120011_top___024root___nba_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf);
void Vysyx_24120011_top___024root___nba_sequent__TOP__1(Vysyx_24120011_top___024root* vlSelf);

void Vysyx_24120011_top___024root___eval_nba(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_24120011_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_24120011_top___024root___nba_sequent__TOP__1(vlSelf);
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
    VlTriggerVec<4> __VpreTriggered;
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
