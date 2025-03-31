// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull_TLFIFOFixer.h"
#include "VysyxSoCFull__Syms.h"

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0\n"); );
    // Body
    vlSelf->__PVT__a_id = ((2U & ((~ (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                      >> 0x1eU)) << 1U)) 
                           | (1U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                                    >> 0x1eU)));
    vlSelf->__PVT__stall = (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                                 >> 3U)) & ((0U == (IData)(vlSelf->__PVT__a_first_counter)) 
                                            & (((IData)(vlSelf->__PVT__flight_0) 
                                                | ((IData)(vlSelf->__PVT__flight_1) 
                                                   | ((IData)(vlSelf->__PVT__flight_2) 
                                                      | ((IData)(vlSelf->__PVT__flight_3) 
                                                         | ((IData)(vlSelf->__PVT__flight_4) 
                                                            | ((IData)(vlSelf->__PVT__flight_5) 
                                                               | ((IData)(vlSelf->__PVT__flight_6) 
                                                                  | (IData)(vlSelf->__PVT__flight_7)))))))) 
                                               & ((0U 
                                                   == (IData)(vlSelf->__PVT__a_id)) 
                                                  | ((IData)(vlSelf->__PVT__stalls_id) 
                                                     != (IData)(vlSelf->__PVT__a_id)))))) 
                            | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                                >> 3U) & ((0U == (IData)(vlSelf->__PVT__a_first_counter)) 
                                          & (((IData)(vlSelf->__PVT__flight_8) 
                                              | ((IData)(vlSelf->__PVT__flight_9) 
                                                 | ((IData)(vlSelf->__PVT__flight_10) 
                                                    | ((IData)(vlSelf->__PVT__flight_11) 
                                                       | ((IData)(vlSelf->__PVT__flight_12) 
                                                          | ((IData)(vlSelf->__PVT__flight_13) 
                                                             | ((IData)(vlSelf->__PVT__flight_14) 
                                                                | (IData)(vlSelf->__PVT__flight_15)))))))) 
                                             & ((0U 
                                                 == (IData)(vlSelf->__PVT__a_id)) 
                                                | ((IData)(vlSelf->__PVT__stalls_id_1) 
                                                   != (IData)(vlSelf->__PVT__a_id)))))));
    vlSelf->auto_anon_out_a_valid = ((~ (IData)(vlSelf->__PVT__stall)) 
                                     & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__1(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___act_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__1\n"); );
    // Body
    vlSelf->auto_anon_in_a_ready = ((~ (IData)(vlSelf->__PVT__stall)) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_a_ready));
    vlSelf->__PVT__monitor__DOT___a_first_T_1 = ((IData)(vlSelf->auto_anon_in_a_ready) 
                                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid));
    vlSelf->__PVT__monitor__DOT___GEN_0 = ((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
                                           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__0\n"); );
    // Init
    CData/*0:0*/ __PVT__unnamedblk1__DOT___stalls_id_T_4;
    __PVT__unnamedblk1__DOT___stalls_id_T_4 = 0;
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
    CData/*2:0*/ __Vdly__a_first_counter;
    __Vdly__a_first_counter = 0;
    CData/*2:0*/ __Vdly__d_first_counter;
    __Vdly__d_first_counter = 0;
    CData/*0:0*/ __Vdly__flight_0;
    __Vdly__flight_0 = 0;
    CData/*0:0*/ __Vdly__flight_1;
    __Vdly__flight_1 = 0;
    CData/*0:0*/ __Vdly__flight_2;
    __Vdly__flight_2 = 0;
    CData/*0:0*/ __Vdly__flight_3;
    __Vdly__flight_3 = 0;
    CData/*0:0*/ __Vdly__flight_4;
    __Vdly__flight_4 = 0;
    CData/*0:0*/ __Vdly__flight_5;
    __Vdly__flight_5 = 0;
    CData/*0:0*/ __Vdly__flight_6;
    __Vdly__flight_6 = 0;
    CData/*0:0*/ __Vdly__flight_7;
    __Vdly__flight_7 = 0;
    CData/*0:0*/ __Vdly__flight_8;
    __Vdly__flight_8 = 0;
    CData/*0:0*/ __Vdly__flight_9;
    __Vdly__flight_9 = 0;
    CData/*0:0*/ __Vdly__flight_10;
    __Vdly__flight_10 = 0;
    CData/*0:0*/ __Vdly__flight_11;
    __Vdly__flight_11 = 0;
    CData/*0:0*/ __Vdly__flight_12;
    __Vdly__flight_12 = 0;
    CData/*0:0*/ __Vdly__flight_13;
    __Vdly__flight_13 = 0;
    CData/*0:0*/ __Vdly__flight_14;
    __Vdly__flight_14 = 0;
    CData/*0:0*/ __Vdly__flight_15;
    __Vdly__flight_15 = 0;
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
    __Vdly__d_first_counter = vlSelf->__PVT__d_first_counter;
    __Vdly__flight_15 = vlSelf->__PVT__flight_15;
    __Vdly__flight_14 = vlSelf->__PVT__flight_14;
    __Vdly__flight_13 = vlSelf->__PVT__flight_13;
    __Vdly__flight_12 = vlSelf->__PVT__flight_12;
    __Vdly__flight_11 = vlSelf->__PVT__flight_11;
    __Vdly__flight_10 = vlSelf->__PVT__flight_10;
    __Vdly__flight_9 = vlSelf->__PVT__flight_9;
    __Vdly__flight_8 = vlSelf->__PVT__flight_8;
    __Vdly__flight_7 = vlSelf->__PVT__flight_7;
    __Vdly__flight_6 = vlSelf->__PVT__flight_6;
    __Vdly__flight_5 = vlSelf->__PVT__flight_5;
    __Vdly__flight_4 = vlSelf->__PVT__flight_4;
    __Vdly__flight_3 = vlSelf->__PVT__flight_3;
    __Vdly__flight_2 = vlSelf->__PVT__flight_2;
    __Vdly__flight_1 = vlSelf->__PVT__flight_1;
    __Vdly__flight_0 = vlSelf->__PVT__flight_0;
    __Vdly__a_first_counter = vlSelf->__PVT__a_first_counter;
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
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
           & ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
              | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                 >> 0x1eU)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((3U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)) 
            & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
               >> 0x1eU)) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (0U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (0x20U < (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_sink));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
           & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
            & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15459: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15459, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15461: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15461, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15465: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15465, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15467: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15467, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15471: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15471, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15473: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15473, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15477: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15477, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15479: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15479, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15483: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15483, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15485: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15485, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15489: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15489, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15491: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15491, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15495: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15495, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15497: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15497, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15501: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15501, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15503: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15503, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15507: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15507, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15509: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15509, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15513: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15513, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15515: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15515, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15519: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15519, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15521: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15521, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15525: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15525, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15527: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15527, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15531: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15531, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15533: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15533, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15537: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15537, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15539: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15539, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15543: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15543, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15545: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15545, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15549: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15549, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15551: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15551, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15555: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15555, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15557: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15557, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15561: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15561, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15563: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15563, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15567: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15567, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15569: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15569, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15573: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15573, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15575: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15575, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15579: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15579, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15581: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15581, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15585: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15585, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15587: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15587, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15591: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15591, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15593: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15593, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15597: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15597, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15599: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15599, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15603: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15603, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15605: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15605, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15609: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15609, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15611: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15611, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15615: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15615, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15617: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15617, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15621: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15621, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15623: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15623, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15627: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15627, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15629: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15629, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15633: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15633, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15635: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15635, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15639: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15639, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15641: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15641, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15645: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15645, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15647: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15647, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15651: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15651, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15653: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15653, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15657: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15657, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15659: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15659, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15663: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15663, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15665: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15665, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15669: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15669, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15671: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15671, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15675: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15675, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15677: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15677, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15681: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15681, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15683: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15683, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15687: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15687, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15689: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15689, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15693: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15693, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15695: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15695, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15699: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15699, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15701: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15701, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15705: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15705, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15707: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15707, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15711: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15711, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15713: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15713, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15717: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15717, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15719: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15719, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15723: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15723, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15725: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15725, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15729: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15729, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15731: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15731, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15735: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15735, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15737: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15737, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15741: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15741, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15743: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15743, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15747: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15747, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15749: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15749, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15753: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15753, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15755: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15755, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15759: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15759, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15761: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15761, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15765: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15765, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15767: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15767, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15771: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15771, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15773: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15773, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address 
                        != vlSelf->__PVT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15777: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15777, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15779: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15779, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15783: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15783, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15785: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15785, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15789: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15789, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15791: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15791, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15795: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15795, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15797: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15797, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15801: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15801, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15803: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15803, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_sink) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15807: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15807, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15809: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15809, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_denied) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15813: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15813, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15815: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15815, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_41)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15820: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15820, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15822: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15822, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = ((0xfU >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                           | (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15827: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15827, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15829: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15829, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15835: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15835, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15837: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15837, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15841: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15841, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15843: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15843, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
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
                                 : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15849: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15849, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15851: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15851, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15856: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15856, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15858: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15858, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready)) 
                           | (IData)(vlSelf->auto_anon_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15863: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15863, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15865: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15865, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15871: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15871, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15873: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15873, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 
        = ((0xfU >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_43))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15878: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15878, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15880: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15880, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15885: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15885, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15887: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15887, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15893: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15893, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15895: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15895, "");
    }
    __PVT__unnamedblk1__DOT___stalls_id_T_4 = ((IData)(vlSelf->auto_anon_in_a_ready) 
                                               & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_a_valid));
    if (((IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4) 
         & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
               >> 3U)))) {
        vlSelf->__PVT__stalls_id = vlSelf->__PVT__a_id;
    }
    if (((IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4) 
         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source) 
            >> 3U))) {
        vlSelf->__PVT__stalls_id_1 = vlSelf->__PVT__a_id;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__a_first_counter = 0U;
        __Vdly__d_first_counter = 0U;
        __Vdly__flight_0 = 0U;
        __Vdly__flight_1 = 0U;
        __Vdly__flight_2 = 0U;
        __Vdly__flight_3 = 0U;
        __Vdly__flight_4 = 0U;
        __Vdly__flight_5 = 0U;
        __Vdly__flight_6 = 0U;
        __Vdly__flight_7 = 0U;
        __Vdly__flight_8 = 0U;
        __Vdly__flight_9 = 0U;
        __Vdly__flight_10 = 0U;
        __Vdly__flight_11 = 0U;
        __Vdly__flight_12 = 0U;
        __Vdly__flight_13 = 0U;
        __Vdly__flight_14 = 0U;
        __Vdly__flight_15 = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first 
            = (0U == (IData)(vlSelf->__PVT__d_first_counter));
        vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
            = ((IData)(vlSelf->__PVT__a_first) & (IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4));
        vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
            = ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first) 
                 & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready)) 
               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid));
        if (__PVT__unnamedblk1__DOT___stalls_id_T_4) {
            vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_first_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__a_first_counter = (7U & ((IData)(vlSelf->__PVT__a_first)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_first_beats1_decode_T) 
                                                   >> 2U)))
                                              : ((IData)(vlSelf->__PVT__a_first_counter) 
                                                 - (IData)(1U))));
        }
        if (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid))) {
            vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___d_first_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size)));
            __Vdly__d_first_counter = (7U & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first)
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___d_first_beats1_decode_T) 
                                                   >> 2U))
                                                  : 0U)
                                              : ((IData)(vlSelf->__PVT__d_first_counter) 
                                                 - (IData)(1U))));
        }
        __Vdly__flight_0 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_0)));
        __Vdly__flight_1 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_1)));
        __Vdly__flight_2 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_2)));
        __Vdly__flight_3 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_3)));
        __Vdly__flight_4 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_4)));
        __Vdly__flight_5 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_5)));
        __Vdly__flight_6 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_6)));
        __Vdly__flight_7 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_7)));
        __Vdly__flight_8 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (8U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (8U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_8)));
        __Vdly__flight_9 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (9U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (9U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_9)));
        __Vdly__flight_10 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xaU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xaU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_10)));
        __Vdly__flight_11 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xbU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xbU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_11)));
        __Vdly__flight_12 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xcU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xcU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_12)));
        __Vdly__flight_13 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xdU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xdU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_13)));
        __Vdly__flight_14 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xeU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xeU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_14)));
        __Vdly__flight_15 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xfU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_15)));
    }
    vlSelf->__PVT__d_first_counter = __Vdly__d_first_counter;
    vlSelf->__PVT__flight_0 = __Vdly__flight_0;
    vlSelf->__PVT__flight_1 = __Vdly__flight_1;
    vlSelf->__PVT__flight_2 = __Vdly__flight_2;
    vlSelf->__PVT__flight_3 = __Vdly__flight_3;
    vlSelf->__PVT__flight_4 = __Vdly__flight_4;
    vlSelf->__PVT__flight_5 = __Vdly__flight_5;
    vlSelf->__PVT__flight_6 = __Vdly__flight_6;
    vlSelf->__PVT__flight_7 = __Vdly__flight_7;
    vlSelf->__PVT__flight_8 = __Vdly__flight_8;
    vlSelf->__PVT__flight_9 = __Vdly__flight_9;
    vlSelf->__PVT__flight_10 = __Vdly__flight_10;
    vlSelf->__PVT__flight_11 = __Vdly__flight_11;
    vlSelf->__PVT__flight_12 = __Vdly__flight_12;
    vlSelf->__PVT__flight_13 = __Vdly__flight_13;
    vlSelf->__PVT__flight_14 = __Vdly__flight_14;
    vlSelf->__PVT__flight_15 = __Vdly__flight_15;
    vlSelf->__PVT__a_first_counter = __Vdly__a_first_counter;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__nodeOut_d_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_valid));
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
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source) 
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
               & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode))
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
                                                   >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))
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
                                                    >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source))
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
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_opcode;
        vlSelf->__PVT__monitor__DOT__param_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_param;
        vlSelf->__PVT__monitor__DOT__size_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_size;
        vlSelf->__PVT__monitor__DOT__source_1 = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_source;
        vlSelf->__PVT__monitor__DOT__sink = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_sink;
        vlSelf->__PVT__monitor__DOT__denied = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1.auto_anon_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__a_first_counter));
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

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0\n"); );
    // Init
    CData/*0:0*/ __PVT__unnamedblk1__DOT___stalls_id_T_4;
    __PVT__unnamedblk1__DOT___stalls_id_T_4 = 0;
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
    CData/*2:0*/ __Vdly__a_first_counter;
    __Vdly__a_first_counter = 0;
    CData/*2:0*/ __Vdly__d_first_counter;
    __Vdly__d_first_counter = 0;
    CData/*0:0*/ __Vdly__flight_0;
    __Vdly__flight_0 = 0;
    CData/*0:0*/ __Vdly__flight_1;
    __Vdly__flight_1 = 0;
    CData/*0:0*/ __Vdly__flight_2;
    __Vdly__flight_2 = 0;
    CData/*0:0*/ __Vdly__flight_3;
    __Vdly__flight_3 = 0;
    CData/*0:0*/ __Vdly__flight_4;
    __Vdly__flight_4 = 0;
    CData/*0:0*/ __Vdly__flight_5;
    __Vdly__flight_5 = 0;
    CData/*0:0*/ __Vdly__flight_6;
    __Vdly__flight_6 = 0;
    CData/*0:0*/ __Vdly__flight_7;
    __Vdly__flight_7 = 0;
    CData/*0:0*/ __Vdly__flight_8;
    __Vdly__flight_8 = 0;
    CData/*0:0*/ __Vdly__flight_9;
    __Vdly__flight_9 = 0;
    CData/*0:0*/ __Vdly__flight_10;
    __Vdly__flight_10 = 0;
    CData/*0:0*/ __Vdly__flight_11;
    __Vdly__flight_11 = 0;
    CData/*0:0*/ __Vdly__flight_12;
    __Vdly__flight_12 = 0;
    CData/*0:0*/ __Vdly__flight_13;
    __Vdly__flight_13 = 0;
    CData/*0:0*/ __Vdly__flight_14;
    __Vdly__flight_14 = 0;
    CData/*0:0*/ __Vdly__flight_15;
    __Vdly__flight_15 = 0;
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
    __Vdly__d_first_counter = vlSelf->__PVT__d_first_counter;
    __Vdly__flight_15 = vlSelf->__PVT__flight_15;
    __Vdly__flight_14 = vlSelf->__PVT__flight_14;
    __Vdly__flight_13 = vlSelf->__PVT__flight_13;
    __Vdly__flight_12 = vlSelf->__PVT__flight_12;
    __Vdly__flight_11 = vlSelf->__PVT__flight_11;
    __Vdly__flight_10 = vlSelf->__PVT__flight_10;
    __Vdly__flight_9 = vlSelf->__PVT__flight_9;
    __Vdly__flight_8 = vlSelf->__PVT__flight_8;
    __Vdly__flight_7 = vlSelf->__PVT__flight_7;
    __Vdly__flight_6 = vlSelf->__PVT__flight_6;
    __Vdly__flight_5 = vlSelf->__PVT__flight_5;
    __Vdly__flight_4 = vlSelf->__PVT__flight_4;
    __Vdly__flight_3 = vlSelf->__PVT__flight_3;
    __Vdly__flight_2 = vlSelf->__PVT__flight_2;
    __Vdly__flight_1 = vlSelf->__PVT__flight_1;
    __Vdly__flight_0 = vlSelf->__PVT__flight_0;
    __Vdly__a_first_counter = vlSelf->__PVT__a_first_counter;
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
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_12 
        = (0xfU != (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_13 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_14 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_7) 
           & ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_8) 
              | (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                 >> 0x1eU)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_15 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_16 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
           != (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_17 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_18 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_19 
        = (((3U > (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)) 
            & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
               >> 0x1eU)) | (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_9));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_20 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_21 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_22 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_23 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_24 
        = (0U == (3U & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        >> 1U)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_25 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_26 
        = (0x20U < (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_sink));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_27 
        = (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_28 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_29 
        = (1U & ((~ (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_denied)) 
                 | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_30 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_31 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_32 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35 
        = ((QData)((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)) 
           << 2U);
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_36 
        = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_37 
        = ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
           & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
    vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
           & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
              == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_38 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_39 
        = (((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
            & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_40 
        = ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
             & (0U == (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_2))) 
            & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_33 
        = (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid) 
            & (0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_34 
        = (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
            & (0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))) 
           & (~ (IData)(vlSymsp->TOP.reset)));
    __PVT__monitor__DOT__unnamedblk1__DOT___a_opcode_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_opcodes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15459: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15459, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15461: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15461, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15465: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15465, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15467: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15467, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15471: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15471, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15473: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15473, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15477: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15477, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15479: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15479, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_11) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15483: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15483, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15485: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15485, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_10))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15489: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15489, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15491: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15491, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15495: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15495, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15497: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15497, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                                                >> 1U)))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15501: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15501, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15503: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15503, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15507: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15507, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15509: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15509, "");
    }
    if (VL_UNLIKELY(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13)) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15513: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15513, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15515: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15515, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_13) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_12)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15519: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15519, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15521: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15521, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15525: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15525, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15527: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15527, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15531: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15531, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15533: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15533, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_15) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15537: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Get contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15537, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15539: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15539, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15543: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15543, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15545: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15545, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15549: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15549, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15551: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15551, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_17) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15555: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15555, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15557: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15557, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15561: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15561, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15563: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15563, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15567: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15567, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15569: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15569, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_18) 
                     & (0U != ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_mask) 
                               & (~ (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15573: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15573, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15575: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15575, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15579: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15579, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15581: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15581, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15585: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15585, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15587: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15587, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_20) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15591: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15591, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15593: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15593, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_19))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15597: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15597, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15599: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15599, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15603: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15603, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15605: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15605, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_21) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15609: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Logical contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15609, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15611: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15611, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_14))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15615: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15615, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15617: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15617, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (0U != (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_6))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15621: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint address not aligned to size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15621, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15623: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15623, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_22) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_16)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15627: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel Hint contains invalid mask (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15627, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15629: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15629, "");
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15633: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel has invalid opcode (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15633, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15635: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15635, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15639: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15639, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15641: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15641, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15645: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15645, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15647: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15647, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15651: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15651, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15653: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15653, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_23) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15657: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel ReleaseAck is denied (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15657, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15659: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15659, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15663: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15663, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15665: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15665, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15669: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15669, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15671: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15671, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15675: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15675, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15677: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15677, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15681: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15681, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15683: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15683, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_25) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15687: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel Grant is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15687, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15689: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15689, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_26)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15693: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15693, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15695: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15695, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_24)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15699: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15699, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15701: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15701, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15705: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15705, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15707: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15707, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_27)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15711: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData carries toN param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15711, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15713: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15713, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_28) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15717: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15717, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15719: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15719, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15723: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15723, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15725: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15725, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_30) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15729: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15729, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15731: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15731, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15735: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15735, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15737: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15737, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_31) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_29))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15741: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15741, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15743: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15743, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (0U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15747: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck carries invalid param (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15747, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15749: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15749, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_32) 
                     & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15753: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel HintAck is corrupt (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15753, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15755: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15755, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15759: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15759, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15761: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15761, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15765: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15765, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15767: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15767, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15771: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15771, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15773: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15773, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_33) 
                     & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                        != vlSelf->__PVT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15777: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel address changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15777, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15779: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15779, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15783: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15783, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15785: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15785, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15789: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel param changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15789, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15791: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15791, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15795: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel size changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15795, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15797: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15797, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15801: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel source changed within multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15801, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15803: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15803, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_sink) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15807: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15807, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15809: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15809, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_34) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_denied) 
                        != (IData)(vlSelf->__PVT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15813: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15813, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15815: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15815, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_41 
        = ((0xfU >= (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT___GEN_0) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_41)))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15820: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'A' channel re-used a source ID (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15820, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15822: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15822, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_42 
        = ((0xfU >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight) 
                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_37) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_42) 
                           | (IData)(vlSelf->__PVT__monitor__DOT__unnamedblk1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15827: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15827, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15829: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15829, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15835: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15835, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15837: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15837, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_38) 
                     & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size) 
                        != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15841: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15841, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15843: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15843, "");
    }
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & (~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
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
                                 : 0U)) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15849: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper opcode response (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15849, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15851: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15851, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_39) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___a_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15856: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15856, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15858: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15858, "");
    }
    if (VL_UNLIKELY((((((((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_36) 
                          & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid)) 
                        & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                           == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))) 
                       & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready)) 
                           | (IData)(vlSelf->auto_anon_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15863: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: ready check\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15863, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15865: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15865, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15871: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15871, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15873: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15873, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___GEN_43 
        = ((0xfU >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))
            ? (0xffffU & ((IData)(vlSelf->__PVT__monitor__DOT__inflight_1) 
                          >> (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))
            : 0U);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                     & (~ (IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_43))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15878: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15878, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15880: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15880, "");
    }
    __PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->__PVT__monitor__DOT__inflight_sizes_1, __PVT__monitor__DOT__unnamedblk1__DOT___GEN_35);
    if (VL_UNLIKELY(((IData)(__PVT__monitor__DOT__unnamedblk1__DOT___GEN_40) 
                     & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size) 
                        != (7U & (IData)((__PVT__monitor__DOT__unnamedblk1__DOT___c_size_lookup_T_1 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15885: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: 'D' channel contains improper response size (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15885, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15887: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15887, "");
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSymsp->TOP.reset)) 
                           & (~ (((0U == (IData)(vlSelf->__PVT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->__PVT__monitor__DOT__watchdog_1 
                                    < vlSelf->__PVT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15893: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1: Assertion failed: TileLink timeout expired (connected at home/plutoisy/ysyx-workbench/ysyxSoC/src/device/ChipLinkBridge.scala:103:43)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15893, "");
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15895: Assertion failed in %NysyxSoCFull.fpga.fixer.monitor.unnamedblk1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v", 15895, "");
    }
    __PVT__unnamedblk1__DOT___stalls_id_T_4 = ((IData)(vlSelf->auto_anon_in_a_ready) 
                                               & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid));
    if (((IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4) 
         & (~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
               >> 3U)))) {
        vlSelf->__PVT__stalls_id = vlSelf->__PVT__a_id;
    }
    if (((IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4) 
         & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
            >> 3U))) {
        vlSelf->__PVT__stalls_id_1 = vlSelf->__PVT__a_id;
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__a_first_counter = 0U;
        __Vdly__d_first_counter = 0U;
        __Vdly__flight_0 = 0U;
        __Vdly__flight_1 = 0U;
        __Vdly__flight_2 = 0U;
        __Vdly__flight_3 = 0U;
        __Vdly__flight_4 = 0U;
        __Vdly__flight_5 = 0U;
        __Vdly__flight_6 = 0U;
        __Vdly__flight_7 = 0U;
        __Vdly__flight_8 = 0U;
        __Vdly__flight_9 = 0U;
        __Vdly__flight_10 = 0U;
        __Vdly__flight_11 = 0U;
        __Vdly__flight_12 = 0U;
        __Vdly__flight_13 = 0U;
        __Vdly__flight_14 = 0U;
        __Vdly__flight_15 = 0U;
    } else {
        vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first 
            = (0U == (IData)(vlSelf->__PVT__d_first_counter));
        vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN 
            = ((IData)(vlSelf->__PVT__a_first) & (IData)(__PVT__unnamedblk1__DOT___stalls_id_T_4));
        vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0 
            = ((((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first) 
                 & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))) 
                & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready)) 
               & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid));
        if (__PVT__unnamedblk1__DOT___stalls_id_T_4) {
            vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_first_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size)));
            __Vdly__a_first_counter = (7U & ((IData)(vlSelf->__PVT__a_first)
                                              ? ((4U 
                                                  & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode))
                                                  ? 0U
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___a_first_beats1_decode_T) 
                                                   >> 2U)))
                                              : ((IData)(vlSelf->__PVT__a_first_counter) 
                                                 - (IData)(1U))));
        }
        if (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready) 
             & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid))) {
            vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___d_first_beats1_decode_T 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size)));
            __Vdly__d_first_counter = (7U & ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__d_first_first)
                                              ? ((1U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___d_first_beats1_decode_T) 
                                                   >> 2U))
                                                  : 0U)
                                              : ((IData)(vlSelf->__PVT__d_first_counter) 
                                                 - (IData)(1U))));
        }
        __Vdly__flight_0 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (0U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_0)));
        __Vdly__flight_1 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (1U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (1U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_1)));
        __Vdly__flight_2 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (2U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (2U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_2)));
        __Vdly__flight_3 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (3U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (3U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_3)));
        __Vdly__flight_4 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (4U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (4U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_4)));
        __Vdly__flight_5 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (5U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (5U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_5)));
        __Vdly__flight_6 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (6U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_6)));
        __Vdly__flight_7 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (7U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (7U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_7)));
        __Vdly__flight_8 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (8U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (8U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_8)));
        __Vdly__flight_9 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                & (9U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                            & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                & (9U == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                               | (IData)(vlSelf->__PVT__flight_9)));
        __Vdly__flight_10 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xaU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xaU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_10)));
        __Vdly__flight_11 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xbU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xbU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_11)));
        __Vdly__flight_12 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xcU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xcU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_12)));
        __Vdly__flight_13 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xdU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xdU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_13)));
        __Vdly__flight_14 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xeU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xeU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_14)));
        __Vdly__flight_15 = ((~ ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_0) 
                                 & (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source)))) 
                             & (((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT___GEN) 
                                 & (0xfU == (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source))) 
                                | (IData)(vlSelf->__PVT__flight_15)));
    }
    vlSelf->__PVT__d_first_counter = __Vdly__d_first_counter;
    vlSelf->__PVT__flight_0 = __Vdly__flight_0;
    vlSelf->__PVT__flight_1 = __Vdly__flight_1;
    vlSelf->__PVT__flight_2 = __Vdly__flight_2;
    vlSelf->__PVT__flight_3 = __Vdly__flight_3;
    vlSelf->__PVT__flight_4 = __Vdly__flight_4;
    vlSelf->__PVT__flight_5 = __Vdly__flight_5;
    vlSelf->__PVT__flight_6 = __Vdly__flight_6;
    vlSelf->__PVT__flight_7 = __Vdly__flight_7;
    vlSelf->__PVT__flight_8 = __Vdly__flight_8;
    vlSelf->__PVT__flight_9 = __Vdly__flight_9;
    vlSelf->__PVT__flight_10 = __Vdly__flight_10;
    vlSelf->__PVT__flight_11 = __Vdly__flight_11;
    vlSelf->__PVT__flight_12 = __Vdly__flight_12;
    vlSelf->__PVT__flight_13 = __Vdly__flight_13;
    vlSelf->__PVT__flight_14 = __Vdly__flight_14;
    vlSelf->__PVT__flight_15 = __Vdly__flight_15;
    vlSelf->__PVT__a_first_counter = __Vdly__a_first_counter;
    __PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2 
        = ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_d_ready) 
           & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_valid));
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
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source) 
               << 2U);
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_46[1U] 
            = ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source) 
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
               & (6U != (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
        vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_47 
            = (((IData)(__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) 
                & (IData)(vlSelf->__PVT__monitor__DOT__d_first_2)) 
               & (6U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode)));
        if (__PVT__monitor__DOT__unnamedblk2__DOT___d_first_T_2) {
            vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6 
                = (0xfffU & ((IData)(0x1fU) << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size)));
            __Vdly__monitor__DOT__d_first_counter = 
                (7U & ((0U != (IData)(vlSelf->__PVT__monitor__DOT__d_first_counter))
                        ? ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter) 
                           - (IData)(1U)) : ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                                              ? (~ 
                                                 ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                                  >> 2U))
                                              : 0U)));
            __Vdly__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))
                              ? (~ ((IData)(vlSelf->__PVT__monitor__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk5__DOT___d_first_beats1_decode_T_6) 
                                    >> 2U)) : 0U) : 
                         ((IData)(vlSelf->__PVT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
            __Vdly__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->__PVT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode))
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
                                                   >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))
                                                   ? 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))
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
                                                    >= (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))
                                                    ? 
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source))
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
        vlSelf->__PVT__monitor__DOT__opcode_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_opcode;
        vlSelf->__PVT__monitor__DOT__param_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_param;
        vlSelf->__PVT__monitor__DOT__size_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_size;
        vlSelf->__PVT__monitor__DOT__source_1 = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_source;
        vlSelf->__PVT__monitor__DOT__sink = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_sink;
        vlSelf->__PVT__monitor__DOT__denied = vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_d_bits_denied;
    }
    if (((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
         & (~ (IData)((0U != (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter)))))) {
        vlSelf->__PVT__monitor__DOT__opcode = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_opcode;
        vlSelf->__PVT__monitor__DOT__size = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_size;
        vlSelf->__PVT__monitor__DOT__source = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source;
        vlSelf->__PVT__monitor__DOT__address = vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address;
    }
    vlSelf->__PVT__a_first = (0U == (IData)(vlSelf->__PVT__a_first_counter));
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

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__1(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_sequent__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__1\n"); );
    // Body
    vlSelf->__PVT__a_id = ((2U & ((~ (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                      >> 0x1eU)) << 1U)) 
                           | (1U & (vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_address 
                                    >> 0x1eU)));
    vlSelf->__PVT__stall = (((~ ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                                 >> 3U)) & ((0U == (IData)(vlSelf->__PVT__a_first_counter)) 
                                            & (((IData)(vlSelf->__PVT__flight_0) 
                                                | ((IData)(vlSelf->__PVT__flight_1) 
                                                   | ((IData)(vlSelf->__PVT__flight_2) 
                                                      | ((IData)(vlSelf->__PVT__flight_3) 
                                                         | ((IData)(vlSelf->__PVT__flight_4) 
                                                            | ((IData)(vlSelf->__PVT__flight_5) 
                                                               | ((IData)(vlSelf->__PVT__flight_6) 
                                                                  | (IData)(vlSelf->__PVT__flight_7)))))))) 
                                               & ((0U 
                                                   == (IData)(vlSelf->__PVT__a_id)) 
                                                  | ((IData)(vlSelf->__PVT__stalls_id) 
                                                     != (IData)(vlSelf->__PVT__a_id)))))) 
                            | (((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT___axi42tl_auto_out_a_bits_source) 
                                >> 3U) & ((0U == (IData)(vlSelf->__PVT__a_first_counter)) 
                                          & (((IData)(vlSelf->__PVT__flight_8) 
                                              | ((IData)(vlSelf->__PVT__flight_9) 
                                                 | ((IData)(vlSelf->__PVT__flight_10) 
                                                    | ((IData)(vlSelf->__PVT__flight_11) 
                                                       | ((IData)(vlSelf->__PVT__flight_12) 
                                                          | ((IData)(vlSelf->__PVT__flight_13) 
                                                             | ((IData)(vlSelf->__PVT__flight_14) 
                                                                | (IData)(vlSelf->__PVT__flight_15)))))))) 
                                             & ((0U 
                                                 == (IData)(vlSelf->__PVT__a_id)) 
                                                | ((IData)(vlSelf->__PVT__stalls_id_1) 
                                                   != (IData)(vlSelf->__PVT__a_id)))))));
    vlSelf->auto_anon_out_a_valid = ((~ (IData)(vlSelf->__PVT__stall)) 
                                     & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid));
}

VL_INLINE_OPT void VysyxSoCFull_TLFIFOFixer___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0(VysyxSoCFull_TLFIFOFixer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VysyxSoCFull_TLFIFOFixer___nba_comb__TOP__ysyxSoCFull__DOT__fpga__DOT__fixer__0\n"); );
    // Body
    vlSelf->auto_anon_in_a_ready = ((~ (IData)(vlSelf->__PVT__stall)) 
                                    & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__fpga__DOT__xbar_1.auto_anon_in_a_ready));
    vlSelf->__PVT__monitor__DOT___a_first_T_1 = ((IData)(vlSelf->auto_anon_in_a_ready) 
                                                 & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__nodeOut_a_valid));
    vlSelf->__PVT__monitor__DOT___GEN_0 = ((IData)(vlSelf->__PVT__monitor__DOT___a_first_T_1) 
                                           & (0U == (IData)(vlSelf->__PVT__monitor__DOT__a_first_counter_1)));
}
