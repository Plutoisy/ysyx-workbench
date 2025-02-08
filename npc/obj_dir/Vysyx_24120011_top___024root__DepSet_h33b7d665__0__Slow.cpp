// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011_top__Syms.h"
#include "Vysyx_24120011_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__stl(Vysyx_24120011_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24120011_top___024root___eval_triggers__stl(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24120011_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_he634625a_0;
void Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> array);
extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_24120011_top__ConstPool__TABLE_hcea554d4_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_24120011_top__ConstPool__TABLE_hda3af55f_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_24120011_top__ConstPool__TABLE_ha061e6c9_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_24120011_top__ConstPool__TABLE_h583ea66c_0;
extern const VlUnpacked<CData/*7:0*/, 512> Vysyx_24120011_top__ConstPool__TABLE_h22689654_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_24120011_top__ConstPool__TABLE_h2795e812_0;

VL_ATTR_COLD void Vysyx_24120011_top___024root___stl_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0 
        = (IData)((0x67U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [1U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [2U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [3U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [4U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [5U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [6U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [7U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [8U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [9U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xaU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xaU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xbU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xbU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xcU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xcU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xdU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xdU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xeU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xeU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0xfU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0xfU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x10U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x10U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x11U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x11U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x12U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x12U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x13U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x13U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x14U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x14U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x15U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x15U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x16U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x16U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x17U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x17U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x18U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x18U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x19U] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x19U];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1aU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1aU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1bU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1bU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1cU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1cU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1dU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1dU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1eU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1eU];
    vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0x1fU] 
        = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [0x1fU];
    vlSelf->ysyx_24120011_top__DOT__src1 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->ysyx_24120011_top__DOT__src2 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->__Vtableidx4 = (0x7fU & vlSelf->inst);
    vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type 
        = Vysyx_24120011_top__ConstPool__TABLE_he634625a_0
        [vlSelf->__Vtableidx4];
    Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout);
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
                                                 : 
                                                ((IData)(
                                                         (0x1000U 
                                                          == 
                                                          (0xfe007000U 
                                                           & vlSelf->inst)))
                                                  ? 6U
                                                  : 
                                                 ((IData)(
                                                          (0x7000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSelf->inst)))
                                                   ? 0xdU
                                                   : 0U))))));
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
                       ? 0xbU : ((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->inst)))
                                  ? 0xdU : ((IData)(
                                                    (0x40005013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst)))
                                             ? 0xcU
                                             : 0U))));
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
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp
                                                      : 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_24120011_top__DOT__ALUB))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                                      ? 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      & vlSelf->ysyx_24120011_top__DOT__ALUB)
                                                      : 
                                                     (vlSelf->ysyx_24120011_top__DOT__src1 
                                                      | vlSelf->ysyx_24120011_top__DOT__ALUB))
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
