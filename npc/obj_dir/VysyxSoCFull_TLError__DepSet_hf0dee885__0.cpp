// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_TLError.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLError___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT___a_first_T_1 = ((~ (IData)(vlSelf->__PVT__a_q__DOT__full)) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid));
    vlSelf->__PVT__monitor__DOT___GEN_1 = ((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
                                           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLError___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__1(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__1\n"); );
    // Body
    vlSelf->__PVT__da_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready) 
                               & (IData)(vlSelf->__VdfgTmp_hec6944b2__0));
    vlSelf->__PVT__a_q_io_deq_ready = (1U & ((~ (IData)(vlSelf->__PVT__a_last)) 
                                             | ((IData)(vlSelf->__PVT__da_ready) 
                                                & (((1U 
                                                     == (IData)(vlSelf->__PVT__r_counter)) 
                                                    | (0U 
                                                       == (IData)(vlSelf->__PVT__r_beats1))) 
                                                   & (IData)(vlSelf->__PVT__idle)))));
}

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__0\n"); );
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
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__0;
    VlWide<5>/*159:0*/ __Vtemp_hf12cd991__0;
    VlWide<5>/*159:0*/ __Vtemp_h1b299e10__0;
    VlWide<5>/*159:0*/ __Vtemp_h685820a9__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__1;
    VlWide<5>/*159:0*/ __Vtemp_hb0498656__0;
    VlWide<5>/*159:0*/ __Vtemp_h9494c8a2__0;
    VlWide<5>/*159:0*/ __Vtemp_h2d739529__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__2;
    VlWide<5>/*159:0*/ __Vtemp_h899ce6f6__0;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((IData)(vlSelf->__PVT__idle) 
                                 | (0U == (IData)(vlSelf->__PVT__r_counter)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6113: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr: Assertion failed at Error.scala:34\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6113, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6115: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6115, "");
    }
    __Vdly__r_counter = vlSelf->__PVT__r_counter;
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
    __Vdly__monitor__DOT__a_first_counter = vlSelf->__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelf->__PVT__monitor__DOT__a_first_counter_1;
    __Vdly__idle = vlSelf->__PVT__idle;
    __Vdly__a_last_counter = vlSelf->__PVT__a_last_counter;
    __Vdly__a_q__DOT__full = vlSelf->__PVT__a_q__DOT__full;
    __Vdly__beatsLeft = vlSelf->__PVT__beatsLeft;
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
           != (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask));
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
        = (((IData)(vlSelf->auto_in_d_valid) & (6U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (0U == (3U & ((IData)(vlSelf->auto_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelf->auto_in_d_valid) & (4U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->auto_in_d_valid) & (5U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelf->auto_in_d_bits_denied)) 
                 | (IData)(vlSelf->auto_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->auto_in_d_valid) & (0U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->auto_in_d_valid) & (1U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelf->auto_in_d_valid) & (2U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = ((QData)((IData)(vlSelf->auto_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                ? (0xffffU & ((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)))
                : 0U) : 0U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = ((IData)(vlSelf->auto_in_d_valid) & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
           & (6U != (IData)(vlSelf->auto_in_d_bits_opcode)));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelf->auto_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
            & (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
            & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((((IData)(vlSelf->auto_in_d_valid) & (0U 
                                                 == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->auto_in_d_valid) & (0U 
                                                != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5427: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5427, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5429: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5429, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5433: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5433, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5435: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5435, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5439: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5439, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5441: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5441, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5445: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5445, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5447: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5447, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5451: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5451, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5453: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5453, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5457: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5457, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5459: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5459, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5463: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5463, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5465: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5465, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5469: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5469, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5471: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5471, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5475: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5475, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5477: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5477, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5481: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5481, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5483: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5483, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5487: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5487, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5489: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5489, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5493: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5493, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5495: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5495, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5499: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5499, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5501: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5501, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5505: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5505, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5507: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5507, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5511: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5511, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5513: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5513, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5517: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5517, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5519: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5519, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5523: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5523, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5525: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5525, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5529: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5529, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5531: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5531, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5535: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5535, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5537: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5537, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5541: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5541, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5543: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5543, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5547: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5547, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5549: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5549, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5553: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5553, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5555: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5555, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5559: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5559, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5561: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5561, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5565: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5565, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5567: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5567, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5571: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5571, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5573: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5573, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5577: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5577, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5579: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5579, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5583: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5583, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5585: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5585, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5589: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5589, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5591: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5591, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5595: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5595, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5597: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5597, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->auto_in_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSelf->auto_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5601: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5601, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5603: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5603, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5607: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5607, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5609: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5609, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(vlSelf->auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5619: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5619, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5621: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5621, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(vlSelf->auto_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5625: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5625, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5627: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5627, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5631: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5631, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5633: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5633, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(vlSelf->auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5649: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5649, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5651: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5651, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5655: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5655, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5657: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5657, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5673: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5673, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5675: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5675, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5685: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5685, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5687: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5687, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5697: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5697, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5699: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5699, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (IData)(vlSelf->auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5709: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5709, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5711: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5711, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5715: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5715, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5717: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5717, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5721: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5721, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5723: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5723, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5727: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5727, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5729: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5729, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((0x1fffU & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__address))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5733: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5733, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5735: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5735, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->auto_in_d_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5739: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5739, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5741: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5741, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (0U != (IData)(vlSelf->__PVT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5745: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5745, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5747: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5747, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->auto_in_d_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5751: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5751, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5753: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5753, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->auto_in_d_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5757: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5757, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5759: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5759, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->auto_in_d_bits_denied) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5763: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5763, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5765: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5765, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___GEN_1) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_35)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5770: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5770, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5772: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5772, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((0xfU >= (IData)(vlSelf->auto_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->auto_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                           | (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5777: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5777, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5779: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5779, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (~ (((IData)(vlSelf->auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->auto_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5785: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5785, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5787: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5787, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5791: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5791, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5793: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5793, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (~ (((IData)(vlSelf->auto_in_d_bits_opcode) 
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
                                 : 0U)) | ((IData)(vlSelf->auto_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5799: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5799, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5801: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5801, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->auto_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5806: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5806, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5808: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5808, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSelf->auto_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready)) 
                           | (~ (IData)(vlSelf->__PVT__a_q__DOT__full))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5813: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5813, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5815: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5815, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready) 
                                  != ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31)
                                       ? ((0xfU >= (IData)(vlSelf->auto_in_d_bits_source))
                                           ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->auto_in_d_bits_source)))
                                           : 0U) : 0U)) 
                                 | (0U == (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5821: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5821, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5823: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5823, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5829: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5829, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5831: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5831, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((0xfU >= (IData)(vlSelf->auto_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->auto_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5836: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5836, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5838: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5838, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5843: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5843, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5845: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5845, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5851: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5851, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5853: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5853, "");
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__idle = 1U;
        __Vdly__r_counter = 0U;
        vlSelf->__PVT__r_counter = __Vdly__r_counter;
        vlSelf->__PVT__idle = __Vdly__idle;
        __Vdly__a_last_counter = 0U;
        vlSelf->__PVT__a_last_counter = __Vdly__a_last_counter;
        __Vdly__beatsLeft = 0U;
        vlSelf->__PVT__state_1 = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__da_ready) 
                                                   & (IData)(vlSelf->__PVT__winner_1));
        __Vdly__idle = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT___GEN_1) 
                            & (4U == (IData)(vlSelf->__PVT__da_bits_opcode)))) 
                        & (IData)(vlSelf->__PVT__idle));
        if (vlSelf->__PVT__unnamedblk1__DOT___GEN_1) {
            __Vdly__r_counter = (7U & ((IData)(vlSelf->__PVT__da_first)
                                        ? (IData)(vlSelf->__PVT__r_beats1)
                                        : ((IData)(vlSelf->__PVT__r_counter) 
                                           - (IData)(1U))));
        }
        vlSelf->__PVT__r_counter = __Vdly__r_counter;
        vlSelf->__PVT__idle = __Vdly__idle;
        if (((IData)(vlSelf->__PVT__a_q_io_deq_ready) 
             & (IData)(vlSelf->__PVT__a_q__DOT__full))) {
            __Vdly__a_last_counter = (7U & ((0U == (IData)(vlSelf->__PVT__a_last_counter))
                                             ? (IData)(vlSelf->__PVT__a_last_beats1)
                                             : ((IData)(vlSelf->__PVT__a_last_counter) 
                                                - (IData)(1U))));
        }
        vlSelf->__PVT__a_last_counter = __Vdly__a_last_counter;
        __Vdly__beatsLeft = (7U & (((IData)(vlSelf->__PVT__idle_1) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready))
                                    ? (((IData)(vlSelf->__PVT__winner_1) 
                                        & (IData)(vlSelf->__PVT__da_bits_opcode))
                                        ? (~ (0x3ffU 
                                              & (((IData)(0x1fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__a_q__DOT__ram 
                                                              >> 0x36U)))) 
                                                 >> 2U)))
                                        : 0U) : ((IData)(vlSelf->__PVT__beatsLeft) 
                                                 - 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready) 
                                                  & (IData)(vlSelf->auto_in_d_valid)))));
        if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
            vlSelf->__PVT__state_1 = vlSelf->__PVT__winner_1;
        }
    }
    vlSelf->__PVT__beatsLeft = __Vdly__beatsLeft;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_out_1_d_ready) 
           & (IData)(vlSelf->auto_in_d_valid));
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSelf->auto_in_d_bits_opcode;
        vlSelf->__PVT__monitor__DOT__param_1 = 0U;
        vlSelf->__PVT__monitor__DOT__size_1 = vlSelf->auto_in_d_bits_size;
        vlSelf->__PVT__monitor__DOT__source_1 = vlSelf->auto_in_d_bits_source;
        vlSelf->__PVT__monitor__DOT__denied = vlSelf->auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__monitor__DOT__address = (0x1fffU 
                                                & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address);
    }
    vlSelf->__PVT__da_first = (0U == (IData)(vlSelf->__PVT__r_counter));
    vlSelf->__PVT__a_q__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__a_q__DOT__full)) 
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
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[4U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSelf->auto_in_d_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSelf->auto_in_d_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        __Vtemp_h6f0d4cc8__0[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__0[1U] = 0U;
        __Vtemp_h6f0d4cc8__0[2U] = 0U;
        __Vtemp_h6f0d4cc8__0[3U] = 0U;
        __Vtemp_h6f0d4cc8__0[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hf12cd991__0, __Vtemp_h6f0d4cc8__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_hf12cd991__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_hf12cd991__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_hf12cd991__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_hf12cd991__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hf12cd991__0[4U]);
        if (vlSelf->__PVT__monitor__DOT___GEN_1) {
            __Vtemp_h1b299e10__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                                              << 1U));
            __Vtemp_h9494c8a2__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                              << 1U));
        } else {
            __Vtemp_h1b299e10__0[0U] = 0U;
            __Vtemp_h9494c8a2__0[0U] = 0U;
        }
        __Vtemp_h1b299e10__0[1U] = 0U;
        __Vtemp_h1b299e10__0[2U] = 0U;
        __Vtemp_h1b299e10__0[3U] = 0U;
        __Vtemp_h1b299e10__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h685820a9__0, __Vtemp_h1b299e10__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_h685820a9__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_h685820a9__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_h685820a9__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_h685820a9__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_h685820a9__0[4U]);
        __Vtemp_h6f0d4cc8__1[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__1[1U] = 0U;
        __Vtemp_h6f0d4cc8__1[2U] = 0U;
        __Vtemp_h6f0d4cc8__1[3U] = 0U;
        __Vtemp_h6f0d4cc8__1[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hb0498656__0, __Vtemp_h6f0d4cc8__1, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_hb0498656__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_hb0498656__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_hb0498656__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_hb0498656__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hb0498656__0[4U]);
        __Vtemp_h9494c8a2__0[1U] = 0U;
        __Vtemp_h9494c8a2__0[2U] = 0U;
        __Vtemp_h9494c8a2__0[3U] = 0U;
        __Vtemp_h9494c8a2__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h2d739529__0, __Vtemp_h9494c8a2__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_h2d739529__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_h2d739529__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_h2d739529__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_h2d739529__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_h2d739529__0[4U]);
        __Vtemp_h6f0d4cc8__2[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__2[1U] = 0U;
        __Vtemp_h6f0d4cc8__2[2U] = 0U;
        __Vtemp_h6f0d4cc8__2[3U] = 0U;
        __Vtemp_h6f0d4cc8__2[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h899ce6f6__0, __Vtemp_h6f0d4cc8__2, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_h899ce6f6__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_h899ce6f6__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_h899ce6f6__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_h899ce6f6__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_h899ce6f6__0[4U]);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelf->auto_in_d_bits_opcode)));
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelf->auto_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->auto_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSelf->auto_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->auto_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->auto_in_d_bits_opcode))
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
                                            | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_1)
                                                ? (
                                                   (0xfU 
                                                    >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
                                                    : 0U)
                                                : 0U)) 
                                           & (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                  ? 
                                                 ((0xfU 
                                                   >= (IData)(vlSelf->auto_in_d_bits_source))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSelf->auto_in_d_bits_source))
                                                   : 0U)
                                                  : 0U))));
        __Vdly__monitor__DOT__inflight_opcodes = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                                   | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_1)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                                       : 0ULL)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                                       : 0ULL)));
        __Vdly__monitor__DOT__inflight_sizes = ((vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                 | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_1)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                                     : 0ULL)) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
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
                                            & (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                   ? 
                                                  ((0xfU 
                                                    >= (IData)(vlSelf->auto_in_d_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->auto_in_d_bits_source))
                                                    : 0U)
                                                   : 0U)));
        __Vdly__monitor__DOT__inflight_sizes_1 = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
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
        if (((IData)(vlSelf->__PVT__a_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__a_q_io_deq_ready) 
                 & (IData)(vlSelf->__PVT__a_q__DOT__full)))) {
            __Vdly__a_q__DOT__full = vlSelf->__PVT__a_q__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    if (vlSelf->__PVT__a_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__a_q__DOT__ram = (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
                                            << 0x36U) 
                                           | (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (0x1fffU 
                                                                   & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address))) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask)) 
                                                     << 0x21U) 
                                                    | ((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_data)) 
                                                       << 1U))))));
    }
    vlSelf->__PVT__idle_1 = (0U == (IData)(vlSelf->__PVT__beatsLeft));
    vlSelf->__VdfgTmp_hec6944b2__0 = ((0U == (IData)(vlSelf->__PVT__beatsLeft)) 
                                      | (IData)(vlSelf->__PVT__state_1));
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
    vlSelf->__PVT__a_q__DOT__full = __Vdly__a_q__DOT__full;
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__da_bits_opcode = ((0x17U >= (0x1fU 
                                                & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__a_q__DOT__ram 
                                                               >> 0x3cU))))))
                                      ? (7U & (0x911240U 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__a_q__DOT__ram 
                                                                  >> 0x3cU)))))))
                                      : 0U);
    vlSelf->__PVT__a_last_beats1 = ((1U & (IData)((vlSelf->__PVT__a_q__DOT__ram 
                                                   >> 0x3eU)))
                                     ? 0U : (7U & (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x1fU) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__a_q__DOT__ram 
                                                                    >> 0x36U)))) 
                                                       >> 2U)))));
    vlSelf->__PVT__r_beats1 = ((1U & (IData)(vlSelf->__PVT__da_bits_opcode))
                                ? (7U & (~ (0x3ffU 
                                            & (((IData)(0x1fU) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_q__DOT__ram 
                                                            >> 0x36U)))) 
                                               >> 2U))))
                                : 0U);
    vlSelf->__PVT__a_last = ((1U == (IData)(vlSelf->__PVT__a_last_counter)) 
                             | (0U == (IData)(vlSelf->__PVT__a_last_beats1)));
    vlSelf->__PVT__winner_1 = ((IData)(vlSelf->__PVT__a_q__DOT__full) 
                               & ((IData)(vlSelf->__PVT__a_last) 
                                  & (IData)(vlSelf->__PVT__idle)));
    vlSelf->auto_in_d_bits_denied = ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                      ? (IData)(vlSelf->__PVT__winner_1)
                                      : (IData)(vlSelf->__PVT__state_1));
    if (vlSelf->auto_in_d_bits_denied) {
        vlSelf->auto_in_d_bits_corrupt = (1U & (IData)(vlSelf->__PVT__da_bits_opcode));
        vlSelf->auto_in_d_bits_source = (0xfU & (IData)(
                                                        (vlSelf->__PVT__a_q__DOT__ram 
                                                         >> 0x32U)));
    } else {
        vlSelf->auto_in_d_bits_corrupt = 0U;
        vlSelf->auto_in_d_bits_source = 0U;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__0(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__0\n"); );
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
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__0;
    VlWide<5>/*159:0*/ __Vtemp_hf12cd991__0;
    VlWide<5>/*159:0*/ __Vtemp_h9c3dd6ed__0;
    VlWide<5>/*159:0*/ __Vtemp_h4866238e__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__1;
    VlWide<5>/*159:0*/ __Vtemp_hb0498656__0;
    VlWide<5>/*159:0*/ __Vtemp_h068f07fc__0;
    VlWide<5>/*159:0*/ __Vtemp_h67d83ea6__0;
    VlWide<5>/*159:0*/ __Vtemp_h6f0d4cc8__2;
    VlWide<5>/*159:0*/ __Vtemp_h899ce6f6__0;
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ ((IData)(vlSelf->__PVT__idle) 
                                 | (0U == (IData)(vlSelf->__PVT__r_counter)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6113: Assertion failed in %NysyxSoCFull.fpga.ferr: Assertion failed at Error.scala:34\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6113, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6115: Assertion failed in %NysyxSoCFull.fpga.ferr\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 6115, "");
    }
    __Vdly__r_counter = vlSelf->__PVT__r_counter;
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
    __Vdly__monitor__DOT__a_first_counter = vlSelf->__PVT__monitor__DOT__a_first_counter;
    __Vdly__monitor__DOT__a_first_counter_1 = vlSelf->__PVT__monitor__DOT__a_first_counter_1;
    __Vdly__idle = vlSelf->__PVT__idle;
    __Vdly__a_last_counter = vlSelf->__PVT__a_last_counter;
    __Vdly__a_q__DOT__full = vlSelf->__PVT__a_q__DOT__full;
    __Vdly__beatsLeft = vlSelf->__PVT__beatsLeft;
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
           != (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask));
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
        = (((IData)(vlSelf->auto_in_d_valid) & (6U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (0U == (3U & ((IData)(vlSelf->auto_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSelf->auto_in_d_valid) & (4U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSelf->auto_in_d_valid) & (5U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (1U & ((~ (IData)(vlSelf->auto_in_d_bits_denied)) 
                 | (IData)(vlSelf->auto_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (((IData)(vlSelf->auto_in_d_valid) & (0U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSelf->auto_in_d_valid) & (1U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (((IData)(vlSelf->auto_in_d_valid) & (2U 
                                                == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = ((QData)((IData)(vlSelf->auto_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1)
            ? ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                ? (0xffffU & ((IData)(1U) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)))
                : 0U) : 0U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = ((IData)(vlSelf->auto_in_d_valid) & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
           & (6U != (IData)(vlSelf->auto_in_d_bits_opcode)));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___same_cycle_resp_T_1) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSelf->auto_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
            & (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
            & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = ((((IData)(vlSelf->auto_in_d_valid) & (0U 
                                                 == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSelf->auto_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSelf->auto_in_d_valid) & (0U 
                                                != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5427: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5427, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5429: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5429, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5433: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5433, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5435: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5435, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5439: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5439, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5441: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5441, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5445: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5445, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5447: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5447, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5451: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5451, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5453: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5453, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5457: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5457, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5459: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5459, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5463: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5463, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5465: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5465, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5469: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5469, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5471: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5471, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5475: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5475, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5477: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5477, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5481: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5481, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5483: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5483, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5487: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5487, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5489: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5489, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5493: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5493, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5495: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5495, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5499: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5499, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5501: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5501, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5505: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5505, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5507: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5507, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5511: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5511, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5513: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5513, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5517: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5517, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5519: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5519, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5523: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5523, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5525: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5525, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5529: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5529, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5531: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5531, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5535: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5535, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5537: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5537, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5541: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5541, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5543: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5543, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5547: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5547, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5549: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5549, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5553: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5553, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5555: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5555, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5559: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5559, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5561: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5561, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5565: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5565, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5567: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5567, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5571: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5571, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5573: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5573, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5577: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5577, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5579: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5579, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5583: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5583, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5585: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5585, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5589: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5589, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5591: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5591, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5595: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5595, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5597: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5597, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->auto_in_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSelf->auto_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5601: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5601, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5603: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5603, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5607: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5607, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5609: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5609, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(vlSelf->auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5619: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5619, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5621: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5621, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (IData)(vlSelf->auto_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5625: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5625, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5627: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5627, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5631: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5631, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5633: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5633, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(vlSelf->auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5649: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5649, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5651: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5651, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5655: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5655, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5657: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5657, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5673: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5673, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5675: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5675, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24) 
                     & (IData)(vlSelf->auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5685: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5685, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5687: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5687, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5697: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5697, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5699: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5699, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26) 
                     & (IData)(vlSelf->auto_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5709: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5709, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5711: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5711, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5715: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5715, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5717: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5717, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5721: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5721, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5723: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5723, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5727: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5727, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5729: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5729, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27) 
                     & ((0x1fffU & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__address))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5733: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5733, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5735: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5735, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->auto_in_d_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5739: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5739, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5741: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5741, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (0U != (IData)(vlSelf->__PVT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5745: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5745, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5747: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5747, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->auto_in_d_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5751: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5751, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5753: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5753, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->auto_in_d_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5757: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5757, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5759: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5759, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & ((IData)(vlSelf->auto_in_d_bits_denied) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5763: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5763, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5765: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5765, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___GEN_1) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_35)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5770: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5770, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5772: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5772, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((0xfU >= (IData)(vlSelf->auto_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSelf->auto_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                           | (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5777: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5777, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5779: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5779, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (~ (((IData)(vlSelf->auto_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->auto_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5785: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5785, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5787: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5787, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->auto_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5791: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5791, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5793: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5793, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (~ (((IData)(vlSelf->auto_in_d_bits_opcode) 
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
                                 : 0U)) | ((IData)(vlSelf->auto_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5799: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5799, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5801: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5801, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSelf->auto_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5806: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5806, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5808: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5808, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSelf->auto_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->auto_in_d_bits_opcode))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready)) 
                           | (~ (IData)(vlSelf->__PVT__a_q__DOT__full))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5813: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5813, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5815: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5815, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready) 
                                  != ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31)
                                       ? ((0xfU >= (IData)(vlSelf->auto_in_d_bits_source))
                                           ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->auto_in_d_bits_source)))
                                           : 0U) : 0U)) 
                                 | (0U == (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__a_set_wo_ready)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5821: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5821, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5823: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5823, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5829: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5829, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5831: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5831, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((0xfU >= (IData)(vlSelf->auto_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSelf->auto_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5836: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5836, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5838: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5838, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSelf->auto_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5843: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5843, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5845: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5845, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5851: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:42:13)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5851, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5853: Assertion failed in %NysyxSoCFull.fpga.ferr.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 5853, "");
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__idle = 1U;
        __Vdly__r_counter = 0U;
        vlSelf->__PVT__r_counter = __Vdly__r_counter;
        vlSelf->__PVT__idle = __Vdly__idle;
        __Vdly__a_last_counter = 0U;
        vlSelf->__PVT__a_last_counter = __Vdly__a_last_counter;
        __Vdly__beatsLeft = 0U;
        vlSelf->__PVT__state_1 = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__da_ready) 
                                                   & (IData)(vlSelf->__PVT__winner_1));
        __Vdly__idle = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT___GEN_1) 
                            & (4U == (IData)(vlSelf->__PVT__da_bits_opcode)))) 
                        & (IData)(vlSelf->__PVT__idle));
        if (vlSelf->__PVT__unnamedblk1__DOT___GEN_1) {
            __Vdly__r_counter = (7U & ((IData)(vlSelf->__PVT__da_first)
                                        ? (IData)(vlSelf->__PVT__r_beats1)
                                        : ((IData)(vlSelf->__PVT__r_counter) 
                                           - (IData)(1U))));
        }
        vlSelf->__PVT__r_counter = __Vdly__r_counter;
        vlSelf->__PVT__idle = __Vdly__idle;
        if (((IData)(vlSelf->__PVT__a_q_io_deq_ready) 
             & (IData)(vlSelf->__PVT__a_q__DOT__full))) {
            __Vdly__a_last_counter = (7U & ((0U == (IData)(vlSelf->__PVT__a_last_counter))
                                             ? (IData)(vlSelf->__PVT__a_last_beats1)
                                             : ((IData)(vlSelf->__PVT__a_last_counter) 
                                                - (IData)(1U))));
        }
        vlSelf->__PVT__a_last_counter = __Vdly__a_last_counter;
        __Vdly__beatsLeft = (7U & (((IData)(vlSelf->__PVT__idle_1) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready))
                                    ? (((IData)(vlSelf->__PVT__winner_1) 
                                        & (IData)(vlSelf->__PVT__da_bits_opcode))
                                        ? (~ (0x3ffU 
                                              & (((IData)(0x1fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__a_q__DOT__ram 
                                                              >> 0x36U)))) 
                                                 >> 2U)))
                                        : 0U) : ((IData)(vlSelf->__PVT__beatsLeft) 
                                                 - 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready) 
                                                  & (IData)(vlSelf->auto_in_d_valid)))));
        if ((0U == (IData)(vlSelf->__PVT__beatsLeft))) {
            vlSelf->__PVT__state_1 = vlSelf->__PVT__winner_1;
        }
    }
    vlSelf->__PVT__beatsLeft = __Vdly__beatsLeft;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready) 
           & (IData)(vlSelf->auto_in_d_valid));
    if (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSelf->auto_in_d_bits_opcode;
        vlSelf->__PVT__monitor__DOT__param_1 = 0U;
        vlSelf->__PVT__monitor__DOT__size_1 = vlSelf->auto_in_d_bits_size;
        vlSelf->__PVT__monitor__DOT__source_1 = vlSelf->auto_in_d_bits_source;
        vlSelf->__PVT__monitor__DOT__denied = vlSelf->auto_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__monitor__DOT__address = (0x1fffU 
                                                & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address);
    }
    vlSelf->__PVT__da_first = (0U == (IData)(vlSelf->__PVT__r_counter));
    vlSelf->__PVT__a_q__DOT__unnamedblk1__DOT__do_enq 
        = ((~ (IData)(vlSelf->__PVT__a_q__DOT__full)) 
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
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[0U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[1U] 
            = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38[4U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[0U] 
            = ((IData)(vlSelf->auto_in_d_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[1U] 
            = ((IData)(vlSelf->auto_in_d_bits_source) 
               >> 0x1eU);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[2U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[3U] = 0U;
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40[4U] = 0U;
        __Vtemp_h6f0d4cc8__0[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__0[1U] = 0U;
        __Vtemp_h6f0d4cc8__0[2U] = 0U;
        __Vtemp_h6f0d4cc8__0[3U] = 0U;
        __Vtemp_h6f0d4cc8__0[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hf12cd991__0, __Vtemp_h6f0d4cc8__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U] 
            = __Vtemp_hf12cd991__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U] 
            = __Vtemp_hf12cd991__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[2U] 
            = __Vtemp_hf12cd991__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[3U] 
            = __Vtemp_hf12cd991__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hf12cd991__0[4U]);
        if (vlSelf->__PVT__monitor__DOT___GEN_1) {
            __Vtemp_h9c3dd6ed__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                                              << 1U));
            __Vtemp_h068f07fc__0[0U] = (1U | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                              << 1U));
        } else {
            __Vtemp_h9c3dd6ed__0[0U] = 0U;
            __Vtemp_h068f07fc__0[0U] = 0U;
        }
        __Vtemp_h9c3dd6ed__0[1U] = 0U;
        __Vtemp_h9c3dd6ed__0[2U] = 0U;
        __Vtemp_h9c3dd6ed__0[3U] = 0U;
        __Vtemp_h9c3dd6ed__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h4866238e__0, __Vtemp_h9c3dd6ed__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U] 
            = __Vtemp_h4866238e__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U] 
            = __Vtemp_h4866238e__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[2U] 
            = __Vtemp_h4866238e__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[3U] 
            = __Vtemp_h4866238e__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[4U] 
            = (7U & __Vtemp_h4866238e__0[4U]);
        __Vtemp_h6f0d4cc8__1[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__1[1U] = 0U;
        __Vtemp_h6f0d4cc8__1[2U] = 0U;
        __Vtemp_h6f0d4cc8__1[3U] = 0U;
        __Vtemp_h6f0d4cc8__1[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_hb0498656__0, __Vtemp_h6f0d4cc8__1, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[0U] 
            = __Vtemp_hb0498656__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[1U] 
            = __Vtemp_hb0498656__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[2U] 
            = __Vtemp_hb0498656__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[3U] 
            = __Vtemp_hb0498656__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_5[4U] 
            = (0x7fffU & __Vtemp_hb0498656__0[4U]);
        __Vtemp_h068f07fc__0[1U] = 0U;
        __Vtemp_h068f07fc__0[2U] = 0U;
        __Vtemp_h068f07fc__0[3U] = 0U;
        __Vtemp_h068f07fc__0[4U] = 0U;
        VL_SHIFTL_WWW(131,131,131, __Vtemp_h67d83ea6__0, __Vtemp_h068f07fc__0, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_38);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U] 
            = __Vtemp_h67d83ea6__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U] 
            = __Vtemp_h67d83ea6__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[2U] 
            = __Vtemp_h67d83ea6__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[3U] 
            = __Vtemp_h67d83ea6__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[4U] 
            = (7U & __Vtemp_h67d83ea6__0[4U]);
        __Vtemp_h6f0d4cc8__2[0U] = 0xfU;
        __Vtemp_h6f0d4cc8__2[1U] = 0U;
        __Vtemp_h6f0d4cc8__2[2U] = 0U;
        __Vtemp_h6f0d4cc8__2[3U] = 0U;
        __Vtemp_h6f0d4cc8__2[4U] = 0U;
        VL_SHIFTL_WWW(143,143,143, __Vtemp_h899ce6f6__0, __Vtemp_h6f0d4cc8__2, vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_40);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[0U] 
            = __Vtemp_h899ce6f6__0[0U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[1U] 
            = __Vtemp_h899ce6f6__0[1U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[2U] 
            = __Vtemp_h899ce6f6__0[2U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[3U] 
            = __Vtemp_h899ce6f6__0[3U];
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_sizes_clr_T_11[4U] 
            = (0x7fffU & __Vtemp_h899ce6f6__0[4U]);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_1)) 
               & (6U != (IData)(vlSelf->auto_in_d_bits_opcode)));
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSelf->auto_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSelf->auto_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSelf->auto_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->auto_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->auto_in_d_bits_opcode))
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
                                            | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_1)
                                                ? (
                                                   (0xfU 
                                                    >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
                                                    : 0U)
                                                : 0U)) 
                                           & (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                  ? 
                                                 ((0xfU 
                                                   >= (IData)(vlSelf->auto_in_d_bits_source))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSelf->auto_in_d_bits_source))
                                                   : 0U)
                                                  : 0U))));
        __Vdly__monitor__DOT__inflight_opcodes = ((vlSelf->__PVT__monitor__DOT__inflight_opcodes 
                                                   | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_1)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_opcodes_set_T_1[0U])))
                                                       : 0ULL)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___d_opcodes_clr_T_5[0U])))
                                                       : 0ULL)));
        __Vdly__monitor__DOT__inflight_sizes = ((vlSelf->__PVT__monitor__DOT__inflight_sizes 
                                                 | ((IData)(vlSelf->__PVT__monitor__DOT___GEN_1)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_sizes_set_T_1[0U])))
                                                     : 0ULL)) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_39)
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
                                            & (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
                                                   ? 
                                                  ((0xfU 
                                                    >= (IData)(vlSelf->auto_in_d_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSelf->auto_in_d_bits_source))
                                                    : 0U)
                                                   : 0U)));
        __Vdly__monitor__DOT__inflight_sizes_1 = (vlSelf->__PVT__monitor__DOT__inflight_sizes_1 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_41)
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
        if (((IData)(vlSelf->__PVT__a_q__DOT__unnamedblk1__DOT__do_enq) 
             != ((IData)(vlSelf->__PVT__a_q_io_deq_ready) 
                 & (IData)(vlSelf->__PVT__a_q__DOT__full)))) {
            __Vdly__a_q__DOT__full = vlSelf->__PVT__a_q__DOT__unnamedblk1__DOT__do_enq;
        }
    }
    if (vlSelf->__PVT__a_q__DOT__unnamedblk1__DOT__do_enq) {
        vlSelf->__PVT__a_q__DOT__ram = (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
                                            << 0x36U) 
                                           | (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (0x1fffU 
                                                                   & vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address))) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask)) 
                                                     << 0x21U) 
                                                    | ((QData)((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_data)) 
                                                       << 1U))))));
    }
    vlSelf->__PVT__idle_1 = (0U == (IData)(vlSelf->__PVT__beatsLeft));
    vlSelf->__VdfgTmp_hec6944b2__0 = ((0U == (IData)(vlSelf->__PVT__beatsLeft)) 
                                      | (IData)(vlSelf->__PVT__state_1));
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
    vlSelf->__PVT__a_q__DOT__full = __Vdly__a_q__DOT__full;
    vlSelf->__PVT__monitor__DOT__d_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1));
    vlSelf->__PVT__monitor__DOT__d_first_2 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2));
    vlSelf->__PVT__monitor__DOT__a_first_1 = (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1));
    vlSelf->__PVT__da_bits_opcode = ((0x17U >= (0x1fU 
                                                & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__a_q__DOT__ram 
                                                               >> 0x3cU))))))
                                      ? (7U & (0x911240U 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__a_q__DOT__ram 
                                                                  >> 0x3cU)))))))
                                      : 0U);
    vlSelf->__PVT__a_last_beats1 = ((1U & (IData)((vlSelf->__PVT__a_q__DOT__ram 
                                                   >> 0x3eU)))
                                     ? 0U : (7U & (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x1fU) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__a_q__DOT__ram 
                                                                    >> 0x36U)))) 
                                                       >> 2U)))));
    vlSelf->__PVT__r_beats1 = ((1U & (IData)(vlSelf->__PVT__da_bits_opcode))
                                ? (7U & (~ (0x3ffU 
                                            & (((IData)(0x1fU) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__a_q__DOT__ram 
                                                            >> 0x36U)))) 
                                               >> 2U))))
                                : 0U);
    vlSelf->__PVT__a_last = ((1U == (IData)(vlSelf->__PVT__a_last_counter)) 
                             | (0U == (IData)(vlSelf->__PVT__a_last_beats1)));
    vlSelf->__PVT__winner_1 = ((IData)(vlSelf->__PVT__a_q__DOT__full) 
                               & ((IData)(vlSelf->__PVT__a_last) 
                                  & (IData)(vlSelf->__PVT__idle)));
    vlSelf->auto_in_d_bits_denied = ((0U == (IData)(vlSelf->__PVT__beatsLeft))
                                      ? (IData)(vlSelf->__PVT__winner_1)
                                      : (IData)(vlSelf->__PVT__state_1));
    if (vlSelf->auto_in_d_bits_denied) {
        vlSelf->auto_in_d_bits_corrupt = (1U & (IData)(vlSelf->__PVT__da_bits_opcode));
        vlSelf->auto_in_d_bits_source = (0xfU & (IData)(
                                                        (vlSelf->__PVT__a_q__DOT__ram 
                                                         >> 0x32U)));
    } else {
        vlSelf->auto_in_d_bits_corrupt = 0U;
        vlSelf->auto_in_d_bits_source = 0U;
    }
}

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__2(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__2\n"); );
    // Body
    vlSelf->__PVT__monitor__DOT___a_first_T_1 = ((~ (IData)(vlSelf->__PVT__a_q__DOT__full)) 
                                                 & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_a_valid));
    vlSelf->__PVT__monitor__DOT___GEN_1 = ((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
                                           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLError___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__0(VysyxSoCFull_TLError* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLError___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__ferr__0\n"); );
    // Body
    vlSelf->__PVT__da_ready = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_out_1_d_ready) 
                               & (IData)(vlSelf->__VdfgTmp_hec6944b2__0));
    vlSelf->__PVT__a_q_io_deq_ready = (1U & ((~ (IData)(vlSelf->__PVT__a_last)) 
                                             | ((IData)(vlSelf->__PVT__da_ready) 
                                                & (((1U 
                                                     == (IData)(vlSelf->__PVT__r_counter)) 
                                                    | (0U 
                                                       == (IData)(vlSelf->__PVT__r_beats1))) 
                                                   & (IData)(vlSelf->__PVT__idle)))));
}
