// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull_TLError.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 = 0;
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
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*0:0*/ __Vdly__idle;
    __Vdly__idle = 0;
    CData/*2:0*/ __Vdly__r_counter;
    __Vdly__r_counter = 0;
    CData/*2:0*/ __Vdly__a_last_counter;
    __Vdly__a_last_counter = 0;
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
    CData/*0:0*/ __Vdly__a_q__DOT__full;
    __Vdly__a_q__DOT__full = 0;
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
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((IData)(vlSelfRef.__PVT__idle) 
                                  | (0U == (IData)(vlSelfRef.__PVT__r_counter))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6010: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr: Assertion failed at Error.scala:34\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6010, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6012: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6012, "", false);
    }
    __Vdly__r_counter = vlSelfRef.__PVT__r_counter;
    __Vdly__monitor__DOT__d_first_counter = vlSelfRef.__PVT__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__inflight = vlSelfRef.__PVT__monitor__DOT__inflight;
    __Vdly__monitor__DOT__inflight_opcodes = vlSelfRef.__PVT__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight_sizes = vlSelfRef.__PVT__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__watchdog = vlSelfRef.__PVT__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__inflight_1 = vlSelfRef.__PVT__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__d_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__d_first_counter_1;
    __Vdly__monitor__DOT__d_first_counter_2 = vlSelfRef.__PVT__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__a_first_counter = vlSelfRef.__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__a_first_counter_1;
    __Vdly__idle = vlSelfRef.__PVT__idle;
    __Vdly__a_last_counter = vlSelfRef.__PVT__a_last_counter;
    __Vdly__a_q__DOT__full = vlSelfRef.__PVT__a_q__DOT__full;
    __Vdly__beatsLeft = vlSelfRef.__PVT__beatsLeft;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 
        (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                  & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 
        ((3U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                       >> 1U))) & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                   >> 0xcU));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 
        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
          & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
         & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 
        (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (0U == (3U & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__muxState_1)) 
                 | (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (0U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (1U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (2U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = ((QData)((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? (0xffffU & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = ((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
           & (6U != (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24)));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
            & (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
            & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5324: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5324, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5326: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5326, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5330: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5330, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5332: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5332, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5336: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5336, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5338: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5338, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5342: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5342, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5344: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5344, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5348: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5348, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5350: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5350, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5354: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5354, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5356: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5356, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5360: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5360, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5362: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5362, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5366: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5366, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5368: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5368, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5372: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5372, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5374: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5374, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5378: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5378, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5380: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5380, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5384: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5384, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5386: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5386, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5390: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5390, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5392: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5392, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5396: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5396, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5398: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5398, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5402: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5402, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5404: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5404, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5408: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5408, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5410: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5410, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5414: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5414, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5416: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5416, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5420: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5420, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5422: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5422, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5426: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5426, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5428: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5428, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5432: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5432, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5434: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5434, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5438: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5438, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5440: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5440, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5444: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5444, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5446: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5446, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5450: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5450, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5452: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5452, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5456: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5456, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5458: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5458, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5462: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5462, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5464: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5464, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5468: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5468, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5470: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5470, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5474: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5474, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5476: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5476, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5480: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5480, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5482: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5482, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5486: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5486, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5488: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5488, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5492: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5492, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5494: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5494, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5498: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5498, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5500: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5500, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5504: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5504, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5506: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5506, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5516: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5516, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5518: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5518, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(vlSelfRef.__PVT__muxState_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5522: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5522, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5524: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5524, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5528: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5528, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5530: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5530, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5546: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5546, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5548: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5548, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5552: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5552, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5554: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5554, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5570: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5570, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5572: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5572, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5582: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5582, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5584: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5584, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5594: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5594, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5596: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5596, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5606: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5606, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5608: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5608, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5612: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5612, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5614: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5614, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5618: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5618, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5620: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5620, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5624: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5624, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5626: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5626, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & ((0x1fffU & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__address)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5630: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5630, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5632: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5632, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5636: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5636, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5638: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5638, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5642: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5642, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5644: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5644, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5648: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5648, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5650: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5650, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5654: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5654, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5656: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5656, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & ((IData)(vlSelfRef.__PVT__muxState_1) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5660: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5660, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5662: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5662, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_1) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_35))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5667: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5669: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5669, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)));
    if (VL_UNLIKELY(((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                            | (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5674: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5674, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5676: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5676, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5682: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5682, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5684: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5684, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5688: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5688, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5690: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5690, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & (~ (((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
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
                                  : 0U)) | ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5696: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5696, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5698: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5698, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5703: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5705: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5705, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid)) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15))) 
                        & (6U != (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready)) 
                            | (~ (IData)(vlSelfRef.__PVT__a_q__DOT__full)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5710: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5710, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5712: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5712, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready) 
                                   != ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31)
                                        ? (0xffffU 
                                           & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)))
                                        : 0U)) | (0U 
                                                  == (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5718: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5718, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5720: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5720, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5726: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5726, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5728: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5728, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)));
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5733: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5733, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5735: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5735, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5740: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5740, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5742: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5742, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5748: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5748, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5750: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5750, "", false);
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__idle = 1U;
        __Vdly__r_counter = 0U;
        vlSelfRef.__PVT__r_counter = __Vdly__r_counter;
        vlSelfRef.__PVT__idle = __Vdly__idle;
        __Vdly__a_last_counter = 0U;
        vlSelfRef.__PVT__a_last_counter = __Vdly__a_last_counter;
        __Vdly__beatsLeft = 0U;
        vlSelfRef.__PVT__state_1 = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT___GEN_1 = 
            ((IData)(vlSelfRef.__PVT__da_ready) & (IData)(vlSelfRef.__PVT__winner_1));
        __Vdly__idle = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___GEN_1) 
                            & (4U == (IData)(vlSelfRef.__PVT__da_bits_opcode)))) 
                        & (IData)(vlSelfRef.__PVT__idle));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___GEN_1) {
            __Vdly__r_counter = (7U & ((IData)(vlSelfRef.__PVT__da_first)
                                        ? (IData)(vlSelfRef.__PVT__r_beats1)
                                        : ((IData)(vlSelfRef.__PVT__r_counter) 
                                           - (IData)(1U))));
        }
        vlSelfRef.__PVT__r_counter = __Vdly__r_counter;
        vlSelfRef.__PVT__idle = __Vdly__idle;
        if (((IData)(vlSelfRef.__PVT__a_q_io_deq_ready) 
             & (IData)(vlSelfRef.__PVT__a_q__DOT__full))) {
            __Vdly__a_last_counter = (7U & ((0U == (IData)(vlSelfRef.__PVT__a_last_counter))
                                             ? (IData)(vlSelfRef.__PVT__a_last_beats1)
                                             : ((IData)(vlSelfRef.__PVT__a_last_counter) 
                                                - (IData)(1U))));
        }
        vlSelfRef.__PVT__a_last_counter = __Vdly__a_last_counter;
        __Vdly__beatsLeft = (7U & (((IData)(vlSelfRef.__PVT__idle_1) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready))
                                    ? (((IData)(vlSelfRef.__PVT__winner_1) 
                                        & (IData)(vlSelfRef.__PVT__da_bits_opcode))
                                        ? (~ (7U & 
                                              (((IData)(0x1fU) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__a_q__DOT__ram 
                                                            >> 0x36U)))) 
                                               >> 2U)))
                                        : 0U) : ((IData)(vlSelfRef.__PVT__beatsLeft) 
                                                 - 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready) 
                                                  & (IData)(vlSelfRef.__PVT__nodeIn_d_valid)))));
        if ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))) {
            vlSelfRef.__PVT__state_1 = vlSelfRef.__PVT__winner_1;
        }
    }
    vlSelfRef.__PVT__beatsLeft = __Vdly__beatsLeft;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready) 
           & (IData)(vlSelfRef.__PVT__nodeIn_d_valid));
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode_1 = vlSelfRef.__PVT___nodeIn_d_bits_T_24;
        vlSelfRef.__PVT__monitor__DOT__param_1 = 0U;
        vlSelfRef.__PVT__monitor__DOT__size_1 = vlSelfRef.__PVT___nodeIn_d_bits_T_18;
        vlSelfRef.__PVT__monitor__DOT__source_1 = vlSelfRef.__PVT___nodeIn_d_bits_T_15;
        vlSelfRef.__PVT__monitor__DOT__denied = vlSelfRef.__PVT__muxState_1;
    }
    if (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__monitor__DOT__address = (0x1fffU 
                                                  & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address);
    }
    vlSelfRef.__PVT__da_first = (0U == (IData)(vlSelfRef.__PVT__r_counter));
    vlSelfRef.__PVT__a_q__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__a_q__DOT__full)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid));
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
        __Vdly__a_q__DOT__full = 0U;
    } else {
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[4U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        __Vtemp_4[0U] = 0xfU;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_5[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_5[4U]);
        if (vlSelfRef.__PVT__monitor__DOT___GEN_1) {
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
        VL_SHIFTL_WWW(131,131,131, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_8[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_8[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_8[4U]);
        __Vtemp_10[0U] = 0xfU;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_10[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_11[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_11[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_11[4U]);
        __Vtemp_13[1U] = 0U;
        __Vtemp_13[2U] = 0U;
        __Vtemp_13[3U] = 0U;
        __Vtemp_13[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_14[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_14[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_14[4U]);
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_17[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_17[4U]);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24)));
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))
                                              ? (~ 
                                                 ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__monitor__DOT__watchdog_1 = ((IData)(1U) 
                                                + vlSelfRef.__PVT__monitor__DOT__watchdog_1);
        }
        __Vdly__monitor__DOT__inflight = (0xffffU & 
                                          (((IData)(vlSelfRef.__PVT__monitor__DOT__inflight) 
                                            | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_1)
                                                ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                                : 0U)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                  ? 
                                                 VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15))
                                                  : 0U))));
        __Vdly__monitor__DOT__inflight_opcodes = ((vlSelfRef.__PVT__monitor__DOT__inflight_opcodes 
                                                   | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_1)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                                       : 0ULL)) 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                                       : 0ULL)));
        __Vdly__monitor__DOT__inflight_sizes = ((vlSelfRef.__PVT__monitor__DOT__inflight_sizes 
                                                 | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_1)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                                     : 0ULL)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__monitor__DOT__watchdog = (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                           | (IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                                           ? 0U : ((IData)(1U) 
                                                   + vlSelfRef.__PVT__monitor__DOT__watchdog));
        __Vdly__monitor__DOT__inflight_1 = ((IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1) 
                                            & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                   ? 
                                                  VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15))
                                                   : 0U)));
        __Vdly__monitor__DOT__inflight_sizes_1 = (vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                                       : 0ULL)));
        if (vlSelfRef.__PVT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__monitor__DOT__a_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter) 
                           - (IData)(1U)) : ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                              ? 0U : 
                                             (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                 >> 2U)))));
            __Vdly__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
        if (((IData)(vlSelfRef.__PVT__a_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.__PVT__a_q_io_deq_ready) 
                 & (IData)(vlSelfRef.__PVT__a_q__DOT__full)))) {
            __Vdly__a_q__DOT__full = vlSelfRef.__PVT__a_q__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    if (vlSelfRef.__PVT__a_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__a_q__DOT__ram = (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)) 
                                           << 0x3cU) 
                                          | (((QData)((IData)(
                                                              ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                                 << 0x15U) 
                                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                                                                   << 0x11U)) 
                                                               | ((0x1fff0U 
                                                                   & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                                                      << 4U)) 
                                                                  | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask))))) 
                                              << 0x21U) 
                                             | ((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_data)) 
                                                << 1U)));
    }
    vlSelfRef.__PVT__idle_1 = (0U == (IData)(vlSelfRef.__PVT__beatsLeft));
    vlSelfRef.__VdfgRegularize_h8c92653e_0_3 = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__beatsLeft)) 
                                                | (IData)(vlSelfRef.__PVT__state_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_counter 
        = __Vdly__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__monitor__DOT__inflight = __Vdly__monitor__DOT__inflight;
    vlSelfRef.__PVT__monitor__DOT__inflight_opcodes 
        = __Vdly__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__monitor__DOT__inflight_sizes = __Vdly__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__monitor__DOT__watchdog = __Vdly__monitor__DOT__watchdog;
    vlSelfRef.__PVT__monitor__DOT__inflight_1 = __Vdly__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1 
        = __Vdly__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__monitor__DOT__watchdog_1 = __Vdly__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_counter_1 
        = __Vdly__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_counter_2 
        = __Vdly__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__monitor__DOT__a_first_counter 
        = __Vdly__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__monitor__DOT__a_first_counter_1 
        = __Vdly__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__a_q__DOT__full = __Vdly__a_q__DOT__full;
    vlSelfRef.__PVT__monitor__DOT__d_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_2 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__monitor__DOT__a_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__da_bits_opcode = ((0x17U >= (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__a_q__DOT__ram 
                                                                 >> 0x3cU))))))
                                        ? (7U & (0x911240U 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__a_q__DOT__ram 
                                                                 >> 0x3cU)))))))
                                        : 0U);
    vlSelfRef.__PVT__a_last_beats1 = ((1U & (IData)(
                                                    (vlSelfRef.__PVT__a_q__DOT__ram 
                                                     >> 0x3eU)))
                                       ? 0U : (7U & 
                                               (~ (7U 
                                                   & (((IData)(0x1fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__a_q__DOT__ram 
                                                                   >> 0x36U)))) 
                                                      >> 2U)))));
    vlSelfRef.__PVT__r_beats1 = ((1U & (IData)(vlSelfRef.__PVT__da_bits_opcode))
                                  ? (7U & (~ (7U & 
                                              (((IData)(0x1fU) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__a_q__DOT__ram 
                                                            >> 0x36U)))) 
                                               >> 2U))))
                                  : 0U);
    vlSelfRef.__PVT__a_last = ((1U == (IData)(vlSelfRef.__PVT__a_last_counter)) 
                               | (0U == (IData)(vlSelfRef.__PVT__a_last_beats1)));
    vlSelfRef.__PVT__winner_1 = ((IData)(vlSelfRef.__PVT__a_q__DOT__full) 
                                 & ((IData)(vlSelfRef.__PVT__a_last) 
                                    & (IData)(vlSelfRef.__PVT__idle)));
    vlSelfRef.__PVT__muxState_1 = ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                    ? (IData)(vlSelfRef.__PVT__winner_1)
                                    : (IData)(vlSelfRef.__PVT__state_1));
    if (vlSelfRef.__PVT__muxState_1) {
        vlSelfRef.__PVT___nodeIn_d_bits_T_3 = (1U & (IData)(vlSelfRef.__PVT__da_bits_opcode));
        vlSelfRef.__PVT___nodeIn_d_bits_T_15 = (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__a_q__DOT__ram 
                                                           >> 0x32U)));
    } else {
        vlSelfRef.__PVT___nodeIn_d_bits_T_3 = 0U;
        vlSelfRef.__PVT___nodeIn_d_bits_T_15 = 0U;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__2(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__monitor__DOT___a_first_T_1 = (
                                                   (~ (IData)(vlSelfRef.__PVT__a_q__DOT__full)) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid));
    vlSelfRef.__PVT__monitor__DOT___GEN_1 = ((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_comb__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__da_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_h8c92653e_0_3));
    vlSelfRef.__PVT__a_q_io_deq_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__a_last)) 
                                               | ((IData)(vlSelfRef.__PVT__da_ready) 
                                                  & (((1U 
                                                       == (IData)(vlSelfRef.__PVT__r_counter)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.__PVT__r_beats1))) 
                                                     & (IData)(vlSelfRef.__PVT__idle)))));
}

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__0(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 = 0;
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
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 = 0;
    SData/*15:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37;
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 = 0;
    QData/*63:0*/ __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1;
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 = 0;
    CData/*0:0*/ __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 = 0;
    CData/*0:0*/ __Vdly__idle;
    __Vdly__idle = 0;
    CData/*2:0*/ __Vdly__r_counter;
    __Vdly__r_counter = 0;
    CData/*2:0*/ __Vdly__a_last_counter;
    __Vdly__a_last_counter = 0;
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
    CData/*0:0*/ __Vdly__a_q__DOT__full;
    __Vdly__a_q__DOT__full = 0;
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
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ ((IData)(vlSelfRef.__PVT__idle) 
                                  | (0U == (IData)(vlSelfRef.__PVT__r_counter))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:6010: Assertion failed in %NysyxSoCFull.fpga.ferr: Assertion failed at Error.scala:34\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6010, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:6012: Assertion failed in %NysyxSoCFull.fpga.ferr\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6012, "", false);
    }
    __Vdly__r_counter = vlSelfRef.__PVT__r_counter;
    __Vdly__monitor__DOT__d_first_counter = vlSelfRef.__PVT__monitor__DOT__d_first_counter;
    __Vdly__monitor__DOT__inflight = vlSelfRef.__PVT__monitor__DOT__inflight;
    __Vdly__monitor__DOT__inflight_opcodes = vlSelfRef.__PVT__monitor__DOT__inflight_opcodes;
    __Vdly__monitor__DOT__inflight_sizes = vlSelfRef.__PVT__monitor__DOT__inflight_sizes;
    __Vdly__monitor__DOT__watchdog = vlSelfRef.__PVT__monitor__DOT__watchdog;
    __Vdly__monitor__DOT__inflight_1 = vlSelfRef.__PVT__monitor__DOT__inflight_1;
    __Vdly__monitor__DOT__inflight_sizes_1 = vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1;
    __Vdly__monitor__DOT__watchdog_1 = vlSelfRef.__PVT__monitor__DOT__watchdog_1;
    __Vdly__monitor__DOT__d_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__d_first_counter_1;
    __Vdly__monitor__DOT__d_first_counter_2 = vlSelfRef.__PVT__monitor__DOT__d_first_counter_2;
    __Vdly__monitor__DOT__a_first_counter = vlSelfRef.__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelfRef.__PVT__monitor__DOT__a_first_counter_1;
    __Vdly__idle = vlSelfRef.__PVT__idle;
    __Vdly__a_last_counter = vlSelfRef.__PVT__a_last_counter;
    __Vdly__a_q__DOT__full = vlSelfRef.__PVT__a_q__DOT__full;
    __Vdly__beatsLeft = vlSelfRef.__PVT__beatsLeft;
    __PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T 
        = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_6 = 
        (0x1fU & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                  & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___is_aligned_mask_T))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                          >> 1U)))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1 
        = (1U & ((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size))) 
                 | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                    & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                       >> 1U))));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask 
        = (((8U & (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                    << 3U) | (0xfffffff8U & ((vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                              << 2U) 
                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                << 3U))))) 
            | (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_1_1) 
                | (2U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
               << 2U)) | ((((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                            | (1U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
                           << 1U) | ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask_sub_0_1) 
                                     | (0U == (3U & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address)))));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_7 = 
        ((3U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                       >> 1U))) & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                   >> 0xcU));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_8 = 
        (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
          & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
         & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_9 = 
        (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_10 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_11 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (6U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (0U == (3U & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (4U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (5U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__muxState_1)) 
                 | (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (0U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (1U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (2U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = ((QData)((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1)));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? (0xffffU & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = ((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
           & (6U != (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24)));
    vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
            & (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
            & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
             & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
            & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5324: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5324, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5326: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5326, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5330: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5330, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5332: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5332, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5336: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5336, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5338: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5338, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5342: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5342, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5344: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5344, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5348: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5348, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5350: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5350, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5354: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5354, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5356: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5356, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5360: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5360, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5362: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5362, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (~ (0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                         >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5366: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5366, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5368: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5368, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5372: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5372, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5374: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5374, "", false);
    }
    if (VL_UNLIKELY((__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5378: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5378, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5380: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5380, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5384: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5384, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5386: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5386, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5390: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5390, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5392: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5392, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5396: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5396, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5398: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5398, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5402: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5402, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5404: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5404, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5408: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5408, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5410: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5410, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5414: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5414, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5416: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5416, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5420: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5420, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5422: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5422, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5426: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5426, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5428: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5428, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5432: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5432, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5434: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5434, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                      & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                                & (~ (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__mask)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5438: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5438, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5440: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5440, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5444: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5444, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5446: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5446, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5450: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5450, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5452: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5452, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5456: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5456, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5458: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5458, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5462: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5462, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5464: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5464, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5468: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5468, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5470: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5470, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5474: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5474, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5476: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5476, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5480: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5480, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5482: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5482, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5486: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5486, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5488: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5488, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5492: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5492, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5494: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5494, "", false);
    }
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__nodeIn_d_valid) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (7U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5498: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5498, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5500: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5500, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5504: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5504, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5506: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5506, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5516: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5516, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5518: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5518, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                      & (IData)(vlSelfRef.__PVT__muxState_1))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5522: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5522, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5524: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5524, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5528: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5528, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5530: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5530, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                      & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5546: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5546, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5548: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5548, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5552: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5552, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5554: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5554, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5570: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5570, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5572: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5572, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                      & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5582: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5582, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5584: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5584, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5594: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5594, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5596: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5596, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                      & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_3))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5606: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5606, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5608: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5608, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5612: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5612, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5614: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5614, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5618: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5618, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5620: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5620, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5624: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5624, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5626: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5626, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                      & ((0x1fffU & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__address)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5630: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5630, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5632: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5632, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__opcode_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5636: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5636, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5638: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5638, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__param_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5642: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5642, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5644: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5644, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__size_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5648: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5648, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5650: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5650, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__source_1)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5654: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5654, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5656: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5656, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                      & ((IData)(vlSelfRef.__PVT__muxState_1) 
                         != (IData)(vlSelfRef.__PVT__monitor__DOT__denied)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5660: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5660, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5662: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5662, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)));
    if (VL_UNLIKELY(((((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_1) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_35))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5667: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5667, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5669: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5669, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)));
    if (VL_UNLIKELY(((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                            | (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5674: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5674, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5676: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5676, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & (~ (((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                  ? (7U & (0x911240U 
                                           >> (0x1fU 
                                               & ((IData)(3U) 
                                                  * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                  : 0U)) | ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
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
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5682: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5682, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5684: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5684, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                      & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                         != (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5688: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5688, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5690: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5690, "", false);
    }
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & (~ (((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
                             == ((0x17U >= (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(
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
                                  : 0U)) | ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24) 
                                            == ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
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
                                                                   (__PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
                                                                    >> 1U)))))))
                                                 : 0U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5696: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5696, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5698: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5698, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5703: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5703, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5705: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5705, "", false);
    }
    if (VL_UNLIKELY(((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                           & (0U == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1))) 
                          & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid)) 
                         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15))) 
                        & (6U != (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))) 
                       & (~ (IData)(vlSymsp->TOP.reset))) 
                      & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready)) 
                            | (~ (IData)(vlSelfRef.__PVT__a_q__DOT__full)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5710: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: ready check\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5710, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5712: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5712, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready) 
                                   != ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31)
                                        ? (0xffffU 
                                           & VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)))
                                        : 0U)) | (0U 
                                                  == (IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready))))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5718: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5718, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5720: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5720, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5726: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5726, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5728: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5728, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = (0xffffU & VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15)));
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37)))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5733: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5733, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5735: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5735, "", false);
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                      & ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18) 
                         != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                           >> 1U)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5740: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5740, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5742: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5742, "", false);
    }
    if (VL_UNLIKELY(((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (~ (((0U == (IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1)) 
                                   | (0U == vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                  | (vlSelfRef.__PVT__monitor__DOT__watchdog_1 
                                     < vlSelfRef.__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)))))))) {
        VL_WRITEF_NX("[%0t] %%Error: ysyxSoCFull.v:5748: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5748, "");
        VL_WRITEF_NX("[%0t] %%Fatal: ysyxSoCFull.v:5750: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5750, "", false);
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__idle = 1U;
        __Vdly__r_counter = 0U;
        vlSelfRef.__PVT__r_counter = __Vdly__r_counter;
        vlSelfRef.__PVT__idle = __Vdly__idle;
        __Vdly__a_last_counter = 0U;
        vlSelfRef.__PVT__a_last_counter = __Vdly__a_last_counter;
        __Vdly__beatsLeft = 0U;
        vlSelfRef.__PVT__state_1 = 0U;
    } else {
        vlSelfRef.__PVT__unnamedblk1__DOT___GEN_1 = 
            ((IData)(vlSelfRef.__PVT__da_ready) & (IData)(vlSelfRef.__PVT__winner_1));
        __Vdly__idle = ((~ ((IData)(vlSelfRef.__PVT__unnamedblk1__DOT___GEN_1) 
                            & (4U == (IData)(vlSelfRef.__PVT__da_bits_opcode)))) 
                        & (IData)(vlSelfRef.__PVT__idle));
        if (vlSelfRef.__PVT__unnamedblk1__DOT___GEN_1) {
            __Vdly__r_counter = (7U & ((IData)(vlSelfRef.__PVT__da_first)
                                        ? (IData)(vlSelfRef.__PVT__r_beats1)
                                        : ((IData)(vlSelfRef.__PVT__r_counter) 
                                           - (IData)(1U))));
        }
        vlSelfRef.__PVT__r_counter = __Vdly__r_counter;
        vlSelfRef.__PVT__idle = __Vdly__idle;
        if (((IData)(vlSelfRef.__PVT__a_q_io_deq_ready) 
             & (IData)(vlSelfRef.__PVT__a_q__DOT__full))) {
            __Vdly__a_last_counter = (7U & ((0U == (IData)(vlSelfRef.__PVT__a_last_counter))
                                             ? (IData)(vlSelfRef.__PVT__a_last_beats1)
                                             : ((IData)(vlSelfRef.__PVT__a_last_counter) 
                                                - (IData)(1U))));
        }
        vlSelfRef.__PVT__a_last_counter = __Vdly__a_last_counter;
        __Vdly__beatsLeft = (7U & (((IData)(vlSelfRef.__PVT__idle_1) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready))
                                    ? (((IData)(vlSelfRef.__PVT__winner_1) 
                                        & (IData)(vlSelfRef.__PVT__da_bits_opcode))
                                        ? (~ (7U & 
                                              (((IData)(0x1fU) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__a_q__DOT__ram 
                                                            >> 0x36U)))) 
                                               >> 2U)))
                                        : 0U) : ((IData)(vlSelfRef.__PVT__beatsLeft) 
                                                 - 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready) 
                                                  & (IData)(vlSelfRef.__PVT__nodeIn_d_valid)))));
        if ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))) {
            vlSelfRef.__PVT__state_1 = vlSelfRef.__PVT__winner_1;
        }
    }
    vlSelfRef.__PVT__beatsLeft = __Vdly__beatsLeft;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready) 
           & (IData)(vlSelfRef.__PVT__nodeIn_d_valid));
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode_1 = vlSelfRef.__PVT___nodeIn_d_bits_T_24;
        vlSelfRef.__PVT__monitor__DOT__param_1 = 0U;
        vlSelfRef.__PVT__monitor__DOT__size_1 = vlSelfRef.__PVT___nodeIn_d_bits_T_18;
        vlSelfRef.__PVT__monitor__DOT__source_1 = vlSelfRef.__PVT___nodeIn_d_bits_T_15;
        vlSelfRef.__PVT__monitor__DOT__denied = vlSelfRef.__PVT__muxState_1;
    }
    if (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
         & (~ (0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))))) {
        vlSelfRef.__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelfRef.__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelfRef.__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelfRef.__PVT__monitor__DOT__address = (0x1fffU 
                                                  & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address);
    }
    vlSelfRef.__PVT__da_first = (0U == (IData)(vlSelfRef.__PVT__r_counter));
    vlSelfRef.__PVT__a_q__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelfRef.__PVT__a_q__DOT__full)) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid));
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
        __Vdly__a_q__DOT__full = 0U;
    } else {
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[4U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15) 
               << 2U);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15) 
               >> 0x1eU);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        __Vtemp_4[0U] = 0xfU;
        __Vtemp_4[1U] = 0U;
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_4[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_5[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_5[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_5[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_5[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_5[4U]);
        if (vlSelfRef.__PVT__monitor__DOT___GEN_1) {
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
        VL_SHIFTL_WWW(131,131,131, __Vtemp_8, __Vtemp_7, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_8[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_8[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_8[4U]);
        __Vtemp_10[0U] = 0xfU;
        __Vtemp_10[1U] = 0U;
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_10[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_11, __Vtemp_10, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_11[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_11[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_11[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_11[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_11[4U]);
        __Vtemp_13[1U] = 0U;
        __Vtemp_13[2U] = 0U;
        __Vtemp_13[3U] = 0U;
        __Vtemp_13[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_14, __Vtemp_13, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_14[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_14[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_14[4U]);
        __Vtemp_16[0U] = 0xfU;
        __Vtemp_16[1U] = 0U;
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        __Vtemp_16[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_17, __Vtemp_16, vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_17[2U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_17[3U];
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_17[4U]);
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24)));
        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_18)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))
                                              ? (~ 
                                                 ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_24))
                              ? (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__watchdog_1 = 0U;
        } else {
            __Vdly__monitor__DOT__watchdog_1 = ((IData)(1U) 
                                                + vlSelfRef.__PVT__monitor__DOT__watchdog_1);
        }
        __Vdly__monitor__DOT__inflight = (0xffffU & 
                                          (((IData)(vlSelfRef.__PVT__monitor__DOT__inflight) 
                                            | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_1)
                                                ? VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                                : 0U)) 
                                           & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                  ? 
                                                 VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15))
                                                  : 0U))));
        __Vdly__monitor__DOT__inflight_opcodes = ((vlSelfRef.__PVT__monitor__DOT__inflight_opcodes 
                                                   | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_1)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                                       : 0ULL)) 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                                       : 0ULL)));
        __Vdly__monitor__DOT__inflight_sizes = ((vlSelfRef.__PVT__monitor__DOT__inflight_sizes 
                                                 | ((IData)(vlSelfRef.__PVT__monitor__DOT___GEN_1)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                                     : 0ULL)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U])))
                                                     : 0ULL)));
        __Vdly__monitor__DOT__watchdog = (((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                           | (IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2))
                                           ? 0U : ((IData)(1U) 
                                                   + vlSelfRef.__PVT__monitor__DOT__watchdog));
        __Vdly__monitor__DOT__inflight_1 = ((IData)(vlSelfRef.__PVT__monitor__DOT__inflight_1) 
                                            & (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                   ? 
                                                  VL_SHIFTL_III(16,16,16, (IData)(1U), (IData)(vlSelfRef.__PVT___nodeIn_d_bits_T_15))
                                                   : 0U)));
        __Vdly__monitor__DOT__inflight_sizes_1 = (vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U])))
                                                       : 0ULL)));
        if (vlSelfRef.__PVT__monitor__DOT___a_first_T_1) {
            vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3 
                = (0xfffU & VL_SHIFTL_III(12,12,12, (IData)(0x1fU), (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__monitor__DOT__a_first_counter = 
                (7U & ((0U != (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter))
                        ? ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter) 
                           - (IData)(1U)) : ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                              ? 0U : 
                                             (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                                 >> 2U)))));
            __Vdly__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                              ? 0U : (~ ((IData)(vlSelfRef.__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT___a_first_beats1_decode_T_3) 
                                         >> 2U))) : 
                         ((IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1) 
                          - (IData)(1U))));
        }
        if (((IData)(vlSelfRef.__PVT__a_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelfRef.__PVT__a_q_io_deq_ready) 
                 & (IData)(vlSelfRef.__PVT__a_q__DOT__full)))) {
            __Vdly__a_q__DOT__full = vlSelfRef.__PVT__a_q__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    if (vlSelfRef.__PVT__a_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelfRef.__PVT__a_q__DOT__ram = (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)) 
                                           << 0x3cU) 
                                          | (((QData)((IData)(
                                                              ((((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                                 << 0x15U) 
                                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                                                                   << 0x11U)) 
                                                               | ((0x1fff0U 
                                                                   & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                                                      << 4U)) 
                                                                  | (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask))))) 
                                              << 0x21U) 
                                             | ((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_data)) 
                                                << 1U)));
    }
    vlSelfRef.__PVT__idle_1 = (0U == (IData)(vlSelfRef.__PVT__beatsLeft));
    vlSelfRef.__VdfgRegularize_h8c92653e_0_3 = ((0U 
                                                 == (IData)(vlSelfRef.__PVT__beatsLeft)) 
                                                | (IData)(vlSelfRef.__PVT__state_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_counter 
        = __Vdly__monitor__DOT__d_first_counter;
    vlSelfRef.__PVT__monitor__DOT__inflight = __Vdly__monitor__DOT__inflight;
    vlSelfRef.__PVT__monitor__DOT__inflight_opcodes 
        = __Vdly__monitor__DOT__inflight_opcodes;
    vlSelfRef.__PVT__monitor__DOT__inflight_sizes = __Vdly__monitor__DOT__inflight_sizes;
    vlSelfRef.__PVT__monitor__DOT__watchdog = __Vdly__monitor__DOT__watchdog;
    vlSelfRef.__PVT__monitor__DOT__inflight_1 = __Vdly__monitor__DOT__inflight_1;
    vlSelfRef.__PVT__monitor__DOT__inflight_sizes_1 
        = __Vdly__monitor__DOT__inflight_sizes_1;
    vlSelfRef.__PVT__monitor__DOT__watchdog_1 = __Vdly__monitor__DOT__watchdog_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_counter_1 
        = __Vdly__monitor__DOT__d_first_counter_1;
    vlSelfRef.__PVT__monitor__DOT__d_first_counter_2 
        = __Vdly__monitor__DOT__d_first_counter_2;
    vlSelfRef.__PVT__monitor__DOT__a_first_counter 
        = __Vdly__monitor__DOT__a_first_counter;
    vlSelfRef.__PVT__monitor__DOT__a_first_counter_1 
        = __Vdly__monitor__DOT__a_first_counter_1;
    vlSelfRef.__PVT__a_q__DOT__full = __Vdly__a_q__DOT__full;
    vlSelfRef.__PVT__monitor__DOT__d_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_1));
    vlSelfRef.__PVT__monitor__DOT__d_first_2 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__d_first_counter_2));
    vlSelfRef.__PVT__monitor__DOT__a_first_1 = (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1));
    vlSelfRef.__PVT__da_bits_opcode = ((0x17U >= (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__a_q__DOT__ram 
                                                                 >> 0x3cU))))))
                                        ? (7U & (0x911240U 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelfRef.__PVT__a_q__DOT__ram 
                                                                 >> 0x3cU)))))))
                                        : 0U);
    vlSelfRef.__PVT__a_last_beats1 = ((1U & (IData)(
                                                    (vlSelfRef.__PVT__a_q__DOT__ram 
                                                     >> 0x3eU)))
                                       ? 0U : (7U & 
                                               (~ (7U 
                                                   & (((IData)(0x1fU) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelfRef.__PVT__a_q__DOT__ram 
                                                                   >> 0x36U)))) 
                                                      >> 2U)))));
    vlSelfRef.__PVT__r_beats1 = ((1U & (IData)(vlSelfRef.__PVT__da_bits_opcode))
                                  ? (7U & (~ (7U & 
                                              (((IData)(0x1fU) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelfRef.__PVT__a_q__DOT__ram 
                                                            >> 0x36U)))) 
                                               >> 2U))))
                                  : 0U);
    vlSelfRef.__PVT__a_last = ((1U == (IData)(vlSelfRef.__PVT__a_last_counter)) 
                               | (0U == (IData)(vlSelfRef.__PVT__a_last_beats1)));
    vlSelfRef.__PVT__winner_1 = ((IData)(vlSelfRef.__PVT__a_q__DOT__full) 
                                 & ((IData)(vlSelfRef.__PVT__a_last) 
                                    & (IData)(vlSelfRef.__PVT__idle)));
    vlSelfRef.__PVT__muxState_1 = ((0U == (IData)(vlSelfRef.__PVT__beatsLeft))
                                    ? (IData)(vlSelfRef.__PVT__winner_1)
                                    : (IData)(vlSelfRef.__PVT__state_1));
    if (vlSelfRef.__PVT__muxState_1) {
        vlSelfRef.__PVT___nodeIn_d_bits_T_3 = (1U & (IData)(vlSelfRef.__PVT__da_bits_opcode));
        vlSelfRef.__PVT___nodeIn_d_bits_T_15 = (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__a_q__DOT__ram 
                                                           >> 0x32U)));
    } else {
        vlSelfRef.__PVT___nodeIn_d_bits_T_3 = 0U;
        vlSelfRef.__PVT___nodeIn_d_bits_T_15 = 0U;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__2(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__monitor__DOT___a_first_T_1 = (
                                                   (~ (IData)(vlSelfRef.__PVT__a_q__DOT__full)) 
                                                   & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid));
    vlSelfRef.__PVT__monitor__DOT___GEN_1 = ((IData)(vlSelfRef.__PVT__monitor__DOT___a_first_T_1) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__0(VysyxSoCFull_TLError* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__da_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_h8c92653e_0_3));
    vlSelfRef.__PVT__a_q_io_deq_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__a_last)) 
                                               | ((IData)(vlSelfRef.__PVT__da_ready) 
                                                  & (((1U 
                                                       == (IData)(vlSelfRef.__PVT__r_counter)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.__PVT__r_beats1))) 
                                                     & (IData)(vlSelfRef.__PVT__idle)))));
}
