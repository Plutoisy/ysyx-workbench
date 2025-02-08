// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011_top___024root.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_he634625a_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_24120011_top__ConstPool__TABLE_hcea554d4_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_24120011_top__ConstPool__TABLE_hda3af55f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_24120011_top__ConstPool__TABLE_ha061e6c9_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_24120011_top__ConstPool__TABLE_h583ea66c_0;
extern const VlUnpacked<CData/*7:0*/, 512> Vysyx_24120011_top__ConstPool__TABLE_h22689654_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_24120011_top__ConstPool__TABLE_h2795e812_0;

VL_INLINE_OPT void Vysyx_24120011_top___024root___ico_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0 
        = (IData)((0x67U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_24120011_top__DOT__src1 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->ysyx_24120011_top__DOT__src2 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->__Vtableidx4 = (0x7fU & vlSelf->inst);
    vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type 
        = Vysyx_24120011_top__ConstPool__TABLE_he634625a_0
        [vlSelf->__Vtableidx4];
    vlSelf->ysyx_24120011_top__DOT__w_mem_en = (3U 
                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type));
    vlSelf->__Vtableidx2 = (((3U == (0x7fU & vlSelf->inst)) 
                             << 7U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0) 
                                        << 6U) | ((
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst)) 
                                                   << 5U) 
                                                  | (((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst)) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type) 
                                                         << 1U) 
                                                        | (0U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->inst 
                                                               >> 7U))))))));
    vlSelf->ysyx_24120011_top__DOT__rd_ctrl = Vysyx_24120011_top__ConstPool__TABLE_hcea554d4_0
        [vlSelf->__Vtableidx2];
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0) 
                             << 3U) | (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type));
    vlSelf->ysyx_24120011_top__DOT__pc_ctrl = Vysyx_24120011_top__ConstPool__TABLE_hda3af55f_0
        [vlSelf->__Vtableidx1];
    vlSelf->__Vtableidx3 = (((5U == (7U & (vlSelf->inst 
                                           >> 0xcU))) 
                             << 8U) | (((4U == (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU))) 
                                        << 7U) | ((
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   << 6U) 
                                                  | (((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU))) 
                                                      << 5U) 
                                                     | (((0U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->inst 
                                                              >> 0xcU))) 
                                                         << 4U) 
                                                        | (((3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->inst)) 
                                                            << 3U) 
                                                           | (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type)))))));
    vlSelf->ysyx_24120011_top__DOT__r_mem_en = Vysyx_24120011_top__ConstPool__TABLE_ha061e6c9_0
        [vlSelf->__Vtableidx3];
    if ((2U & Vysyx_24120011_top__ConstPool__TABLE_h583ea66c_0
         [vlSelf->__Vtableidx3])) {
        vlSelf->ysyx_24120011_top__DOT__r_mem_len = 
            Vysyx_24120011_top__ConstPool__TABLE_h22689654_0
            [vlSelf->__Vtableidx3];
    }
    if ((4U & Vysyx_24120011_top__ConstPool__TABLE_h583ea66c_0
         [vlSelf->__Vtableidx3])) {
        vlSelf->ysyx_24120011_top__DOT__sign_extension 
            = Vysyx_24120011_top__ConstPool__TABLE_h2795e812_0
            [vlSelf->__Vtableidx3];
    }
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 0U;
            vlSelf->ysyx_24120011_top__DOT__imme = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011_top__DOT__ALU_ctrl 
                = ((0U == (7U & (vlSelf->inst >> 0xcU)))
                    ? 8U : ((1U == (7U & (vlSelf->inst 
                                          >> 0xcU)))
                             ? 9U : 0U));
            vlSelf->ysyx_24120011_top__DOT__imme = 
                (((- (IData)((vlSelf->inst >> 0x1fU))) 
                  << 0xcU) | ((0x800U & (vlSelf->inst 
                                         << 4U)) | 
                              ((0x7e0U & (vlSelf->inst 
                                          >> 0x14U)) 
                               | (0x1eU & (vlSelf->inst 
                                           >> 7U)))));
        } else {
            vlSelf->ysyx_24120011_top__DOT__ALU_ctrl 
                = ((IData)((0U == (0xfe007000U & vlSelf->inst)))
                    ? 0U : ((IData)((0x40000000U == 
                                     (0xfe007000U & vlSelf->inst)))
                             ? 1U : ((IData)((0x3000U 
                                              == (0xfe007000U 
                                                  & vlSelf->inst)))
                                      ? 0xbU : ((IData)(
                                                        (0x4000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelf->inst)))
                                                 ? 2U
                                                 : 0U))));
            vlSelf->ysyx_24120011_top__DOT__imme = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 0U;
        vlSelf->ysyx_24120011_top__DOT__imme = ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->inst 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->inst 
                                                          >> 7U))))
                                                 : 
                                                (((- (IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU))) 
                                                  << 0x15U) 
                                                 | ((0x100000U 
                                                     & (vlSelf->inst 
                                                        >> 0xbU)) 
                                                    | ((0xff000U 
                                                        & vlSelf->inst) 
                                                       | ((0x800U 
                                                           & (vlSelf->inst 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->inst 
                                                                >> 0x14U)))))));
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 0U;
        vlSelf->ysyx_24120011_top__DOT__imme = (0xfffff000U 
                                                & vlSelf->inst);
    } else {
        vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 
            ((IData)((0x13U == (0x707fU & vlSelf->inst)))
              ? 0U : ((IData)((0x3013U == (0x707fU 
                                           & vlSelf->inst)))
                       ? 0xbU : ((IData)((0x40005013U 
                                          == (0xfe00707fU 
                                              & vlSelf->inst)))
                                  ? 0xcU : 0U)));
        vlSelf->ysyx_24120011_top__DOT__imme = (((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->inst 
                                                   >> 0x14U));
    }
    vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out 
        = (vlSelf->pc + vlSelf->ysyx_24120011_top__DOT__imme);
    vlSelf->ysyx_24120011_top__DOT__ALUB = ((1U & (
                                                   ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type) 
                                                    >> 2U) 
                                                   | ((2U 
                                                       & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                       ? 
                                                      (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                       : (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))))
                                             ? vlSelf->ysyx_24120011_top__DOT__src2
                                             : vlSelf->ysyx_24120011_top__DOT__imme);
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
                                                     ((0U 
                                                       == vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                       ? 1U
                                                       : 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless)))))
                                                     : vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                     ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_24120011_top__DOT__ALUB))
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
                                                      : 
                                                     ((0U 
                                                       == vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                       ? 0U
                                                       : (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless)))
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
    vlSelf->ysyx_24120011_top__DOT__dnpc = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                             ? (((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                                 ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc))
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                                  : 0x80000000U)));
}

