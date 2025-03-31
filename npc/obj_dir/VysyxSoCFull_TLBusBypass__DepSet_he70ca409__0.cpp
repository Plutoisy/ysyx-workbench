// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0\n"); );
    // Body
    vlSelf->__PVT__error__DOT__da_bits_opcode = ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                                  ? 
                                                 (7U 
                                                  & (0x911240U 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                                  : 0U);
    vlSelf->__PVT__error__DOT__a_last_beats1 = ((4U 
                                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                 ? 0U
                                                 : 
                                                (0x3ffU 
                                                 & (~ 
                                                    (0x1ffffffU 
                                                     & (((IData)(0xfffU) 
                                                         << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
                                                        >> 2U)))));
    vlSelf->__PVT__error__DOT__r_beats1 = ((1U & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                            ? (0x3ffU 
                                               & (~ 
                                                  (0x1ffffffU 
                                                   & (((IData)(0xfffU) 
                                                       << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
                                                      >> 2U))))
                                            : 0U);
    vlSelf->__PVT__error__DOT__a_last = ((1U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter)) 
                                         | (0U == (IData)(vlSelf->__PVT__error__DOT__a_last_beats1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1\n"); );
    // Init
    CData/*0:0*/ bar__DOT____VdfgTmp_h84f1d1ee__0;
    bar__DOT____VdfgTmp_h84f1d1ee__0 = 0;
    // Body
    bar__DOT____VdfgTmp_h84f1d1ee__0 = ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelf->auto_node_out_out_a_valid = ((~ (IData)(vlSelf->__PVT__bar__DOT__bypass)) 
                                         & (IData)(bar__DOT____VdfgTmp_h84f1d1ee__0));
    vlSelf->__PVT___bar_auto_out_0_a_valid = ((IData)(bar__DOT____VdfgTmp_h84f1d1ee__0) 
                                              & (IData)(vlSelf->__PVT__bar__DOT__bypass));
    vlSelf->__PVT__error__DOT__winner_1 = ((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
                                           & ((IData)(vlSelf->__PVT__error__DOT__a_last) 
                                              & (IData)(vlSelf->__PVT__error__DOT__idle)));
    vlSelf->__PVT__error__DOT__muxState_1 = ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))
                                              ? (IData)(vlSelf->__PVT__error__DOT__winner_1)
                                              : (IData)(vlSelf->__PVT__error__DOT__state_1));
    vlSelf->__PVT__error__DOT__nodeIn_d_valid = ((IData)(vlSelf->error__DOT____VdfgTmp_hc0029b36__0) 
                                                 & (IData)(vlSelf->__PVT__error__DOT__winner_1));
    if (vlSelf->__PVT__error__DOT__muxState_1) {
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24 
            = vlSelf->__PVT__error__DOT__da_bits_opcode;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3 
            = (1U & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode));
    } else {
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19 = 0U;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16 = 0U;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24 = 0U;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3 = 0U;
    }
    if (vlSelf->__PVT__bar__DOT__bypass) {
        if (vlSelf->__PVT__error__DOT__muxState_1) {
            vlSelf->auto_node_in_in_d_bits_denied = 1U;
            vlSelf->auto_node_in_in_d_bits_size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        } else {
            vlSelf->auto_node_in_in_d_bits_denied = 0U;
            vlSelf->auto_node_in_in_d_bits_size = 0U;
        }
        vlSelf->auto_node_in_in_d_valid = vlSelf->__PVT__error__DOT__nodeIn_d_valid;
        vlSelf->auto_node_in_in_d_bits_corrupt = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3;
        vlSelf->auto_node_in_in_d_bits_source = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelf->auto_node_in_in_d_bits_opcode = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24;
    } else {
        vlSelf->auto_node_in_in_d_bits_denied = (1U 
                                                 & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                    >> 2U));
        vlSelf->auto_node_in_in_d_bits_size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size;
        vlSelf->auto_node_in_in_d_valid = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid;
        vlSelf->auto_node_in_in_d_bits_corrupt = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt;
        vlSelf->auto_node_in_in_d_bits_source = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source;
        vlSelf->auto_node_in_in_d_bits_opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_opcode;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__2(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__2\n"); );
    // Body
    vlSelf->auto_node_out_out_d_ready = ((~ (IData)(vlSelf->__PVT__bar__DOT__bypass)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready));
    vlSelf->__PVT___bar_auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                              & (IData)(vlSelf->__PVT__bar__DOT__bypass));
    vlSelf->__PVT__error__DOT__da_ready = ((IData)(vlSelf->__PVT___bar_auto_out_0_d_ready) 
                                           & (IData)(vlSelf->error__DOT____VdfgTmp_hc0029b36__0));
    vlSelf->__PVT__error__DOT__nodeIn_a_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__error__DOT__a_last)) 
                                                    | ((IData)(vlSelf->__PVT__error__DOT__da_ready) 
                                                       & (((1U 
                                                            == (IData)(vlSelf->__PVT__error__DOT__r_counter)) 
                                                           | (0U 
                                                              == (IData)(vlSelf->__PVT__error__DOT__r_beats1))) 
                                                          & (IData)(vlSelf->__PVT__error__DOT__idle)))));
    vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->__PVT__error__DOT__nodeIn_a_ready) 
           & (IData)(vlSelf->__PVT___bar_auto_out_0_a_valid));
    vlSelf->auto_node_in_in_a_ready = (1U & ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                             & ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                                 ? (IData)(vlSelf->__PVT__error__DOT__nodeIn_a_ready)
                                                 : 
                                                (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))));
    vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->auto_node_in_in_a_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0 = 
        ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0\n"); );
    // Init
    CData/*0:0*/ __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1;
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T;
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = 0;
    SData/*11:0*/ __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9;
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 = 0;
    CData/*5:0*/ __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 = 0;
    SData/*11:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    IData/*26:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    SData/*11:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    QData/*63:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    CData/*7:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1);
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1);
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__r_counter;
    __Vdly__bar__DOT__r_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__r_counter_3 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__stall_counter;
    __Vdly__bar__DOT__stall_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 = 0;
    CData/*0:0*/ __Vdly__error__DOT__idle;
    __Vdly__error__DOT__idle = 0;
    SData/*9:0*/ __Vdly__error__DOT__r_counter;
    __Vdly__error__DOT__r_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__a_last_counter;
    __Vdly__error__DOT__a_last_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__beatsLeft;
    __Vdly__error__DOT__beatsLeft = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes = 0;
    VlWide<4>/*127:0*/ __Vdly__error__DOT__monitor__DOT__inflight_sizes;
    VL_ZERO_W(128, __Vdly__error__DOT__monitor__DOT__inflight_sizes);
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__inflight_1 = 0;
    VlWide<4>/*127:0*/ __Vdly__error__DOT__monitor__DOT__inflight_sizes_1;
    VL_ZERO_W(128, __Vdly__error__DOT__monitor__DOT__inflight_sizes_1);
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_hf303a3ad__0;
    VlWide<4>/*127:0*/ __Vtemp_h70724169__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__0;
    VlWide<5>/*159:0*/ __Vtemp_h814bf4f2__0;
    VlWide<5>/*159:0*/ __Vtemp_h1ec71af6__0;
    VlWide<5>/*159:0*/ __Vtemp_h402f1848__0;
    VlWide<5>/*159:0*/ __Vtemp_h9ecf9258__0;
    VlWide<5>/*159:0*/ __Vtemp_h0fe840ea__0;
    VlWide<5>/*159:0*/ __Vtemp_hab69a0d4__0;
    VlWide<5>/*159:0*/ __Vtemp_hedb9a1f6__0;
    VlWide<5>/*159:0*/ __Vtemp_h8e9d450e__0;
    VlWide<5>/*159:0*/ __Vtemp_h1aa7efb5__0;
    VlWide<5>/*159:0*/ __Vtemp_h4911bd3b__0;
    VlWide<5>/*159:0*/ __Vtemp_hab69a0d4__1;
    VlWide<5>/*159:0*/ __Vtemp_h131918fc__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__1;
    VlWide<5>/*159:0*/ __Vtemp_hee7b10c9__0;
    VlWide<5>/*159:0*/ __Vtemp_hd1f2b9ce__0;
    VlWide<5>/*159:0*/ __Vtemp_hff857c10__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__2;
    VlWide<5>/*159:0*/ __Vtemp_hcb4b53f9__0;
    VlWide<5>/*159:0*/ __Vtemp_hf2fbc16c__0;
    VlWide<5>/*159:0*/ __Vtemp_h4c24cd42__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__3;
    VlWide<5>/*159:0*/ __Vtemp_h5911eb2f__0;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((IData)(vlSelf->__PVT__error__DOT__idle) 
                                 | (0U == (IData)(vlSelf->__PVT__error__DOT__r_counter)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7811: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error: Assertion failed at Error.scala:34\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7811, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7813: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7813, "");
    }
    __Vdly__error__DOT__r_counter = vlSelf->__PVT__error__DOT__r_counter;
    __Vdly__error__DOT__idle = vlSelf->__PVT__error__DOT__idle;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog = vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    __Vdly__error__DOT__monitor__DOT__inflight_1 = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__watchdog = vlSelf->__PVT__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U];
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight = vlSelf->__PVT__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__d_first_counter 
        = vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__a_last_counter = vlSelf->__PVT__error__DOT__a_last_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter 
        = vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__beatsLeft = vlSelf->__PVT__error__DOT__beatsLeft;
    __Vdly__bar__DOT__r_counter_3 = vlSelf->__PVT__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__r_counter = vlSelf->__PVT__bar__DOT__r_counter;
    __Vdly__bar__DOT__stall_counter = vlSelf->__PVT__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = ((0x1aU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))
            ? (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)))
            : 0U);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0xfffU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                     & (~ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T)));
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                      << 2U) | (0xfffffffcU & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                         | (IData)((1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)))) 
                        << 1U)) | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                   | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))))));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (5U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0U == (7U & ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19) 
                        >> 1U)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelf->__PVT__error__DOT__muxState_1)) 
                 | (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[0U] 
        = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
           << 3U);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[1U] 
        = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
           >> 0x1dU);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[2U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[3U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = ((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
           & (6U != (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24)));
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes, 
                        ((QData)((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16)) 
                         << 2U));
    if (VL_UNLIKELY(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7243: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7243, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7245: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7245, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7249: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7249, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7251: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7251, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7255: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7255, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7257: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7257, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7261: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7261, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7263: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7263, "");
    }
    if (VL_UNLIKELY(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7273: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7273, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7275: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7275, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7279: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7279, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7281: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7281, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7285: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7285, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7287: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7287, "");
    }
    if (VL_UNLIKELY(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7291: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7291, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7293: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7293, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7297: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7297, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7299: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7299, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7313: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7313, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7315: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7315, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7319: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7319, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7321: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7321, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7331: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7331, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7333: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7333, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7337: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7337, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7339: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7339, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7349: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7349, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7351: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7351, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7355: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7355, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7357: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7357, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7361: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7361, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7363: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7363, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7367: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7367, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7369: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7369, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7373: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7373, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7375: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7375, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7379: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7379, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7381: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7381, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7385: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7385, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7387: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7387, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7391: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7391, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7393: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7393, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7403: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7403, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7405: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7405, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7409: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7409, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7411: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7411, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7415: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7415, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7417: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7417, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7421: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7421, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7423: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7423, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7427: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7427, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7429: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7429, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->__PVT__error__DOT__muxState_1)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7433: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7433, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7435: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7435, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7439: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7439, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7441: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7441, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7445: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7445, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7447: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7447, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7451: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7451, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7453: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7453, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7457: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7457, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7459: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7459, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7464: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7464, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7466: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7466, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
                       & (1U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7470: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7470, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7472: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7472, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
                       & (2U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7477: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7477, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7479: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7479, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7483: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7483, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7485: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7485, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7489: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7489, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7491: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7491, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7495: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7495, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7497: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7497, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (0U != ((((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                  ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                 | vlSelf->__PVT__error__DOT__monitor__DOT__address[1U]) 
                                | vlSelf->__PVT__error__DOT__monitor__DOT__address[2U]) 
                               | vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7501: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7501, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7503: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7503, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7507: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7507, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7509: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7509, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7513: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7513, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7515: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7515, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7519: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7519, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7521: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7521, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & ((IData)(vlSelf->__PVT__error__DOT__muxState_1) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7525: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7525, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7527: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7527, "");
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7532: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7532, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7534: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7534, "");
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((0xfU >= (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
            ? (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                           | (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7539: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7539, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7541: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7541, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7547: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7547, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7549: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7549, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7553: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7553, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7555: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7555, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7561: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7561, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7563: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7563, "");
    }
    VL_SHIFTR_WWW(128,128,128, __Vtemp_hf303a3ad__0, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
        = __Vtemp_hf303a3ad__0[0U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[1U] 
        = __Vtemp_hf303a3ad__0[1U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[2U] 
        = __Vtemp_hf303a3ad__0[2U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[3U] 
        = __Vtemp_hf303a3ad__0[3U];
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                        != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7568: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7568, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7570: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7570, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->__PVT___bar_auto_out_0_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSelf->__PVT___bar_auto_out_0_d_ready)) 
                           | (IData)(vlSelf->__PVT__error__DOT__nodeIn_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7575: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7575, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7577: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7577, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7583: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7583, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7585: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7585, "");
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((0xfU >= (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
            ? (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7590: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7590, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7592: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7592, "");
    }
    VL_SHIFTR_WWW(128,128,128, __Vtemp_h70724169__0, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
        = __Vtemp_h70724169__0[0U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[1U] 
        = __Vtemp_h70724169__0[1U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[2U] 
        = __Vtemp_h70724169__0[2U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[3U] 
        = __Vtemp_h70724169__0[3U];
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                        != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7597: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7597, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7599: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7599, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7605: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7605, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7607: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7607, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = ((0xbU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)))
            : 0U);
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                    & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))))));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = ((5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
           & (3U == (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                     >> 0x1eU)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = ((3U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                         >> 1U))) & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                     >> 0x1eU));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((3U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
           & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
              >> 0x1eU));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (6U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (0U == (3U & ((IData)(vlSelf->auto_node_in_in_d_bits_size) 
                        >> 1U)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (4U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (2U == (IData)(vlSelf->auto_node_in_in_d_bits_param));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (5U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (1U & ((~ (IData)(vlSelf->auto_node_in_in_d_bits_denied)) 
                 | (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (0U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (1U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (2U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((QData)((IData)(vlSelf->auto_node_in_in_d_bits_source)) 
           << 2U);
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((IData)(vlSelf->auto_node_in_in_d_valid) 
           & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
           & (6U != (IData)(vlSelf->auto_node_in_in_d_bits_opcode)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelf->auto_node_in_in_d_bits_source)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((((IData)(vlSelf->auto_node_in_in_d_valid) 
             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6351: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6351, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6353: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6353, "");
    }
    if (VL_UNLIKELY(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6357: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6357, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6359: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6359, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6363: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6363, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6365: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6365, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6369: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6369, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6371: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6371, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6375: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6375, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6377: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6377, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6381: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6381, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6383: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6383, "");
    }
    if (VL_UNLIKELY(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6387: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6387, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6389: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6389, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6393: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6393, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6395: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6395, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6399: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6399, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6401: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6401, "");
    }
    if (VL_UNLIKELY(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6405: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6405, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6407: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6407, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6411: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6411, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6413: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6413, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6417: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6417, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6419: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6419, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6423: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6423, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6425: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6425, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6429: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6429, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6431: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6431, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6435: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6435, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6437: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6437, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6441: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6441, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6443: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6443, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6447: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6447, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6449: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6449, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6453: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6453, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6455: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6455, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6459: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6459, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6461: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6461, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6465: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6465, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6467: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6467, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6471: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6471, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6473: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6473, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6477: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6477, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6479: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6479, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6483: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6483, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6485: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6485, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6489: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6489, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6491: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6491, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6495: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6495, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6497: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6497, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6501: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6501, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6503: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6503, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6507: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6507, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6509: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6509, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6513: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6513, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6515: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6515, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6519: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6519, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6521: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6521, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->auto_node_in_in_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6525: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6525, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6527: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6527, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6531: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6531, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6533: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6533, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (0U != (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6537: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6537, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6539: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6539, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6543: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6543, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6545: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6545, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6549: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6549, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6551: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6551, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6555: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6555, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6557: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6557, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (3U == (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6561: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6561, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6563: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6563, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6567: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6567, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6569: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6569, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6573: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6573, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6575: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6575, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6579: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6579, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6581: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6581, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (3U == (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6585: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6585, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6587: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6587, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6591: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6591, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6593: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6593, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6597: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6597, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6599: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6599, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6603: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6603, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6605: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6605, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6609: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6609, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6611: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6611, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (0U != (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6615: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6615, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6617: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6617, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6621: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6621, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6623: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6623, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (0U != (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6627: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6627, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6629: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6629, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6633: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6633, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6635: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6635, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6639: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6639, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6641: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6641, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6645: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6645, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6647: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6647, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6651: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6651, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6653: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6653, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                        != vlSelf->__PVT__bar__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6657: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6657, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6659: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6659, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6663: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6663, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6665: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6665, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_param) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6669: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6669, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6671: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6671, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_size) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6675: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6675, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6677: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6677, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_source) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6681: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6681, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6683: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6683, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_sink) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6687: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6687, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6689: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6689, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_denied) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6693: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6693, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6695: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6695, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6700: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6700, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6702: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6702, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = ((0xfU >= (IData)(vlSelf->auto_node_in_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->auto_node_in_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                           | (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6707: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6707, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6709: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6709, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & (~ (((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6715: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6715, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6717: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6717, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->auto_node_in_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6721: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6721, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6723: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6723, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6729: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6729, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6731: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6731, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_size) 
                        != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6736: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6736, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6738: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6738, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSelf->auto_node_in_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready)) 
                           | (IData)(vlSelf->auto_node_in_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6743: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6743, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6745: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6745, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6751: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6751, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6753: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6753, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = ((0xfU >= (IData)(vlSelf->auto_node_in_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->auto_node_in_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6758: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6758, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6760: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6760, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_size) 
                        != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6765: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6765, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6767: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6767, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6773: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6773, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6775: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6775, "");
    }
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->auto_node_in_in_d_bits_size)));
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 
        ((IData)(vlSelf->auto_node_in_in_a_ready) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__r_counter));
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                   & (IData)(vlSelf->auto_node_in_in_d_valid));
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3 
        = ((1U & (IData)(vlSelf->auto_node_in_in_d_bits_opcode))
            ? (7U & (~ ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9) 
                        >> 2U))) : 0U);
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__r_counter_3));
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 
        = (0x3fU & (((IData)(vlSelf->__PVT__bar__DOT__flight) 
                     + (3U & (((((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                                 & (IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__d_first)) 
                                & ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                                   >> 2U)) & (~ ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                                                 >> 1U))) 
                              + ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) 
                                 & (IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__a_first))))) 
                    - ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                       & ((1U == (IData)(vlSelf->__PVT__bar__DOT__r_counter_3)) 
                          | (0U == (IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3))))));
    if (((IData)(vlSelf->__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(__PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10)))) {
        vlSelf->__PVT__bar__DOT__bypass_reg = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__idle = 1U;
        __Vdly__error__DOT__r_counter = 0U;
        vlSelf->__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelf->__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        __Vdly__error__DOT__a_last_counter = 0U;
        vlSelf->__PVT__error__DOT__a_last_counter = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = 0U;
        vlSelf->__PVT__error__DOT__state_1 = 0U;
        vlSelf->__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        vlSelf->__PVT__bar__DOT__flight = 0U;
        __Vdly__bar__DOT__r_counter = 0U;
        __Vdly__bar__DOT__r_counter_3 = 0U;
        __Vdly__bar__DOT__stall_counter = 0U;
    } else {
        vlSelf->__PVT__error__DOT__unnamedblk1__DOT___GEN_1 
            = ((IData)(vlSelf->__PVT__error__DOT__da_ready) 
               & (IData)(vlSelf->__PVT__error__DOT__winner_1));
        __Vdly__error__DOT__idle = ((~ ((IData)(vlSelf->__PVT__error__DOT__unnamedblk1__DOT___GEN_1) 
                                        & (4U == (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode)))) 
                                    & (IData)(vlSelf->__PVT__error__DOT__idle));
        if (vlSelf->__PVT__error__DOT__unnamedblk1__DOT___GEN_1) {
            __Vdly__error__DOT__r_counter = (0x3ffU 
                                             & ((IData)(vlSelf->__PVT__error__DOT__da_first)
                                                 ? (IData)(vlSelf->__PVT__error__DOT__r_beats1)
                                                 : 
                                                ((IData)(vlSelf->__PVT__error__DOT__r_counter) 
                                                 - (IData)(1U))));
        }
        vlSelf->__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelf->__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        if (((IData)(vlSelf->__PVT__error__DOT__nodeIn_a_ready) 
             & (IData)(vlSelf->__PVT___bar_auto_out_0_a_valid))) {
            __Vdly__error__DOT__a_last_counter = (0x3ffU 
                                                  & ((0U 
                                                      == (IData)(vlSelf->__PVT__error__DOT__a_last_counter))
                                                      ? (IData)(vlSelf->__PVT__error__DOT__a_last_beats1)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__error__DOT__a_last_counter) 
                                                      - (IData)(1U))));
        }
        vlSelf->__PVT__error__DOT__a_last_counter = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = (0x3ffU & (
                                                   ((IData)(vlSelf->__PVT__error__DOT__idle_1) 
                                                    & (IData)(vlSelf->__PVT___bar_auto_out_0_d_ready))
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__error__DOT__winner_1) 
                                                     & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x1ffffffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__error__DOT__beatsLeft) 
                                                    - 
                                                    ((IData)(vlSelf->__PVT___bar_auto_out_0_d_ready) 
                                                     & (IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid)))));
        if ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))) {
            vlSelf->__PVT__error__DOT__state_1 = vlSelf->__PVT__error__DOT__winner_1;
        }
        vlSelf->__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        if (__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) {
            vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__bar__DOT__r_counter = (7U & ((IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__a_first)
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                    >> 2U)))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__bar__DOT__r_counter) 
                                                  - (IData)(1U))));
            __Vdly__bar__DOT__stall_counter = (7U & 
                                               ((IData)(vlSelf->__PVT__bar__DOT__stall_first)
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                   >> 2U)))
                                                 : 
                                                ((IData)(vlSelf->__PVT__bar__DOT__stall_counter) 
                                                 - (IData)(1U))));
        }
        if (__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) {
            __Vdly__bar__DOT__r_counter_3 = (7U & ((IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__d_first)
                                                    ? (IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__bar__DOT__r_counter_3) 
                                                    - (IData)(1U))));
        }
        vlSelf->__PVT__bar__DOT__flight = __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    }
    vlSelf->__PVT__bar__DOT__r_counter = __Vdly__bar__DOT__r_counter;
    vlSelf->__PVT__bar__DOT__r_counter_3 = __Vdly__bar__DOT__r_counter_3;
    vlSelf->__PVT__bar__DOT__stall_counter = __Vdly__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSelf->__PVT___bar_auto_out_0_d_ready) 
           & (IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid));
    if (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24;
        vlSelf->__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19;
        vlSelf->__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelf->__PVT__error__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__error__DOT__muxState_1;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__error__DOT__monitor__DOT__address[0U] 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address;
        vlSelf->__PVT__error__DOT__monitor__DOT__address[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__address[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__address[3U] = 0U;
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready) 
           & (IData)(vlSelf->auto_node_in_in_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__monitor__DOT__d_first_counter = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        __Vdly__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__watchdog = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] = 0U;
        __Vdly__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__a_first_counter = 0U;
        __Vdly__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__watchdog = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__a_first_counter = 0U;
        __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[0U] 
            = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
               << 3U);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[1U] 
            = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
               >> 0x1dU);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[4U] = 0U;
        __Vtemp_h6f0d4cc8__0[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__0[1U] = 0U;
        __Vtemp_h6f0d4cc8__0[2U] = 0U;
        __Vtemp_h6f0d4cc8__0[3U] = 0U;
        __Vtemp_h6f0d4cc8__0[4U] = 0U;
        __Vtemp_h814bf4f2__0[0U] = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
                                    << 2U);
        __Vtemp_h814bf4f2__0[1U] = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
                                    >> 0x1eU);
        __Vtemp_h814bf4f2__0[2U] = 0U;
        __Vtemp_h814bf4f2__0[3U] = 0U;
        __Vtemp_h814bf4f2__0[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h1ec71af6__0, __Vtemp_h6f0d4cc8__0, __Vtemp_h814bf4f2__0);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_h1ec71af6__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_h1ec71af6__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_h1ec71af6__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_h1ec71af6__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_h1ec71af6__0[4U]);
        if (vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0) {
            __Vtemp_h402f1848__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                                              << 1U));
            __Vtemp_h8e9d450e__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                              << 1U));
        } else {
            __Vtemp_h402f1848__0[0U] = 0U;
            __Vtemp_h8e9d450e__0[0U] = 0U;
        }
        __Vtemp_h402f1848__0[1U] = 0U;
        __Vtemp_h402f1848__0[2U] = 0U;
        __Vtemp_h402f1848__0[3U] = 0U;
        __Vtemp_h402f1848__0[4U] = 0U;
        __Vtemp_h9ecf9258__0[0U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                                    << 2U);
        __Vtemp_h9ecf9258__0[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                                    >> 0x1eU);
        __Vtemp_h9ecf9258__0[2U] = 0U;
        __Vtemp_h9ecf9258__0[3U] = 0U;
        __Vtemp_h9ecf9258__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h0fe840ea__0, __Vtemp_h402f1848__0, __Vtemp_h9ecf9258__0);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_h0fe840ea__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_h0fe840ea__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_h0fe840ea__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_h0fe840ea__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_h0fe840ea__0[4U]);
        __Vtemp_hab69a0d4__0[0U] = 0xffU;
        __Vtemp_hab69a0d4__0[1U] = 0U;
        __Vtemp_hab69a0d4__0[2U] = 0U;
        __Vtemp_hab69a0d4__0[3U] = 0U;
        __Vtemp_hab69a0d4__0[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hedb9a1f6__0, __Vtemp_hab69a0d4__0, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_hedb9a1f6__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_hedb9a1f6__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_hedb9a1f6__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_hedb9a1f6__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hedb9a1f6__0[4U]);
        __Vtemp_h8e9d450e__0[1U] = 0U;
        __Vtemp_h8e9d450e__0[2U] = 0U;
        __Vtemp_h8e9d450e__0[3U] = 0U;
        __Vtemp_h8e9d450e__0[4U] = 0U;
        __Vtemp_h1aa7efb5__0[0U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                                    << 3U);
        __Vtemp_h1aa7efb5__0[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                                    >> 0x1dU);
        __Vtemp_h1aa7efb5__0[2U] = 0U;
        __Vtemp_h1aa7efb5__0[3U] = 0U;
        __Vtemp_h1aa7efb5__0[4U] = 0U;
        VL_SHIFTL_WWW(132,132,132, __Vtemp_h4911bd3b__0, __Vtemp_h8e9d450e__0, __Vtemp_h1aa7efb5__0);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_h4911bd3b__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_h4911bd3b__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_h4911bd3b__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_h4911bd3b__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (0xfU & __Vtemp_h4911bd3b__0[4U]);
        __Vtemp_hab69a0d4__1[0U] = 0xffU;
        __Vtemp_hab69a0d4__1[1U] = 0U;
        __Vtemp_hab69a0d4__1[2U] = 0U;
        __Vtemp_hab69a0d4__1[3U] = 0U;
        __Vtemp_hab69a0d4__1[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h131918fc__0, __Vtemp_hab69a0d4__1, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_h131918fc__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_h131918fc__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_h131918fc__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_h131918fc__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_h131918fc__0[4U]);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24)));
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24)));
        if (__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))
                              ? ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter) 
                                 - (IData)(1U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))
                                                    ? 
                                                   (~ 
                                                    (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                                     >> 2U))
                                                    : 0U)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
                = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
                = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__error__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__error__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                               ? ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                   ? ((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                   : 0U) : 0U)) & (~ 
                                                   ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                                     ? 
                                                    ((0xfU 
                                                      >= (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
                                                      : 0U)
                                                     : 0U))));
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                    ? (((QData)((IData)(
                                                        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U]
                    : 0U)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U]
                    : 0U)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U]
                    : 0U)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U]
                    : 0U)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1) 
                | (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                ? 0U : ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog));
        __Vdly__error__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? ((0xfU >= (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
                          ? ((IData)(1U) << (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
                          : 0U) : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U]
                      : 0U)));
        if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = ((0x1aU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))
                    ? (0x7ffffffU & ((IData)(0xfffU) 
                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)))
                    : 0U);
            __Vdly__error__DOT__monitor__DOT__a_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))
                              ? ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter) 
                                 - (IData)(1U)) : (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                                     >> 2U)))));
            __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
                = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                  ? 0U : (~ (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                             >> 2U)))
                              : ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSelf->auto_node_in_in_d_bits_source) 
               << 2U);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSelf->auto_node_in_in_d_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_h6f0d4cc8__1[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__1[1U] = 0U;
        __Vtemp_h6f0d4cc8__1[2U] = 0U;
        __Vtemp_h6f0d4cc8__1[3U] = 0U;
        __Vtemp_h6f0d4cc8__1[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hee7b10c9__0, __Vtemp_h6f0d4cc8__1, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_hee7b10c9__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_hee7b10c9__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_hee7b10c9__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_hee7b10c9__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hee7b10c9__0[4U]);
        if (vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0) {
            __Vtemp_hd1f2b9ce__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                                              << 1U));
            __Vtemp_hf2fbc16c__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                              << 1U));
        } else {
            __Vtemp_hd1f2b9ce__0[0U] = 0U;
            __Vtemp_hf2fbc16c__0[0U] = 0U;
        }
        __Vtemp_hd1f2b9ce__0[1U] = 0U;
        __Vtemp_hd1f2b9ce__0[2U] = 0U;
        __Vtemp_hd1f2b9ce__0[3U] = 0U;
        __Vtemp_hd1f2b9ce__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_hff857c10__0, __Vtemp_hd1f2b9ce__0, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_hff857c10__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_hff857c10__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_hff857c10__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_hff857c10__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_hff857c10__0[4U]);
        __Vtemp_h6f0d4cc8__2[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__2[1U] = 0U;
        __Vtemp_h6f0d4cc8__2[2U] = 0U;
        __Vtemp_h6f0d4cc8__2[3U] = 0U;
        __Vtemp_h6f0d4cc8__2[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hcb4b53f9__0, __Vtemp_h6f0d4cc8__2, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_hcb4b53f9__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_hcb4b53f9__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_hcb4b53f9__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_hcb4b53f9__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hcb4b53f9__0[4U]);
        __Vtemp_hf2fbc16c__0[1U] = 0U;
        __Vtemp_hf2fbc16c__0[2U] = 0U;
        __Vtemp_hf2fbc16c__0[3U] = 0U;
        __Vtemp_hf2fbc16c__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h4c24cd42__0, __Vtemp_hf2fbc16c__0, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_h4c24cd42__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_h4c24cd42__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_h4c24cd42__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_h4c24cd42__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_h4c24cd42__0[4U]);
        __Vtemp_h6f0d4cc8__3[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__3[1U] = 0U;
        __Vtemp_h6f0d4cc8__3[2U] = 0U;
        __Vtemp_h6f0d4cc8__3[3U] = 0U;
        __Vtemp_h6f0d4cc8__3[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h5911eb2f__0, __Vtemp_h6f0d4cc8__3, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_h5911eb2f__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_h5911eb2f__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_h5911eb2f__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_h5911eb2f__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_h5911eb2f__0[4U]);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelf->auto_node_in_in_d_bits_opcode)));
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode)));
        if (__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->auto_node_in_in_d_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((1U 
                                                & (IData)(vlSelf->auto_node_in_in_d_bits_opcode))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                    >> 2U))
                                                : 0U)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->auto_node_in_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->auto_node_in_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__bar__DOT__monitor__DOT__inflight = 
            (0xffffU & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                         | ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0)
                             ? ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                 ? ((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                 : 0U) : 0U)) & (~ 
                                                 ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                   ? 
                                                  ((0xfU 
                                                    >= (IData)(vlSelf->auto_node_in_in_d_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->auto_node_in_in_d_bits_source))
                                                    : 0U)
                                                   : 0U))));
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__watchdog = 
            (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
              | (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
              ? 0U : ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog));
        __Vdly__bar__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? ((0xfU >= (IData)(vlSelf->auto_node_in_in_d_bits_source))
                          ? ((IData)(1U) << (IData)(vlSelf->auto_node_in_in_d_bits_source))
                          : 0U) : 0U)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                      : 0ULL)));
        if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = ((0xbU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))
                    ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)))
                    : 0U);
            __Vdly__bar__DOT__monitor__DOT__a_first_counter 
                = (7U & ((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))
                          ? ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                ? 0U
                                                : (~ 
                                                   ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                    >> 2U)))));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSelf->auto_node_in_in_d_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSelf->auto_node_in_in_d_bits_param;
        vlSelf->__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSelf->auto_node_in_in_d_bits_size;
        vlSelf->__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSelf->auto_node_in_in_d_bits_source;
        vlSelf->__PVT__bar__DOT__monitor__DOT__sink 
            = vlSelf->auto_node_in_in_d_bits_sink;
        vlSelf->__PVT__bar__DOT__monitor__DOT__denied 
            = vlSelf->auto_node_in_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__error__DOT__da_first = (0U == (IData)(vlSelf->__PVT__error__DOT__r_counter));
    vlSelf->__PVT__error__DOT__idle_1 = (0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft));
    vlSelf->error__DOT____VdfgTmp_hc0029b36__0 = ((0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__beatsLeft)) 
                                                  | (IData)(vlSelf->__PVT__error__DOT__state_1));
    vlSelf->__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter));
    vlSelf->__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight 
        = __Vdly__error__DOT__monitor__DOT__inflight;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U];
    vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
        = __Vdly__error__DOT__monitor__DOT__watchdog;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 
        = __Vdly__error__DOT__monitor__DOT__inflight_1;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
        = __Vdly__error__DOT__monitor__DOT__watchdog_1;
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter;
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight 
        = __Vdly__bar__DOT__monitor__DOT__inflight;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
        = __Vdly__bar__DOT__monitor__DOT__watchdog;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
        = __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0\n"); );
    // Init
    CData/*0:0*/ bar__DOT____VdfgTmp_h84f1d1ee__0;
    bar__DOT____VdfgTmp_h84f1d1ee__0 = 0;
    // Body
    vlSelf->__PVT__bar__DOT__bypass = ((IData)(vlSelf->__PVT__bar__DOT__in_reset)
                                        ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass)
                                        : (IData)(vlSelf->__PVT__bar__DOT__bypass_reg));
    vlSelf->__PVT__bar__DOT__stall = (((IData)(vlSelf->__PVT__bar__DOT__bypass) 
                                       != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass)) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter)));
    bar__DOT____VdfgTmp_h84f1d1ee__0 = ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelf->auto_node_out_out_a_valid = ((~ (IData)(vlSelf->__PVT__bar__DOT__bypass)) 
                                         & (IData)(bar__DOT____VdfgTmp_h84f1d1ee__0));
    vlSelf->__PVT___bar_auto_out_0_a_valid = ((IData)(bar__DOT____VdfgTmp_h84f1d1ee__0) 
                                              & (IData)(vlSelf->__PVT__bar__DOT__bypass));
    vlSelf->__PVT__error__DOT__winner_1 = ((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
                                           & ((IData)(vlSelf->__PVT__error__DOT__a_last) 
                                              & (IData)(vlSelf->__PVT__error__DOT__idle)));
    vlSelf->__PVT__error__DOT__muxState_1 = ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))
                                              ? (IData)(vlSelf->__PVT__error__DOT__winner_1)
                                              : (IData)(vlSelf->__PVT__error__DOT__state_1));
    vlSelf->__PVT__error__DOT__nodeIn_d_valid = ((IData)(vlSelf->error__DOT____VdfgTmp_hc0029b36__0) 
                                                 & (IData)(vlSelf->__PVT__error__DOT__winner_1));
    if (vlSelf->__PVT__error__DOT__muxState_1) {
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24 
            = vlSelf->__PVT__error__DOT__da_bits_opcode;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3 
            = (1U & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode));
    } else {
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19 = 0U;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16 = 0U;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24 = 0U;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3 = 0U;
    }
    if (vlSelf->__PVT__bar__DOT__bypass) {
        vlSelf->auto_node_in_in_d_bits_param = 0U;
        vlSelf->auto_node_in_in_d_bits_sink = 0U;
        if (vlSelf->__PVT__error__DOT__muxState_1) {
            vlSelf->auto_node_in_in_d_bits_denied = 1U;
            vlSelf->auto_node_in_in_d_bits_size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        } else {
            vlSelf->auto_node_in_in_d_bits_denied = 0U;
            vlSelf->auto_node_in_in_d_bits_size = 0U;
        }
        vlSelf->auto_node_in_in_d_valid = vlSelf->__PVT__error__DOT__nodeIn_d_valid;
        vlSelf->auto_node_in_in_d_bits_corrupt = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3;
        vlSelf->auto_node_in_in_d_bits_source = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelf->auto_node_in_in_d_bits_opcode = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24;
    } else {
        vlSelf->auto_node_in_in_d_bits_param = (3U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelf->auto_node_in_in_d_bits_sink = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_sink;
        vlSelf->auto_node_in_in_d_bits_denied = (1U 
                                                 & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                    >> 2U));
        vlSelf->auto_node_in_in_d_bits_size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size;
        vlSelf->auto_node_in_in_d_valid = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid;
        vlSelf->auto_node_in_in_d_bits_corrupt = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt;
        vlSelf->auto_node_in_in_d_bits_source = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source;
        vlSelf->auto_node_in_in_d_bits_opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_opcode;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0\n"); );
    // Init
    CData/*0:0*/ __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1;
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T;
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = 0;
    SData/*11:0*/ __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9;
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 = 0;
    CData/*5:0*/ __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 = 0;
    SData/*11:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 = 0;
    QData/*63:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    IData/*26:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    SData/*11:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    QData/*63:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    CData/*7:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1);
    SData/*15:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    VlWide<4>/*127:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    VL_ZERO_W(128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1);
    CData/*0:0*/ __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__r_counter;
    __Vdly__bar__DOT__r_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__r_counter_3 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__stall_counter;
    __Vdly__bar__DOT__stall_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = 0;
    QData/*63:0*/ __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter = 0;
    CData/*2:0*/ __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 = 0;
    CData/*0:0*/ __Vdly__error__DOT__idle;
    __Vdly__error__DOT__idle = 0;
    SData/*9:0*/ __Vdly__error__DOT__r_counter;
    __Vdly__error__DOT__r_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__a_last_counter;
    __Vdly__error__DOT__a_last_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__beatsLeft;
    __Vdly__error__DOT__beatsLeft = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes = 0;
    VlWide<4>/*127:0*/ __Vdly__error__DOT__monitor__DOT__inflight_sizes;
    VL_ZERO_W(128, __Vdly__error__DOT__monitor__DOT__inflight_sizes);
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__inflight_1 = 0;
    VlWide<4>/*127:0*/ __Vdly__error__DOT__monitor__DOT__inflight_sizes_1;
    VL_ZERO_W(128, __Vdly__error__DOT__monitor__DOT__inflight_sizes_1);
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter = 0;
    SData/*9:0*/ __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_hf303a3ad__0;
    VlWide<4>/*127:0*/ __Vtemp_h70724169__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__0;
    VlWide<5>/*159:0*/ __Vtemp_h814bf4f2__0;
    VlWide<5>/*159:0*/ __Vtemp_h1ec71af6__0;
    VlWide<5>/*159:0*/ __Vtemp_he0cf7f05__0;
    VlWide<5>/*159:0*/ __Vtemp_hd643db39__0;
    VlWide<5>/*159:0*/ __Vtemp_h0dcb169b__0;
    VlWide<5>/*159:0*/ __Vtemp_hab69a0d4__0;
    VlWide<5>/*159:0*/ __Vtemp_hedb9a1f6__0;
    VlWide<5>/*159:0*/ __Vtemp_hece19c8e__0;
    VlWide<5>/*159:0*/ __Vtemp_hbb4ee8f4__0;
    VlWide<5>/*159:0*/ __Vtemp_h3700eba1__0;
    VlWide<5>/*159:0*/ __Vtemp_hab69a0d4__1;
    VlWide<5>/*159:0*/ __Vtemp_h131918fc__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__1;
    VlWide<5>/*159:0*/ __Vtemp_hee7b10c9__0;
    VlWide<5>/*159:0*/ __Vtemp_h04a11209__0;
    VlWide<5>/*159:0*/ __Vtemp_h87029e3d__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__2;
    VlWide<5>/*159:0*/ __Vtemp_hcb4b53f9__0;
    VlWide<5>/*159:0*/ __Vtemp_h2c36fb9a__0;
    VlWide<5>/*159:0*/ __Vtemp_hb1f1a0ad__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__3;
    VlWide<5>/*159:0*/ __Vtemp_h5911eb2f__0;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((IData)(vlSelf->__PVT__error__DOT__idle) 
                                 | (0U == (IData)(vlSelf->__PVT__error__DOT__r_counter)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7811: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error: Assertion failed at Error.scala:34\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7811, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7813: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7813, "");
    }
    __Vdly__error__DOT__r_counter = vlSelf->__PVT__error__DOT__r_counter;
    __Vdly__error__DOT__idle = vlSelf->__PVT__error__DOT__idle;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog = vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight = vlSelf->__PVT__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    __Vdly__error__DOT__monitor__DOT__inflight_1 = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__watchdog = vlSelf->__PVT__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U];
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
        = vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight = vlSelf->__PVT__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__d_first_counter 
        = vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
        = vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
        = vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__a_last_counter = vlSelf->__PVT__error__DOT__a_last_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter 
        = vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__beatsLeft = vlSelf->__PVT__error__DOT__beatsLeft;
    __Vdly__bar__DOT__r_counter_3 = vlSelf->__PVT__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__r_counter = vlSelf->__PVT__bar__DOT__r_counter;
    __Vdly__bar__DOT__stall_counter = vlSelf->__PVT__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = ((0x1aU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))
            ? (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)))
            : 0U);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0xfffU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                     & (~ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T)));
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((4U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                      << 2U) | (0xfffffffcU & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address) 
                                                  << 2U))))) 
              | ((2U & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                         | (IData)((1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address)))) 
                        << 1U)) | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                   | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))))));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (5U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0U == (7U & ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19) 
                        >> 1U)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelf->__PVT__error__DOT__muxState_1)) 
                 | (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[0U] 
        = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
           << 3U);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[1U] 
        = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
           >> 0x1dU);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[2U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[3U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = ((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
           & (6U != (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24)));
    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes, 
                        ((QData)((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16)) 
                         << 2U));
    if (VL_UNLIKELY(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7243: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7243, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7245: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7245, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7249: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7249, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7251: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7251, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7255: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7255, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7257: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7257, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7261: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7261, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7263: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7263, "");
    }
    if (VL_UNLIKELY(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7273: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7273, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7275: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7275, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7279: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7279, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7281: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7281, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7285: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7285, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7287: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7287, "");
    }
    if (VL_UNLIKELY(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7291: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7291, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7293: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7293, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7297: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7297, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7299: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7299, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7313: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7313, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7315: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7315, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7319: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7319, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7321: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7321, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7331: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7331, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7333: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7333, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7337: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7337, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7339: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7339, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7349: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7349, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7351: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7351, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7355: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7355, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7357: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7357, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7361: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7361, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7363: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7363, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7367: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7367, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7369: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7369, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7373: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7373, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7375: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7375, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7379: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7379, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7381: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7381, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7385: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7385, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7387: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7387, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7391: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7391, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7393: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7393, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7403: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7403, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7405: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7405, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7409: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7409, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7411: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7411, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7415: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7415, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7417: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7417, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7421: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7421, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7423: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7423, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7427: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7427, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7429: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7429, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(vlSelf->__PVT__error__DOT__muxState_1)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7433: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7433, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7435: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7435, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7439: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7439, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7441: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7441, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7445: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7445, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7447: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7447, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7451: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7451, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7453: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7453, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7457: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7457, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7459: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7459, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
                       & (0U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7464: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7464, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7466: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7466, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
                       & (1U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7470: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7470, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7472: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7472, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid) 
                       & (2U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7477: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7477, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7479: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7479, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7483: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7483, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7485: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7485, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7489: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7489, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7491: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7491, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7495: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7495, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7497: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7497, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (0U != ((((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                  ^ vlSelf->__PVT__error__DOT__monitor__DOT__address[0U]) 
                                 | vlSelf->__PVT__error__DOT__monitor__DOT__address[1U]) 
                                | vlSelf->__PVT__error__DOT__monitor__DOT__address[2U]) 
                               | vlSelf->__PVT__error__DOT__monitor__DOT__address[3U]))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7501: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7501, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7503: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7503, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7507: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7507, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7509: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7509, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7513: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7513, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7515: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7515, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7519: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7519, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7521: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7521, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & ((IData)(vlSelf->__PVT__error__DOT__muxState_1) 
                        != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7525: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7525, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7527: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7527, "");
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7532: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7532, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7534: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7534, "");
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((0xfU >= (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
            ? (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                           | (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7539: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7539, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7541: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7541, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7547: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7547, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7549: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7549, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7553: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7553, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7555: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7555, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (~ (((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7561: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7561, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7563: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7563, "");
    }
    VL_SHIFTR_WWW(128,128,128, __Vtemp_hf303a3ad__0, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
        = __Vtemp_hf303a3ad__0[0U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[1U] 
        = __Vtemp_hf303a3ad__0[1U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[2U] 
        = __Vtemp_hf303a3ad__0[2U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[3U] 
        = __Vtemp_hf303a3ad__0[3U];
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                        != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7568: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7568, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7570: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7570, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                          & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->__PVT___bar_auto_out_0_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))) 
                       & (6U != (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSelf->__PVT___bar_auto_out_0_d_ready)) 
                           | (IData)(vlSelf->__PVT__error__DOT__nodeIn_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7575: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7575, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7577: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7577, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7583: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7583, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7585: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7585, "");
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((0xfU >= (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
            ? (0xffffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7590: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7590, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7592: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7592, "");
    }
    VL_SHIFTR_WWW(128,128,128, __Vtemp_h70724169__0, vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
        = __Vtemp_h70724169__0[0U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[1U] 
        = __Vtemp_h70724169__0[1U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[2U] 
        = __Vtemp_h70724169__0[2U];
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[3U] 
        = __Vtemp_h70724169__0[3U];
    if (VL_UNLIKELY(((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                        != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7597: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7597, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7599: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7599, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7605: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7605, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7607: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7607, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = ((0xbU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)))
            : 0U);
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                    & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))))));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7 
        = ((5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
           & (3U == (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                     >> 0x1eU)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = ((3U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                         >> 1U))) & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                     >> 0x1eU));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((3U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
           & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
              >> 0x1eU));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (6U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (0U == (3U & ((IData)(vlSelf->auto_node_in_in_d_bits_size) 
                        >> 1U)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (4U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (2U == (IData)(vlSelf->auto_node_in_in_d_bits_param));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (5U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (1U & ((~ (IData)(vlSelf->auto_node_in_in_d_bits_denied)) 
                 | (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (0U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (1U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (2U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((QData)((IData)(vlSelf->auto_node_in_in_d_bits_source)) 
           << 2U);
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((IData)(vlSelf->auto_node_in_in_d_valid) 
           & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
           & (6U != (IData)(vlSelf->auto_node_in_in_d_bits_opcode)));
    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelf->auto_node_in_in_d_bits_source)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((((IData)(vlSelf->auto_node_in_in_d_valid) 
             & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->auto_node_in_in_d_valid) 
            & (0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6351: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6351, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6353: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6353, "");
    }
    if (VL_UNLIKELY(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6357: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6357, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6359: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6359, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6363: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6363, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6365: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6365, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6369: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6369, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6371: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6371, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6375: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6375, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6377: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6377, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6381: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6381, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6383: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6383, "");
    }
    if (VL_UNLIKELY(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6387: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6387, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6389: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6389, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6393: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6393, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6395: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6395, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6399: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6399, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6401: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6401, "");
    }
    if (VL_UNLIKELY(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6405: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6405, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6407: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6407, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6411: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6411, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6413: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6413, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6417: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6417, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6419: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6419, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6423: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6423, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6425: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6425, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6429: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6429, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6431: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6431, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6435: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6435, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6437: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6437, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6441: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6441, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6443: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6443, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6447: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6447, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6449: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6449, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6453: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6453, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6455: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6455, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6459: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6459, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6461: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6461, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6465: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6465, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6467: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6467, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6471: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6471, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6473: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6473, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6477: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6477, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6479: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6479, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6483: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6483, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6485: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6485, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6489: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6489, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6491: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6491, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6495: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6495, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6497: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6497, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6501: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6501, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6503: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6503, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6507: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6507, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6509: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6509, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6513: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6513, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6515: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6515, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6519: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6519, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6521: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6521, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->auto_node_in_in_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6525: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6525, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6527: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6527, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6531: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6531, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6533: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6533, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (0U != (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6537: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6537, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6539: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6539, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6543: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6543, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6545: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6545, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6549: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6549, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6551: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6551, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6555: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6555, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6557: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6557, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (3U == (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6561: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6561, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6563: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6563, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6567: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6567, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6569: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6569, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6573: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6573, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6575: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6575, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6579: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6579, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6581: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6581, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (3U == (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6585: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6585, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6587: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6587, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6591: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6591, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6593: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6593, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6597: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6597, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6599: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6599, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (0U != (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6603: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6603, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6605: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6605, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6609: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6609, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6611: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6611, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (0U != (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6615: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6615, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6617: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6617, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6621: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6621, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6623: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6623, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (0U != (IData)(vlSelf->auto_node_in_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6627: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6627, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6629: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6629, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(vlSelf->auto_node_in_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6633: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6633, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6635: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6635, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6639: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6639, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6641: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6641, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6645: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6645, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6647: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6647, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6651: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6651, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6653: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6653, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                     & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                        != vlSelf->__PVT__bar__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6657: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6657, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6659: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6659, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6663: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6663, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6665: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6665, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_param) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6669: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6669, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6671: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6671, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_size) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6675: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6675, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6677: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6677, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_source) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6681: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6681, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6683: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6683, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_sink) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6687: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6687, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6689: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6689, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_denied) 
                        != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6693: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6693, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6695: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6695, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6700: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6700, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6702: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6702, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = ((0xfU >= (IData)(vlSelf->auto_node_in_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->auto_node_in_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                           | (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6707: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6707, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6709: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6709, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & (~ (((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6715: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6715, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6717: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6717, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->auto_node_in_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6721: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6721, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6723: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6723, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & (~ (((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6729: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6729, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6731: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6731, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_size) 
                        != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6736: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6736, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6738: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6738, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                          & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSelf->auto_node_in_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->auto_node_in_in_d_bits_opcode))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready)) 
                           | (IData)(vlSelf->auto_node_in_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6743: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6743, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6745: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6745, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6751: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6751, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6753: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6753, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = ((0xfU >= (IData)(vlSelf->auto_node_in_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->auto_node_in_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                     & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6758: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6758, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6760: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6760, "");
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY(((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                     & ((IData)(vlSelf->auto_node_in_in_d_bits_size) 
                        != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6765: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6765, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6767: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6767, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6773: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6773, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6775: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6775, "");
    }
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->auto_node_in_in_d_bits_size)));
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 
        ((IData)(vlSelf->auto_node_in_in_a_ready) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__a_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__r_counter));
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                   & (IData)(vlSelf->auto_node_in_in_d_valid));
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3 
        = ((1U & (IData)(vlSelf->auto_node_in_in_d_bits_opcode))
            ? (7U & (~ ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9) 
                        >> 2U))) : 0U);
    vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__d_first 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__r_counter_3));
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 
        = (0x3fU & (((IData)(vlSelf->__PVT__bar__DOT__flight) 
                     + (3U & (((((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                                 & (IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__d_first)) 
                                & ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                                   >> 2U)) & (~ ((IData)(vlSelf->auto_node_in_in_d_bits_opcode) 
                                                 >> 1U))) 
                              + ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) 
                                 & (IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__a_first))))) 
                    - ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                       & ((1U == (IData)(vlSelf->__PVT__bar__DOT__r_counter_3)) 
                          | (0U == (IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3))))));
    if (((IData)(vlSelf->__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(__PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10)))) {
        vlSelf->__PVT__bar__DOT__bypass_reg = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__idle = 1U;
        __Vdly__error__DOT__r_counter = 0U;
        vlSelf->__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelf->__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        __Vdly__error__DOT__a_last_counter = 0U;
        vlSelf->__PVT__error__DOT__a_last_counter = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = 0U;
        vlSelf->__PVT__error__DOT__state_1 = 0U;
        vlSelf->__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        vlSelf->__PVT__bar__DOT__flight = 0U;
        __Vdly__bar__DOT__r_counter = 0U;
        __Vdly__bar__DOT__r_counter_3 = 0U;
        __Vdly__bar__DOT__stall_counter = 0U;
    } else {
        vlSelf->__PVT__error__DOT__unnamedblk1__DOT___GEN_1 
            = ((IData)(vlSelf->__PVT__error__DOT__da_ready) 
               & (IData)(vlSelf->__PVT__error__DOT__winner_1));
        __Vdly__error__DOT__idle = ((~ ((IData)(vlSelf->__PVT__error__DOT__unnamedblk1__DOT___GEN_1) 
                                        & (4U == (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode)))) 
                                    & (IData)(vlSelf->__PVT__error__DOT__idle));
        if (vlSelf->__PVT__error__DOT__unnamedblk1__DOT___GEN_1) {
            __Vdly__error__DOT__r_counter = (0x3ffU 
                                             & ((IData)(vlSelf->__PVT__error__DOT__da_first)
                                                 ? (IData)(vlSelf->__PVT__error__DOT__r_beats1)
                                                 : 
                                                ((IData)(vlSelf->__PVT__error__DOT__r_counter) 
                                                 - (IData)(1U))));
        }
        vlSelf->__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelf->__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        if (((IData)(vlSelf->__PVT__error__DOT__nodeIn_a_ready) 
             & (IData)(vlSelf->__PVT___bar_auto_out_0_a_valid))) {
            __Vdly__error__DOT__a_last_counter = (0x3ffU 
                                                  & ((0U 
                                                      == (IData)(vlSelf->__PVT__error__DOT__a_last_counter))
                                                      ? (IData)(vlSelf->__PVT__error__DOT__a_last_beats1)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__error__DOT__a_last_counter) 
                                                      - (IData)(1U))));
        }
        vlSelf->__PVT__error__DOT__a_last_counter = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = (0x3ffU & (
                                                   ((IData)(vlSelf->__PVT__error__DOT__idle_1) 
                                                    & (IData)(vlSelf->__PVT___bar_auto_out_0_d_ready))
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__error__DOT__winner_1) 
                                                     & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x1ffffffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__error__DOT__beatsLeft) 
                                                    - 
                                                    ((IData)(vlSelf->__PVT___bar_auto_out_0_d_ready) 
                                                     & (IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid)))));
        if ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))) {
            vlSelf->__PVT__error__DOT__state_1 = vlSelf->__PVT__error__DOT__winner_1;
        }
        vlSelf->__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        if (__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) {
            vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__bar__DOT__r_counter = (7U & ((IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__a_first)
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                    >> 2U)))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__bar__DOT__r_counter) 
                                                  - (IData)(1U))));
            __Vdly__bar__DOT__stall_counter = (7U & 
                                               ((IData)(vlSelf->__PVT__bar__DOT__stall_first)
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                   >> 2U)))
                                                 : 
                                                ((IData)(vlSelf->__PVT__bar__DOT__stall_counter) 
                                                 - (IData)(1U))));
        }
        if (__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) {
            __Vdly__bar__DOT__r_counter_3 = (7U & ((IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__d_first)
                                                    ? (IData)(vlSelf->__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__bar__DOT__r_counter_3) 
                                                    - (IData)(1U))));
        }
        vlSelf->__PVT__bar__DOT__flight = __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    }
    vlSelf->__PVT__bar__DOT__r_counter = __Vdly__bar__DOT__r_counter;
    vlSelf->__PVT__bar__DOT__r_counter_3 = __Vdly__bar__DOT__r_counter_3;
    vlSelf->__PVT__bar__DOT__stall_counter = __Vdly__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSelf->__PVT___bar_auto_out_0_d_ready) 
           & (IData)(vlSelf->__PVT__error__DOT__nodeIn_d_valid));
    if (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter)))))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24;
        vlSelf->__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19;
        vlSelf->__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelf->__PVT__error__DOT__monitor__DOT__denied 
            = vlSelf->__PVT__error__DOT__muxState_1;
    }
    if (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__error__DOT__monitor__DOT__address[0U] 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address;
        vlSelf->__PVT__error__DOT__monitor__DOT__address[1U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__address[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__address[3U] = 0U;
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready) 
           & (IData)(vlSelf->auto_node_in_in_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__monitor__DOT__d_first_counter = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] = 0U;
        __Vdly__error__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__watchdog = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] = 0U;
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] = 0U;
        __Vdly__error__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vdly__error__DOT__monitor__DOT__a_first_counter = 0U;
        __Vdly__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__watchdog = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 = 0ULL;
        __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vdly__bar__DOT__monitor__DOT__a_first_counter = 0U;
        __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[0U] 
            = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
               << 3U);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[1U] 
            = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
               >> 0x1dU);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[2U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[3U] = 0U;
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[4U] = 0U;
        __Vtemp_h6f0d4cc8__0[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__0[1U] = 0U;
        __Vtemp_h6f0d4cc8__0[2U] = 0U;
        __Vtemp_h6f0d4cc8__0[3U] = 0U;
        __Vtemp_h6f0d4cc8__0[4U] = 0U;
        __Vtemp_h814bf4f2__0[0U] = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
                                    << 2U);
        __Vtemp_h814bf4f2__0[1U] = ((IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16) 
                                    >> 0x1eU);
        __Vtemp_h814bf4f2__0[2U] = 0U;
        __Vtemp_h814bf4f2__0[3U] = 0U;
        __Vtemp_h814bf4f2__0[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h1ec71af6__0, __Vtemp_h6f0d4cc8__0, __Vtemp_h814bf4f2__0);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_h1ec71af6__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_h1ec71af6__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_h1ec71af6__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_h1ec71af6__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_h1ec71af6__0[4U]);
        if (vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0) {
            __Vtemp_he0cf7f05__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                                              << 1U));
            __Vtemp_hece19c8e__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                              << 1U));
        } else {
            __Vtemp_he0cf7f05__0[0U] = 0U;
            __Vtemp_hece19c8e__0[0U] = 0U;
        }
        __Vtemp_he0cf7f05__0[1U] = 0U;
        __Vtemp_he0cf7f05__0[2U] = 0U;
        __Vtemp_he0cf7f05__0[3U] = 0U;
        __Vtemp_he0cf7f05__0[4U] = 0U;
        __Vtemp_hd643db39__0[0U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                                    << 2U);
        __Vtemp_hd643db39__0[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                                    >> 0x1eU);
        __Vtemp_hd643db39__0[2U] = 0U;
        __Vtemp_hd643db39__0[3U] = 0U;
        __Vtemp_hd643db39__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h0dcb169b__0, __Vtemp_he0cf7f05__0, __Vtemp_hd643db39__0);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_h0dcb169b__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_h0dcb169b__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_h0dcb169b__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_h0dcb169b__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_h0dcb169b__0[4U]);
        __Vtemp_hab69a0d4__0[0U] = 0xffU;
        __Vtemp_hab69a0d4__0[1U] = 0U;
        __Vtemp_hab69a0d4__0[2U] = 0U;
        __Vtemp_hab69a0d4__0[3U] = 0U;
        __Vtemp_hab69a0d4__0[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hedb9a1f6__0, __Vtemp_hab69a0d4__0, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_hedb9a1f6__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_hedb9a1f6__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_hedb9a1f6__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_hedb9a1f6__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hedb9a1f6__0[4U]);
        __Vtemp_hece19c8e__0[1U] = 0U;
        __Vtemp_hece19c8e__0[2U] = 0U;
        __Vtemp_hece19c8e__0[3U] = 0U;
        __Vtemp_hece19c8e__0[4U] = 0U;
        __Vtemp_hbb4ee8f4__0[0U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                                    << 3U);
        __Vtemp_hbb4ee8f4__0[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                                    >> 0x1dU);
        __Vtemp_hbb4ee8f4__0[2U] = 0U;
        __Vtemp_hbb4ee8f4__0[3U] = 0U;
        __Vtemp_hbb4ee8f4__0[4U] = 0U;
        VL_SHIFTL_WWW(132,132,132, __Vtemp_h3700eba1__0, __Vtemp_hece19c8e__0, __Vtemp_hbb4ee8f4__0);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_h3700eba1__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_h3700eba1__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_h3700eba1__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_h3700eba1__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (0xfU & __Vtemp_h3700eba1__0[4U]);
        __Vtemp_hab69a0d4__1[0U] = 0xffU;
        __Vtemp_hab69a0d4__1[1U] = 0U;
        __Vtemp_hab69a0d4__1[2U] = 0U;
        __Vtemp_hab69a0d4__1[3U] = 0U;
        __Vtemp_hab69a0d4__1[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h131918fc__0, __Vtemp_hab69a0d4__1, vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_h131918fc__0[0U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_h131918fc__0[1U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_h131918fc__0[2U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_h131918fc__0[3U];
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_h131918fc__0[4U]);
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24)));
        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24)));
        if (__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter))
                              ? ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter) 
                                 - (IData)(1U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))
                                                    ? 
                                                   (~ 
                                                    (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                                     >> 2U))
                                                    : 0U)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
                = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
                = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__error__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__error__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                               ? ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                   ? ((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                   : 0U) : 0U)) & (~ 
                                                   ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                                     ? 
                                                    ((0xfU 
                                                      >= (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
                                                      : 0U)
                                                     : 0U))));
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                    ? (((QData)((IData)(
                                                        vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U]
                    : 0U)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U]
                    : 0U)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U]
                    : 0U)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = ((vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
                | ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U]
                    : 0U)) & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1) 
                | (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                ? 0U : ((IData)(1U) + vlSelf->__PVT__error__DOT__monitor__DOT__watchdog));
        __Vdly__error__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? ((0xfU >= (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
                          ? ((IData)(1U) << (IData)(vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16))
                          : 0U) : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = (vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
               & (~ ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U]
                      : 0U)));
        if (vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = ((0x1aU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))
                    ? (0x7ffffffU & ((IData)(0xfffU) 
                                     << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)))
                    : 0U);
            __Vdly__error__DOT__monitor__DOT__a_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter))
                              ? ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter) 
                                 - (IData)(1U)) : (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                                     >> 2U)))));
            __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
                = (0x3ffU & ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                  ? 0U : (~ (vlSelf->__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                             >> 2U)))
                              : ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSelf->auto_node_in_in_d_bits_source) 
               << 2U);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSelf->auto_node_in_in_d_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_h6f0d4cc8__1[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__1[1U] = 0U;
        __Vtemp_h6f0d4cc8__1[2U] = 0U;
        __Vtemp_h6f0d4cc8__1[3U] = 0U;
        __Vtemp_h6f0d4cc8__1[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hee7b10c9__0, __Vtemp_h6f0d4cc8__1, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_hee7b10c9__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_hee7b10c9__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_hee7b10c9__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_hee7b10c9__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hee7b10c9__0[4U]);
        if (vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0) {
            __Vtemp_h04a11209__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                                              << 1U));
            __Vtemp_h2c36fb9a__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                              << 1U));
        } else {
            __Vtemp_h04a11209__0[0U] = 0U;
            __Vtemp_h2c36fb9a__0[0U] = 0U;
        }
        __Vtemp_h04a11209__0[1U] = 0U;
        __Vtemp_h04a11209__0[2U] = 0U;
        __Vtemp_h04a11209__0[3U] = 0U;
        __Vtemp_h04a11209__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h87029e3d__0, __Vtemp_h04a11209__0, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_h87029e3d__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_h87029e3d__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_h87029e3d__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_h87029e3d__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_h87029e3d__0[4U]);
        __Vtemp_h6f0d4cc8__2[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__2[1U] = 0U;
        __Vtemp_h6f0d4cc8__2[2U] = 0U;
        __Vtemp_h6f0d4cc8__2[3U] = 0U;
        __Vtemp_h6f0d4cc8__2[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hcb4b53f9__0, __Vtemp_h6f0d4cc8__2, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_hcb4b53f9__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_hcb4b53f9__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_hcb4b53f9__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_hcb4b53f9__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hcb4b53f9__0[4U]);
        __Vtemp_h2c36fb9a__0[1U] = 0U;
        __Vtemp_h2c36fb9a__0[2U] = 0U;
        __Vtemp_h2c36fb9a__0[3U] = 0U;
        __Vtemp_h2c36fb9a__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_hb1f1a0ad__0, __Vtemp_h2c36fb9a__0, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_hb1f1a0ad__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_hb1f1a0ad__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_hb1f1a0ad__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_hb1f1a0ad__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_hb1f1a0ad__0[4U]);
        __Vtemp_h6f0d4cc8__3[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__3[1U] = 0U;
        __Vtemp_h6f0d4cc8__3[2U] = 0U;
        __Vtemp_h6f0d4cc8__3[3U] = 0U;
        __Vtemp_h6f0d4cc8__3[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h5911eb2f__0, __Vtemp_h6f0d4cc8__3, vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_h5911eb2f__0[0U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_h5911eb2f__0[1U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_h5911eb2f__0[2U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_h5911eb2f__0[3U];
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_h5911eb2f__0[4U]);
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelf->auto_node_in_in_d_bits_opcode)));
        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelf->auto_node_in_in_d_bits_opcode)));
        if (__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->auto_node_in_in_d_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((1U 
                                                & (IData)(vlSelf->auto_node_in_in_d_bits_opcode))
                                                ? (~ 
                                                   ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                    >> 2U))
                                                : 0U)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->auto_node_in_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->auto_node_in_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__bar__DOT__monitor__DOT__inflight = 
            (0xffffU & (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight) 
                         | ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0)
                             ? ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                 ? ((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                 : 0U) : 0U)) & (~ 
                                                 ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                   ? 
                                                  ((0xfU 
                                                    >= (IData)(vlSelf->auto_node_in_in_d_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->auto_node_in_in_d_bits_source))
                                                    : 0U)
                                                   : 0U))));
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__watchdog = 
            (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
              | (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
              ? 0U : ((IData)(1U) + vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog));
        __Vdly__bar__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? ((0xfU >= (IData)(vlSelf->auto_node_in_in_d_bits_source))
                          ? ((IData)(1U) << (IData)(vlSelf->auto_node_in_in_d_bits_source))
                          : 0U) : 0U)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? (((QData)((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                      : 0ULL)));
        if (vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = ((0xbU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))
                    ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)))
                    : 0U);
            __Vdly__bar__DOT__monitor__DOT__a_first_counter 
                = (7U & ((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter))
                          ? ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                ? 0U
                                                : (~ 
                                                   ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                    >> 2U)))));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter)))))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSelf->auto_node_in_in_d_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSelf->auto_node_in_in_d_bits_param;
        vlSelf->__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSelf->auto_node_in_in_d_bits_size;
        vlSelf->__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSelf->auto_node_in_in_d_bits_source;
        vlSelf->__PVT__bar__DOT__monitor__DOT__sink 
            = vlSelf->auto_node_in_in_d_bits_sink;
        vlSelf->__PVT__bar__DOT__monitor__DOT__denied 
            = vlSelf->auto_node_in_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__error__DOT__da_first = (0U == (IData)(vlSelf->__PVT__error__DOT__r_counter));
    vlSelf->__PVT__error__DOT__idle_1 = (0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft));
    vlSelf->error__DOT____VdfgTmp_hc0029b36__0 = ((0U 
                                                   == (IData)(vlSelf->__PVT__error__DOT__beatsLeft)) 
                                                  | (IData)(vlSelf->__PVT__error__DOT__state_1));
    vlSelf->__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter));
    vlSelf->__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight 
        = __Vdly__error__DOT__monitor__DOT__inflight;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U];
    vlSelf->__PVT__error__DOT__monitor__DOT__watchdog 
        = __Vdly__error__DOT__monitor__DOT__watchdog;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_1 
        = __Vdly__error__DOT__monitor__DOT__inflight_1;
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlSelf->__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlSelf->__PVT__error__DOT__monitor__DOT__watchdog_1 
        = __Vdly__error__DOT__monitor__DOT__watchdog_1;
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter;
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight 
        = __Vdly__bar__DOT__monitor__DOT__inflight;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog 
        = __Vdly__bar__DOT__monitor__DOT__watchdog;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__watchdog_1 
        = __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1\n"); );
    // Body
    vlSelf->__PVT__error__DOT__da_bits_opcode = ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                                  ? 
                                                 (7U 
                                                  & (0x911240U 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                                  : 0U);
    vlSelf->__PVT__error__DOT__a_last_beats1 = ((4U 
                                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                 ? 0U
                                                 : 
                                                (0x3ffU 
                                                 & (~ 
                                                    (0x1ffffffU 
                                                     & (((IData)(0xfffU) 
                                                         << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
                                                        >> 2U)))));
    vlSelf->__PVT__error__DOT__r_beats1 = ((1U & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode))
                                            ? (0x3ffU 
                                               & (~ 
                                                  (0x1ffffffU 
                                                   & (((IData)(0xfffU) 
                                                       << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
                                                      >> 2U))))
                                            : 0U);
    vlSelf->__PVT__error__DOT__a_last = ((1U == (IData)(vlSelf->__PVT__error__DOT__a_last_counter)) 
                                         | (0U == (IData)(vlSelf->__PVT__error__DOT__a_last_beats1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0\n"); );
    // Init
    CData/*0:0*/ bar__DOT____VdfgTmp_h84f1d1ee__0;
    bar__DOT____VdfgTmp_h84f1d1ee__0 = 0;
    // Body
    vlSelf->__PVT__bar__DOT__bypass = ((IData)(vlSelf->__PVT__bar__DOT__in_reset)
                                        ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass)
                                        : (IData)(vlSelf->__PVT__bar__DOT__bypass_reg));
    vlSelf->__PVT__bar__DOT__stall = (((IData)(vlSelf->__PVT__bar__DOT__bypass) 
                                       != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass)) 
                                      & (0U == (IData)(vlSelf->__PVT__bar__DOT__stall_counter)));
    bar__DOT____VdfgTmp_h84f1d1ee__0 = ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                        & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelf->auto_node_out_out_a_valid = ((~ (IData)(vlSelf->__PVT__bar__DOT__bypass)) 
                                         & (IData)(bar__DOT____VdfgTmp_h84f1d1ee__0));
    vlSelf->__PVT___bar_auto_out_0_a_valid = ((IData)(bar__DOT____VdfgTmp_h84f1d1ee__0) 
                                              & (IData)(vlSelf->__PVT__bar__DOT__bypass));
    vlSelf->__PVT__error__DOT__winner_1 = ((IData)(vlSelf->__PVT___bar_auto_out_0_a_valid) 
                                           & ((IData)(vlSelf->__PVT__error__DOT__a_last) 
                                              & (IData)(vlSelf->__PVT__error__DOT__idle)));
    vlSelf->__PVT__error__DOT__muxState_1 = ((0U == (IData)(vlSelf->__PVT__error__DOT__beatsLeft))
                                              ? (IData)(vlSelf->__PVT__error__DOT__winner_1)
                                              : (IData)(vlSelf->__PVT__error__DOT__state_1));
    vlSelf->__PVT__error__DOT__nodeIn_d_valid = ((IData)(vlSelf->error__DOT____VdfgTmp_hc0029b36__0) 
                                                 & (IData)(vlSelf->__PVT__error__DOT__winner_1));
    if (vlSelf->__PVT__error__DOT__muxState_1) {
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24 
            = vlSelf->__PVT__error__DOT__da_bits_opcode;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3 
            = (1U & (IData)(vlSelf->__PVT__error__DOT__da_bits_opcode));
    } else {
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_19 = 0U;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16 = 0U;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24 = 0U;
        vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3 = 0U;
    }
    if (vlSelf->__PVT__bar__DOT__bypass) {
        vlSelf->auto_node_in_in_d_bits_param = 0U;
        vlSelf->auto_node_in_in_d_bits_sink = 0U;
        if (vlSelf->__PVT__error__DOT__muxState_1) {
            vlSelf->auto_node_in_in_d_bits_size = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
            vlSelf->auto_node_in_in_d_bits_denied = 1U;
        } else {
            vlSelf->auto_node_in_in_d_bits_size = 0U;
            vlSelf->auto_node_in_in_d_bits_denied = 0U;
        }
        vlSelf->auto_node_in_in_d_valid = vlSelf->__PVT__error__DOT__nodeIn_d_valid;
        vlSelf->auto_node_in_in_d_bits_corrupt = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_3;
        vlSelf->auto_node_in_in_d_bits_source = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelf->auto_node_in_in_d_bits_opcode = vlSelf->__PVT__error__DOT___nodeIn_d_bits_T_24;
    } else {
        vlSelf->auto_node_in_in_d_bits_param = (3U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelf->auto_node_in_in_d_bits_sink = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_sink;
        vlSelf->auto_node_in_in_d_bits_size = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_size;
        vlSelf->auto_node_in_in_d_bits_denied = (1U 
                                                 & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                    >> 2U));
        vlSelf->auto_node_in_in_d_valid = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid;
        vlSelf->auto_node_in_in_d_bits_corrupt = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt;
        vlSelf->auto_node_in_in_d_bits_source = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source;
        vlSelf->auto_node_in_in_d_bits_opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_opcode;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1\n"); );
    // Body
    vlSelf->auto_node_out_out_d_ready = ((~ (IData)(vlSelf->__PVT__bar__DOT__bypass)) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready));
    vlSelf->__PVT___bar_auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                              & (IData)(vlSelf->__PVT__bar__DOT__bypass));
    vlSelf->__PVT__error__DOT__da_ready = ((IData)(vlSelf->__PVT___bar_auto_out_0_d_ready) 
                                           & (IData)(vlSelf->error__DOT____VdfgTmp_hc0029b36__0));
    vlSelf->__PVT__error__DOT__nodeIn_a_ready = (1U 
                                                 & ((~ (IData)(vlSelf->__PVT__error__DOT__a_last)) 
                                                    | ((IData)(vlSelf->__PVT__error__DOT__da_ready) 
                                                       & (((1U 
                                                            == (IData)(vlSelf->__PVT__error__DOT__r_counter)) 
                                                           | (0U 
                                                              == (IData)(vlSelf->__PVT__error__DOT__r_beats1))) 
                                                          & (IData)(vlSelf->__PVT__error__DOT__idle)))));
    vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->__PVT__error__DOT__nodeIn_a_ready) 
           & (IData)(vlSelf->__PVT___bar_auto_out_0_a_valid));
    vlSelf->auto_node_in_in_a_ready = (1U & ((~ (IData)(vlSelf->__PVT__bar__DOT__stall)) 
                                             & ((IData)(vlSelf->__PVT__bar__DOT__bypass)
                                                 ? (IData)(vlSelf->__PVT__error__DOT__nodeIn_a_ready)
                                                 : 
                                                (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))));
    vlSelf->__PVT__error__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelf->__PVT__error__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelf->__PVT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->auto_node_in_in_a_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelf->__PVT__bar__DOT__monitor__DOT___GEN_0 = 
        ((IData)(vlSelf->__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
         & (0U == (IData)(vlSelf->__PVT__bar__DOT__monitor__DOT__a_first_counter_1)));
}
