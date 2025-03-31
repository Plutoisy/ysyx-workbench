// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0\n"); );
    // Body
    vlSelf->auto_anon_out_1_a_valid = ((~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                           >> 0x1eU)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid));
    vlSelf->auto_anon_out_0_a_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
                                       & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                          >> 0x1eU));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__1\n"); );
    // Init
    CData/*1:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    // Body
    vlSelf->__PVT__readys_valid = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelf->__PVT__readys_mask)) 
                                 & (IData)(vlSelf->__PVT__readys_valid));
    vlSelf->__PVT__readys_unready = (((4U & ((IData)(__PVT___readys_filter_T_1) 
                                             << 1U)) 
                                      | (((2U & ((IData)(__PVT___readys_filter_T_1) 
                                                 << 1U)) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid)) 
                                         | (IData)(__PVT___readys_filter_T_1))) 
                                     | ((IData)(vlSelf->__PVT__readys_mask) 
                                        << 2U));
    vlSelf->__PVT__readys_readys = (3U & (~ (((IData)(vlSelf->__PVT__readys_unready) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__readys_unready))));
    vlSelf->__PVT__winner_1 = (((IData)(vlSelf->__PVT__readys_readys) 
                                >> 1U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid));
    vlSelf->__PVT__winner_0 = ((IData)(vlSelf->__PVT__readys_readys) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid));
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->auto_anon_in_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid) 
                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid));
        vlSelf->__PVT__muxState_1 = vlSelf->__PVT__winner_1;
        vlSelf->__PVT__muxState_0 = vlSelf->__PVT__winner_0;
    } else {
        vlSelf->auto_anon_in_d_valid = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid) 
                                         & (IData)(vlSelf->__PVT__state_0)) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid) 
                                           & (IData)(vlSelf->__PVT__state_1)));
        vlSelf->__PVT__muxState_1 = vlSelf->__PVT__state_1;
        vlSelf->__PVT__muxState_0 = vlSelf->__PVT__state_0;
    }
    if (vlSelf->__PVT__muxState_0) {
        vlSelf->auto_anon_in_d_bits_param = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_param;
        vlSelf->auto_anon_in_d_bits_data = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                             ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    } else {
        vlSelf->auto_anon_in_d_bits_param = 0U;
        vlSelf->auto_anon_in_d_bits_data = 0U;
    }
    vlSelf->auto_anon_in_d_bits_sink = (((IData)(vlSelf->__PVT__muxState_0)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_sink)
                                          : 0U) | ((IData)(vlSelf->__PVT__muxState_1) 
                                                   << 5U));
    vlSelf->auto_anon_in_d_bits_denied = (((IData)(vlSelf->__PVT__muxState_0) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_denied)) 
                                          | ((IData)(vlSelf->__PVT__muxState_1) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_denied)));
    vlSelf->auto_anon_in_d_bits_corrupt = (((IData)(vlSelf->__PVT__muxState_0) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_corrupt)) 
                                           | ((IData)(vlSelf->__PVT__muxState_1) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_corrupt)));
    vlSelf->auto_anon_in_d_bits_size = (((IData)(vlSelf->__PVT__muxState_0)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_size)
                                          : 0U) | ((IData)(vlSelf->__PVT__muxState_1)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_size)
                                                    : 0U));
    vlSelf->auto_anon_in_d_bits_source = (((IData)(vlSelf->__PVT__muxState_0)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_source)
                                            : 0U) | 
                                          ((IData)(vlSelf->__PVT__muxState_1)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_source)
                                            : 0U));
    vlSelf->auto_anon_in_d_bits_opcode = (((IData)(vlSelf->__PVT__muxState_0)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_opcode)
                                            : 0U) | 
                                          ((IData)(vlSelf->__PVT__muxState_1)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_opcode)
                                            : 0U));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__2(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__2\n"); );
    // Body
    vlSelf->auto_anon_out_1_d_ready = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready) 
                                       & ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                           ? ((IData)(vlSelf->__PVT__readys_readys) 
                                              >> 1U)
                                           : (IData)(vlSelf->__PVT__state_1)));
    vlSelf->auto_anon_out_0_d_ready = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready) 
                                       & ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                           ? (IData)(vlSelf->__PVT__readys_readys)
                                           : (IData)(vlSelf->__PVT__state_0)));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__3(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__3\n"); );
    // Body
    vlSelf->auto_anon_in_a_ready = (1U & (((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                            >> 0x1eU) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_a_ready)) 
                                          | ((~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                 >> 0x1eU)) 
                                             & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.__PVT__a_q__DOT__full)))));
    vlSelf->__PVT__monitor__DOT___a_first_T_1 = ((IData)(vlSelf->auto_anon_in_a_ready) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid));
    vlSelf->__PVT__monitor__DOT___GEN_0 = ((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
                                           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__0\n"); );
    // Init
    SData/*11:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__beatsLeft;
    __Vdly__beatsLeft = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__monitor__DOT__inflight;
    __Vdly__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter_1;
    __Vdly__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__inflight_1 = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__a_first_counter_1;
    __Vdly__monitor__DOT__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__0;
    VlWide<5>/*159:0*/ __Vtemp_hf5bd5da7__0;
    VlWide<5>/*159:0*/ __Vtemp_h15a20413__0;
    VlWide<5>/*159:0*/ __Vtemp_hc6ee4c20__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__1;
    VlWide<5>/*159:0*/ __Vtemp_hb54532a8__0;
    VlWide<5>/*159:0*/ __Vtemp_h1a09fa52__0;
    VlWide<5>/*159:0*/ __Vtemp_h71cc8419__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__2;
    VlWide<5>/*159:0*/ __Vtemp_h8a8b9b84__0;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__winner_0)) 
                                 | (~ (IData)(vlSelf->__PVT__winner_1)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5154: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1: Assertion failed at Arbiter.scala:77\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5154, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5156: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5156, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid) 
                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_valid))) 
                                  | (IData)(vlSelf->__PVT__winner_0)) 
                                 | (IData)(vlSelf->__PVT__winner_1))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5160: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1: Assertion failed at Arbiter.scala:79\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5160, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5162: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5162, "");
    }
    __Vdly__monitor__DOT__watchdog_1 = vlSelf->__PVT__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = vlSelf->__PVT__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__inflight_1 = vlSelf->__PVT__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__watchdog = vlSelf->__PVT__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__inflight_sizes = vlSelf->__PVT__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__inflight_opcodes = vlSelf->__PVT__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight = vlSelf->__PVT__monitor__DOT__inflight;
    __Vdly__monitor__DOT__d_first_counter = vlSelf->__PVT__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__d_first_counter_2 = vlSelf->__PVT__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__d_first_counter_1 = vlSelf->__PVT__monitor__DOT__d_first_counter_1;
    __Vdly__beatsLeft = vlSelf->__PVT__beatsLeft;
    __Vdly__monitor__DOT__a_first_counter = vlSelf->__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelf->__PVT__monitor__DOT__a_first_counter_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = ((0xbU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)))
            : 0U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 
        (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                  & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 
        (3U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                      >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 
        (0U == ((0xffffeU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                             >> 0xcU)) | (1U & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                   >> 0xcU)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 
        ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
         & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
            & (3U == (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                      >> 0x1eU))) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
           & ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
              | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                 >> 0x1eU)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((3U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
            & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
               >> 0x1eU)) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (6U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (0U == (3U & ((IData)(vlSelf->auto_anon_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (4U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (0x20U < (IData)(vlSelf->auto_anon_in_d_bits_sink));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (2U == (IData)(vlSelf->auto_anon_in_d_bits_param));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (5U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (1U & ((~ (IData)(vlSelf->auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSelf->auto_anon_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (0U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (1U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (2U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((QData)((IData)(vlSelf->auto_anon_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSelf->auto_anon_in_d_valid) & 
           (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
           & (6U != (IData)(vlSelf->auto_anon_in_d_bits_opcode)));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelf->auto_anon_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((((IData)(vlSelf->auto_anon_in_d_valid) 
             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4493: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4493, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4495: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4495, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4499: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4499, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4501: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4501, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4505: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4505, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4507: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4507, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4511: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4511, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4513: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4513, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4517: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4517, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4519: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4519, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4523: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4523, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4525: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4525, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4529: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4529, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4531: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4531, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4535: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4535, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4537: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4537, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4541: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4541, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4543: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4543, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4547: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4547, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4549: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4549, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4553: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4553, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4555: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4555, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4559: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4559, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4561: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4561, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4565: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4565, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4567: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4567, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4571: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4571, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4573: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4573, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4577: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4577, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4579: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4579, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4583: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4583, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4585: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4585, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4589: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4589, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4591: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4591, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4595: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4595, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4597: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4597, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4601: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4601, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4603: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4603, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4607: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4607, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4609: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4609, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4613: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4613, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4615: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4615, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4619: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4619, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4621: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4621, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4625: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4625, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4627: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4627, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4631: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4631, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4633: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4633, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4637: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4637, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4639: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4639, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4643: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4643, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4645: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4645, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4649: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4649, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4651: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4651, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4655: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4655, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4657: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4657, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4661: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4661, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4663: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4663, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->auto_anon_in_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4667: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4667, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4669: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4669, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4673: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4673, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4675: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4675, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (0U != (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4679: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4679, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4681: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4681, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4685: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4685, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4687: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4687, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4691: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4691, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4693: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4693, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4697: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4697, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4699: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4699, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4703: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4703, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4705: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4705, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (3U == (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4709: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4709, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4711: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4711, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4715: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4715, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4717: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4717, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4721: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4721, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4723: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4723, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4727: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4727, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4729: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4729, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4733: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4733, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4735: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4735, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (3U == (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4739: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4739, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4741: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4741, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4745: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4745, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4747: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4747, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4751: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4751, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4753: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4753, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4757: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4757, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4759: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4759, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4763: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4763, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4765: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4765, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (0U != (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4769: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4769, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4771: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4771, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4775: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4775, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4777: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4777, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (0U != (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4781: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4781, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4783: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4783, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4787: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4787, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4789: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4789, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4793: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4793, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4795: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4795, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4799: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4799, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4801: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4801, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4805: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4805, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4807: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4807, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                        != vlSelf->__PVT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4811: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4811, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4813: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4813, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4817: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4817, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4819: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4819, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_param) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4823: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4823, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4825: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4825, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4829: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4829, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4831: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4831, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4835: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4835, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4837: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4837, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_sink) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4841: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4841, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4843: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4843, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_denied) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4847: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4847, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4849: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4849, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_41)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4854: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4854, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4856: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4856, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = ((0xfU >= (IData)(vlSelf->auto_anon_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->auto_anon_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                           | (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4861: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4861, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4863: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4863, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4869: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4869, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4871: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4871, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->auto_anon_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4875: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4875, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4877: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4877, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & (~ (((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4883: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4883, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4885: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4885, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4890: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4890, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4892: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4892, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer.auto_anon_out_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSelf->auto_anon_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready)) 
                           | (IData)(vlSelf->auto_anon_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4897: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4897, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4899: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4899, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4905: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4905, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4907: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4907, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 
        = ((0xfU >= (IData)(vlSelf->auto_anon_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->auto_anon_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_43))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4912: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4912, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4914: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4914, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4919: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4919, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4921: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4921, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4927: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4927, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4929: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4929, "");
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__state_1 = 0U;
        vlSelf->__PVT__state_0 = 0U;
        __Vdly__beatsLeft = 0U;
        vlSelf->__PVT__readys_mask = 3U;
    } else {
        if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
            vlSelf->__PVT__state_1 = vlSelf->__PVT__winner_1;
            vlSelf->__PVT__state_0 = vlSelf->__PVT__winner_0;
        }
        vlSelf->__PVT__unnamedblk1__DOT__latch = ((IData)(vlSelf->__PVT__idle) 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready));
        vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T_3 
            = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_size)));
        vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T 
            = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_size)));
        __Vdly__beatsLeft = (7U & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__latch)
                                    ? ((((IData)(vlSelf->__PVT__winner_0) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_opcode))
                                         ? (~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T) 
                                               >> 2U))
                                         : 0U) | (((IData)(vlSelf->__PVT__winner_1) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr.auto_in_d_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T_3) 
                                                    >> 2U))
                                                   : 0U))
                                    : ((IData)(vlSelf->__PVT__beatsLeft) 
                                       - ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready) 
                                          & (IData)(vlSelf->auto_anon_in_d_valid)))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT__latch) 
             & (0U != (IData)(vlSelf->__PVT__readys_valid)))) {
            vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T 
                = ((IData)(vlSelf->__PVT__readys_readys) 
                   & (IData)(vlSelf->__PVT__readys_valid));
            vlSelf->__PVT__readys_mask = ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                                          | (2U & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                                                   << 1U)));
        }
    }
    vlSelf->__PVT__beatsLeft = __Vdly__beatsLeft;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready) 
           & (IData)(vlSelf->auto_anon_in_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__monitor__DOT__d_first_counter = 0U;
        __Vdly__monitor__DOT__inflight = 0U;
        __Vdly__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__monitor__DOT__inflight_sizes = 0ULL;
        __Vdly__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__monitor__DOT__watchdog = 0U;
        __Vdly__monitor__DOT__inflight_1 = 0U;
        __Vdly__monitor__DOT__inflight_sizes_1 = 0ULL;
        __Vdly__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__monitor__DOT__watchdog_1 = 0U;
        __Vdly__monitor__DOT__a_first_counter = 0U;
        __Vdly__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[4U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[0U] 
            = ((IData)(vlSelf->auto_anon_in_d_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[1U] 
            = ((IData)(vlSelf->auto_anon_in_d_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[4U] = 0U;
        __Vtemp_h6f0d4cc8__0[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__0[1U] = 0U;
        __Vtemp_h6f0d4cc8__0[2U] = 0U;
        __Vtemp_h6f0d4cc8__0[3U] = 0U;
        __Vtemp_h6f0d4cc8__0[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hf5bd5da7__0, __Vtemp_h6f0d4cc8__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_hf5bd5da7__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_hf5bd5da7__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_hf5bd5da7__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_hf5bd5da7__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hf5bd5da7__0[4U]);
        if (vlSelf->__PVT__monitor__DOT___GEN_0) {
            __Vtemp_h15a20413__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                                              << 1U));
            __Vtemp_h1a09fa52__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                              << 1U));
        } else {
            __Vtemp_h15a20413__0[0U] = 0U;
            __Vtemp_h1a09fa52__0[0U] = 0U;
        }
        __Vtemp_h15a20413__0[1U] = 0U;
        __Vtemp_h15a20413__0[2U] = 0U;
        __Vtemp_h15a20413__0[3U] = 0U;
        __Vtemp_h15a20413__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_hc6ee4c20__0, __Vtemp_h15a20413__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_hc6ee4c20__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_hc6ee4c20__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_hc6ee4c20__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_hc6ee4c20__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_hc6ee4c20__0[4U]);
        __Vtemp_h6f0d4cc8__1[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__1[1U] = 0U;
        __Vtemp_h6f0d4cc8__1[2U] = 0U;
        __Vtemp_h6f0d4cc8__1[3U] = 0U;
        __Vtemp_h6f0d4cc8__1[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hb54532a8__0, __Vtemp_h6f0d4cc8__1, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_hb54532a8__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_hb54532a8__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_hb54532a8__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_hb54532a8__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hb54532a8__0[4U]);
        __Vtemp_h1a09fa52__0[1U] = 0U;
        __Vtemp_h1a09fa52__0[2U] = 0U;
        __Vtemp_h1a09fa52__0[3U] = 0U;
        __Vtemp_h1a09fa52__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h71cc8419__0, __Vtemp_h1a09fa52__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_h71cc8419__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_h71cc8419__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_h71cc8419__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_h71cc8419__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_h71cc8419__0[4U]);
        __Vtemp_h6f0d4cc8__2[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__2[1U] = 0U;
        __Vtemp_h6f0d4cc8__2[2U] = 0U;
        __Vtemp_h6f0d4cc8__2[3U] = 0U;
        __Vtemp_h6f0d4cc8__2[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h8a8b9b84__0, __Vtemp_h6f0d4cc8__2, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_h8a8b9b84__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_h8a8b9b84__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_h8a8b9b84__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_h8a8b9b84__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_h8a8b9b84__0[4U]);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelf->auto_anon_in_d_bits_opcode)));
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelf->auto_anon_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->auto_anon_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSelf->auto_anon_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__monitor__DOT__watchdog_1 = ((IData)(1U) 
                                                + vlSelf->__PVT__monitor__DOT__watchdog_1);
        }
        __Vdly__monitor__DOT__inflight = (0xffffU & 
                                          (((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                            | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_0)
                                                ? (
                                                   (0xfU 
                                                    >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                                    : 0U)
                                                : 0U)) 
                                           & (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                  ? 
                                                 ((0xfU 
                                                   >= (IData)(vlSelf->auto_anon_in_d_bits_source))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSelf->auto_anon_in_d_bits_source))
                                                   : 0U)
                                                  : 0U))));
        __Vdly__monitor__DOT__inflight_opcodes = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                                   | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_0)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                                       : 0ULL)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                                       : 0ULL)));
        __Vdly__monitor__DOT__inflight_sizes = ((vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                 | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_0)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                                     : 0ULL)) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__monitor__DOT__watchdog = (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
                                           | (IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                                           ? 0U : ((IData)(1U) 
                                                   + vlSelf->__PVT__monitor__DOT__watchdog));
        __Vdly__monitor__DOT__inflight_1 = ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                            & (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47)
                                                   ? 
                                                  ((0xfU 
                                                    >= (IData)(vlSelf->auto_anon_in_d_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->auto_anon_in_d_bits_source))
                                                    : 0U)
                                                   : 0U)));
        __Vdly__monitor__DOT__inflight_sizes_1 = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                                       : 0ULL)));
        if (vlSelf->__PVT__monitor__DOT___a_first_T_1) {
            vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = ((0xbU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))
                    ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)))
                    : 0U);
            __Vdly__monitor__DOT__a_first_counter = 
                (7U & ((0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))
                        ? ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
                           - (IData)(1U)) : ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                              ? 0U : 
                                             (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                 >> 2U)))));
            __Vdly__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSelf->auto_anon_in_d_bits_opcode;
        vlSelf->__PVT__monitor__DOT__param_1 = vlSelf->auto_anon_in_d_bits_param;
        vlSelf->__PVT__monitor__DOT__size_1 = vlSelf->auto_anon_in_d_bits_size;
        vlSelf->__PVT__monitor__DOT__source_1 = vlSelf->auto_anon_in_d_bits_source;
        vlSelf->__PVT__monitor__DOT__sink = vlSelf->auto_anon_in_d_bits_sink;
        vlSelf->__PVT__monitor__DOT__denied = vlSelf->auto_anon_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__idle = (0U == (IData)(vlSelf->__PVT__beatsLeft));
    vlSelf->__PVT__monitor__DOT__d_first_counter = __Vdly__monitor__DOT__d_first_counter;
    vlSelf->__PVT__monitor__DOT__inflight = __Vdly__monitor__DOT__inflight;
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = __Vdly__monitor__DOT__inflight_opcodes;
    vlSelf->__PVT__monitor__DOT__inflight_sizes = __Vdly__monitor__DOT__inflight_sizes;
    vlSelf->__PVT__monitor__DOT__watchdog = __Vdly__monitor__DOT__watchdog;
    vlSelf->__PVT__monitor__DOT__inflight_1 = __Vdly__monitor__DOT__inflight_1;
    vlSelf->__PVT__monitor__DOT__inflight_sizes_1 = __Vdly__monitor__DOT__inflight_sizes_1;
    vlSelf->__PVT__monitor__DOT__watchdog_1 = __Vdly__monitor__DOT__watchdog_1;
    vlSelf->__PVT__monitor__DOT__d_first_counter_1 
        = __Vdly__monitor__DOT__d_first_counter_1;
    vlSelf->__PVT__monitor__DOT__d_first_counter_2 
        = __Vdly__monitor__DOT__d_first_counter_2;
    vlSelf->__PVT__monitor__DOT__a_first_counter = __Vdly__monitor__DOT__a_first_counter;
    vlSelf->__PVT__monitor__DOT__a_first_counter_1 
        = __Vdly__monitor__DOT__a_first_counter_1;
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0\n"); );
    // Init
    SData/*11:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__beatsLeft;
    __Vdly__beatsLeft = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__d_first_counter = 0;
    SData/*15:0*/ __Vdly__monitor__DOT__inflight;
    __Vdly__monitor__DOT__inflight = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter_1;
    __Vdly__monitor__DOT__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__watchdog = 0;
    SData/*15:0*/ __Vdly__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__inflight_1 = 0;
    QData/*63:0*/ __Vdly__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter = 0;
    CData/*2:0*/ __Vdly__monitor__DOT__a_first_counter_1;
    __Vdly__monitor__DOT__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__0;
    VlWide<5>/*159:0*/ __Vtemp_hf5bd5da7__0;
    VlWide<5>/*159:0*/ __Vtemp_h16c3a37c__0;
    VlWide<5>/*159:0*/ __Vtemp_h09c5740d__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__1;
    VlWide<5>/*159:0*/ __Vtemp_hb54532a8__0;
    VlWide<5>/*159:0*/ __Vtemp_h041a3deb__0;
    VlWide<5>/*159:0*/ __Vtemp_hda50bc3e__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__2;
    VlWide<5>/*159:0*/ __Vtemp_h8a8b9b84__0;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((~ (IData)(vlSelf->__PVT__winner_0)) 
                                 | (~ (IData)(vlSelf->__PVT__winner_1)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5154: Assertion failed in %NysyxSoCFull.fpga.xbar_1: Assertion failed at Arbiter.scala:77\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5154, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5156: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5156, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((~ ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid) 
                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid))) 
                                  | (IData)(vlSelf->__PVT__winner_0)) 
                                 | (IData)(vlSelf->__PVT__winner_1))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5160: Assertion failed in %NysyxSoCFull.fpga.xbar_1: Assertion failed at Arbiter.scala:79\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5160, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5162: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5162, "");
    }
    __Vdly__monitor__DOT__watchdog_1 = vlSelf->__PVT__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = vlSelf->__PVT__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__inflight_1 = vlSelf->__PVT__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__watchdog = vlSelf->__PVT__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__inflight_sizes = vlSelf->__PVT__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__inflight_opcodes = vlSelf->__PVT__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight = vlSelf->__PVT__monitor__DOT__inflight;
    __Vdly__monitor__DOT__d_first_counter = vlSelf->__PVT__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__d_first_counter_2 = vlSelf->__PVT__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__d_first_counter_1 = vlSelf->__PVT__monitor__DOT__d_first_counter_1;
    __Vdly__beatsLeft = vlSelf->__PVT__beatsLeft;
    __Vdly__monitor__DOT__a_first_counter = vlSelf->__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelf->__PVT__monitor__DOT__a_first_counter_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = ((0xbU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))
            ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)))
            : 0U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 
        (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                  & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask 
        = ((8U & (((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                   << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                             << 2U) 
                                            & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
               << 2U) | ((((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                           | (1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
                          << 1U) | ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                    | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 
        (3U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                      >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 
        (0U == ((0xffffeU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                             >> 0xcU)) | (1U & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                   >> 0xcU)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 
        ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
         & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
            & (3U == (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                      >> 0x1eU))) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
           & ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
              | (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                 >> 0x1eU)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((3U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
            & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
               >> 0x1eU)) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (6U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (0U == (3U & ((IData)(vlSelf->auto_anon_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (4U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (0x20U < (IData)(vlSelf->auto_anon_in_d_bits_sink));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (2U == (IData)(vlSelf->auto_anon_in_d_bits_param));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (5U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (1U & ((~ (IData)(vlSelf->auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSelf->auto_anon_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (0U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (1U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (2U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((QData)((IData)(vlSelf->auto_anon_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSelf->auto_anon_in_d_valid) & 
           (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
           & (6U != (IData)(vlSelf->auto_anon_in_d_bits_opcode)));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelf->auto_anon_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((((IData)(vlSelf->auto_anon_in_d_valid) 
             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSelf->auto_anon_in_d_valid) & 
            (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4493: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4493, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4495: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4495, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4499: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4499, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4501: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4501, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4505: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4505, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4507: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4507, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4511: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4511, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4513: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4513, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4517: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4517, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4519: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4519, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4523: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4523, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4525: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4525, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4529: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4529, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4531: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4531, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4535: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4535, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4537: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4537, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4541: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4541, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4543: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4543, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4547: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4547, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4549: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4549, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4553: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4553, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4555: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4555, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4559: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4559, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4561: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4561, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4565: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4565, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4567: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4567, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4571: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4571, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4573: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4573, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4577: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4577, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4579: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4579, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4583: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4583, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4585: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4585, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4589: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4589, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4591: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4591, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4595: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4595, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4597: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4597, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4601: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4601, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4603: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4603, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4607: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4607, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4609: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4609, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4613: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4613, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4615: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4615, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4619: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4619, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4621: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4621, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4625: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4625, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4627: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4627, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4631: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4631, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4633: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4633, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4637: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4637, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4639: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4639, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4643: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4643, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4645: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4645, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4649: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4649, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4651: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4651, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4655: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4655, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4657: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4657, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4661: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4661, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4663: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4663, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->auto_anon_in_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSelf->auto_anon_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4667: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4667, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4669: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4669, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4673: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4673, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4675: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4675, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (0U != (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4679: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4679, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4681: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4681, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4685: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4685, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4687: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4687, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4691: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4691, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4693: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4693, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4697: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4697, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4699: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4699, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4703: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4703, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4705: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4705, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (3U == (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4709: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4709, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4711: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4711, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4715: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4715, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4717: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4717, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4721: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4721, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4723: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4723, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4727: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4727, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4729: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4729, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4733: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4733, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4735: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4735, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (3U == (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4739: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4739, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4741: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4741, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4745: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4745, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4747: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4747, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4751: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4751, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4753: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4753, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4757: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4757, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4759: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4759, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4763: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4763, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4765: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4765, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (0U != (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4769: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4769, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4771: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4771, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4775: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4775, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4777: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4777, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (0U != (IData)(vlSelf->auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4781: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4781, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4783: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4783, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (IData)(vlSelf->auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4787: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4787, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4789: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4789, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4793: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4793, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4795: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4795, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4799: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4799, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4801: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4801, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4805: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4805, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4807: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4807, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                        != vlSelf->__PVT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4811: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4811, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4813: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4813, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4817: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4817, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4819: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4819, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_param) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4823: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4823, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4825: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4825, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4829: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4829, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4831: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4831, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4835: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4835, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4837: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4837, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_sink) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4841: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4841, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4843: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4843, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_denied) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4847: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4847, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4849: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4849, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_41)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4854: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4854, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4856: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4856, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = ((0xfU >= (IData)(vlSelf->auto_anon_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->auto_anon_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                           | (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4861: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4861, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4863: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4863, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4869: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4869, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4871: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4871, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->auto_anon_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4875: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4875, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4877: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4877, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & (~ (((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->auto_anon_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4883: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4883, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4885: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4885, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4890: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4890, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4892: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4892, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSelf->auto_anon_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->auto_anon_in_d_bits_opcode))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready)) 
                           | (IData)(vlSelf->auto_anon_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4897: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4897, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4899: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4899, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4905: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4905, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4907: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4907, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 
        = ((0xfU >= (IData)(vlSelf->auto_anon_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->auto_anon_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_43))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4912: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4912, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4914: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4914, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                     & ((IData)(vlSelf->auto_anon_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4919: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4919, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4921: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4921, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4927: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:11)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4927, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:4929: Assertion failed in %NysyxSoCFull.fpga.xbar_1.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 4929, "");
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__state_1 = 0U;
        vlSelf->__PVT__state_0 = 0U;
        __Vdly__beatsLeft = 0U;
        vlSelf->__PVT__readys_mask = 3U;
    } else {
        if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
            vlSelf->__PVT__state_1 = vlSelf->__PVT__winner_1;
            vlSelf->__PVT__state_0 = vlSelf->__PVT__winner_0;
        }
        vlSelf->__PVT__unnamedblk1__DOT__latch = ((IData)(vlSelf->__PVT__idle) 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready));
        vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T_3 
            = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_size)));
        vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T 
            = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_size)));
        __Vdly__beatsLeft = (7U & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__latch)
                                    ? ((((IData)(vlSelf->__PVT__winner_0) 
                                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_opcode))
                                         ? (~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T) 
                                               >> 2U))
                                         : 0U) | (((IData)(vlSelf->__PVT__winner_1) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_opcode))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->__PVT__unnamedblk1__DOT___beatsDO_decode_T_3) 
                                                    >> 2U))
                                                   : 0U))
                                    : ((IData)(vlSelf->__PVT__beatsLeft) 
                                       - ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready) 
                                          & (IData)(vlSelf->auto_anon_in_d_valid)))));
        if (((IData)(vlSelf->__PVT__unnamedblk1__DOT__latch) 
             & (0U != (IData)(vlSelf->__PVT__readys_valid)))) {
            vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T 
                = ((IData)(vlSelf->__PVT__readys_readys) 
                   & (IData)(vlSelf->__PVT__readys_valid));
            vlSelf->__PVT__readys_mask = ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                                          | (2U & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___readys_mask_T) 
                                                   << 1U)));
        }
    }
    vlSelf->__PVT__beatsLeft = __Vdly__beatsLeft;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready) 
           & (IData)(vlSelf->auto_anon_in_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__monitor__DOT__d_first_counter = 0U;
        __Vdly__monitor__DOT__inflight = 0U;
        __Vdly__monitor__DOT__inflight_opcodes = 0ULL;
        __Vdly__monitor__DOT__inflight_sizes = 0ULL;
        __Vdly__monitor__DOT__d_first_counter_1 = 0U;
        __Vdly__monitor__DOT__watchdog = 0U;
        __Vdly__monitor__DOT__inflight_1 = 0U;
        __Vdly__monitor__DOT__inflight_sizes_1 = 0ULL;
        __Vdly__monitor__DOT__d_first_counter_2 = 0U;
        __Vdly__monitor__DOT__watchdog_1 = 0U;
        __Vdly__monitor__DOT__a_first_counter = 0U;
        __Vdly__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44[4U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[0U] 
            = ((IData)(vlSelf->auto_anon_in_d_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[1U] 
            = ((IData)(vlSelf->auto_anon_in_d_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[4U] = 0U;
        __Vtemp_h6f0d4cc8__0[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__0[1U] = 0U;
        __Vtemp_h6f0d4cc8__0[2U] = 0U;
        __Vtemp_h6f0d4cc8__0[3U] = 0U;
        __Vtemp_h6f0d4cc8__0[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hf5bd5da7__0, __Vtemp_h6f0d4cc8__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_hf5bd5da7__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_hf5bd5da7__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_hf5bd5da7__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_hf5bd5da7__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hf5bd5da7__0[4U]);
        if (vlSelf->__PVT__monitor__DOT___GEN_0) {
            __Vtemp_h16c3a37c__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                                              << 1U));
            __Vtemp_h041a3deb__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                              << 1U));
        } else {
            __Vtemp_h16c3a37c__0[0U] = 0U;
            __Vtemp_h041a3deb__0[0U] = 0U;
        }
        __Vtemp_h16c3a37c__0[1U] = 0U;
        __Vtemp_h16c3a37c__0[2U] = 0U;
        __Vtemp_h16c3a37c__0[3U] = 0U;
        __Vtemp_h16c3a37c__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h09c5740d__0, __Vtemp_h16c3a37c__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_h09c5740d__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_h09c5740d__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_h09c5740d__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_h09c5740d__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_h09c5740d__0[4U]);
        __Vtemp_h6f0d4cc8__1[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__1[1U] = 0U;
        __Vtemp_h6f0d4cc8__1[2U] = 0U;
        __Vtemp_h6f0d4cc8__1[3U] = 0U;
        __Vtemp_h6f0d4cc8__1[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hb54532a8__0, __Vtemp_h6f0d4cc8__1, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_hb54532a8__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_hb54532a8__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_hb54532a8__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_hb54532a8__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hb54532a8__0[4U]);
        __Vtemp_h041a3deb__0[1U] = 0U;
        __Vtemp_h041a3deb__0[2U] = 0U;
        __Vtemp_h041a3deb__0[3U] = 0U;
        __Vtemp_h041a3deb__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_hda50bc3e__0, __Vtemp_h041a3deb__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_44);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_hda50bc3e__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_hda50bc3e__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_hda50bc3e__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_hda50bc3e__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_hda50bc3e__0[4U]);
        __Vtemp_h6f0d4cc8__2[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__2[1U] = 0U;
        __Vtemp_h6f0d4cc8__2[2U] = 0U;
        __Vtemp_h6f0d4cc8__2[3U] = 0U;
        __Vtemp_h6f0d4cc8__2[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h8a8b9b84__0, __Vtemp_h6f0d4cc8__2, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_h8a8b9b84__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_h8a8b9b84__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_h8a8b9b84__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_h8a8b9b84__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_h8a8b9b84__0[4U]);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelf->auto_anon_in_d_bits_opcode)));
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelf->auto_anon_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->auto_anon_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSelf->auto_anon_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__monitor__DOT__watchdog_1 = ((IData)(1U) 
                                                + vlSelf->__PVT__monitor__DOT__watchdog_1);
        }
        __Vdly__monitor__DOT__inflight = (0xffffU & 
                                          (((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                                            | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_0)
                                                ? (
                                                   (0xfU 
                                                    >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                                    : 0U)
                                                : 0U)) 
                                           & (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                  ? 
                                                 ((0xfU 
                                                   >= (IData)(vlSelf->auto_anon_in_d_bits_source))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSelf->auto_anon_in_d_bits_source))
                                                   : 0U)
                                                  : 0U))));
        __Vdly__monitor__DOT__inflight_opcodes = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                                   | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_0)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                                       : 0ULL)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                                       : 0ULL)));
        __Vdly__monitor__DOT__inflight_sizes = ((vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                 | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_0)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                                     : 0ULL)) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_45)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__monitor__DOT__watchdog = (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
                                           | (IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                                           ? 0U : ((IData)(1U) 
                                                   + vlSelf->__PVT__monitor__DOT__watchdog));
        __Vdly__monitor__DOT__inflight_1 = ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                                            & (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47)
                                                   ? 
                                                  ((0xfU 
                                                    >= (IData)(vlSelf->auto_anon_in_d_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->auto_anon_in_d_bits_source))
                                                    : 0U)
                                                   : 0U)));
        __Vdly__monitor__DOT__inflight_sizes_1 = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                                       : 0ULL)));
        if (vlSelf->__PVT__monitor__DOT___a_first_T_1) {
            vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = ((0xbU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))
                    ? (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)))
                    : 0U);
            __Vdly__monitor__DOT__a_first_counter = 
                (7U & ((0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))
                        ? ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter) 
                           - (IData)(1U)) : ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                              ? 0U : 
                                             (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                 >> 2U)))));
            __Vdly__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSelf->auto_anon_in_d_bits_opcode;
        vlSelf->__PVT__monitor__DOT__param_1 = vlSelf->auto_anon_in_d_bits_param;
        vlSelf->__PVT__monitor__DOT__size_1 = vlSelf->auto_anon_in_d_bits_size;
        vlSelf->__PVT__monitor__DOT__source_1 = vlSelf->auto_anon_in_d_bits_source;
        vlSelf->__PVT__monitor__DOT__sink = vlSelf->auto_anon_in_d_bits_sink;
        vlSelf->__PVT__monitor__DOT__denied = vlSelf->auto_anon_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__idle = (0U == (IData)(vlSelf->__PVT__beatsLeft));
    vlSelf->__PVT__monitor__DOT__d_first_counter = __Vdly__monitor__DOT__d_first_counter;
    vlSelf->__PVT__monitor__DOT__inflight = __Vdly__monitor__DOT__inflight;
    vlSelf->__PVT__monitor__DOT__inflight_opcodes = __Vdly__monitor__DOT__inflight_opcodes;
    vlSelf->__PVT__monitor__DOT__inflight_sizes = __Vdly__monitor__DOT__inflight_sizes;
    vlSelf->__PVT__monitor__DOT__watchdog = __Vdly__monitor__DOT__watchdog;
    vlSelf->__PVT__monitor__DOT__inflight_1 = __Vdly__monitor__DOT__inflight_1;
    vlSelf->__PVT__monitor__DOT__inflight_sizes_1 = __Vdly__monitor__DOT__inflight_sizes_1;
    vlSelf->__PVT__monitor__DOT__watchdog_1 = __Vdly__monitor__DOT__watchdog_1;
    vlSelf->__PVT__monitor__DOT__d_first_counter_1 
        = __Vdly__monitor__DOT__d_first_counter_1;
    vlSelf->__PVT__monitor__DOT__d_first_counter_2 
        = __Vdly__monitor__DOT__d_first_counter_2;
    vlSelf->__PVT__monitor__DOT__a_first_counter = __Vdly__monitor__DOT__a_first_counter;
    vlSelf->__PVT__monitor__DOT__a_first_counter_1 
        = __Vdly__monitor__DOT__a_first_counter_1;
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1\n"); );
    // Body
    vlSelf->auto_anon_out_1_a_valid = ((~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                           >> 0x1eU)) 
                                       & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid));
    vlSelf->auto_anon_out_0_a_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid) 
                                       & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                          >> 0x1eU));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__0\n"); );
    // Init
    CData/*1:0*/ __PVT___readys_filter_T_1;
    __PVT___readys_filter_T_1 = 0;
    // Body
    vlSelf->__PVT__readys_valid = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid) 
                                    << 1U) | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid));
    __PVT___readys_filter_T_1 = ((~ (IData)(vlSelf->__PVT__readys_mask)) 
                                 & (IData)(vlSelf->__PVT__readys_valid));
    vlSelf->__PVT__readys_unready = (((4U & ((IData)(__PVT___readys_filter_T_1) 
                                             << 1U)) 
                                      | (((2U & ((IData)(__PVT___readys_filter_T_1) 
                                                 << 1U)) 
                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid)) 
                                         | (IData)(__PVT___readys_filter_T_1))) 
                                     | ((IData)(vlSelf->__PVT__readys_mask) 
                                        << 2U));
    vlSelf->__PVT__readys_readys = (3U & (~ (((IData)(vlSelf->__PVT__readys_unready) 
                                              >> 2U) 
                                             & (IData)(vlSelf->__PVT__readys_unready))));
    vlSelf->__PVT__winner_1 = (((IData)(vlSelf->__PVT__readys_readys) 
                                >> 1U) & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid));
    vlSelf->__PVT__winner_0 = ((IData)(vlSelf->__PVT__readys_readys) 
                               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid));
    if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
        vlSelf->auto_anon_in_d_valid = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid) 
                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid));
        vlSelf->__PVT__muxState_1 = vlSelf->__PVT__winner_1;
        vlSelf->__PVT__muxState_0 = vlSelf->__PVT__winner_0;
    } else {
        vlSelf->auto_anon_in_d_valid = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_valid) 
                                         & (IData)(vlSelf->__PVT__state_0)) 
                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_valid) 
                                           & (IData)(vlSelf->__PVT__state_1)));
        vlSelf->__PVT__muxState_1 = vlSelf->__PVT__state_1;
        vlSelf->__PVT__muxState_0 = vlSelf->__PVT__state_0;
    }
    if (vlSelf->__PVT__muxState_0) {
        vlSelf->auto_anon_in_d_bits_param = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_param;
        vlSelf->auto_anon_in_d_bits_data = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.__PVT__bar__DOT__bypass)
                                             ? 0U : vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink.__PVT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    } else {
        vlSelf->auto_anon_in_d_bits_param = 0U;
        vlSelf->auto_anon_in_d_bits_data = 0U;
    }
    vlSelf->auto_anon_in_d_bits_sink = (((IData)(vlSelf->__PVT__muxState_0)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_sink)
                                          : 0U) | ((IData)(vlSelf->__PVT__muxState_1) 
                                                   << 5U));
    vlSelf->auto_anon_in_d_bits_size = (((IData)(vlSelf->__PVT__muxState_0)
                                          ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_size)
                                          : 0U) | ((IData)(vlSelf->__PVT__muxState_1)
                                                    ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_size)
                                                    : 0U));
    vlSelf->auto_anon_in_d_bits_denied = (((IData)(vlSelf->__PVT__muxState_0) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_denied)) 
                                          | ((IData)(vlSelf->__PVT__muxState_1) 
                                             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_denied)));
    vlSelf->auto_anon_in_d_bits_corrupt = (((IData)(vlSelf->__PVT__muxState_0) 
                                            & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_corrupt)) 
                                           | ((IData)(vlSelf->__PVT__muxState_1) 
                                              & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_corrupt)));
    vlSelf->auto_anon_in_d_bits_source = (((IData)(vlSelf->__PVT__muxState_0)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_source)
                                            : 0U) | 
                                          ((IData)(vlSelf->__PVT__muxState_1)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_source)
                                            : 0U));
    vlSelf->auto_anon_in_d_bits_opcode = (((IData)(vlSelf->__PVT__muxState_0)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_d_bits_opcode)
                                            : 0U) | 
                                          ((IData)(vlSelf->__PVT__muxState_1)
                                            ? (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.auto_in_d_bits_opcode)
                                            : 0U));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__1\n"); );
    // Body
    vlSelf->auto_anon_out_1_d_ready = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready) 
                                       & ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                           ? ((IData)(vlSelf->__PVT__readys_readys) 
                                              >> 1U)
                                           : (IData)(vlSelf->__PVT__state_1)));
    vlSelf->auto_anon_out_0_d_ready = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready) 
                                       & ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                           ? (IData)(vlSelf->__PVT__readys_readys)
                                           : (IData)(vlSelf->__PVT__state_0)));
}

VL_INLINE_OPT void VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__2(VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLXbar_i1_o2_a32d32s4k6z3u___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1__2\n"); );
    // Body
    vlSelf->auto_anon_in_a_ready = (1U & (((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                            >> 0x1eU) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_in_in_a_ready)) 
                                          | ((~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                 >> 0x1eU)) 
                                             & (~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__ferr.__PVT__a_q__DOT__full)))));
    vlSelf->__PVT__monitor__DOT___a_first_T_1 = ((IData)(vlSelf->auto_anon_in_a_ready) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__fixer.auto_anon_out_a_valid));
    vlSelf->__PVT__monitor__DOT___GEN_0 = ((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
                                           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)));
}
