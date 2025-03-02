// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011_top___024root.h"

VL_ATTR_COLD void Vysyx_24120011_top___024root___eval_static(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_24120011_top___024root___eval_initial(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state 
        = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state;
    vlSelf->__Vtrigrprev__TOP__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state 
        = vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_24120011_top___024root___eval_final(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_24120011_top___024root___eval_triggers__stl(Vysyx_24120011_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__stl(Vysyx_24120011_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___eval_stl(Vysyx_24120011_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120011_top___024root___eval_settle(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_24120011_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120011_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011_top.v", 5, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_24120011_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__stl(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ysyx_24120011_top.i_IFU.u_SRAM.next_state)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] ysyx_24120011_top.i_LSU.u_SRAM.next_state)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24120011_top___024root___stl_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid 
        = (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state));
}

VL_ATTR_COLD void Vysyx_24120011_top___024root___stl_sequent__TOP__2(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___stl_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__IFU_valid = (0U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state));
}

VL_ATTR_COLD void Vysyx_24120011_top___024root___stl_comb__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___stl_comb__TOP__0\n"); );
    // Body
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
            if (((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)) 
                 & (5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 0U;
            }
        } else if (((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                    & (4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
            if (((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                 & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid) 
                    & (2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state))) {
        if (((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
             & (1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = 2U;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state 
            = ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                ? 1U : ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                         ? 3U : 0U));
    }
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            if (((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)) 
                 & (5U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 0U;
            }
        } else if (((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                    & (4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            if (((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
                 & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 4U;
            }
        } else if (((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state)) 
                    & (2U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        if (((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state)) 
             & (1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 2U;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state 
            = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay)
                ? 1U : ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay)
                         ? 3U : 0U));
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_h559258de_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_hc39dc0c5_0;

VL_ATTR_COLD void Vysyx_24120011_top___024root___stl_comb__TOP__1(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___stl_comb__TOP__1\n"); );
    // Body
    vlSelf->__Vtableidx1 = (((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state)) 
                             << 6U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_ready) 
                                        << 5U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__IFU_valid) 
                                                   << 4U) 
                                                  | (((5U 
                                                       == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state)) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state)))));
    if (Vysyx_24120011_top__ConstPool__TABLE_h559258de_0
        [vlSelf->__Vtableidx1]) {
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state 
            = Vysyx_24120011_top__ConstPool__TABLE_hc39dc0c5_0
            [vlSelf->__Vtableidx1];
    }
    vlSelf->ysyx_24120011_top__DOT__w_mem_en = ((3U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                                & (0U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state)));
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__r_mem_en = 
            ((3U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
             & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state)));
        vlSelf->ysyx_24120011_top__DOT__w_csr_en = 
            ((0x30200073U != vlSelf->ysyx_24120011_top__DOT__inst) 
             & ((0x73U != vlSelf->ysyx_24120011_top__DOT__inst) 
                & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                    ? (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))
                    : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                       & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))))));
        vlSelf->ysyx_24120011_top__DOT__w_csr_ecall 
            = ((0x30200073U != vlSelf->ysyx_24120011_top__DOT__inst) 
               & ((0x73U == vlSelf->ysyx_24120011_top__DOT__inst) 
                  & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))));
        vlSelf->ysyx_24120011_top__DOT__r_csr_en = 
            ((0x30200073U == vlSelf->ysyx_24120011_top__DOT__inst)
              ? (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))
              : ((0x73U != vlSelf->ysyx_24120011_top__DOT__inst) 
                 & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                     ? (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))
                     : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                        & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state))))));
    } else {
        vlSelf->ysyx_24120011_top__DOT__r_mem_en = 0U;
    }
    if (vlSelf->ysyx_24120011_top__DOT__r_csr_en) {
        vlSelf->ysyx_24120011_top__DOT__r_csr_data 
            = ((0x341U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_csr_addr))
                ? vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc
                : ((0x300U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_csr_addr))
                    ? vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus
                    : ((0x342U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_csr_addr))
                        ? vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause
                        : ((0x305U == (IData)(vlSelf->ysyx_24120011_top__DOT__r_csr_addr))
                            ? vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec
                            : 0U))));
    }
    if (vlSelf->ysyx_24120011_top__DOT__w_csr_ecall) {
        vlSelf->ysyx_24120011_top__DOT__r_csr_data 
            = vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec;
    }
    vlSelf->ysyx_24120011_top__DOT__ALUB = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__ALUBctrl))
                                             ? vlSelf->ysyx_24120011_top__DOT__imme
                                             : ((1U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__ALUBctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__src2
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__ALUBctrl))
                                                  ? vlSelf->ysyx_24120011_top__DOT__r_csr_data
                                                  : 0U)));
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
                                                     (1U 
                                                      & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless))))
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
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & vlSelf->ysyx_24120011_top__DOT__ALUB))
                                                       ? vlSelf->ysyx_24120011_top__DOT__src1
                                                       : 
                                                      ((vlSelf->ysyx_24120011_top__DOT__src1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_24120011_top__DOT__ALUB)) 
                                                       | ((0x1fU 
                                                           >= 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_24120011_top__DOT__ALUB)))
                                                           ? 
                                                          ((- (IData)(
                                                                      (vlSelf->ysyx_24120011_top__DOT__src1 
                                                                       >> 0x1fU))) 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_24120011_top__DOT__ALUB)))
                                                           : 0U)))
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
                                                      : (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless))
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
    vlSelf->ysyx_24120011_top__DOT__w_csr_data = ((0U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl))
                                                    ? vlSelf->ysyx_24120011_top__DOT__src1
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl))
                                                     ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                                     : 0U)));
    vlSelf->ysyx_24120011_top__DOT__dnpc = ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__r_csr_data
                                                 : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                                 ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                 : 
                                                (((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                                  & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                                  ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->ysyx_24120011_top__DOT__pc))));
}

VL_ATTR_COLD void Vysyx_24120011_top___024root___stl_sequent__TOP__1(Vysyx_24120011_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120011_top___024root___eval_stl(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(2U)) {
        Vysyx_24120011_top___024root___stl_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24120011_top___024root___stl_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        Vysyx_24120011_top___024root___stl_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U))) {
        Vysyx_24120011_top___024root___stl_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        Vysyx_24120011_top___024root___stl_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__act(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] ysyx_24120011_top.i_IFU.u_SRAM.next_state)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] ysyx_24120011_top.i_LSU.u_SRAM.next_state)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_top___024root___dump_triggers__nba(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] ysyx_24120011_top.i_IFU.u_SRAM.next_state)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] ysyx_24120011_top.i_LSU.u_SRAM.next_state)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24120011_top___024root___ctor_var_reset(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__dnpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__imme = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__r_mem_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__ALUB = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__pc_ctrl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_top__DOT__rd_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_top__DOT__ALUBctrl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_top__DOT__w_mem_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__r_mem_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__sign_extension = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__w_mem_len = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011_top__DOT__r_mem_len = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_top__DOT__w_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011_top__DOT__r_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011_top__DOT__w_csr_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__r_csr_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__w_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__w_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__r_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__IFU_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__LSU_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__LSU_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_dalay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0 = 0;
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[__Vi0] = 0;
    }
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_dalay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigrprev__TOP__ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
