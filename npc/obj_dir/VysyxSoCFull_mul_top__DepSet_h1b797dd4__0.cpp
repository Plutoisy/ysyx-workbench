// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull_mul_top.h"

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0__0(VysyxSoCFull_mul_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0__0\n"); );
    // Init
    SData/*8:0*/ __VdfgTmp_h39555eee__0;
    __VdfgTmp_h39555eee__0 = 0;
    // Body
    __VdfgTmp_h39555eee__0 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x10U] << 1U)) 
                              | (0xffU & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                 [0x10U]));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 1U) | vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x10U]));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1))))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 2U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 3U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 4U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 5U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 6U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((0x100U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                          | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                             [0x10U] >> 7U))) << 8U)) 
           | ((0x80U & ((~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                   [0x10U] >> 7U))) 
                            | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                  [0x10U] >> 7U)))) 
                        << 7U)) | ((0x40U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                 | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                     [0x10U] 
                                                     >> 6U) 
                                                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)))) 
                                             << 6U)) 
                                   | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                             [0x10U] 
                                             >> 5U) 
                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b))) 
                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)) 
                                       << 5U) | (((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x10U] 
                                                      >> 4U) 
                                                     & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b))) 
                                                   & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)) 
                                                  << 4U) 
                                                 | ((((~ 
                                                       ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                         [0x10U] 
                                                         >> 3U) 
                                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b))) 
                                                      & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)) 
                                                     << 3U) 
                                                    | ((((~ 
                                                          ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                            [0x10U] 
                                                            >> 2U) 
                                                           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b))) 
                                                         & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)) 
                                                        << 2U) 
                                                       | ((((~ 
                                                             ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                               [0x10U] 
                                                               >> 1U) 
                                                              & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                              [0x10U])) 
                                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)) 
                                                           << 1U) 
                                                          | (1U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                             [0x10U])))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1))))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1) 
                                               >> 1U))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelf->__VdfgTmp_h3f2f7848__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hce7e50f5__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hbd594163__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1))))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1)))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul0__in1)) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelf->__VdfgTmp_ha5dfe805__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                               >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                                   >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci 
        = (1U & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                  >> 2U) & (IData)(vlSelf->__VdfgTmp_ha5dfe805__0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 3U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 4U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 5U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 6U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 7U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                         >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                             >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 3U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 4U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 5U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 6U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 4U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 7U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 5U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 8U))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelf->__VdfgTmp_hce7e50f5__0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 3U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 5U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelf->__VdfgTmp_hce7e50f5__0)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 1U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 6U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 2U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                          >> 8U)))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci 
        = ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 4U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelf->__VdfgTmp_h3f2f7848__0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                    >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelf->__VdfgTmp_h3f2f7848__0))) 
                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->__VdfgTmp_ha3115902__0 = (1U & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                            ^ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                ^ (IData)(vlSelf->__VdfgTmp_h3f2f7848__0)) 
                                               >> 8U)));
    vlSelf->__VdfgTmp_ha31ccace__0 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                                       << 3U) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d))));
    vlSelf->out16 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                      << 0xfU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                   << 0xeU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))) 
                                                                              << 4U)) 
                                                                          | ((((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                                                                               & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                                                                                >> 2U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha5dfe805__0))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->__VdfgTmp_hbd594163__0))))))))))))))));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1__0(VysyxSoCFull_mul_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1__0\n"); );
    // Init
    SData/*8:0*/ __VdfgTmp_h39555eee__0;
    __VdfgTmp_h39555eee__0 = 0;
    // Body
    __VdfgTmp_h39555eee__0 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x11U] << 1U)) 
                              | (0xffU & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                 [0x11U]));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 1U) | vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x11U]));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1))))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 2U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 3U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 4U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 5U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 6U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((0x100U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                          | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                             [0x11U] >> 7U))) << 8U)) 
           | ((0x80U & ((~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                   [0x11U] >> 7U))) 
                            | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                  [0x11U] >> 7U)))) 
                        << 7U)) | ((0x40U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                 | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                     [0x11U] 
                                                     >> 6U) 
                                                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)))) 
                                             << 6U)) 
                                   | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                             [0x11U] 
                                             >> 5U) 
                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b))) 
                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)) 
                                       << 5U) | (((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x11U] 
                                                      >> 4U) 
                                                     & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b))) 
                                                   & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)) 
                                                  << 4U) 
                                                 | ((((~ 
                                                       ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                         [0x11U] 
                                                         >> 3U) 
                                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b))) 
                                                      & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)) 
                                                     << 3U) 
                                                    | ((((~ 
                                                          ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                            [0x11U] 
                                                            >> 2U) 
                                                           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b))) 
                                                         & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)) 
                                                        << 2U) 
                                                       | ((((~ 
                                                             ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                               [0x11U] 
                                                               >> 1U) 
                                                              & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                              [0x11U])) 
                                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)) 
                                                           << 1U) 
                                                          | (1U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                             [0x11U])))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1))))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1) 
                                               >> 1U))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelf->__VdfgTmp_h3f2f7848__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hce7e50f5__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hbd594163__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1))))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1)))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul1__in1)) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelf->__VdfgTmp_ha5dfe805__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                               >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                                   >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci 
        = (1U & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                  >> 2U) & (IData)(vlSelf->__VdfgTmp_ha5dfe805__0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 3U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 4U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 5U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 6U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 7U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                         >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                             >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 3U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 4U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 5U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 6U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 4U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 7U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 5U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 8U))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelf->__VdfgTmp_hce7e50f5__0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 3U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 5U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelf->__VdfgTmp_hce7e50f5__0)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 1U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 6U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 2U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                          >> 8U)))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci 
        = ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 4U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelf->__VdfgTmp_h3f2f7848__0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                    >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelf->__VdfgTmp_h3f2f7848__0))) 
                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->__VdfgTmp_ha3115902__0 = (1U & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                            ^ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                ^ (IData)(vlSelf->__VdfgTmp_h3f2f7848__0)) 
                                               >> 8U)));
    vlSelf->__VdfgTmp_ha31ccace__0 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                                       << 3U) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d))));
    vlSelf->out16 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                      << 0xfU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                   << 0xeU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))) 
                                                                              << 4U)) 
                                                                          | ((((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                                                                               & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                                                                                >> 2U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha5dfe805__0))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->__VdfgTmp_hbd594163__0))))))))))))))));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2__0(VysyxSoCFull_mul_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2__0\n"); );
    // Init
    SData/*8:0*/ __VdfgTmp_h39555eee__0;
    __VdfgTmp_h39555eee__0 = 0;
    // Body
    __VdfgTmp_h39555eee__0 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x12U] << 1U)) 
                              | (0xffU & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                 [0x12U]));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 1U) | vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x12U]));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1))))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 2U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 3U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 4U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 5U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 6U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((0x100U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                          | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                             [0x12U] >> 7U))) << 8U)) 
           | ((0x80U & ((~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                   [0x12U] >> 7U))) 
                            | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                  [0x12U] >> 7U)))) 
                        << 7U)) | ((0x40U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                 | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                     [0x12U] 
                                                     >> 6U) 
                                                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)))) 
                                             << 6U)) 
                                   | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                             [0x12U] 
                                             >> 5U) 
                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b))) 
                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)) 
                                       << 5U) | (((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x12U] 
                                                      >> 4U) 
                                                     & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b))) 
                                                   & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)) 
                                                  << 4U) 
                                                 | ((((~ 
                                                       ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                         [0x12U] 
                                                         >> 3U) 
                                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b))) 
                                                      & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)) 
                                                     << 3U) 
                                                    | ((((~ 
                                                          ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                            [0x12U] 
                                                            >> 2U) 
                                                           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b))) 
                                                         & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)) 
                                                        << 2U) 
                                                       | ((((~ 
                                                             ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                               [0x12U] 
                                                               >> 1U) 
                                                              & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                              [0x12U])) 
                                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)) 
                                                           << 1U) 
                                                          | (1U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                             [0x12U])))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1))))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1) 
                                               >> 1U))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelf->__VdfgTmp_h3f2f7848__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hce7e50f5__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hbd594163__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1))))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1)))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul2__in1)) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelf->__VdfgTmp_ha5dfe805__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                               >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                                   >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci 
        = (1U & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                  >> 2U) & (IData)(vlSelf->__VdfgTmp_ha5dfe805__0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 3U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 4U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 5U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 6U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 7U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                         >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                             >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 3U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 4U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 5U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 6U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 4U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 7U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 5U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 8U))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelf->__VdfgTmp_hce7e50f5__0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 3U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 5U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelf->__VdfgTmp_hce7e50f5__0)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 1U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 6U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 2U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                          >> 8U)))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci 
        = ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 4U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelf->__VdfgTmp_h3f2f7848__0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                    >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelf->__VdfgTmp_h3f2f7848__0))) 
                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->__VdfgTmp_ha3115902__0 = (1U & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                            ^ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                ^ (IData)(vlSelf->__VdfgTmp_h3f2f7848__0)) 
                                               >> 8U)));
    vlSelf->__VdfgTmp_ha31ccace__0 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                                       << 3U) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d))));
    vlSelf->out16 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                      << 0xfU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                   << 0xeU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))) 
                                                                              << 4U)) 
                                                                          | ((((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                                                                               & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                                                                                >> 2U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha5dfe805__0))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->__VdfgTmp_hbd594163__0))))))))))))))));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3__0(VysyxSoCFull_mul_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3__0\n"); );
    // Init
    SData/*8:0*/ __VdfgTmp_h39555eee__0;
    __VdfgTmp_h39555eee__0 = 0;
    // Body
    __VdfgTmp_h39555eee__0 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x13U] << 1U)) 
                              | (0xffU & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                 [0x13U]));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 1U) | vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x13U]));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1))))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 2U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 3U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 4U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 5U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 6U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((0x100U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                          | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                             [0x13U] >> 7U))) << 8U)) 
           | ((0x80U & ((~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                   [0x13U] >> 7U))) 
                            | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                  [0x13U] >> 7U)))) 
                        << 7U)) | ((0x40U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                 | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                     [0x13U] 
                                                     >> 6U) 
                                                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)))) 
                                             << 6U)) 
                                   | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                             [0x13U] 
                                             >> 5U) 
                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b))) 
                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)) 
                                       << 5U) | (((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x13U] 
                                                      >> 4U) 
                                                     & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b))) 
                                                   & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)) 
                                                  << 4U) 
                                                 | ((((~ 
                                                       ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                         [0x13U] 
                                                         >> 3U) 
                                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b))) 
                                                      & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)) 
                                                     << 3U) 
                                                    | ((((~ 
                                                          ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                            [0x13U] 
                                                            >> 2U) 
                                                           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b))) 
                                                         & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)) 
                                                        << 2U) 
                                                       | ((((~ 
                                                             ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                               [0x13U] 
                                                               >> 1U) 
                                                              & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                              [0x13U])) 
                                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)) 
                                                           << 1U) 
                                                          | (1U 
                                                             & vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                             [0x13U])))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1))))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1) 
                                               >> 1U))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelf->__VdfgTmp_h3f2f7848__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hce7e50f5__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hbd594163__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1))))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1)))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__0__KET____DOT__u_mul3__in1)) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelf->__VdfgTmp_ha5dfe805__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                               >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                                   >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci 
        = (1U & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                  >> 2U) & (IData)(vlSelf->__VdfgTmp_ha5dfe805__0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 3U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 4U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 5U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 6U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 7U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                         >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                             >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 3U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 4U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 5U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 6U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 4U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 7U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 5U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 8U))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelf->__VdfgTmp_hce7e50f5__0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 3U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 5U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelf->__VdfgTmp_hce7e50f5__0)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 1U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 6U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 2U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                          >> 8U)))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci 
        = ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 4U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelf->__VdfgTmp_h3f2f7848__0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                    >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelf->__VdfgTmp_h3f2f7848__0))) 
                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->__VdfgTmp_ha3115902__0 = (1U & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                            ^ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                ^ (IData)(vlSelf->__VdfgTmp_h3f2f7848__0)) 
                                               >> 8U)));
    vlSelf->__VdfgTmp_ha31ccace__0 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                                       << 3U) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d))));
    vlSelf->out16 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                      << 0xfU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                   << 0xeU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))) 
                                                                              << 4U)) 
                                                                          | ((((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                                                                               & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                                                                                >> 2U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha5dfe805__0))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->__VdfgTmp_hbd594163__0))))))))))))))));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0__0(VysyxSoCFull_mul_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0__0\n"); );
    // Init
    SData/*8:0*/ __VdfgTmp_h39555eee__0;
    __VdfgTmp_h39555eee__0 = 0;
    // Body
    __VdfgTmp_h39555eee__0 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x10U] >> 7U)) 
                              | (0xffU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                          [0x10U] >> 8U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 9U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                    [0x10U] >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1))))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0xaU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0xbU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0xcU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0xdU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0xeU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((0x100U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                          | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                             [0x10U] >> 0xfU))) << 8U)) 
           | ((0x80U & ((~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                   [0x10U] >> 0xfU))) 
                            | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                  [0x10U] >> 0xfU)))) 
                        << 7U)) | ((0x40U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                 | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                     [0x10U] 
                                                     >> 0xeU) 
                                                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)))) 
                                             << 6U)) 
                                   | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                             [0x10U] 
                                             >> 0xdU) 
                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b))) 
                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)) 
                                       << 5U) | (((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x10U] 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b))) 
                                                   & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)) 
                                                  << 4U) 
                                                 | ((((~ 
                                                       ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                         [0x10U] 
                                                         >> 0xbU) 
                                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b))) 
                                                      & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)) 
                                                     << 3U) 
                                                    | ((((~ 
                                                          ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                            [0x10U] 
                                                            >> 0xaU) 
                                                           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b))) 
                                                         & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)) 
                                                        << 2U) 
                                                       | ((((~ 
                                                             ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                               [0x10U] 
                                                               >> 9U) 
                                                              & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x10U] 
                                                                 >> 8U))) 
                                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                [0x10U] 
                                                                >> 8U))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1))))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1) 
                                               >> 1U))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelf->__VdfgTmp_h3f2f7848__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hce7e50f5__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hbd594163__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1))))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1)))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul0__in1)) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelf->__VdfgTmp_ha5dfe805__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                               >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                                   >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci 
        = (1U & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                  >> 2U) & (IData)(vlSelf->__VdfgTmp_ha5dfe805__0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 3U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 4U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 5U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 6U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 7U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                         >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                             >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 3U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 4U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 5U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 6U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 4U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 7U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 5U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 8U))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelf->__VdfgTmp_hce7e50f5__0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 3U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 5U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelf->__VdfgTmp_hce7e50f5__0)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 1U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 6U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 2U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                          >> 8U)))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci 
        = ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 4U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelf->__VdfgTmp_h3f2f7848__0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                    >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelf->__VdfgTmp_h3f2f7848__0))) 
                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->__VdfgTmp_ha3115902__0 = (1U & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                            ^ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                ^ (IData)(vlSelf->__VdfgTmp_h3f2f7848__0)) 
                                               >> 8U)));
    vlSelf->__VdfgTmp_ha31ccace__0 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                                       << 3U) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d))));
    vlSelf->out16 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                      << 0xfU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                   << 0xeU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))) 
                                                                              << 4U)) 
                                                                          | ((((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                                                                               & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                                                                                >> 2U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha5dfe805__0))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->__VdfgTmp_hbd594163__0))))))))))))))));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1__0(VysyxSoCFull_mul_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1__0\n"); );
    // Init
    SData/*8:0*/ __VdfgTmp_h39555eee__0;
    __VdfgTmp_h39555eee__0 = 0;
    // Body
    __VdfgTmp_h39555eee__0 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x11U] >> 7U)) 
                              | (0xffU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                          [0x11U] >> 8U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 9U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                    [0x11U] >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1))))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0xaU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0xbU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0xcU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0xdU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x11U] >> 0xeU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((0x100U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                          | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                             [0x11U] >> 0xfU))) << 8U)) 
           | ((0x80U & ((~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                   [0x11U] >> 0xfU))) 
                            | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                  [0x11U] >> 0xfU)))) 
                        << 7U)) | ((0x40U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                 | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                     [0x11U] 
                                                     >> 0xeU) 
                                                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)))) 
                                             << 6U)) 
                                   | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                             [0x11U] 
                                             >> 0xdU) 
                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b))) 
                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)) 
                                       << 5U) | (((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x11U] 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b))) 
                                                   & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)) 
                                                  << 4U) 
                                                 | ((((~ 
                                                       ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                         [0x11U] 
                                                         >> 0xbU) 
                                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b))) 
                                                      & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)) 
                                                     << 3U) 
                                                    | ((((~ 
                                                          ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                            [0x11U] 
                                                            >> 0xaU) 
                                                           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b))) 
                                                         & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)) 
                                                        << 2U) 
                                                       | ((((~ 
                                                             ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                               [0x11U] 
                                                               >> 9U) 
                                                              & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x11U] 
                                                                 >> 8U))) 
                                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                [0x11U] 
                                                                >> 8U))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1))))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1) 
                                               >> 1U))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelf->__VdfgTmp_h3f2f7848__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hce7e50f5__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hbd594163__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1))))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1)))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul1__in1)) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelf->__VdfgTmp_ha5dfe805__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                               >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                                   >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci 
        = (1U & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                  >> 2U) & (IData)(vlSelf->__VdfgTmp_ha5dfe805__0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 3U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 4U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 5U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 6U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 7U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                         >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                             >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 3U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 4U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 5U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 6U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 4U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 7U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 5U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 8U))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelf->__VdfgTmp_hce7e50f5__0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 3U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 5U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelf->__VdfgTmp_hce7e50f5__0)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 1U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 6U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 2U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                          >> 8U)))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci 
        = ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 4U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelf->__VdfgTmp_h3f2f7848__0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                    >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelf->__VdfgTmp_h3f2f7848__0))) 
                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->__VdfgTmp_ha3115902__0 = (1U & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                            ^ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                ^ (IData)(vlSelf->__VdfgTmp_h3f2f7848__0)) 
                                               >> 8U)));
    vlSelf->__VdfgTmp_ha31ccace__0 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                                       << 3U) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d))));
    vlSelf->out16 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                      << 0xfU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                   << 0xeU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))) 
                                                                              << 4U)) 
                                                                          | ((((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                                                                               & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                                                                                >> 2U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha5dfe805__0))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->__VdfgTmp_hbd594163__0))))))))))))))));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2__0(VysyxSoCFull_mul_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2__0\n"); );
    // Init
    SData/*8:0*/ __VdfgTmp_h39555eee__0;
    __VdfgTmp_h39555eee__0 = 0;
    // Body
    __VdfgTmp_h39555eee__0 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x12U] >> 7U)) 
                              | (0xffU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                          [0x12U] >> 8U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 9U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                    [0x12U] >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1))))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0xaU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0xbU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0xcU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0xdU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x12U] >> 0xeU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((0x100U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                          | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                             [0x12U] >> 0xfU))) << 8U)) 
           | ((0x80U & ((~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                   [0x12U] >> 0xfU))) 
                            | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                  [0x12U] >> 0xfU)))) 
                        << 7U)) | ((0x40U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                 | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                     [0x12U] 
                                                     >> 0xeU) 
                                                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)))) 
                                             << 6U)) 
                                   | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                             [0x12U] 
                                             >> 0xdU) 
                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b))) 
                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)) 
                                       << 5U) | (((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x12U] 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b))) 
                                                   & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)) 
                                                  << 4U) 
                                                 | ((((~ 
                                                       ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                         [0x12U] 
                                                         >> 0xbU) 
                                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b))) 
                                                      & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)) 
                                                     << 3U) 
                                                    | ((((~ 
                                                          ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                            [0x12U] 
                                                            >> 0xaU) 
                                                           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b))) 
                                                         & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)) 
                                                        << 2U) 
                                                       | ((((~ 
                                                             ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                               [0x12U] 
                                                               >> 9U) 
                                                              & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x12U] 
                                                                 >> 8U))) 
                                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                [0x12U] 
                                                                >> 8U))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1))))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1) 
                                               >> 1U))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelf->__VdfgTmp_h3f2f7848__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hce7e50f5__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hbd594163__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1))))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1)))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul2__in1)) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelf->__VdfgTmp_ha5dfe805__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                               >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                                   >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci 
        = (1U & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                  >> 2U) & (IData)(vlSelf->__VdfgTmp_ha5dfe805__0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 3U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 4U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 5U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 6U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 7U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                         >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                             >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 3U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 4U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 5U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 6U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 4U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 7U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 5U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 8U))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelf->__VdfgTmp_hce7e50f5__0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 3U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 5U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelf->__VdfgTmp_hce7e50f5__0)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 1U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 6U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 2U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                          >> 8U)))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci 
        = ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 4U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelf->__VdfgTmp_h3f2f7848__0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                    >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelf->__VdfgTmp_h3f2f7848__0))) 
                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->__VdfgTmp_ha3115902__0 = (1U & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                            ^ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                ^ (IData)(vlSelf->__VdfgTmp_h3f2f7848__0)) 
                                               >> 8U)));
    vlSelf->__VdfgTmp_ha31ccace__0 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                                       << 3U) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d))));
    vlSelf->out16 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                      << 0xfU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                   << 0xeU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))) 
                                                                              << 4U)) 
                                                                          | ((((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                                                                               & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                                                                                >> 2U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha5dfe805__0))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->__VdfgTmp_hbd594163__0))))))))))))))));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3__0(VysyxSoCFull_mul_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3__0\n"); );
    // Init
    SData/*8:0*/ __VdfgTmp_h39555eee__0;
    __VdfgTmp_h39555eee__0 = 0;
    // Body
    __VdfgTmp_h39555eee__0 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x13U] >> 7U)) 
                              | (0xffU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                          [0x13U] >> 8U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 9U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                    [0x13U] >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1))))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0xaU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0xbU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0xcU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0xdU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x13U] >> 0xeU) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((0x100U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                          | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                             [0x13U] >> 0xfU))) << 8U)) 
           | ((0x80U & ((~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                   [0x13U] >> 0xfU))) 
                            | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                  [0x13U] >> 0xfU)))) 
                        << 7U)) | ((0x40U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                 | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                     [0x13U] 
                                                     >> 0xeU) 
                                                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)))) 
                                             << 6U)) 
                                   | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                             [0x13U] 
                                             >> 0xdU) 
                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b))) 
                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)) 
                                       << 5U) | (((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x13U] 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b))) 
                                                   & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)) 
                                                  << 4U) 
                                                 | ((((~ 
                                                       ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                         [0x13U] 
                                                         >> 0xbU) 
                                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b))) 
                                                      & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)) 
                                                     << 3U) 
                                                    | ((((~ 
                                                          ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                            [0x13U] 
                                                            >> 0xaU) 
                                                           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b))) 
                                                         & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)) 
                                                        << 2U) 
                                                       | ((((~ 
                                                             ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                               [0x13U] 
                                                               >> 9U) 
                                                              & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x13U] 
                                                                 >> 8U))) 
                                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                [0x13U] 
                                                                >> 8U))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1))))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1) 
                                               >> 1U))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelf->__VdfgTmp_h3f2f7848__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hce7e50f5__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hbd594163__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1))))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1)))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__1__KET____DOT__u_mul3__in1)) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelf->__VdfgTmp_ha5dfe805__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                               >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                                   >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci 
        = (1U & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                  >> 2U) & (IData)(vlSelf->__VdfgTmp_ha5dfe805__0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 3U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 4U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 5U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 6U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 7U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                         >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                             >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 3U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 4U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 5U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 6U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 4U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 7U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 5U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 8U))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelf->__VdfgTmp_hce7e50f5__0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 3U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 5U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelf->__VdfgTmp_hce7e50f5__0)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 1U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 6U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 2U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                          >> 8U)))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci 
        = ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 4U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelf->__VdfgTmp_h3f2f7848__0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                    >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelf->__VdfgTmp_h3f2f7848__0))) 
                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->__VdfgTmp_ha3115902__0 = (1U & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                            ^ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                ^ (IData)(vlSelf->__VdfgTmp_h3f2f7848__0)) 
                                               >> 8U)));
    vlSelf->__VdfgTmp_ha31ccace__0 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                                       << 3U) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d))));
    vlSelf->out16 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                      << 0xfU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                   << 0xeU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))) 
                                                                              << 4U)) 
                                                                          | ((((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                                                                               & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                                                                                >> 2U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha5dfe805__0))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->__VdfgTmp_hbd594163__0))))))))))))))));
}

