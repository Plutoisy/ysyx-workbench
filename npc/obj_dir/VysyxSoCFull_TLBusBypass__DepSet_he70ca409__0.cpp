// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLBusBypass.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_51;
    VlWide<5>/*159:0*/ __Vtemp_52;
    VlWide<5>/*159:0*/ __Vtemp_54;
    VlWide<5>/*159:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<5>/*159:0*/ __Vtemp_58;
    VlWide<5>/*159:0*/ __Vtemp_60;
    VlWide<5>/*159:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    // Body
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((IData)(vlSelfRef.__PVT__error__DOT__idle) 
                                  | (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7708: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error: Assertion failed at Error.scala:34\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7708, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7710: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7710, "", false);
    }
    __Vdly__error__DOT__r_counter = vlSelfRef.__PVT__error__DOT__r_counter;
    __Vdly__error__DOT__idle = vlSelfRef.__PVT__error__DOT__idle;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__inflight = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__watchdog = vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__inflight = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U];
    __Vdly__error__DOT__monitor__DOT__watchdog = vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__inflight_1 = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__a_last_counter = vlSelfRef.__PVT__error__DOT__a_last_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__beatsLeft = vlSelfRef.__PVT__error__DOT__beatsLeft;
    __Vdly__bar__DOT__r_counter = vlSelfRef.__PVT__bar__DOT__r_counter;
    __Vdly__bar__DOT__r_counter_3 = vlSelfRef.__PVT__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__stall_counter = vlSelfRef.__PVT__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,27, (IData)(0xfffU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0xfffU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                     & (~ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T)));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                << 3U))))) 
            | (4U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                      << 2U) | (0xfffffffcU & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address) 
                                                  << 2U)))))) 
           | ((2U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                      | (IData)((1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)))) 
                     << 1U)) | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)))));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (5U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0U == (7U & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19) 
                        >> 1U)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__error__DOT__muxState_1)) 
                 | (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[0U] 
        = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
           << 3U);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[1U] 
        = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
           >> 0x1dU);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[2U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[3U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = ((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
           & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (~ (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes, 
                        ((QData)((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)) 
                         << 2U));
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7140: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7140, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7142: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7142, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7146: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7146, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7148: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7148, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7152: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7152, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7154: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7154, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7158: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7158, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7160: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7160, "", false);
    }
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7170: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7170, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7172: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7172, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7176: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7176, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7178: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7178, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7182: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7182, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7184: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7184, "", false);
    }
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7188: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7188, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7190: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7190, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7194: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7194, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7196: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7196, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7210: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7210, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7212: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7212, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7216: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7216, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7218: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7218, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7228: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7228, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7230: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7230, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7234: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7234, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7236: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7236, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7246: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7246, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7248: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7248, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7252: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7252, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7254: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7254, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7258: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7258, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7260: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7260, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7264: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7264, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7266: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7266, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7270: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7270, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7272: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7272, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7276: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7276, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7278: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7278, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7282: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7282, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7284: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7284, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7288: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7288, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7290: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7290, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7300: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7300, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7302: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7302, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7306: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7306, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7308: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7308, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7312: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7312, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7314: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7314, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7318: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7318, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7320: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7320, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7324: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7324, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7326: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7326, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(vlSelfRef.__PVT__error__DOT__muxState_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7330: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7330, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7332: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7332, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7336: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7336, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7338: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7338, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7342: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7342, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7344: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7344, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7348: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7348, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7350: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7350, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7354: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7354, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7356: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7356, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (0U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7361: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7361, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7363: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7363, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (1U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7367: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7367, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7369: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7369, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (2U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7374: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7374, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7376: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7376, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7380: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7380, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7382: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7382, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7386: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7386, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7388: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7388, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7392: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7392, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7394: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7394, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (0U != ((((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                   ^ vlSelfRef.__PVT__error__DOT__monitor__DOT__address[0U]) 
                                  | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[1U]) 
                                 | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[2U]) 
                                | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[3U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7398: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7398, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7400: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7400, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7404: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7404, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7406: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7406, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7410: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7410, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7412: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7412, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7416: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7416, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7418: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7418, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT__muxState_1) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7422: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7422, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7424: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7424, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7429: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7429, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7431: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7431, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    if (VL_UNLIKELY(((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                            | (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7436: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7436, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7438: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7438, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & (~ (((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7444: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7444, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7446: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7446, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7450: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7450, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7452: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7452, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (~ (((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
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
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7458: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7458, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7460: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7460, "", false);
    }
    VL_SHIFTR_WWW(128,128,128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                         != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
                                      >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7465: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7465, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7467: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7467, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid)) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))) 
                        & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7472: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7472, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7474: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7474, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7480: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7480, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7482: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7482, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7487: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7487, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7489: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7489, "", false);
    }
    VL_SHIFTR_WWW(128,128,128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                         != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
                                      >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7494: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7494, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7496: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7496, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7502: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7502, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7504: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7504, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                    & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)))));
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
           != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask));
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
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (0U == (3U & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size) 
                        >> 1U)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (2U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied)) 
                 | (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (1U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (2U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((QData)((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source)) 
           << 2U);
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
           & (6U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode)));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (~ (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6248: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6248, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6250: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6250, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6254: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6254, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6256: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6256, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6260: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6260, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6262: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6262, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6266: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6266, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6268: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6268, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6272: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6272, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6274: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6274, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6278: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6278, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6280: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6280, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6284: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6284, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6286: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6286, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6290: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6290, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6292: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6292, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6296: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6296, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6298: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6298, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6302: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6302, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6304: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6304, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6308: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6308, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6310: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6310, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6314: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6314, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6316: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6316, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6320: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6320, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6322: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6322, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6326: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6326, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6328: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6328, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6332: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6332, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6334: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6334, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6338: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6338, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6340: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6340, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6344: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6344, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6346: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6346, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6350: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6350, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6352: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6352, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6356: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6356, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6358: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6358, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6362: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6362, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6364: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6364, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6368: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6368, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6370: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6370, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6374: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6374, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6376: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6376, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6380: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6380, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6382: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6382, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6386: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6386, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6388: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6388, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6392: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6392, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6394: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6394, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6398: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6398, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6400: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6400, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6404: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6404, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6406: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6406, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6410: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6410, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6412: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6412, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6416: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6416, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6418: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6418, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6422: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6422, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6424: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6424, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6428: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6428, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6430: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6430, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6434: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6434, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6436: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6436, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6440: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6440, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6442: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6442, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6446: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6446, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6448: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6448, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6452: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6452, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6454: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6454, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (3U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6458: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6458, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6460: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6460, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6464: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6464, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6466: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6466, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6470: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6470, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6472: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6472, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6476: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6476, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6478: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6478, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (3U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6482: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6482, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6484: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6484, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6488: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6488, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6490: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6490, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6494: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6494, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6496: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6496, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6500: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6500, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6502: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6502, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6506: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6506, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6508: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6508, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6512: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6512, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6514: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6514, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6518: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6518, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6520: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6520, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6524: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6524, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6526: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6526, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6530: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6530, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6532: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6532, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6536: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6536, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6538: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6538, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6542: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6542, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6544: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6544, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6548: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6548, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6550: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6550, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                         != vlSelfRef.__PVT__bar__DOT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6554: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6554, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6556: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6556, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6560: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6560, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6562: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6562, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6566: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6566, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6568: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6568, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6572: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6572, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6574: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6574, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6578: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6578, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6580: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6580, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6584: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6584, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6586: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6586, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6590: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6590, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6592: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6592, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6597: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6597, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6599: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6599, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight), (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                            | (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6604: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6604, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6606: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6606, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & (~ (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6612: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6612, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6614: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6614, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6618: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6618, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6620: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6620, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                      & (~ (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
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
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6626: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6626, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6628: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6628, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size) 
                         != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6633: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6633, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6635: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6635, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid)) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source))) 
                        & (6U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready)) 
                            | (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6640: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6640, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6642: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6642, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6648: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6648, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6650: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6650, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1), (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6655: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6655, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6657: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6657, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size) 
                         != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6662: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6662, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6664: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6664, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6670: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6670, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6672: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6672, "", false);
    }
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size)));
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 
        ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_a_ready) 
         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter));
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                   & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid));
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3 
        = ((1U & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))
            ? (7U & (~ ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9) 
                        >> 2U))) : 0U);
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3));
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 
        = (0x3fU & (((IData)(vlSelfRef.__PVT__bar__DOT__flight) 
                     + (3U & (((((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                                 & (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first)) 
                                & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                                   >> 2U)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                                                 >> 1U))) 
                              + ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) 
                                 & (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first))))) 
                    - ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                       & ((1U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3)) 
                          | (0U == (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3))))));
    if (((IData)(vlSelfRef.__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(__PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10)))) {
        vlSelfRef.__PVT__bar__DOT__bypass_reg = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__idle = 1U;
        __Vdly__error__DOT__r_counter = 0U;
        vlSelfRef.__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelfRef.__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        __Vdly__error__DOT__a_last_counter = 0U;
        vlSelfRef.__PVT__error__DOT__a_last_counter 
            = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = 0U;
        vlSelfRef.__PVT__error__DOT__state_1 = 0U;
        vlSelfRef.__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        vlSelfRef.__PVT__bar__DOT__flight = 0U;
        __Vdly__bar__DOT__r_counter = 0U;
        __Vdly__bar__DOT__r_counter_3 = 0U;
        __Vdly__bar__DOT__stall_counter = 0U;
    } else {
        vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1 
            = ((IData)(vlSelfRef.__PVT__error__DOT__da_ready) 
               & (IData)(vlSelfRef.__PVT__error__DOT__winner_1));
        __Vdly__error__DOT__idle = ((~ ((IData)(vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1) 
                                        & (4U == (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode)))) 
                                    & (IData)(vlSelfRef.__PVT__error__DOT__idle));
        if (vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1) {
            __Vdly__error__DOT__r_counter = (0x3ffU 
                                             & ((IData)(vlSelfRef.__PVT__error__DOT__da_first)
                                                 ? (IData)(vlSelfRef.__PVT__error__DOT__r_beats1)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__error__DOT__r_counter) 
                                                 - (IData)(1U))));
        }
        vlSelfRef.__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelfRef.__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        if (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready) 
             & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid))) {
            __Vdly__error__DOT__a_last_counter = (0x3ffU 
                                                  & ((0U 
                                                      == (IData)(vlSelfRef.__PVT__error__DOT__a_last_counter))
                                                      ? (IData)(vlSelfRef.__PVT__error__DOT__a_last_beats1)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__error__DOT__a_last_counter) 
                                                      - (IData)(1U))));
        }
        vlSelfRef.__PVT__error__DOT__a_last_counter 
            = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = (0x3ffU & (
                                                   ((IData)(vlSelfRef.__PVT__error__DOT__idle_1) 
                                                    & (IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__error__DOT__winner_1) 
                                                     & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x3ffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__error__DOT__beatsLeft) 
                                                    - 
                                                    ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
                                                     & (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid)))));
        if ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft))) {
            vlSelfRef.__PVT__error__DOT__state_1 = vlSelfRef.__PVT__error__DOT__winner_1;
        }
        vlSelfRef.__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        if (__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) {
            vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__bar__DOT__r_counter = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first)
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                    >> 2U)))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__bar__DOT__r_counter) 
                                                  - (IData)(1U))));
            __Vdly__bar__DOT__stall_counter = (7U & 
                                               ((IData)(vlSelfRef.__PVT__bar__DOT__stall_first)
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                   >> 2U)))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__bar__DOT__stall_counter) 
                                                 - (IData)(1U))));
        }
        if (__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) {
            __Vdly__bar__DOT__r_counter_3 = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first)
                                                    ? (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3) 
                                                    - (IData)(1U))));
        }
        vlSelfRef.__PVT__bar__DOT__flight = __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    }
    vlSelfRef.__PVT__bar__DOT__r_counter = __Vdly__bar__DOT__r_counter;
    vlSelfRef.__PVT__bar__DOT__r_counter_3 = __Vdly__bar__DOT__r_counter_3;
    vlSelfRef.__PVT__bar__DOT__stall_counter = __Vdly__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
           & (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid));
    if (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__denied 
            = vlSelfRef.__PVT__error__DOT__muxState_1;
    }
    if (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[0U] 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[1U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[2U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[3U] = 0U;
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready) 
           & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid));
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
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[0U] 
            = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
               << 3U);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[1U] 
            = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
               >> 0x1dU);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[2U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[3U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[4U] = 0U;
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        __Vtemp_18[0U] = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                          << 2U);
        __Vtemp_18[1U] = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                          >> 0x1eU);
        __Vtemp_18[2U] = 0U;
        __Vtemp_18[3U] = 0U;
        __Vtemp_18[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_19, __Vtemp_16, __Vtemp_18);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_19[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_19[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_19[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_19[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_19[4U]);
        if (vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0) {
            __Vtemp_21[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                                    << 1U));
            __Vtemp_29[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_21[0U] = 0U;
            __Vtemp_29[0U] = 0U;
        }
        __Vtemp_21[1U] = 0U;
        __Vtemp_21[2U] = 0U;
        __Vtemp_21[3U] = 0U;
        __Vtemp_21[4U] = 0U;
        __Vtemp_23[0U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                          << 2U);
        __Vtemp_23[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                          >> 0x1eU);
        __Vtemp_23[2U] = 0U;
        __Vtemp_23[3U] = 0U;
        __Vtemp_23[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_24, __Vtemp_21, __Vtemp_23);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_24[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_24[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_24[4U]);
        __Vtemp_26[0U] = 0xffU;
        __Vtemp_26[1U] = 0U;
        __Vtemp_26[2U] = 0U;
        __Vtemp_26[3U] = 0U;
        __Vtemp_26[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_27, __Vtemp_26, vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_27[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_27[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_27[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_27[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_27[4U]);
        __Vtemp_29[1U] = 0U;
        __Vtemp_29[2U] = 0U;
        __Vtemp_29[3U] = 0U;
        __Vtemp_29[4U] = 0U;
        __Vtemp_31[0U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                          << 3U);
        __Vtemp_31[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                          >> 0x1dU);
        __Vtemp_31[2U] = 0U;
        __Vtemp_31[3U] = 0U;
        __Vtemp_31[4U] = 0U;
        VL_SHIFTL_WWW(132,132,132, __Vtemp_32, __Vtemp_29, __Vtemp_31);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_32[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_32[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_32[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_32[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (0xfU & __Vtemp_32[4U]);
        __Vtemp_34[0U] = 0xffU;
        __Vtemp_34[1U] = 0U;
        __Vtemp_34[2U] = 0U;
        __Vtemp_34[3U] = 0U;
        __Vtemp_34[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_35, __Vtemp_34, vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_35[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_35[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_35[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_35[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_35[4U]);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
        if (__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))
                              ? ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter) 
                                 - (IData)(1U)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                                    ? 
                                                   (~ 
                                                    (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                                     >> 2U))
                                                    : 0U)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__error__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__error__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                               ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                               : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))
                                             : 0U))));
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
                | (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                ? 0U : ((IData)(1U) + vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog));
        __Vdly__error__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U]
                      : 0U)));
        if (vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,27, (IData)(0xfffU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__error__DOT__monitor__DOT__a_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))
                              ? ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter) 
                                 - (IData)(1U)) : (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                                     >> 2U)))));
            __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                  ? 0U : (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                             >> 2U)))
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_51[0U] = 0xfU;
        __Vtemp_51[1U] = 0U;
        __Vtemp_51[2U] = 0U;
        __Vtemp_51[3U] = 0U;
        __Vtemp_51[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_52, __Vtemp_51, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_52[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_52[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_52[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_52[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_52[4U]);
        if (vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0) {
            __Vtemp_54[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                                    << 1U));
            __Vtemp_60[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_54[0U] = 0U;
            __Vtemp_60[0U] = 0U;
        }
        __Vtemp_54[1U] = 0U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
        __Vtemp_54[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_55, __Vtemp_54, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_55[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_55[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_55[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_55[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_55[4U]);
        __Vtemp_57[0U] = 0xfU;
        __Vtemp_57[1U] = 0U;
        __Vtemp_57[2U] = 0U;
        __Vtemp_57[3U] = 0U;
        __Vtemp_57[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_58, __Vtemp_57, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_58[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_58[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_58[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_58[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_58[4U]);
        __Vtemp_60[1U] = 0U;
        __Vtemp_60[2U] = 0U;
        __Vtemp_60[3U] = 0U;
        __Vtemp_60[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_61, __Vtemp_60, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_61[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_61[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_61[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_61[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_61[4U]);
        __Vtemp_63[0U] = 0xfU;
        __Vtemp_63[1U] = 0U;
        __Vtemp_63[2U] = 0U;
        __Vtemp_63[3U] = 0U;
        __Vtemp_63[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_64, __Vtemp_63, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_64[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_64[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_64[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_64[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_64[4U]);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode)));
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode)));
        if (__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((1U 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))
                                                ? (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                    >> 2U))
                                                : 0U)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__bar__DOT__monitor__DOT__inflight = 
            (0xffffU & (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight) 
                         | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                             : 0U)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                           ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source))
                                           : 0U))));
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__watchdog = 
            (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
              | (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
              ? 0U : ((IData)(1U) + vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog));
        __Vdly__bar__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source))
                      : 0U)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                      : 0ULL)));
        if (vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter 
                = (7U & ((0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))
                          ? ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                ? 0U
                                                : (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                    >> 2U)))));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__sink 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_sink;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__denied 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied;
    }
    if (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelfRef.__PVT__error__DOT__da_first = (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter));
    vlSelfRef.__PVT__error__DOT__idle_1 = (0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft));
    vlSelfRef.error__DOT____VdfgRegularize_hed1f7a03_0_3 
        = ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft)) 
           | (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter));
    vlSelfRef.__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight 
        = __Vdly__error__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog 
        = __Vdly__error__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1 
        = __Vdly__error__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1 
        = __Vdly__error__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight 
        = __Vdly__bar__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog 
        = __Vdly__bar__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1 
        = __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__error__DOT__da_bits_opcode = (
                                                   (0x17U 
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
    vlSelfRef.__PVT__error__DOT__a_last_beats1 = ((4U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & (~ 
                                                      (0x3ffU 
                                                       & (((IData)(0xfffU) 
                                                           << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
                                                          >> 2U)))));
    vlSelfRef.__PVT__error__DOT__r_beats1 = ((1U & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode))
                                              ? (0x3ffU 
                                                 & (~ 
                                                    (0x3ffU 
                                                     & (((IData)(0xfffU) 
                                                         << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
                                                        >> 2U))))
                                              : 0U);
    vlSelfRef.__PVT__error__DOT__a_last = ((1U == (IData)(vlSelfRef.__PVT__error__DOT__a_last_counter)) 
                                           | (0U == (IData)(vlSelfRef.__PVT__error__DOT__a_last_beats1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ bar__DOT____VdfgRegularize_h7ef8c9b1_0_1;
    bar__DOT____VdfgRegularize_h7ef8c9b1_0_1 = 0;
    // Body
    vlSelfRef.__PVT__bar__DOT__bypass = ((IData)(vlSelfRef.__PVT__bar__DOT__in_reset)
                                          ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass)
                                          : (IData)(vlSelfRef.__PVT__bar__DOT__bypass_reg));
    vlSelfRef.__PVT__bar__DOT__stall = (((IData)(vlSelfRef.__PVT__bar__DOT__bypass) 
                                         != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass)) 
                                        & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter)));
    bar__DOT____VdfgRegularize_h7ef8c9b1_0_1 = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__stall)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.auto_node_out_out_a_valid = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__bypass)) 
                                           & (IData)(bar__DOT____VdfgRegularize_h7ef8c9b1_0_1));
    vlSelfRef.__PVT___bar_auto_out_0_a_valid = ((IData)(bar__DOT____VdfgRegularize_h7ef8c9b1_0_1) 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__bypass));
    vlSelfRef.__PVT__error__DOT__winner_1 = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
                                             & ((IData)(vlSelfRef.__PVT__error__DOT__a_last) 
                                                & (IData)(vlSelfRef.__PVT__error__DOT__idle)));
    vlSelfRef.__PVT__error__DOT__muxState_1 = ((0U 
                                                == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft))
                                                ? (IData)(vlSelfRef.__PVT__error__DOT__winner_1)
                                                : (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.__PVT__error__DOT__nodeIn_d_valid = ((IData)(vlSelfRef.error__DOT____VdfgRegularize_hed1f7a03_0_3) 
                                                   & (IData)(vlSelfRef.__PVT__error__DOT__winner_1));
    if (vlSelfRef.__PVT__error__DOT__muxState_1) {
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24 
            = vlSelfRef.__PVT__error__DOT__da_bits_opcode;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3 
            = (1U & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode));
    } else {
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3 = 0U;
    }
    if (vlSelfRef.__PVT__bar__DOT__bypass) {
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param = 0U;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_sink = 0U;
        if (vlSelfRef.__PVT__error__DOT__muxState_1) {
            vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied = 1U;
            vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size 
                = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        } else {
            vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied = 0U;
            vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size = 0U;
        }
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid = vlSelfRef.__PVT__error__DOT__nodeIn_d_valid;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24;
    } else {
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param 
            = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_sink 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_sink;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied 
            = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                     >> 2U));
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_size;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_valid;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_source;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT___sourceD_io_d_bits_opcode;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_node_out_out_d_ready = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__bypass)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready));
    vlSelfRef.__PVT___bar_auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__bypass));
    vlSelfRef.__PVT__error__DOT__da_ready = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
                                             & (IData)(vlSelfRef.error__DOT____VdfgRegularize_hed1f7a03_0_3));
    vlSelfRef.__PVT__error__DOT__nodeIn_a_ready = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__error__DOT__a_last)) 
                                                      | ((IData)(vlSelfRef.__PVT__error__DOT__da_ready) 
                                                         & (((1U 
                                                              == (IData)(vlSelfRef.__PVT__error__DOT__r_counter)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.__PVT__error__DOT__r_beats1))) 
                                                            & (IData)(vlSelfRef.__PVT__error__DOT__idle)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready) 
           & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__nodeIn_a_ready = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__bar__DOT__stall)) 
                                                    & ((IData)(vlSelfRef.__PVT__bar__DOT__bypass)
                                                        ? (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready)
                                                        : 
                                                       (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_a_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_23;
    VlWide<5>/*159:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<5>/*159:0*/ __Vtemp_34;
    VlWide<5>/*159:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_51;
    VlWide<5>/*159:0*/ __Vtemp_52;
    VlWide<5>/*159:0*/ __Vtemp_54;
    VlWide<5>/*159:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<5>/*159:0*/ __Vtemp_58;
    VlWide<5>/*159:0*/ __Vtemp_60;
    VlWide<5>/*159:0*/ __Vtemp_61;
    VlWide<5>/*159:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_64;
    // Body
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((IData)(vlSelfRef.__PVT__error__DOT__idle) 
                                  | (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7708: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error: Assertion failed at Error.scala:34\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7708, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7710: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7710, "", false);
    }
    __Vdly__error__DOT__r_counter = vlSelfRef.__PVT__error__DOT__r_counter;
    __Vdly__error__DOT__idle = vlSelfRef.__PVT__error__DOT__idle;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter;
    __Vdly__bar__DOT__monitor__DOT__inflight = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight;
    __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes;
    __Vdly__bar__DOT__monitor__DOT__watchdog = vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog;
    __Vdly__bar__DOT__monitor__DOT__inflight_1 = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1;
    __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1;
    __Vdly__bar__DOT__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__monitor__DOT__d_first_counter 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter;
    __Vdly__error__DOT__monitor__DOT__inflight = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight;
    __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U];
    __Vdly__error__DOT__monitor__DOT__watchdog = vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog;
    __Vdly__error__DOT__monitor__DOT__inflight_1 = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1;
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    __Vdly__error__DOT__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2;
    __Vdly__error__DOT__a_last_counter = vlSelfRef.__PVT__error__DOT__a_last_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter;
    __Vdly__error__DOT__monitor__DOT__a_first_counter 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter;
    __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
        = vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1;
    __Vdly__error__DOT__beatsLeft = vlSelfRef.__PVT__error__DOT__beatsLeft;
    __Vdly__bar__DOT__r_counter = vlSelfRef.__PVT__bar__DOT__r_counter;
    __Vdly__bar__DOT__r_counter_3 = vlSelfRef.__PVT__bar__DOT__r_counter_3;
    __Vdly__bar__DOT__stall_counter = vlSelfRef.__PVT__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0x7ffffffU & VL_SHIFTL_III(27,27,27, (IData)(0xfffU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0xfffU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                     & (~ __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T)));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                << 3U))))) 
            | (4U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                      << 2U) | (0xfffffffcU & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                << 1U) 
                                               & ((~ vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address) 
                                                  << 2U)))))) 
           | ((2U & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                      | (IData)((1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address)))) 
                     << 1U)) | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address)))));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (5U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (0U == (7U & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19) 
                        >> 1U)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__error__DOT__muxState_1)) 
                 | (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[0U] 
        = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
           << 3U);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[1U] 
        = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
           >> 0x1dU);
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[2U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26[3U] = 0U;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = ((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
           & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
            & (~ (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19;
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes, 
                        ((QData)((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)) 
                         << 2U));
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7140: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7140, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7142: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7142, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7146: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7146, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7148: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7148, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7152: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7152, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7154: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7154, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7158: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7158, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7160: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7160, "", false);
    }
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7170: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7170, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7172: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7172, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (7U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7176: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7176, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7178: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7178, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7182: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7182, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7184: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7184, "", false);
    }
    if (VL_UNLIKELY((__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7188: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7188, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7190: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7190, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7194: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7194, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7196: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7196, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7210: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7210, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7212: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7212, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7216: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7216, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7218: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7218, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7228: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7228, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7230: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7230, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7234: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7234, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7236: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7236, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7246: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7246, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7248: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7248, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7252: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7252, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7254: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7254, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7258: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7258, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7260: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7260, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7264: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7264, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7266: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7266, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7270: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7270, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7272: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7272, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7276: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7276, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7278: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7278, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7282: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7282, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7284: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7284, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7288: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7288, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7290: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7290, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7300: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7300, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7302: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7302, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7306: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7306, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7308: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7308, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7312: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7312, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7314: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7314, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7318: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7318, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7320: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7320, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7324: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7324, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7326: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7326, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(vlSelfRef.__PVT__error__DOT__muxState_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7330: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7330, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7332: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7332, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7336: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7336, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7338: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7338, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7342: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7342, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7344: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7344, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7348: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7348, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7350: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7350, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7354: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7354, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7356: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7356, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (0U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7361: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7361, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7363: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7363, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (1U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7367: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7367, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7369: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7369, "", false);
    }
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid) 
                        & (2U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7374: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7374, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7376: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7376, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7380: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7380, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7382: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7382, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7386: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7386, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7388: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7388, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7392: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7392, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7394: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7394, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (0U != ((((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                   ^ vlSelfRef.__PVT__error__DOT__monitor__DOT__address[0U]) 
                                  | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[1U]) 
                                 | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[2U]) 
                                | vlSelfRef.__PVT__error__DOT__monitor__DOT__address[3U])))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7398: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7398, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7400: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7400, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7404: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7404, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7406: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7406, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7410: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7410, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7412: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7412, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7416: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7416, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7418: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7418, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & ((IData)(vlSelfRef.__PVT__error__DOT__muxState_1) 
                         != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7422: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7422, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7424: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7424, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7429: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7429, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7431: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7431, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    if (VL_UNLIKELY(((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                            | (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7436: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7436, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7438: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7438, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & (~ (((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7444: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7444, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7446: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7446, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7450: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7450, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7452: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7452, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & (~ (((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
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
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7458: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7458, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7460: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7460, "", false);
    }
    VL_SHIFTR_WWW(128,128,128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                         != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1[0U] 
                                      >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7465: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7465, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7467: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7467, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid)) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))) 
                        & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready)) 
                            | (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7472: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7472, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7474: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7474, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7480: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7480, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7482: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7482, "", false);
    }
    __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16)));
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7487: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7487, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7489: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7489, "", false);
    }
    VL_SHIFTR_WWW(128,128,128, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1, vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1, __PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26);
    if (VL_UNLIKELY((((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & ((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                         != (0x7fU & (__PVT__error__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1[0U] 
                                      >> 1U))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7494: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7494, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7496: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7496, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:7502: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:33:14)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7502, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:7504: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 7504, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6 
        = (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                    & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address)))));
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
           != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask));
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
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (0U == (3U & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size) 
                        >> 1U)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (2U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied)) 
                 | (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (1U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (2U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((QData)((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source)) 
           << 2U);
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
           & (6U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode)));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
            & (~ (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6248: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6248, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6250: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6250, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6254: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6254, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6256: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6256, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6260: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6260, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6262: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6262, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6266: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6266, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6268: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6268, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6272: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6272, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6274: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6274, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6278: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6278, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6280: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6280, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6284: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6284, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6286: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6286, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6290: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6290, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6292: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6292, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6296: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6296, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6298: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6298, "", false);
    }
    if (VL_UNLIKELY((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6302: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6302, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6304: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6304, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6308: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6308, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6310: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6310, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6314: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6314, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6316: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6316, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6320: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6320, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6322: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6322, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_12) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6326: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6326, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6328: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6328, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6332: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6332, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6334: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6334, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6338: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6338, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6340: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6340, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6344: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6344, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6346: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6346, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6350: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6350, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6352: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6352, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6356: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6356, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6358: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6358, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6362: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6362, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6364: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6364, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6368: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6368, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6370: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6370, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6374: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6374, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6376: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6376, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6380: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6380, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6382: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6382, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_16)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6386: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6386, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6388: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6388, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6392: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6392, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6394: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6394, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6398: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6398, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6400: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6400, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_11)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6404: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6404, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6406: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6406, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (0U != (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6410: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6410, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6412: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6412, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_19) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_13))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6416: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6416, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6418: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6418, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6422: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6422, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6424: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6424, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6428: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6428, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6430: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6430, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6434: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6434, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6436: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6436, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6440: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6440, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6442: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6442, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6446: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6446, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6448: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6448, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6452: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6452, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6454: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6454, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (3U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6458: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6458, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6460: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6460, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6464: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6464, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6466: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6466, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6470: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6470, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6472: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6472, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_21))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6476: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6476, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6478: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6478, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (3U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6482: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6482, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6484: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6484, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6488: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6488, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6490: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6490, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6494: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6494, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6496: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6496, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6500: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6500, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6502: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6502, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6506: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6506, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6508: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6508, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6512: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6512, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6514: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6514, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_25)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6518: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6518, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6520: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6520, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6524: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6524, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6526: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6526, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6530: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6530, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6532: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6532, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6536: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6536, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6538: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6538, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6542: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6542, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6544: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6544, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6548: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6548, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6550: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6550, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_29) 
                      & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                         != vlSelfRef.__PVT__bar__DOT__monitor__DOT__address))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6554: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6554, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6556: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6556, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6560: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6560, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6562: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6562, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6566: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6566, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6568: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6568, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6572: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6572, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6574: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6574, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6578: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6578, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6580: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6580, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_sink) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__sink)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6584: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6584, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6586: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6586, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6590: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6590, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6592: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6592, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6597: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6597, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6599: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6599, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight), (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source)));
    if (VL_UNLIKELY(((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                            | (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6604: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6604, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6606: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6606, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & (~ (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6612: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6612, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6614: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6614, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6618: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6618, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6620: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6620, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                      & (~ (((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
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
                                  : 0U)) | ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6626: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6626, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6628: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6628, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_35) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size) 
                         != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6633: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6633, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6635: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6635, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid)) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source))) 
                        & (6U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready)) 
                            | (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_a_ready))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6640: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6640, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6642: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6642, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6648: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6648, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6650: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6650, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1), (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source)));
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & (~ (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_39)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6655: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6655, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6657: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6657, "", false);
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1, __PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_31);
    if (VL_UNLIKELY((((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                      & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size) 
                         != (7U & (IData)((__PVT__bar__DOT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6662: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6662, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6664: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6664, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6670: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/rocket-chip/src/main/scala/devices/tilelink/BusBypass.scala:32:12)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6670, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6672: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.bar.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6672, "", false);
    }
    __PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9 
        = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size)));
    __PVT__bar__DOT__unnamedblk1__DOT___stall_T_1 = 
        ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_a_ready) 
         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter));
    __PVT__bar__DOT__unnamedblk1__DOT___d_dec_T = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                   & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid));
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3 
        = ((1U & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))
            ? (7U & (~ ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___rbeats1_decode_T_9) 
                        >> 2U))) : 0U);
    vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3));
    __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10 
        = (0x3fU & (((IData)(vlSelfRef.__PVT__bar__DOT__flight) 
                     + (3U & (((((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                                 & (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first)) 
                                & ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                                   >> 2U)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode) 
                                                 >> 1U))) 
                              + ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) 
                                 & (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first))))) 
                    - ((IData)(__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) 
                       & ((1U == (IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3)) 
                          | (0U == (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3))))));
    if (((IData)(vlSelfRef.__PVT__bar__DOT__in_reset) 
         | (0U == (IData)(__PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10)))) {
        vlSelfRef.__PVT__bar__DOT__bypass_reg = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__error__DOT__idle = 1U;
        __Vdly__error__DOT__r_counter = 0U;
        vlSelfRef.__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelfRef.__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        __Vdly__error__DOT__a_last_counter = 0U;
        vlSelfRef.__PVT__error__DOT__a_last_counter 
            = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = 0U;
        vlSelfRef.__PVT__error__DOT__state_1 = 0U;
        vlSelfRef.__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        vlSelfRef.__PVT__bar__DOT__flight = 0U;
        __Vdly__bar__DOT__r_counter = 0U;
        __Vdly__bar__DOT__r_counter_3 = 0U;
        __Vdly__bar__DOT__stall_counter = 0U;
    } else {
        vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1 
            = ((IData)(vlSelfRef.__PVT__error__DOT__da_ready) 
               & (IData)(vlSelfRef.__PVT__error__DOT__winner_1));
        __Vdly__error__DOT__idle = ((~ ((IData)(vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1) 
                                        & (4U == (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode)))) 
                                    & (IData)(vlSelfRef.__PVT__error__DOT__idle));
        if (vlSelfRef.__PVT__error__DOT__unnamedblk1__DOT___GEN_1) {
            __Vdly__error__DOT__r_counter = (0x3ffU 
                                             & ((IData)(vlSelfRef.__PVT__error__DOT__da_first)
                                                 ? (IData)(vlSelfRef.__PVT__error__DOT__r_beats1)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__error__DOT__r_counter) 
                                                 - (IData)(1U))));
        }
        vlSelfRef.__PVT__error__DOT__r_counter = __Vdly__error__DOT__r_counter;
        vlSelfRef.__PVT__error__DOT__idle = __Vdly__error__DOT__idle;
        if (((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready) 
             & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid))) {
            __Vdly__error__DOT__a_last_counter = (0x3ffU 
                                                  & ((0U 
                                                      == (IData)(vlSelfRef.__PVT__error__DOT__a_last_counter))
                                                      ? (IData)(vlSelfRef.__PVT__error__DOT__a_last_beats1)
                                                      : 
                                                     ((IData)(vlSelfRef.__PVT__error__DOT__a_last_counter) 
                                                      - (IData)(1U))));
        }
        vlSelfRef.__PVT__error__DOT__a_last_counter 
            = __Vdly__error__DOT__a_last_counter;
        __Vdly__error__DOT__beatsLeft = (0x3ffU & (
                                                   ((IData)(vlSelfRef.__PVT__error__DOT__idle_1) 
                                                    & (IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready))
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__error__DOT__winner_1) 
                                                     & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x3ffU 
                                                      & (((IData)(0xfffU) 
                                                          << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__error__DOT__beatsLeft) 
                                                    - 
                                                    ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
                                                     & (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid)))));
        if ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft))) {
            vlSelfRef.__PVT__error__DOT__state_1 = vlSelfRef.__PVT__error__DOT__winner_1;
        }
        vlSelfRef.__PVT__error__DOT__beatsLeft = __Vdly__error__DOT__beatsLeft;
        if (__PVT__bar__DOT__unnamedblk1__DOT___stall_T_1) {
            vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__bar__DOT__r_counter = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__a_first)
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                    >> 2U)))
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__bar__DOT__r_counter) 
                                                  - (IData)(1U))));
            __Vdly__bar__DOT__stall_counter = (7U & 
                                               ((IData)(vlSelfRef.__PVT__bar__DOT__stall_first)
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__unnamedblk2__DOT___stall_beats1_decode_T) 
                                                   >> 2U)))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__bar__DOT__stall_counter) 
                                                 - (IData)(1U))));
        }
        if (__PVT__bar__DOT__unnamedblk1__DOT___d_dec_T) {
            __Vdly__bar__DOT__r_counter_3 = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__d_first)
                                                    ? (IData)(vlSelfRef.__PVT__bar__DOT__unnamedblk1__DOT__r_beats1_3)
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__r_counter_3) 
                                                    - (IData)(1U))));
        }
        vlSelfRef.__PVT__bar__DOT__flight = __PVT__bar__DOT__unnamedblk1__DOT___next_flight_T_10;
    }
    vlSelfRef.__PVT__bar__DOT__r_counter = __Vdly__bar__DOT__r_counter;
    vlSelfRef.__PVT__bar__DOT__r_counter_3 = __Vdly__bar__DOT__r_counter_3;
    vlSelfRef.__PVT__bar__DOT__stall_counter = __Vdly__bar__DOT__stall_counter;
    __PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
           & (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_d_valid));
    if (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__size_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__source_1 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__denied 
            = vlSelfRef.__PVT__error__DOT__muxState_1;
    }
    if (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__error__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[0U] 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[1U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[2U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__address[3U] = 0U;
    }
    __PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready) 
           & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid));
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
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[0U] 
            = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
               << 3U);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[1U] 
            = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
               >> 0x1dU);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[2U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[3U] = 0U;
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37[4U] = 0U;
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        __Vtemp_18[0U] = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                          << 2U);
        __Vtemp_18[1U] = ((IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16) 
                          >> 0x1eU);
        __Vtemp_18[2U] = 0U;
        __Vtemp_18[3U] = 0U;
        __Vtemp_18[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_19, __Vtemp_16, __Vtemp_18);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_19[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_19[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_19[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_19[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_19[4U]);
        if (vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0) {
            __Vtemp_21[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                                    << 1U));
            __Vtemp_29[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_21[0U] = 0U;
            __Vtemp_29[0U] = 0U;
        }
        __Vtemp_21[1U] = 0U;
        __Vtemp_21[2U] = 0U;
        __Vtemp_21[3U] = 0U;
        __Vtemp_21[4U] = 0U;
        __Vtemp_23[0U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                          << 2U);
        __Vtemp_23[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                          >> 0x1eU);
        __Vtemp_23[2U] = 0U;
        __Vtemp_23[3U] = 0U;
        __Vtemp_23[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_24, __Vtemp_21, __Vtemp_23);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_24[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_24[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_24[4U]);
        __Vtemp_26[0U] = 0xffU;
        __Vtemp_26[1U] = 0U;
        __Vtemp_26[2U] = 0U;
        __Vtemp_26[3U] = 0U;
        __Vtemp_26[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_27, __Vtemp_26, vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_27[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_27[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_27[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_27[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_27[4U]);
        __Vtemp_29[1U] = 0U;
        __Vtemp_29[2U] = 0U;
        __Vtemp_29[3U] = 0U;
        __Vtemp_29[4U] = 0U;
        __Vtemp_31[0U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                          << 3U);
        __Vtemp_31[1U] = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                          >> 0x1dU);
        __Vtemp_31[2U] = 0U;
        __Vtemp_31[3U] = 0U;
        __Vtemp_31[4U] = 0U;
        VL_SHIFTL_WWW(132,132,132, __Vtemp_32, __Vtemp_29, __Vtemp_31);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_32[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_32[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_32[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_32[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (0xfU & __Vtemp_32[4U]);
        __Vtemp_34[0U] = 0xffU;
        __Vtemp_34[1U] = 0U;
        __Vtemp_34[2U] = 0U;
        __Vtemp_34[3U] = 0U;
        __Vtemp_34[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_35, __Vtemp_34, vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_37);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_35[0U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_35[1U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_35[2U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_35[3U];
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_35[4U]);
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38 
            = (((IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24)));
        if (__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0x7ffffffU & ((IData)(0xfffU) << (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter))
                              ? ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter) 
                                 - (IData)(1U)) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                                    ? 
                                                   (~ 
                                                    (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                                     >> 2U))
                                                    : 0U)));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_1 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__d_first_counter_2 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24))
                                  ? (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                                        >> 2U)) : 0U)
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            __Vdly__error__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__error__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__error__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                               ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                               : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))
                                             : 0U))));
        __Vdly__error__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U] 
            = ((vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
                | ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0)
                    ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U]
                    : 0U)) & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_36)
                                  ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U]
                                  : 0U)));
        __Vdly__error__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
                | (IData)(__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                ? 0U : ((IData)(1U) + vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog));
        __Vdly__error__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16))
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U]
                      : 0U)));
        __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
            = (vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
               & (~ ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38)
                      ? vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U]
                      : 0U)));
        if (vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,27, (IData)(0xfffU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__error__DOT__monitor__DOT__a_first_counter 
                = (0x3ffU & ((0U != (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter))
                              ? ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter) 
                                 - (IData)(1U)) : (
                                                   (4U 
                                                    & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                    ? 0U
                                                    : 
                                                   (~ 
                                                    (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                                     >> 2U)))));
            __Vdly__error__DOT__monitor__DOT__a_first_counter_1 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                  ? 0U : (~ (vlSelfRef.__PVT__error__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                                             >> 2U)))
                              : ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[0U] 
            = ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source) 
               << 2U);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[1U] 
            = ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[2U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[3U] = 0U;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42[4U] = 0U;
        __Vtemp_51[0U] = 0xfU;
        __Vtemp_51[1U] = 0U;
        __Vtemp_51[2U] = 0U;
        __Vtemp_51[3U] = 0U;
        __Vtemp_51[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_52, __Vtemp_51, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_52[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_52[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_52[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_52[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_52[4U]);
        if (vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0) {
            __Vtemp_54[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                                    << 1U));
            __Vtemp_60[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                    << 1U));
        } else {
            __Vtemp_54[0U] = 0U;
            __Vtemp_60[0U] = 0U;
        }
        __Vtemp_54[1U] = 0U;
        __Vtemp_54[2U] = 0U;
        __Vtemp_54[3U] = 0U;
        __Vtemp_54[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_55, __Vtemp_54, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_55[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_55[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_55[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_55[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_55[4U]);
        __Vtemp_57[0U] = 0xfU;
        __Vtemp_57[1U] = 0U;
        __Vtemp_57[2U] = 0U;
        __Vtemp_57[3U] = 0U;
        __Vtemp_57[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_58, __Vtemp_57, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_58[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_58[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_58[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_58[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_58[4U]);
        __Vtemp_60[1U] = 0U;
        __Vtemp_60[2U] = 0U;
        __Vtemp_60[3U] = 0U;
        __Vtemp_60[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_61, __Vtemp_60, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_61[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_61[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_61[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_61[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_61[4U]);
        __Vtemp_63[0U] = 0xfU;
        __Vtemp_63[1U] = 0U;
        __Vtemp_63[2U] = 0U;
        __Vtemp_63[3U] = 0U;
        __Vtemp_63[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_64, __Vtemp_63, vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_42);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_64[0U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_64[1U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_64[2U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_64[3U];
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_64[4U]);
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode)));
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43 
            = (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode)));
        if (__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((1U 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))
                                                ? (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                    >> 2U))
                                                : 0U)));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode))
                              ? (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__bar__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1);
        }
        __Vdly__bar__DOT__monitor__DOT__inflight = 
            (0xffffU & (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight) 
                         | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                             ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                             : 0U)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                           ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source))
                                           : 0U))));
        __Vdly__bar__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0)
                    ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                    ? (((QData)((IData)(
                                                        vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                    : 0ULL)));
        __Vdly__bar__DOT__monitor__DOT__watchdog = 
            (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
              | (IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
              ? 0U : ((IData)(1U) + vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog));
        __Vdly__bar__DOT__monitor__DOT__inflight_1 
            = ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1) 
               & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source))
                      : 0U)));
        __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1 
            = (vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
               & (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_43)
                      ? (((QData)((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                      : 0ULL)));
        if (vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter 
                = (7U & ((0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))
                          ? ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                ? 0U
                                                : (~ 
                                                   ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                    >> 2U)))));
            __Vdly__bar__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
    }
    if (((IData)(__PVT__bar__DOT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode_1 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__param_1 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__size_1 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__source_1 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__sink 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_sink;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__denied 
            = vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied;
    }
    if (((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__bar__DOT__monitor__DOT__address 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelfRef.__PVT__error__DOT__da_first = (0U == (IData)(vlSelfRef.__PVT__error__DOT__r_counter));
    vlSelfRef.__PVT__error__DOT__idle_1 = (0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft));
    vlSelfRef.error__DOT____VdfgRegularize_hed1f7a03_0_3 
        = ((0U == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft)) 
           | (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.__PVT__bar__DOT__stall_first = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter));
    vlSelfRef.__PVT__bar__DOT__in_reset = vlSymsp->TOP.reset;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight 
        = __Vdly__error__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__error__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[0U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[1U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[2U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes[3U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog 
        = __Vdly__error__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_1 
        = __Vdly__error__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = __Vdly__error__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlSelfRef.__PVT__error__DOT__monitor__DOT__watchdog_1 
        = __Vdly__error__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__error__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__error__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight 
        = __Vdly__bar__DOT__monitor__DOT__inflight;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_opcodes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog 
        = __Vdly__bar__DOT__monitor__DOT__watchdog;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__inflight_sizes_1 
        = __Vdly__bar__DOT__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__watchdog_1 
        = __Vdly__bar__DOT__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2 
        = __Vdly__bar__DOT__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1 
        = __Vdly__bar__DOT__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__error__DOT__da_bits_opcode = (
                                                   (0x17U 
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
    vlSelfRef.__PVT__error__DOT__a_last_beats1 = ((4U 
                                                   & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & (~ 
                                                      (0x3ffU 
                                                       & (((IData)(0xfffU) 
                                                           << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
                                                          >> 2U)))));
    vlSelfRef.__PVT__error__DOT__r_beats1 = ((1U & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode))
                                              ? (0x3ffU 
                                                 & (~ 
                                                    (0x3ffU 
                                                     & (((IData)(0xfffU) 
                                                         << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
                                                        >> 2U))))
                                              : 0U);
    vlSelfRef.__PVT__error__DOT__a_last = ((1U == (IData)(vlSelfRef.__PVT__error__DOT__a_last_counter)) 
                                           | (0U == (IData)(vlSelfRef.__PVT__error__DOT__a_last_beats1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ bar__DOT____VdfgRegularize_h7ef8c9b1_0_1;
    bar__DOT____VdfgRegularize_h7ef8c9b1_0_1 = 0;
    // Body
    vlSelfRef.__PVT__bar__DOT__bypass = ((IData)(vlSelfRef.__PVT__bar__DOT__in_reset)
                                          ? (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass)
                                          : (IData)(vlSelfRef.__PVT__bar__DOT__bypass_reg));
    vlSelfRef.__PVT__bar__DOT__stall = (((IData)(vlSelfRef.__PVT__bar__DOT__bypass) 
                                         != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass)) 
                                        & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__stall_counter)));
    bar__DOT____VdfgRegularize_h7ef8c9b1_0_1 = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__stall)) 
                                                & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.auto_node_out_out_a_valid = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__bypass)) 
                                           & (IData)(bar__DOT____VdfgRegularize_h7ef8c9b1_0_1));
    vlSelfRef.__PVT___bar_auto_out_0_a_valid = ((IData)(bar__DOT____VdfgRegularize_h7ef8c9b1_0_1) 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__bypass));
    vlSelfRef.__PVT__error__DOT__winner_1 = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid) 
                                             & ((IData)(vlSelfRef.__PVT__error__DOT__a_last) 
                                                & (IData)(vlSelfRef.__PVT__error__DOT__idle)));
    vlSelfRef.__PVT__error__DOT__muxState_1 = ((0U 
                                                == (IData)(vlSelfRef.__PVT__error__DOT__beatsLeft))
                                                ? (IData)(vlSelfRef.__PVT__error__DOT__winner_1)
                                                : (IData)(vlSelfRef.__PVT__error__DOT__state_1));
    vlSelfRef.__PVT__error__DOT__nodeIn_d_valid = ((IData)(vlSelfRef.error__DOT____VdfgRegularize_hed1f7a03_0_3) 
                                                   & (IData)(vlSelfRef.__PVT__error__DOT__winner_1));
    if (vlSelfRef.__PVT__error__DOT__muxState_1) {
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24 
            = vlSelfRef.__PVT__error__DOT__da_bits_opcode;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3 
            = (1U & (IData)(vlSelfRef.__PVT__error__DOT__da_bits_opcode));
    } else {
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_19 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24 = 0U;
        vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3 = 0U;
    }
    if (vlSelfRef.__PVT__bar__DOT__bypass) {
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param = 0U;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_sink = 0U;
        if (vlSelfRef.__PVT__error__DOT__muxState_1) {
            vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size 
                = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
            vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied = 1U;
        } else {
            vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size = 0U;
            vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied = 0U;
        }
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid = vlSelfRef.__PVT__error__DOT__nodeIn_d_valid;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_3;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_16;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode 
            = vlSelfRef.__PVT__error__DOT___nodeIn_d_bits_T_24;
    } else {
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_param 
            = (3U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param));
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_sink 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_sink;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_size 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_size;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_denied 
            = (1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_param) 
                     >> 2U));
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_valid = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_valid;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_corrupt 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_corrupt;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_source 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_source;
        vlSelfRef.__PVT__bar__DOT__nodeIn_d_bits_opcode 
            = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT___sourceD_io_d_bits_opcode;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1(VysyxSoCFull_TLBusBypass* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              VysyxSoCFull_TLBusBypass___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.auto_node_out_out_d_ready = ((~ (IData)(vlSelfRef.__PVT__bar__DOT__bypass)) 
                                           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready));
    vlSelfRef.__PVT___bar_auto_out_0_d_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_d_ready) 
                                                & (IData)(vlSelfRef.__PVT__bar__DOT__bypass));
    vlSelfRef.__PVT__error__DOT__da_ready = ((IData)(vlSelfRef.__PVT___bar_auto_out_0_d_ready) 
                                             & (IData)(vlSelfRef.error__DOT____VdfgRegularize_hed1f7a03_0_3));
    vlSelfRef.__PVT__error__DOT__nodeIn_a_ready = (1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__error__DOT__a_last)) 
                                                      | ((IData)(vlSelfRef.__PVT__error__DOT__da_ready) 
                                                         & (((1U 
                                                              == (IData)(vlSelfRef.__PVT__error__DOT__r_counter)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.__PVT__error__DOT__r_beats1))) 
                                                            & (IData)(vlSelfRef.__PVT__error__DOT__idle)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready) 
           & (IData)(vlSelfRef.__PVT___bar_auto_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__nodeIn_a_ready = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__bar__DOT__stall)) 
                                                    & ((IData)(vlSelfRef.__PVT__bar__DOT__bypass)
                                                        ? (IData)(vlSelfRef.__PVT__error__DOT__nodeIn_a_ready)
                                                        : 
                                                       (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__full)))));
    vlSelfRef.__PVT__error__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelfRef.__PVT__bar__DOT__nodeIn_a_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_0_a_valid));
    vlSelfRef.__PVT__bar__DOT__monitor__DOT___GEN_0 
        = ((IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT___a_first_T_1) 
           & (0U == (IData)(vlSelfRef.__PVT__bar__DOT__monitor__DOT__a_first_counter_1)));
}
