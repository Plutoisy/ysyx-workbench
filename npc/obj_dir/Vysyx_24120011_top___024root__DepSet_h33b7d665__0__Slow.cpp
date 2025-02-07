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

extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_h3a54036f_0;
void Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> array);
extern const VlUnpacked<CData/*3:0*/, 512> Vysyx_24120011_top__ConstPool__TABLE_h7ecd1bf7_0;
void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(IData/*31:0*/ w_mem_addr, IData/*31:0*/ w_mem_data, CData/*7:0*/ w_mem_len);
void Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(IData/*31:0*/ r_mem_addr, IData/*31:0*/ &rtl_pmem_read__Vfuncrtn);

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
    vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0 
        = (IData)((0x13U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_24120011_top__DOT__src2 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->__Vtableidx2 = (0x7fU & vlSelf->inst);
    vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type 
        = Vysyx_24120011_top__ConstPool__TABLE_h3a54036f_0
        [vlSelf->__Vtableidx2];
    Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout);
    vlSelf->__Vtableidx1 = (((3U == (0x7fU & vlSelf->inst)) 
                             << 8U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0) 
                                        << 7U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0) 
                                                   << 6U) 
                                                  | (((0x37U 
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
                                                                  >> 7U)))))))));
    vlSelf->ysyx_24120011_top__DOT__rd_ctrl = Vysyx_24120011_top__ConstPool__TABLE_h7ecd1bf7_0
        [vlSelf->__Vtableidx1];
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__pc_ctrl = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_hd7d5a5db__0)
                                                    ? 2U
                                                    : 0U);
        if ((3U == (0x7fU & vlSelf->inst))) {
            vlSelf->ysyx_24120011_top__DOT__r_mem_en = 1U;
            vlSelf->ysyx_24120011_top__DOT__r_mem_len 
                = ((0U == (7U & (vlSelf->inst >> 0xcU)))
                    ? 1U : ((1U == (7U & (vlSelf->inst 
                                          >> 0xcU)))
                             ? 2U : ((2U == (7U & (vlSelf->inst 
                                                   >> 0xcU)))
                                      ? 4U : ((4U == 
                                               (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU)))
                                               ? 1U
                                               : ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 1U)))));
            vlSelf->ysyx_24120011_top__DOT__sign_extension 
                = ((0U == (7U & (vlSelf->inst >> 0xcU))) 
                   | ((1U == (7U & (vlSelf->inst >> 0xcU))) 
                      | (2U == (7U & (vlSelf->inst 
                                      >> 0xcU)))));
        }
        if (vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT____VdfgExtracted_h236fc9a3__0) {
            vlSelf->ysyx_24120011_top__DOT__ALUBctrl = 0U;
        }
        vlSelf->ysyx_24120011_top__DOT__ALUBctrl = 
            (3U != (0x7fU & vlSelf->inst));
    } else {
        vlSelf->ysyx_24120011_top__DOT__pc_ctrl = (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                    ? 1U
                                                    : 0U);
        vlSelf->ysyx_24120011_top__DOT__r_mem_en = 0U;
        vlSelf->ysyx_24120011_top__DOT__r_mem_len = 1U;
        vlSelf->ysyx_24120011_top__DOT__sign_extension = 0U;
        vlSelf->ysyx_24120011_top__DOT__ALUBctrl = 
            (3U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type));
    }
    vlSelf->ysyx_24120011_top__DOT__w_mem_en = (3U 
                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type));
    vlSelf->ysyx_24120011_top__DOT__imme = ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                             ? 0U : 
                                            ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                              ? ((1U 
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
                                                                 >> 0x14U)))))))
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelf->inst)
                                                  : 
                                                 (((- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->inst 
                                                     >> 0x14U)))));
    vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out 
        = (vlSelf->pc + vlSelf->ysyx_24120011_top__DOT__imme);
    vlSelf->ysyx_24120011_top__DOT__alu_result = (vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))] 
                                                  + 
                                                  ((IData)(vlSelf->ysyx_24120011_top__DOT__ALUBctrl)
                                                    ? vlSelf->ysyx_24120011_top__DOT__src2
                                                    : vlSelf->ysyx_24120011_top__DOT__imme));
    vlSelf->ysyx_24120011_top__DOT__dnpc = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                             ? ((IData)(4U) 
                                                + vlSelf->pc)
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                                  : 0x80000000U)));
    if (vlSelf->ysyx_24120011_top__DOT__w_mem_en) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_write_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__alu_result, vlSelf->ysyx_24120011_top__DOT__src2, 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IDU__DOT__opcode_type))
                                                                                 ? 
                                                                                ((0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU)))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU)))
                                                                                 ? 4U
                                                                                 : 1U)))
                                                                                 : 1U));
        vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp = 0U;
        vlSelf->ysyx_24120011_top__DOT__r_mem_data = 0U;
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp = 0U;
        vlSelf->ysyx_24120011_top__DOT__r_mem_data = 0U;
    }
    if (vlSelf->ysyx_24120011_top__DOT__r_mem_en) {
        Vysyx_24120011_top___024unit____Vdpiimwrap_rtl_pmem_read_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__alu_result, vlSelf->__Vfunc_rtl_pmem_read__4__Vfuncout);
        vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp 
            = vlSelf->__Vfunc_rtl_pmem_read__4__Vfuncout;
        if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))) {
            vlSelf->ysyx_24120011_top__DOT__r_mem_data 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__sign_extension)
                    ? (((- (IData)((1U & (vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp))
                    : (0xffU & vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp));
        }
        if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))) {
            vlSelf->ysyx_24120011_top__DOT__r_mem_data 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__sign_extension)
                    ? (((- (IData)((1U & (vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp 
                                          >> 7U)))) 
                        << 0x10U) | (0xffffU & vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp))
                    : (0xffffU & vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp));
        }
        if ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))) {
            vlSelf->ysyx_24120011_top__DOT__r_mem_data 
                = vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_MemProcessor__DOT__r_mem_data_tmp = 0U;
        vlSelf->ysyx_24120011_top__DOT__r_mem_data = 0U;
    }
}
