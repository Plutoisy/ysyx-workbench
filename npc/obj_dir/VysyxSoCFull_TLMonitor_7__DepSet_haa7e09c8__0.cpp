// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLMonitor_7.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __PVT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__unnamedblk1__DOT___GEN_6;
    __PVT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_7;
    __PVT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_8;
    __PVT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_9;
    __PVT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_10;
    __PVT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_11;
    __PVT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_12;
    __PVT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_13;
    __PVT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_14;
    __PVT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_15;
    __PVT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_16;
    __PVT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_17;
    __PVT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_18;
    __PVT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_19;
    __PVT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_20;
    __PVT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_21;
    __PVT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_22;
    __PVT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_23;
    __PVT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_24;
    __PVT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_25;
    __PVT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_26;
    __PVT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_27;
    __PVT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_28;
    __PVT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_29;
    __PVT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_30;
    __PVT__unnamedblk1__DOT___GEN_30 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___GEN_31;
    __PVT__unnamedblk1__DOT___GEN_31 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___same_cycle_resp_T_1;
    __PVT__unnamedblk1__DOT___same_cycle_resp_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_32;
    __PVT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_33;
    __PVT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_34;
    __PVT__unnamedblk1__DOT___GEN_34 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_35;
    __PVT__unnamedblk1__DOT___GEN_35 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_36;
    __PVT__unnamedblk1__DOT___GEN_36 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_37;
    __PVT__unnamedblk1__DOT___GEN_37 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_38;
    __PVT__unnamedblk1__DOT___GEN_38 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_39;
    __PVT__unnamedblk1__DOT___GEN_39 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk2__DOT___d_first_T_2;
    __PVT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__d_first_counter;
    __Vdly__d_first_counter = 0;
    SData/*15:0*/ __Vdly__inflight;
    __Vdly__inflight = 0;
    QData/*63:0*/ __Vdly__inflight_opcodes;
    __Vdly__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__inflight_sizes;
    __Vdly__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__d_first_counter_1;
    __Vdly__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__watchdog;
    __Vdly__watchdog = 0;
    SData/*15:0*/ __Vdly__inflight_1;
    __Vdly__inflight_1 = 0;
    QData/*63:0*/ __Vdly__inflight_sizes_1;
    __Vdly__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__d_first_counter_2;
    __Vdly__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__watchdog_1;
    __Vdly__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__a_first_counter;
    __Vdly__a_first_counter = 0;
    CData/*2:0*/ __Vdly__a_first_counter_1;
    __Vdly__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vdly__d_first_counter = vlSelfRef.__PVT__d_first_counter;
    __Vdly__inflight = vlSelfRef.__PVT__inflight;
    __Vdly__inflight_opcodes = vlSelfRef.__PVT__inflight_opcodes;
    __Vdly__inflight_sizes = vlSelfRef.__PVT__inflight_sizes;
    __Vdly__watchdog = vlSelfRef.__PVT__watchdog;
    __Vdly__inflight_1 = vlSelfRef.__PVT__inflight_1;
    __Vdly__inflight_sizes_1 = vlSelfRef.__PVT__inflight_sizes_1;
    __Vdly__watchdog_1 = vlSelfRef.__PVT__watchdog_1;
    __Vdly__d_first_counter_1 = vlSelfRef.__PVT__d_first_counter_1;
    __Vdly__d_first_counter_2 = vlSelfRef.__PVT__d_first_counter_2;
    __Vdly__a_first_counter = vlSelfRef.__PVT__a_first_counter;
    __Vdly__a_first_counter_1 = vlSelfRef.__PVT__a_first_counter_1;
    __PVT__unnamedblk1__DOT___is_aligned_mask_T = (0xfffU 
                                                   & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
    __PVT__unnamedblk1__DOT___GEN_6 = (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                & (~ (IData)(__PVT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask = (((8U 
                                                 & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1) 
                                                     << 3U) 
                                                    | (0xfffffff8U 
                                                       & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                           << 2U) 
                                                          & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                             << 3U))))) 
                                                | (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1) 
                                                    | (1U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1) 
                                                     | (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)))));
    __PVT__unnamedblk1__DOT___GEN_7 = ((5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
                                       & (3U == (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                 >> 0x1eU)));
    __PVT__unnamedblk1__DOT___GEN_8 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                        & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                       & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_9 = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__unnamedblk1__DOT___GEN_10 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_11 = ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                   >> 1U))) 
                                        & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                           >> 0x1eU));
    __PVT__unnamedblk1__DOT___GEN_12 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_13 = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                                        != (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask));
    __PVT__unnamedblk1__DOT___GEN_14 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_15 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_16 = ((3U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
                                        & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                           >> 0x1eU));
    __PVT__unnamedblk1__DOT___GEN_17 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_18 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_19 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_20 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_21 = (0U == (3U & 
                                               ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size) 
                                                >> 1U)));
    __PVT__unnamedblk1__DOT___GEN_22 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_23 = (2U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param)));
    __PVT__unnamedblk1__DOT___GEN_24 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_25 = (1U & ((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                  >> 2U)) 
                                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt)));
    __PVT__unnamedblk1__DOT___GEN_26 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_27 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_28 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_31 = ((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source)) 
                                        << 2U);
    __PVT__unnamedblk1__DOT___same_cycle_resp_T_1 = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
         & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1)));
    vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(__PVT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? (0xffffU & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    __PVT__unnamedblk1__DOT___GEN_32 = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                        & (0U == (IData)(vlSelfRef.__PVT__d_first_counter_1)));
    __PVT__unnamedblk1__DOT___GEN_33 = ((IData)(__PVT__unnamedblk1__DOT___GEN_32) 
                                        & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode)));
    vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(__PVT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source)));
    __PVT__unnamedblk1__DOT___GEN_34 = (((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                                         & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp)) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_35 = (((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                                         & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_36 = ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                          & (0U == (IData)(vlSelfRef.__PVT__d_first_counter_2))) 
                                         & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_29 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (0U != (IData)(vlSelfRef.__PVT__a_first_counter))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_30 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (0U != (IData)(vlSelfRef.__PVT__d_first_counter))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 
        VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_opcodes, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10030: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10030, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10032: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10032, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10036: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10036, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10038: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10038, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10042: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10042, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10044: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10044, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10048: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10048, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10050: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10050, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10054: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10054, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10056: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10056, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10060: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10060, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10062: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10062, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10066: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10066, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10068: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10068, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10072: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10072, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10074: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10074, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10078: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10078, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10080: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10080, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10084: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10084, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10086: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10086, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10090: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10090, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10092: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10092, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10096: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10096, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10098: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10098, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10102: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10102, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10104: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10104, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10108: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10108, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10110: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10110, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10114: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10114, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10116: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10116, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10120: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10120, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10122: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10122, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10126: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10126, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10128: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10128, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10132: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10132, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10134: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10134, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10138: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10138, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10140: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10140, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10144: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10144, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10146: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10146, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10150: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10150, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10152: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10152, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10156: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10156, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10158: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10158, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10162: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10162, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10164: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10164, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10168: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10168, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10170: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10170, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10174: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10174, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10176: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10176, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10180: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10180, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10182: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10182, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10186: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10186, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10188: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10188, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10192: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10192, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10194: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10194, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10198: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10198, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10200: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10200, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10204: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10204, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10206: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10206, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10210: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10210, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10212: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10212, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10216: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10216, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10218: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10218, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10222: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10222, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10224: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10224, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                         >> 2U))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10228: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10228, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10230: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10230, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10234: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10234, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10236: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10236, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (3U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10240: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10240, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10242: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10242, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10246: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10246, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10248: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10248, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10252: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10252, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10254: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10254, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10258: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10258, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10260: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10260, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (3U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10264: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10264, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10266: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10266, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10270: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10270, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10272: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10272, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10276: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10276, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10278: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10278, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_26) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10282: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10282, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10284: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10284, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10288: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10288, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10290: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10290, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_27) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10294: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10294, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10296: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10296, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_27) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10300: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10300, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10302: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10302, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10306: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10306, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10308: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10308, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10312: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10312, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10314: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10314, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10318: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10318, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10320: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10320, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10324: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10324, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10326: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10326, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10330: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10330, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10332: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10332, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                         != vlSelfRef.__PVT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10336: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10336, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10338: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10338, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10342: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10342, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10344: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10344, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param)) 
                         != (IData)(vlSelfRef.__PVT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10348: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10348, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10350: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10350, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10354: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10354, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10356: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10356, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10360: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10360, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10362: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10362, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10366: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10366, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10368: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10368, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                >> 2U)) != (IData)(vlSelfRef.__PVT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10372: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10372, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10374: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10374, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_37 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT___GEN_1) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10379: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10379, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10381: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10381, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_38 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__unnamedblk1__DOT___GEN_38) 
                            | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10386: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10386, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10388: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10388, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_34) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10394: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10394, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10396: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10396, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10400: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10400, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10402: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10402, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_35) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                 >> 1U))))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(
                                                                   (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10408: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10408, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10410: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10410, "", false);
    }
    __PVT__unnamedblk1__DOT___a_size_lookup_T_1 = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_sizes, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_35) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size) 
                         != (7U & (IData)((__PVT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10415: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10415, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10417: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10417, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__unnamedblk1__DOT___GEN_32) 
                           & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid)) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source))) 
                        & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready)) 
                            | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10422: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10422, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10424: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10424, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready) 
                                   != ((IData)(__PVT__unnamedblk1__DOT___GEN_33)
                                        ? (0xffffU 
                                           & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source)))
                                        : 0U)) | (0U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10430: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10430, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10432: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10432, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__watchdog 
                                     < vlSelfRef.__PVT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10438: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10438, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10440: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10440, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_39 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight_1), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_39)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10445: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10445, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10447: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10447, "", false);
    }
    __PVT__unnamedblk1__DOT___c_size_lookup_T_1 = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_sizes_1, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_36) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size) 
                         != (7U & (IData)((__PVT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10452: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10452, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10454: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10454, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__watchdog_1 
                                     < vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10460: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10460, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10462: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10462, "", false);
    }
    __PVT__unnamedblk2__DOT___d_first_T_2 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__d_first_counter = 0U;
        __Vdly__inflight = 0U;
        __Vdly__inflight_opcodes = 0ULL;
        __Vdly__inflight_sizes = 0ULL;
        __Vdly__d_first_counter_1 = 0U;
        __Vdly__watchdog = 0U;
        __Vdly__inflight_1 = 0U;
        __Vdly__inflight_sizes_1 = 0ULL;
        __Vdly__d_first_counter_2 = 0U;
        __Vdly__watchdog_1 = 0U;
        __Vdly__a_first_counter = 0U;
        __Vdly__a_first_counter_1 = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_4[0U] = 0xfU;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_5[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_5[4U]);
        if (vlSelfRef.__PVT___GEN_1) {
            __Vtemp_7[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                                   << 1U));
            __Vtemp_13[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_7[0U] = 0U;
            __Vtemp_13[0U] = 0U;
        }
        __Vtemp_7[1U] = 0U;
        __Vtemp_7[2U] = 0U;
        __Vtemp_7[3U] = 0U;
        __Vtemp_7[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_8[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_8[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_8[4U]);
        __Vtemp_10[0U] = 0xfU;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_10[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_11[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_11[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_11[4U]);
        __Vtemp_13[1U] = 0U;
        __Vtemp_13[2U] = 0U;
        __Vtemp_13[3U] = 0U;
        __Vtemp_13[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_14[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_14[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_14[4U]);
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_17[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_17[4U]);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__d_first_1)) 
               & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode)));
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode)));
        if (__PVT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size)));
            __Vdly__d_first_counter = (7U & ((0U != (IData)(vlSelfRef.__PVT__d_first_counter))
                                              ? ((IData)(vlSelfRef.__PVT__d_first_counter) 
                                                 - (IData)(1U))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                   >> 2U))
                                                  : 0U)));
            __Vdly__d_first_counter_1 = (7U & ((IData)(vlSelfRef.__PVT__d_first_1)
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                     >> 2U))
                                                    : 0U)
                                                : ((IData)(vlSelfRef.__PVT__d_first_counter_1) 
                                                   - (IData)(1U))));
            __Vdly__d_first_counter_2 = (7U & ((IData)(vlSelfRef.__PVT__d_first_2)
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                     >> 2U))
                                                    : 0U)
                                                : ((IData)(vlSelfRef.__PVT__d_first_counter_2) 
                                                   - (IData)(1U))));
            __Vdly__watchdog_1 = 0U;
        } else {
            __Vdly__watchdog_1 = ((IData)(1U) + vlSelfRef.__PVT__watchdog_1);
        }
        __Vdly__inflight = (0xffffU & (((IData)(vlSelfRef.__PVT__inflight) 
                                        | ((IData)(vlSelfRef.__PVT___GEN_1)
                                            ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                            : 0U)) 
                                       & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                              ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source))
                                              : 0U))));
        __Vdly__inflight_opcodes = ((vlSelfRef.__PVT__inflight_opcodes 
                                     | ((IData)(vlSelfRef.__PVT___GEN_1)
                                         ? (((QData)((IData)(
                                                             vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                         : 0ULL)) & 
                                    (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                         ? (((QData)((IData)(
                                                             vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                         : 0ULL)));
        __Vdly__inflight_sizes = ((vlSelfRef.__PVT__inflight_sizes 
                                   | ((IData)(vlSelfRef.__PVT___GEN_1)
                                       ? (((QData)((IData)(
                                                           vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                       : 0ULL)) & (~ 
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__watchdog = (((IData)(vlSelfRef.__PVT___a_first_T_1) 
                             | (IData)(__PVT__unnamedblk2__DOT___d_first_T_2))
                             ? 0U : ((IData)(1U) + vlSelfRef.__PVT__watchdog));
        __Vdly__inflight_1 = ((IData)(vlSelfRef.__PVT__inflight_1) 
                              & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                                     ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source))
                                     : 0U)));
        __Vdly__inflight_sizes_1 = (vlSelfRef.__PVT__inflight_sizes_1 
                                    & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                                           ? (((QData)((IData)(
                                                               vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                           : 0ULL)));
        if (vlSelfRef.__PVT___a_first_T_1) {
            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__a_first_counter = (7U & ((0U != (IData)(vlSelfRef.__PVT__a_first_counter))
                                              ? ((IData)(vlSelfRef.__PVT__a_first_counter) 
                                                 - (IData)(1U))
                                              : ((4U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                   >> 2U)))));
            __Vdly__a_first_counter_1 = (7U & ((IData)(vlSelfRef.__PVT__a_first_1)
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                     >> 2U)))
                                                : ((IData)(vlSelfRef.__PVT__a_first_counter_1) 
                                                   - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__d_first_counter))))) {
        vlSelfRef.__PVT__opcode_1 = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode;
        vlSelfRef.__PVT__param_1 = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.__PVT__size_1 = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size;
        vlSelfRef.__PVT__source_1 = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source;
        vlSelfRef.__PVT__sink = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_sink;
        vlSelfRef.__PVT__denied = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                         >> 2U));
    }
    if (((IData)(vlSelfRef.__PVT___a_first_T_1) & (~ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__a_first_counter))))) {
        vlSelfRef.__PVT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelfRef.__PVT__size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__source = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__address = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelfRef.__PVT__d_first_counter = __Vdly__d_first_counter;
    vlSelfRef.__PVT__inflight = __Vdly__inflight;
    vlSelfRef.__PVT__inflight_opcodes = __Vdly__inflight_opcodes;
    vlSelfRef.__PVT__inflight_sizes = __Vdly__inflight_sizes;
    vlSelfRef.__PVT__watchdog = __Vdly__watchdog;
    vlSelfRef.__PVT__inflight_1 = __Vdly__inflight_1;
    vlSelfRef.__PVT__inflight_sizes_1 = __Vdly__inflight_sizes_1;
    vlSelfRef.__PVT__watchdog_1 = __Vdly__watchdog_1;
    vlSelfRef.__PVT__d_first_counter_1 = __Vdly__d_first_counter_1;
    vlSelfRef.__PVT__d_first_counter_2 = __Vdly__d_first_counter_2;
    vlSelfRef.__PVT__a_first_counter = __Vdly__a_first_counter;
    vlSelfRef.__PVT__a_first_counter_1 = __Vdly__a_first_counter_1;
    vlSelfRef.__PVT__d_first_1 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_1));
    vlSelfRef.__PVT__d_first_2 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_2));
    vlSelfRef.__PVT__a_first_1 = (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___a_first_T_1 = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid));
    vlSelfRef.__PVT___GEN_1 = ((IData)(vlSelfRef.__PVT___a_first_T_1) 
                               & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__0(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __PVT__unnamedblk1__DOT___is_aligned_mask_T;
    __PVT__unnamedblk1__DOT___is_aligned_mask_T = 0;
    CData/*4:0*/ __PVT__unnamedblk1__DOT___GEN_6;
    __PVT__unnamedblk1__DOT___GEN_6 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_7;
    __PVT__unnamedblk1__DOT___GEN_7 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_8;
    __PVT__unnamedblk1__DOT___GEN_8 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_9;
    __PVT__unnamedblk1__DOT___GEN_9 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_10;
    __PVT__unnamedblk1__DOT___GEN_10 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_11;
    __PVT__unnamedblk1__DOT___GEN_11 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_12;
    __PVT__unnamedblk1__DOT___GEN_12 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_13;
    __PVT__unnamedblk1__DOT___GEN_13 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_14;
    __PVT__unnamedblk1__DOT___GEN_14 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_15;
    __PVT__unnamedblk1__DOT___GEN_15 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_16;
    __PVT__unnamedblk1__DOT___GEN_16 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_17;
    __PVT__unnamedblk1__DOT___GEN_17 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_18;
    __PVT__unnamedblk1__DOT___GEN_18 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_19;
    __PVT__unnamedblk1__DOT___GEN_19 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_20;
    __PVT__unnamedblk1__DOT___GEN_20 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_21;
    __PVT__unnamedblk1__DOT___GEN_21 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_22;
    __PVT__unnamedblk1__DOT___GEN_22 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_23;
    __PVT__unnamedblk1__DOT___GEN_23 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_24;
    __PVT__unnamedblk1__DOT___GEN_24 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_25;
    __PVT__unnamedblk1__DOT___GEN_25 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_26;
    __PVT__unnamedblk1__DOT___GEN_26 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_27;
    __PVT__unnamedblk1__DOT___GEN_27 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_28;
    __PVT__unnamedblk1__DOT___GEN_28 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_29;
    __PVT__unnamedblk1__DOT___GEN_29 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_30;
    __PVT__unnamedblk1__DOT___GEN_30 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___GEN_31;
    __PVT__unnamedblk1__DOT___GEN_31 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___same_cycle_resp_T_1;
    __PVT__unnamedblk1__DOT___same_cycle_resp_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_32;
    __PVT__unnamedblk1__DOT___GEN_32 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_33;
    __PVT__unnamedblk1__DOT___GEN_33 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_34;
    __PVT__unnamedblk1__DOT___GEN_34 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_35;
    __PVT__unnamedblk1__DOT___GEN_35 = 0;
    CData/*0:0*/ __PVT__unnamedblk1__DOT___GEN_36;
    __PVT__unnamedblk1__DOT___GEN_36 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_37;
    __PVT__unnamedblk1__DOT___GEN_37 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_38;
    __PVT__unnamedblk1__DOT___GEN_38 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__unnamedblk1__DOT___GEN_39;
    __PVT__unnamedblk1__DOT___GEN_39 = 0;
    QData/*63:0*/ __PVT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__unnamedblk2__DOT___d_first_T_2;
    __PVT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*2:0*/ __Vdly__d_first_counter;
    __Vdly__d_first_counter = 0;
    SData/*15:0*/ __Vdly__inflight;
    __Vdly__inflight = 0;
    QData/*63:0*/ __Vdly__inflight_opcodes;
    __Vdly__inflight_opcodes = 0;
    QData/*63:0*/ __Vdly__inflight_sizes;
    __Vdly__inflight_sizes = 0;
    CData/*2:0*/ __Vdly__d_first_counter_1;
    __Vdly__d_first_counter_1 = 0;
    IData/*31:0*/ __Vdly__watchdog;
    __Vdly__watchdog = 0;
    SData/*15:0*/ __Vdly__inflight_1;
    __Vdly__inflight_1 = 0;
    QData/*63:0*/ __Vdly__inflight_sizes_1;
    __Vdly__inflight_sizes_1 = 0;
    CData/*2:0*/ __Vdly__d_first_counter_2;
    __Vdly__d_first_counter_2 = 0;
    IData/*31:0*/ __Vdly__watchdog_1;
    __Vdly__watchdog_1 = 0;
    CData/*2:0*/ __Vdly__a_first_counter;
    __Vdly__a_first_counter = 0;
    CData/*2:0*/ __Vdly__a_first_counter_1;
    __Vdly__a_first_counter_1 = 0;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vdly__d_first_counter = vlSelfRef.__PVT__d_first_counter;
    __Vdly__inflight = vlSelfRef.__PVT__inflight;
    __Vdly__inflight_opcodes = vlSelfRef.__PVT__inflight_opcodes;
    __Vdly__inflight_sizes = vlSelfRef.__PVT__inflight_sizes;
    __Vdly__watchdog = vlSelfRef.__PVT__watchdog;
    __Vdly__inflight_1 = vlSelfRef.__PVT__inflight_1;
    __Vdly__inflight_sizes_1 = vlSelfRef.__PVT__inflight_sizes_1;
    __Vdly__watchdog_1 = vlSelfRef.__PVT__watchdog_1;
    __Vdly__d_first_counter_1 = vlSelfRef.__PVT__d_first_counter_1;
    __Vdly__d_first_counter_2 = vlSelfRef.__PVT__d_first_counter_2;
    __Vdly__a_first_counter = vlSelfRef.__PVT__a_first_counter;
    __Vdly__a_first_counter_1 = vlSelfRef.__PVT__a_first_counter_1;
    __PVT__unnamedblk1__DOT___is_aligned_mask_T = (0xfffU 
                                                   & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
    __PVT__unnamedblk1__DOT___GEN_6 = (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                & (~ (IData)(__PVT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__unnamedblk1__DOT__mask = (((8U 
                                                 & (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1) 
                                                     << 3U) 
                                                    | (0xfffffff8U 
                                                       & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                           << 2U) 
                                                          & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                             << 3U))))) 
                                                | (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_1_1) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1) 
                                                    | (1U 
                                                       == 
                                                       (3U 
                                                        & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask_sub_0_1) 
                                                     | (0U 
                                                        == 
                                                        (3U 
                                                         & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address)))));
    __PVT__unnamedblk1__DOT___GEN_7 = ((5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
                                       & (3U == (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                 >> 0x1eU)));
    __PVT__unnamedblk1__DOT___GEN_8 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                        & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                       & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_9 = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__unnamedblk1__DOT___GEN_10 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_11 = ((3U != (3U 
                                                & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                   >> 1U))) 
                                        & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                           >> 0x1eU));
    __PVT__unnamedblk1__DOT___GEN_12 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_13 = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                                        != (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask));
    __PVT__unnamedblk1__DOT___GEN_14 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_15 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_16 = ((3U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
                                        & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                           >> 0x1eU));
    __PVT__unnamedblk1__DOT___GEN_17 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_18 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_19 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_20 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_21 = (0U == (3U & 
                                               ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_size) 
                                                >> 1U)));
    __PVT__unnamedblk1__DOT___GEN_22 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_23 = (2U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param)));
    __PVT__unnamedblk1__DOT___GEN_24 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_25 = (1U & ((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                                  >> 2U)) 
                                              | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt)));
    __PVT__unnamedblk1__DOT___GEN_26 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_27 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_28 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_31 = ((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source)) 
                                        << 2U);
    __PVT__unnamedblk1__DOT___same_cycle_resp_T_1 = 
        ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
         & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1)));
    vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(__PVT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? (0xffffU & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    __PVT__unnamedblk1__DOT___GEN_32 = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                        & (0U == (IData)(vlSelfRef.__PVT__d_first_counter_1)));
    __PVT__unnamedblk1__DOT___GEN_33 = ((IData)(__PVT__unnamedblk1__DOT___GEN_32) 
                                        & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode)));
    vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(__PVT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source)));
    __PVT__unnamedblk1__DOT___GEN_34 = (((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                                         & (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp)) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_35 = (((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                                         & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_36 = ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                          & (0U == (IData)(vlSelfRef.__PVT__d_first_counter_2))) 
                                         & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_29 = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid) 
                                         & (0U != (IData)(vlSelfRef.__PVT__a_first_counter))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___GEN_30 = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                                         & (0U != (IData)(vlSelfRef.__PVT__d_first_counter))) 
                                        & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 
        VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_opcodes, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10030: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10030, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10032: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10032, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10036: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10036, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10038: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10038, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10042: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10042, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10044: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10044, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10048: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10048, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10050: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10050, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10054: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10054, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10056: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10056, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10060: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10060, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10062: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10062, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10066: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10066, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10068: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10068, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10072: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10072, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10074: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10074, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10078: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10078, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10080: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10080, "", false);
    }
    if (VL_UNLIKELY((__PVT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10084: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10084, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10086: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10086, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10090: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10090, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10092: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10092, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10096: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10096, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10098: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10098, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10102: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10102, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10104: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10104, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_12) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10108: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10108, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10110: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10110, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10114: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10114, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10116: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10116, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10120: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10120, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10122: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10122, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_14) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10126: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10126, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10128: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10128, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10132: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10132, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10134: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10134, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10138: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10138, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10140: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10140, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_15) 
                      & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10144: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10144, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10146: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10146, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10150: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10150, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10152: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10152, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10156: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10156, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10158: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10158, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10162: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10162, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10164: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10164, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10168: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10168, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10170: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10170, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10174: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10174, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10176: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10176, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10180: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10180, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10182: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10182, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10186: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10186, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10188: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10188, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (0U != (IData)(__PVT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10192: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10192, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10194: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10194, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10198: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10198, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10200: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10200, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10204: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10204, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10206: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10206, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10210: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10210, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10212: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10212, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10216: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10216, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10218: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10218, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10222: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10222, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10224: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10224, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_20) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                         >> 2U))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10228: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10228, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10230: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10230, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10234: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10234, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10236: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10236, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (3U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10240: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10240, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10242: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10242, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10246: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10246, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10248: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10248, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10252: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10252, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10254: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10254, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10258: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10258, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10260: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10260, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (3U == (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10264: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10264, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10266: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10266, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10270: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10270, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10272: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10272, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_24) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10276: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10276, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10278: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10278, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_26) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10282: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10282, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10284: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10284, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10288: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10288, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10290: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10290, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_27) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10294: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10294, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10296: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10296, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_27) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10300: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10300, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10302: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10302, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10306: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10306, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10308: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10308, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10312: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10312, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10314: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10314, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10318: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10318, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10320: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10320, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10324: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10324, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10326: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10326, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10330: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10330, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10332: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10332, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_29) 
                      & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                         != vlSelfRef.__PVT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10336: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10336, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10338: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10338, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10342: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10342, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10344: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10344, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param)) 
                         != (IData)(vlSelfRef.__PVT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10348: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10348, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10350: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10350, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10354: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10354, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10356: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10356, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10360: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10360, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10362: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10362, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10366: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10366, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10368: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10368, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_30) 
                      & ((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                >> 2U)) != (IData)(vlSelfRef.__PVT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10372: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10372, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10374: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10374, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_37 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT___GEN_1) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10379: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10379, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10381: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10381, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_38 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__unnamedblk1__DOT___GEN_33) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__unnamedblk1__DOT___GEN_38) 
                            | (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10386: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10386, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10388: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10388, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_34) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10394: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10394, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10396: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10396, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10400: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10400, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10402: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10402, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_35) 
                      & (~ (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
                                                          (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                           >> 1U))))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(
                                                             (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                              >> 1U)))))))
                                  : 0U)) | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                 >> 1U))))))
                                                 ? 
                                                (7U 
                                                 & (0x951240U 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        * 
                                                        (7U 
                                                         & (IData)(
                                                                   (__PVT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10408: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10408, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10410: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10410, "", false);
    }
    __PVT__unnamedblk1__DOT___a_size_lookup_T_1 = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_sizes, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_35) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_size) 
                         != (7U & (IData)((__PVT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10415: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10415, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10417: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10417, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__unnamedblk1__DOT___GEN_32) 
                           & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid)) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source))) 
                        & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready)) 
                            | (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10422: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10422, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10424: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10424, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready) 
                                   != ((IData)(__PVT__unnamedblk1__DOT___GEN_33)
                                        ? (0xffffU 
                                           & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source)))
                                        : 0U)) | (0U 
                                                  == (IData)(vlSelfRef.__PVT__unnamedblk1__DOT__a_set_wo_ready))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10430: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10430, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10432: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10432, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__watchdog 
                                     < vlSelfRef.__PVT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10438: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10438, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10440: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10440, "", false);
    }
    __PVT__unnamedblk1__DOT___GEN_39 = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__inflight_1), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(__PVT__unnamedblk1__DOT___GEN_39)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10445: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10445, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10447: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10447, "", false);
    }
    __PVT__unnamedblk1__DOT___c_size_lookup_T_1 = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__inflight_sizes_1, __PVT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__unnamedblk1__DOT___GEN_36) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_size) 
                         != (7U & (IData)((__PVT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10452: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10452, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10454: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10454, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__watchdog_1 
                                     < vlSelfRef.__PVT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:10460: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/chiplink/ChipLink.scala:65:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10460, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:10462: Assertion failed in %NysyxSoCFull.fpga.chiplink.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 10462, "", false);
    }
    __PVT__unnamedblk2__DOT___d_first_T_2 = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_d_ready) 
                                             & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid));
    if (vlSymsp->TOP.reset) {
        __Vdly__d_first_counter = 0U;
        __Vdly__inflight = 0U;
        __Vdly__inflight_opcodes = 0ULL;
        __Vdly__inflight_sizes = 0ULL;
        __Vdly__d_first_counter_1 = 0U;
        __Vdly__watchdog = 0U;
        __Vdly__inflight_1 = 0U;
        __Vdly__inflight_sizes_1 = 0ULL;
        __Vdly__d_first_counter_2 = 0U;
        __Vdly__watchdog_1 = 0U;
        __Vdly__a_first_counter = 0U;
        __Vdly__a_first_counter_1 = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_4[0U] = 0xfU;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_5[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_5[4U]);
        if (vlSelfRef.__PVT___GEN_1) {
            __Vtemp_7[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                                   << 1U));
            __Vtemp_13[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_7[0U] = 0U;
            __Vtemp_13[0U] = 0U;
        }
        __Vtemp_7[1U] = 0U;
        __Vtemp_7[2U] = 0U;
        __Vtemp_7[3U] = 0U;
        __Vtemp_7[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_8[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_8[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_8[4U]);
        __Vtemp_10[0U] = 0xfU;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_10[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_11[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_11[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_11[4U]);
        __Vtemp_13[1U] = 0U;
        __Vtemp_13[2U] = 0U;
        __Vtemp_13[3U] = 0U;
        __Vtemp_13[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_14[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_14[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_14[4U]);
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_17[3U];
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_17[4U]);
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__d_first_1)) 
               & (6U != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode)));
        vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode)));
        if (__PVT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_size)));
            __Vdly__d_first_counter = (7U & ((0U != (IData)(vlSelfRef.__PVT__d_first_counter))
                                              ? ((IData)(vlSelfRef.__PVT__d_first_counter) 
                                                 - (IData)(1U))
                                              : ((1U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                   >> 2U))
                                                  : 0U)));
            __Vdly__d_first_counter_1 = (7U & ((IData)(vlSelfRef.__PVT__d_first_1)
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                     >> 2U))
                                                    : 0U)
                                                : ((IData)(vlSelfRef.__PVT__d_first_counter_1) 
                                                   - (IData)(1U))));
            __Vdly__d_first_counter_2 = (7U & ((IData)(vlSelfRef.__PVT__d_first_2)
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                     >> 2U))
                                                    : 0U)
                                                : ((IData)(vlSelfRef.__PVT__d_first_counter_2) 
                                                   - (IData)(1U))));
            __Vdly__watchdog_1 = 0U;
        } else {
            __Vdly__watchdog_1 = ((IData)(1U) + vlSelfRef.__PVT__watchdog_1);
        }
        __Vdly__inflight = (0xffffU & (((IData)(vlSelfRef.__PVT__inflight) 
                                        | ((IData)(vlSelfRef.__PVT___GEN_1)
                                            ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                            : 0U)) 
                                       & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                              ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source))
                                              : 0U))));
        __Vdly__inflight_opcodes = ((vlSelfRef.__PVT__inflight_opcodes 
                                     | ((IData)(vlSelfRef.__PVT___GEN_1)
                                         ? (((QData)((IData)(
                                                             vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                         : 0ULL)) & 
                                    (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                         ? (((QData)((IData)(
                                                             vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                         : 0ULL)));
        __Vdly__inflight_sizes = ((vlSelfRef.__PVT__inflight_sizes 
                                   | ((IData)(vlSelfRef.__PVT___GEN_1)
                                       ? (((QData)((IData)(
                                                           vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                       : 0ULL)) & (~ 
                                                   ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__watchdog = (((IData)(vlSelfRef.__PVT___a_first_T_1) 
                             | (IData)(__PVT__unnamedblk2__DOT___d_first_T_2))
                             ? 0U : ((IData)(1U) + vlSelfRef.__PVT__watchdog));
        __Vdly__inflight_1 = ((IData)(vlSelfRef.__PVT__inflight_1) 
                              & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                                     ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source))
                                     : 0U)));
        __Vdly__inflight_sizes_1 = (vlSelfRef.__PVT__inflight_sizes_1 
                                    & (~ ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                                           ? (((QData)((IData)(
                                                               vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                           : 0ULL)));
        if (vlSelfRef.__PVT___a_first_T_1) {
            vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__a_first_counter = (7U & ((0U != (IData)(vlSelfRef.__PVT__a_first_counter))
                                              ? ((IData)(vlSelfRef.__PVT__a_first_counter) 
                                                 - (IData)(1U))
                                              : ((4U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                   >> 2U)))));
            __Vdly__a_first_counter_1 = (7U & ((IData)(vlSelfRef.__PVT__a_first_1)
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelfRef.__PVT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                     >> 2U)))
                                                : ((IData)(vlSelfRef.__PVT__a_first_counter_1) 
                                                   - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__d_first_counter))))) {
        vlSelfRef.__PVT__opcode_1 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode;
        vlSelfRef.__PVT__param_1 = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.__PVT__size_1 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_size;
        vlSelfRef.__PVT__source_1 = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source;
        vlSelfRef.__PVT__sink = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_sink;
        vlSelfRef.__PVT__denied = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                                         >> 2U));
    }
    if (((IData)(vlSelfRef.__PVT___a_first_T_1) & (~ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.__PVT__a_first_counter))))) {
        vlSelfRef.__PVT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelfRef.__PVT__size = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__source = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__address = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelfRef.__PVT__d_first_counter = __Vdly__d_first_counter;
    vlSelfRef.__PVT__inflight = __Vdly__inflight;
    vlSelfRef.__PVT__inflight_opcodes = __Vdly__inflight_opcodes;
    vlSelfRef.__PVT__inflight_sizes = __Vdly__inflight_sizes;
    vlSelfRef.__PVT__watchdog = __Vdly__watchdog;
    vlSelfRef.__PVT__inflight_1 = __Vdly__inflight_1;
    vlSelfRef.__PVT__inflight_sizes_1 = __Vdly__inflight_sizes_1;
    vlSelfRef.__PVT__watchdog_1 = __Vdly__watchdog_1;
    vlSelfRef.__PVT__d_first_counter_1 = __Vdly__d_first_counter_1;
    vlSelfRef.__PVT__d_first_counter_2 = __Vdly__d_first_counter_2;
    vlSelfRef.__PVT__a_first_counter = __Vdly__a_first_counter;
    vlSelfRef.__PVT__a_first_counter_1 = __Vdly__a_first_counter_1;
    vlSelfRef.__PVT__d_first_1 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_1));
    vlSelfRef.__PVT__d_first_2 = (0U == (IData)(vlSelfRef.__PVT__d_first_counter_2));
    vlSelfRef.__PVT__a_first_1 = (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLMonitor_7___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__0(VysyxSoCFull_TLMonitor_7* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLMonitor_7___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___a_first_T_1 = ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)) 
                                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass.auto_node_out_out_a_valid));
    vlSelfRef.__PVT___GEN_1 = ((IData)(vlSelfRef.__PVT___a_first_T_1) 
                               & (0U == (IData)(vlSelfRef.__PVT__a_first_counter_1)));
}