void Vysyx_24120011_top___024root___eval_ico(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_24120011_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_24120011_top___024root___eval_act(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_24120011_top___024root___nba_sequent__TOP__1(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__ALUB = ((1U & (
                                                   ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type) 
                                                    >> 2U) 
                                                   | ((2U 
                                                       & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                       ? 
                                                      (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                       : (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))))
                                             ? vlSelf->ysyx_24120011_top__DOT__src2
                                             : vlSelf->ysyx_24120011_top__DOT__imme);
    vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out 
        = (vlSelf->pc + vlSelf->ysyx_24120011_top__DOT__imme);
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
                                                     ((0U 
                                                       == vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                       ? 1U
                                                       : 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless)))))
                                                     : vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                     ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_24120011_top__DOT__ALUB))
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
                                                      : 
                                                     ((0U 
                                                       == vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                       ? 0U
                                                       : (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless)))
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
    vlSelf->ysyx_24120011_top__DOT__dnpc = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                             ? (((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                                 ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc))
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                                  : 0x80000000U)));
}

void Vysyx_24120011_top___024root___nba_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf);

void Vysyx_24120011_top___024root___eval_nba(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24120011_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vysyx_24120011_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vysyx_24120011_top___024root___eval_triggers__ico(Vysyx_24120011_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__ico(Vysyx_24120011_top___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_24120011_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120011_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_top.v", 5, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_24120011_top___024root___eval_ico(vlSelf);
        }
    }
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
