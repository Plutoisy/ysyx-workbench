// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_mul_top.h"

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2__0(VysyxSoCFull_mul_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __VdfgRegularize_h0309defd_0_1;
    __VdfgRegularize_h0309defd_0_1 = 0;
    // Body
    __VdfgRegularize_h0309defd_0_1 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                 [0x12U] 
                                                 >> 0xfU)) 
                                      | (0xffU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                  [0x12U] 
                                                  >> 0x10U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x11U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x12U] >> 0x10U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x12U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x13U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x14U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x15U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x16U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((((0x100U & ((~ ((~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                            | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                               [0x12U] >> 0x17U))) 
                        << 8U)) | ((0x80U & ((~ ((~ 
                                                  ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                   | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x12U] 
                                                      >> 0x17U))) 
                                                 | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x12U] 
                                                       >> 0x17U)))) 
                                             << 7U)) 
                                   | (0x40U & ((~ (
                                                   (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                   | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x12U] 
                                                       >> 0x16U) 
                                                      & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)))) 
                                               << 6U)))) 
            | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                      [0x12U] >> 0x15U) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb))) 
                 & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)) 
                << 5U) | (((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                [0x12U] >> 0x14U) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb))) 
                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)) 
                          << 4U))) | (((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                              [0x12U] 
                                              >> 0x13U) 
                                             & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb))) 
                                         & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                        << 3U) | ((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x12U] 
                                                      >> 0x12U) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb))) 
                                                   & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                                  << 2U)) 
                                      | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x12U] 
                                                >> 0x11U) 
                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                  [0x12U] 
                                                  >> 0x10U))) 
                                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)) 
                                          << 1U) | 
                                         (1U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x12U] 
                                                >> 0x10U)))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1))))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1) 
                                               >> 1U))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_5 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_3 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_0 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1))))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1)))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul2__in1)) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h0309defd_0_2 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                               >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                                   >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                  >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 3U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 4U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 5U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 6U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 7U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                         >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                             >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 4U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 5U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 6U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 4U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 7U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 8U))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 3U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 5U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 1U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__ 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 2U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 5U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                          >> 8U)))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b 
        = ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                    >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5))) 
                    | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1 = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                     ^ (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5)) 
                                                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_0 = ((((IData)(vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d)));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3__0(VysyxSoCFull_mul_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __VdfgRegularize_h0309defd_0_1;
    __VdfgRegularize_h0309defd_0_1 = 0;
    // Body
    __VdfgRegularize_h0309defd_0_1 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                 [0x13U] 
                                                 >> 0xfU)) 
                                      | (0xffU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                  [0x13U] 
                                                  >> 0x10U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x11U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x13U] >> 0x10U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x12U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x13U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x14U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x15U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x16U) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((((0x100U & ((~ ((~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                            | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                               [0x13U] >> 0x17U))) 
                        << 8U)) | ((0x80U & ((~ ((~ 
                                                  ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                   | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x13U] 
                                                      >> 0x17U))) 
                                                 | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x13U] 
                                                       >> 0x17U)))) 
                                             << 7U)) 
                                   | (0x40U & ((~ (
                                                   (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                   | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x13U] 
                                                       >> 0x16U) 
                                                      & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)))) 
                                               << 6U)))) 
            | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                      [0x13U] >> 0x15U) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb))) 
                 & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)) 
                << 5U) | (((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                [0x13U] >> 0x14U) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb))) 
                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)) 
                          << 4U))) | (((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                              [0x13U] 
                                              >> 0x13U) 
                                             & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb))) 
                                         & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                        << 3U) | ((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x13U] 
                                                      >> 0x12U) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb))) 
                                                   & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                                  << 2U)) 
                                      | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x13U] 
                                                >> 0x11U) 
                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                  [0x13U] 
                                                  >> 0x10U))) 
                                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)) 
                                          << 1U) | 
                                         (1U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x13U] 
                                                >> 0x10U)))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1))))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1) 
                                               >> 1U))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_5 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_3 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_0 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1))))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1)))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul3__in1)) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h0309defd_0_2 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                               >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                                   >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                  >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 3U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 4U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 5U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 6U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 7U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                         >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                             >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 4U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 5U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 6U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 4U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 7U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 8U))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 3U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 5U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 1U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__ 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 2U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 5U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                          >> 8U)))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b 
        = ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                    >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5))) 
                    | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1 = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                     ^ (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5)) 
                                                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_0 = ((((IData)(vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d)));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0__0(VysyxSoCFull_mul_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __VdfgRegularize_h0309defd_0_1;
    __VdfgRegularize_h0309defd_0_1 = 0;
    // Body
    __VdfgRegularize_h0309defd_0_1 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                 [0x10U] 
                                                 >> 0x17U)) 
                                      | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x10U] >> 0x18U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x19U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x10U] >> 0x18U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x1aU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x1bU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x1cU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x1dU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x1eU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((((0x100U & ((~ ((~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                            | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                               [0x10U] >> 0x1fU))) 
                        << 8U)) | ((0x80U & ((~ ((~ 
                                                  ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                   | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x10U] 
                                                      >> 0x1fU))) 
                                                 | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x10U] 
                                                       >> 0x1fU)))) 
                                             << 7U)) 
                                   | (0x40U & ((~ (
                                                   (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                   | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x10U] 
                                                       >> 0x1eU) 
                                                      & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)))) 
                                               << 6U)))) 
            | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                      [0x10U] >> 0x1dU) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb))) 
                 & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)) 
                << 5U) | (((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                [0x10U] >> 0x1cU) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb))) 
                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)) 
                          << 4U))) | (((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                              [0x10U] 
                                              >> 0x1bU) 
                                             & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb))) 
                                         & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                        << 3U) | ((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x10U] 
                                                      >> 0x1aU) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb))) 
                                                   & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                                  << 2U)) 
                                      | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x10U] 
                                                >> 0x19U) 
                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                  [0x10U] 
                                                  >> 0x18U))) 
                                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)) 
                                          << 1U) | 
                                         (1U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x10U] 
                                                >> 0x18U)))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1))))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1) 
                                               >> 1U))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_5 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_3 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_0 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1))))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1)))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul0__in1)) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h0309defd_0_2 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                               >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                                   >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                  >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 3U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 4U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 5U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 6U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 7U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                         >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                             >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 4U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 5U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 6U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 4U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 7U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 8U))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 3U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 5U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 1U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__ 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 2U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 5U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                          >> 8U)))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b 
        = ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                    >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5))) 
                    | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1 = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                     ^ (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5)) 
                                                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_0 = ((((IData)(vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d)));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1__0(VysyxSoCFull_mul_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __VdfgRegularize_h0309defd_0_1;
    __VdfgRegularize_h0309defd_0_1 = 0;
    // Body
    __VdfgRegularize_h0309defd_0_1 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                 [0x11U] 
                                                 >> 0x17U)) 
                                      | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x11U] >> 0x18U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0x19U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x11U] >> 0x18U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0x1aU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0x1bU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0x1cU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0x1dU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0x1eU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((((0x100U & ((~ ((~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                            | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                               [0x11U] >> 0x1fU))) 
                        << 8U)) | ((0x80U & ((~ ((~ 
                                                  ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                   | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x11U] 
                                                      >> 0x1fU))) 
                                                 | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x11U] 
                                                       >> 0x1fU)))) 
                                             << 7U)) 
                                   | (0x40U & ((~ (
                                                   (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                   | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x11U] 
                                                       >> 0x1eU) 
                                                      & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)))) 
                                               << 6U)))) 
            | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                      [0x11U] >> 0x1dU) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb))) 
                 & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)) 
                << 5U) | (((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                [0x11U] >> 0x1cU) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb))) 
                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)) 
                          << 4U))) | (((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                              [0x11U] 
                                              >> 0x1bU) 
                                             & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb))) 
                                         & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                        << 3U) | ((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x11U] 
                                                      >> 0x1aU) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb))) 
                                                   & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                                  << 2U)) 
                                      | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x11U] 
                                                >> 0x19U) 
                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                  [0x11U] 
                                                  >> 0x18U))) 
                                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)) 
                                          << 1U) | 
                                         (1U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x11U] 
                                                >> 0x18U)))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1))))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1) 
                                               >> 1U))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_5 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_3 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_0 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1))))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1)))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul1__in1)) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h0309defd_0_2 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                               >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                                   >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                  >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 3U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 4U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 5U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 6U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 7U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                         >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                             >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 4U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 5U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 6U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 4U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 7U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 8U))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 3U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 5U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 1U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__ 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 2U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 5U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                          >> 8U)))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b 
        = ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                    >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5))) 
                    | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1 = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                     ^ (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5)) 
                                                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_0 = ((((IData)(vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d)));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2__0(VysyxSoCFull_mul_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __VdfgRegularize_h0309defd_0_1;
    __VdfgRegularize_h0309defd_0_1 = 0;
    // Body
    __VdfgRegularize_h0309defd_0_1 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                 [0x12U] 
                                                 >> 0x17U)) 
                                      | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x12U] >> 0x18U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x19U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x12U] >> 0x18U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x1aU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x1bU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x1cU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x1dU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0x1eU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((((0x100U & ((~ ((~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                            | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                               [0x12U] >> 0x1fU))) 
                        << 8U)) | ((0x80U & ((~ ((~ 
                                                  ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                   | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x12U] 
                                                      >> 0x1fU))) 
                                                 | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x12U] 
                                                       >> 0x1fU)))) 
                                             << 7U)) 
                                   | (0x40U & ((~ (
                                                   (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                   | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x12U] 
                                                       >> 0x1eU) 
                                                      & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)))) 
                                               << 6U)))) 
            | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                      [0x12U] >> 0x1dU) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb))) 
                 & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)) 
                << 5U) | (((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                [0x12U] >> 0x1cU) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb))) 
                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)) 
                          << 4U))) | (((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                              [0x12U] 
                                              >> 0x1bU) 
                                             & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb))) 
                                         & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                        << 3U) | ((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x12U] 
                                                      >> 0x1aU) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb))) 
                                                   & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                                  << 2U)) 
                                      | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x12U] 
                                                >> 0x19U) 
                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                  [0x12U] 
                                                  >> 0x18U))) 
                                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)) 
                                          << 1U) | 
                                         (1U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x12U] 
                                                >> 0x18U)))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1))))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1) 
                                               >> 1U))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_5 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_3 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_0 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1))))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1)))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul2__in1)) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h0309defd_0_2 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                               >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                                   >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                  >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 3U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 4U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 5U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 6U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 7U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                         >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                             >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 4U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 5U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 6U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 4U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 7U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 8U))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 3U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 5U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 1U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__ 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 2U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 5U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                          >> 8U)))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b 
        = ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                    >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5))) 
                    | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1 = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                     ^ (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5)) 
                                                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_0 = ((((IData)(vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d)));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3__0(VysyxSoCFull_mul_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3__0\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __VdfgRegularize_h0309defd_0_1;
    __VdfgRegularize_h0309defd_0_1 = 0;
    // Body
    __VdfgRegularize_h0309defd_0_1 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                 [0x13U] 
                                                 >> 0x17U)) 
                                      | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x13U] >> 0x18U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x19U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x13U] >> 0x18U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x1aU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x1bU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x1cU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x1dU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0x1eU) | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((((0x100U & ((~ ((~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                            | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                               [0x13U] >> 0x1fU))) 
                        << 8U)) | ((0x80U & ((~ ((~ 
                                                  ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                   | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x13U] 
                                                      >> 0x1fU))) 
                                                 | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                                    & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x13U] 
                                                       >> 0x1fU)))) 
                                             << 7U)) 
                                   | (0x40U & ((~ (
                                                   (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                   | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x13U] 
                                                       >> 0x1eU) 
                                                      & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)))) 
                                               << 6U)))) 
            | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                      [0x13U] >> 0x1dU) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb))) 
                 & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb)) 
                << 5U) | (((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                [0x13U] >> 0x1cU) & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb))) 
                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb)) 
                          << 4U))) | (((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                              [0x13U] 
                                              >> 0x1bU) 
                                             & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb))) 
                                         & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                        << 3U) | ((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x13U] 
                                                      >> 0x1aU) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb))) 
                                                   & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb)) 
                                                  << 2U)) 
                                      | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x13U] 
                                                >> 0x19U) 
                                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                  [0x13U] 
                                                  >> 0x18U))) 
                                           & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb)) 
                                          << 1U) | 
                                         (1U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                [0x13U] 
                                                >> 0x18U)))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1))))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1) 
                                               >> 1U))))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgRegularize_h0309defd_0_1) 
                         & (- (IData)((1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_5 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_3 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelfRef.__VdfgRegularize_h0309defd_0_0 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1))))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1)))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__3__KET____DOT__u_mul3__in1)) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h0309defd_0_2 = (0x1ffU 
                                                & (~ 
                                                   ((0x1feU 
                                                     & ((((- (IData)((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                          & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                         << 1U) 
                                                        | (0xfffffffeU 
                                                           & (((- (IData)(
                                                                          (1U 
                                                                           & (~ (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                               << 1U) 
                                                              & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                          | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                               >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                                   >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                  >> 2U) & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 3U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 4U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 5U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 6U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                                   >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 8U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
                     >> 7U) & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                               >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                         >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                             >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 7U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 4U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 5U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 6U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 4U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                             >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_0) 
               >> 7U) | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_2) 
                         >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 8U))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 7U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 6U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 5U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                       >> 3U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 8U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 5U))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 1U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 6U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__ 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 2U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 5U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_3) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                          >> 8U)))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 5U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b 
        = ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 4U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 3U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 2U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                       >> 1U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                    >> 8U))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 4U)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5))) 
                    | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 3U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 2U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5) 
                 >> 1U)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b)));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
                    & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co) 
              | (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1 = (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                     & (IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                                   ^ 
                                                   (((IData)(vlSelfRef.__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                     ^ (IData)(vlSelfRef.__VdfgRegularize_h0309defd_0_5)) 
                                                    >> 8U)));
    vlSelfRef.__VdfgRegularize_h60c5f4dd_0_0 = ((((IData)(vlSelfRef.__VdfgRegularize_h60c5f4dd_0_1) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d)));
}