VL_INLINE_OPT void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0__0(VysyxSoCFull_mul_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0__0\n"); );
    // Init
    SData/*8:0*/ __VdfgTmp_h39555eee__0;
    __VdfgTmp_h39555eee__0 = 0;
    // Body
    __VdfgTmp_h39555eee__0 = ((0x100U & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                         [0x10U] >> 0xfU)) 
                              | (0xffU & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                          [0x10U] >> 0x10U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x11U) | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x10U] >> 0x10U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0 
        = (IData)((0x60U == (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x60U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0 
        = (IData)((0x18U == (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (0x18U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0 
        = (IData)((6U == (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0 
        = (1U & (~ (IData)((0U != (6U & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1))))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x12U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
           | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x13U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x14U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x15U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o 
        = (1U & ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                  [0x10U] >> 0x16U) | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A 
        = ((0x100U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                          | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                             [0x10U] >> 0x17U))) << 8U)) 
           | ((0x80U & ((~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                                | (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                   [0x10U] >> 0x17U))) 
                            | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o) 
                               & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                  [0x10U] >> 0x17U)))) 
                        << 7U)) | ((0x40U & ((~ ((~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o)) 
                                                 | ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                     [0x10U] 
                                                     >> 0x16U) 
                                                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)))) 
                                             << 6U)) 
                                   | ((((~ ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                             [0x10U] 
                                             >> 0x15U) 
                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b))) 
                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__inv_unit_inst__or_o)) 
                                       << 5U) | (((
                                                   (~ 
                                                    ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                      [0x10U] 
                                                      >> 0x14U) 
                                                     & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b))) 
                                                   & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__inv_unit_inst__b)) 
                                                  << 4U) 
                                                 | ((((~ 
                                                       ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                         [0x10U] 
                                                         >> 0x13U) 
                                                        & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b))) 
                                                      & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__inv_unit_inst__b)) 
                                                     << 3U) 
                                                    | ((((~ 
                                                          ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                            [0x10U] 
                                                            >> 0x12U) 
                                                           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b))) 
                                                         & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__inv_unit_inst__b)) 
                                                        << 2U) 
                                                       | ((((~ 
                                                             ((vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                               [0x10U] 
                                                               >> 0x11U) 
                                                              & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x10U] 
                                                                 >> 0x10U))) 
                                                            & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__inv_unit_inst__b)) 
                                                           << 1U) 
                                                          | (1U 
                                                             & (vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                [0x10U] 
                                                                >> 0x10U))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1) 
                                                   >> 7U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1) 
                                                    >> 7U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1) 
                                                   >> 5U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1) 
                                                    >> 5U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0))))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ (IData)(
                                                       (1U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1))))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1) 
                                               >> 1U))))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source 
        = (0x1ffU & (~ (((IData)(__VdfgTmp_h39555eee__0) 
                         & (- (IData)((1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0) 
                                                | ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1) 
                                                   >> 3U))))))) 
                        | ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A) 
                           & (- (IData)((1U & (~ ((~ 
                                                   ((IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1) 
                                                    >> 3U)) 
                                                  | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0))))))))));
    vlSelf->__VdfgTmp_h3f2f7848__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hce7e50f5__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source))))));
    vlSelf->__VdfgTmp_hbd594163__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1))))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1)))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSymsp->TOP.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__pe_blocks__BRA__2__KET____DOT__u_mul0__in1)) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                     & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                    >> 8U)));
    vlSelf->__VdfgTmp_ha5dfe805__0 = (0x1ffU & (~ (
                                                   (0x1feU 
                                                    & ((((- (IData)((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))) 
                                                         & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
                                                        << 1U) 
                                                       | (0xfffffffeU 
                                                          & (((- (IData)(
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x))))) 
                                                              << 1U) 
                                                             & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x) 
                                                         | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source))))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                               >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                                   >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
               | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source)) 
              >> 8U));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci 
        = (1U & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                  >> 2U) & (IData)(vlSelf->__VdfgTmp_ha5dfe805__0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 3U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 4U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 5U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 6U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                        >> 8U)) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                                   >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 8U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1 
        = (1U & (~ (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                     >> 7U) & ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                               >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                         >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                             >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 7U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 3U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 4U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 5U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 6U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 4U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source) 
                  >> 8U)) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                             >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 8U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 6U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1) 
           & (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
               >> 7U) | ((IData)(vlSelf->__VdfgTmp_ha5dfe805__0) 
                         >> 5U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 8U))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 7U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & (IData)(vlSelf->__VdfgTmp_hce7e50f5__0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 6U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 5U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 4U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
                    & ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                       >> 3U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 8U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 5U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | (IData)(vlSelf->__VdfgTmp_hce7e50f5__0)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 1U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 6U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 2U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1) 
              | ((IData)(vlSelf->__VdfgTmp_hce7e50f5__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
                    & (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                          >> 8U)))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 5U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci 
        = ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
           & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 4U))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
           & (IData)(vlSelf->__VdfgTmp_h3f2f7848__0));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 3U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 2U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
                    & ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                       >> 1U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1) 
              | (~ ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                    >> 8U))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 4U)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0 
        = (1U & (~ ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d) 
                        | (IData)(vlSelf->__VdfgTmp_h3f2f7848__0))) 
                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 3U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 2U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d) 
              | ((IData)(vlSelf->__VdfgTmp_h3f2f7848__0) 
                 >> 1U)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1))));
    vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellinp__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
                    & (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d) 
              | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__i1)));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci 
        = (1U & (~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))));
    vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci 
        = (1U & (~ ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
                    & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1))));
    vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d 
        = ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
           & ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__ci) 
              | (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1)));
    vlSelf->__VdfgTmp_ha3115902__0 = (1U & ((~ ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci) 
                                                & (IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1))) 
                                            ^ (((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source) 
                                                ^ (IData)(vlSelf->__VdfgTmp_h3f2f7848__0)) 
                                               >> 8U)));
    vlSelf->__VdfgTmp_ha31ccace__0 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                                       << 3U) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d))));
    vlSelf->out16 = (((IData)(vlSelf->__VdfgTmp_ha3115902__0) 
                      << 0xfU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                                   << 0xeU) | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                                                        << 5U) 
                                                                       | ((0x10U 
                                                                           & ((~ 
                                                                               ((~ 
                                                                                ((IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__ci))) 
                                                                              << 4U)) 
                                                                          | ((((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                                                                               & ((IData)(vlSelf->__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                              << 3U) 
                                                                             | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (((IData)(vlSelf->__VdfgTmp_hbd594163__0) 
                                                                                >> 2U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_ha5dfe805__0))) 
                                                                                | (IData)(vlSelf->mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__full_adder_c3__ci))) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->__VdfgTmp_hbd594163__0))))))))))))))));
}
