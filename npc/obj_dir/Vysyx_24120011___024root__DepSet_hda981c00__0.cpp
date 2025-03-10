// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24120011___024root.h"

extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_24120011__ConstPool__TABLE_hd9fd978c_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_24120011__ConstPool__TABLE_h095d415c_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011__ConstPool__TABLE_h129a8bb7_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vysyx_24120011__ConstPool__TABLE_h284954d7_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_24120011__ConstPool__TABLE_h40570e4b_0;

VL_INLINE_OPT void Vysyx_24120011___024root___ico_sequent__TOP__0(Vysyx_24120011___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120011__DOT__M1_wready = ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                             & ((~ 
                                                 ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  >> 2U)) 
                                                & ((2U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                     ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                     : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                                    : 
                                                   ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                    & (IData)(vlSelf->io_master_wready)))));
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready 
        = ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
               >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                           ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                               ? (1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                               : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_arready))
                           : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                              & (IData)(vlSelf->io_master_arready))));
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid 
        = ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
               >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                           ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                               ? (5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                               : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid))
                           : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                              & (IData)(vlSelf->io_master_bvalid))));
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid 
        = ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
               >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                           ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                               ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                               : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid))
                           : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                              & (IData)(vlSelf->io_master_rvalid))));
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done 
        = ((IData)(vlSelf->ysyx_24120011__DOT__S0_bready) 
           & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    vlSelf->ysyx_24120011__DOT__M1_bvalid = ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                             & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done 
        = ((IData)(vlSelf->ysyx_24120011__DOT__S0_rready) 
           & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelf->ysyx_24120011__DOT__M0_rvalid = ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                             & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelf->ysyx_24120011__DOT__M1_rvalid = ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                             & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
        = ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
            ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                     ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                         ? vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg
                         : vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rdata)
                     : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                         ? vlSelf->io_master_rdata : 0U)));
    vlSelf->ysyx_24120011__DOT__M1_rdata = ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                             ? vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                             : 0U);
    if ((0U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        } else if ((0U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else if ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else if ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state = 0U;
    }
    if ((0U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                    ? 1U : ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                             ? 2U : 0U));
        } else if ((0U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                             ? 1U : 0U));
        }
    } else if ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                             ? 1U : 0U));
        }
    } else if ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                    ? 1U : ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                             ? 2U : 0U));
        }
    } else {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state = 0U;
    }
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready) 
                             << 7U) | (((IData)(vlSelf->ysyx_24120011__DOT__M0_rvalid) 
                                        << 6U) | ((
                                                   ((1U 
                                                     == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready)) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyx_24120011__DOT__LSU_ready) 
                                                         << 3U) 
                                                        | (IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__state))))));
    if (Vysyx_24120011__ConstPool__TABLE_hd9fd978c_0
        [vlSelf->__Vtableidx1]) {
        vlSelf->ysyx_24120011__DOT__i_IFU__DOT__next_state 
            = Vysyx_24120011__ConstPool__TABLE_h095d415c_0
            [vlSelf->__Vtableidx1];
    }
    if ((4U & (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))) {
            vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))) {
            if (((IData)(vlSelf->ysyx_24120011__DOT__M1_bvalid) 
                 & (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__bready))) {
                vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__wvalid) 
                    & (IData)(vlSelf->ysyx_24120011__DOT__M1_wready))) {
            vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))) {
            if (((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid) 
                 & ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                    & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                           >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                           ? (3U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                           : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                       : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                          & (IData)(vlSelf->io_master_awready))))))) {
                vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011__DOT__M1_rvalid) 
                    & (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__rready))) {
            vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))) {
        if (((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid) 
             & ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready)))) {
            vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state = 2U;
        }
    } else {
        vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state 
            = ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_read_delay)
                ? 1U : ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_write_delay)
                         ? 3U : 0U));
    }
    vlSelf->ysyx_24120011__DOT__M0_rdata = ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                             ? vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                             : 0U);
    if ((0U != vlSelf->ysyx_24120011__DOT__M0_rdata)) {
        vlSelf->ysyx_24120011__DOT__inst = vlSelf->ysyx_24120011__DOT__M0_rdata;
    }
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0 
        = (IData)((0x67U == (0x707fU & vlSelf->ysyx_24120011__DOT__inst)));
    vlSelf->ysyx_24120011__DOT__src1 = vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->ysyx_24120011__DOT__inst 
                   >> 0xfU))];
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->ysyx_24120011__DOT__inst)));
    vlSelf->ysyx_24120011__DOT__src2 = vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs
        [(0x1fU & (vlSelf->ysyx_24120011__DOT__inst 
                   >> 0x14U))];
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0 
        = (IData)((0x1073U == (0x707fU & vlSelf->ysyx_24120011__DOT__inst)));
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0 
        = (IData)((0x2073U == (0x707fU & vlSelf->ysyx_24120011__DOT__inst)));
    vlSelf->__Vtableidx4 = (0x7fU & vlSelf->ysyx_24120011__DOT__inst);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type 
        = Vysyx_24120011__ConstPool__TABLE_h129a8bb7_0
        [vlSelf->__Vtableidx4];
    vlSelf->ysyx_24120011__DOT__w_mem_en = ((3U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                            & (IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready));
    if ((0U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((3U == (0x7fU & vlSelf->ysyx_24120011__DOT__inst))) {
            vlSelf->ysyx_24120011__DOT__sign_extension 
                = ((0U == (7U & (vlSelf->ysyx_24120011__DOT__inst 
                                 >> 0xcU))) | ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_24120011__DOT__inst 
                                                    >> 0xcU))) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_24120011__DOT__inst 
                                                      >> 0xcU)))));
            vlSelf->ysyx_24120011__DOT__r_mem_len = 
                ((0U == (7U & (vlSelf->ysyx_24120011__DOT__inst 
                               >> 0xcU))) ? 1U : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24120011__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_24120011__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_24120011__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 1U
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_24120011__DOT__inst 
                                                          >> 0xcU)))
                                                      ? 2U
                                                      : 1U)))));
        }
        vlSelf->ysyx_24120011__DOT__w_csr_en = ((0x30200073U 
                                                 != vlSelf->ysyx_24120011__DOT__inst) 
                                                & ((0x73U 
                                                    != vlSelf->ysyx_24120011__DOT__inst) 
                                                   & ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                                                       ? (IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready)
                                                       : 
                                                      ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                                                       & (IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready)))));
        vlSelf->ysyx_24120011__DOT__w_csr_data_ctrl 
            = ((0x30200073U == vlSelf->ysyx_24120011__DOT__inst)
                ? 0U : ((0x73U == vlSelf->ysyx_24120011__DOT__inst)
                         ? 0U : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                                  ? 1U : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0)
                                           ? 2U : 0U))));
    } else {
        vlSelf->ysyx_24120011__DOT__sign_extension = 0U;
        vlSelf->ysyx_24120011__DOT__r_mem_len = 1U;
    }
    vlSelf->ysyx_24120011__DOT__S0_arsize = ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                              ? 2U : 
                                             ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                               ? ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                                                   ? 2U
                                                   : 
                                                  (7U 
                                                   & ((1U 
                                                       & (- (IData)(
                                                                    (2U 
                                                                     == (IData)(vlSelf->ysyx_24120011__DOT__r_mem_len))))) 
                                                      | (2U 
                                                         & (- (IData)(
                                                                      (4U 
                                                                       == (IData)(vlSelf->ysyx_24120011__DOT__r_mem_len))))))))
                                               : 0U));
    vlSelf->ysyx_24120011__DOT__r_mem_en = ((0U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                            & ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24120011__DOT__inst)) 
                                               & (IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready)));
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                             << 9U) | (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0) 
                                        << 8U) | ((
                                                   (3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_24120011__DOT__inst)) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0) 
                                                      << 6U) 
                                                     | (((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24120011__DOT__inst)) 
                                                         << 5U) 
                                                        | (((0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->ysyx_24120011__DOT__inst)) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->ysyx_24120011__DOT__inst 
                                                                     >> 7U))))))))));
    vlSelf->ysyx_24120011__DOT__rd_ctrl = Vysyx_24120011__ConstPool__TABLE_h284954d7_0
        [vlSelf->__Vtableidx2];
    if ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011__DOT__pc_ctrl = 0U;
        if ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011__DOT__ALU_ctrl = 0U;
            vlSelf->ysyx_24120011__DOT__imme = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011__DOT__ALU_ctrl = 
                ((0U == (7U & (vlSelf->ysyx_24120011__DOT__inst 
                               >> 0xcU))) ? 8U : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24120011__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 9U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_24120011__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 7U
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_24120011__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 0xfU
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_24120011__DOT__inst 
                                                          >> 0xcU)))
                                                      ? 3U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_24120011__DOT__inst 
                                                           >> 0xcU)))
                                                       ? 0xbU
                                                       : 0U))))));
            vlSelf->ysyx_24120011__DOT__imme = (((- (IData)(
                                                            (vlSelf->ysyx_24120011__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_24120011__DOT__inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyx_24120011__DOT__inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyx_24120011__DOT__inst 
                                                            >> 7U)))));
        } else {
            vlSelf->ysyx_24120011__DOT__ALU_ctrl = 
                ((IData)((0U == (0xfe007000U & vlSelf->ysyx_24120011__DOT__inst)))
                  ? 0U : ((IData)((0x40000000U == (0xfe007000U 
                                                   & vlSelf->ysyx_24120011__DOT__inst)))
                           ? 1U : ((IData)((0x3000U 
                                            == (0xfe007000U 
                                                & vlSelf->ysyx_24120011__DOT__inst)))
                                    ? 0xbU : ((IData)(
                                                      (0x2000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelf->ysyx_24120011__DOT__inst)))
                                               ? 3U
                                               : ((IData)(
                                                          (0x4000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSelf->ysyx_24120011__DOT__inst)))
                                                   ? 2U
                                                   : 
                                                  ((IData)(
                                                           (0x1000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelf->ysyx_24120011__DOT__inst)))
                                                    ? 6U
                                                    : 
                                                   ((IData)(
                                                            (0x7000U 
                                                             == 
                                                             (0xfe007000U 
                                                              & vlSelf->ysyx_24120011__DOT__inst)))
                                                     ? 0xdU
                                                     : 
                                                    ((IData)(
                                                             (0x40005000U 
                                                              == 
                                                              (0xfe007000U 
                                                               & vlSelf->ysyx_24120011__DOT__inst)))
                                                      ? 0xcU
                                                      : 
                                                     ((IData)(
                                                              (0x6000U 
                                                               == 
                                                               (0xfe007000U 
                                                                & vlSelf->ysyx_24120011__DOT__inst)))
                                                       ? 5U
                                                       : 
                                                      ((IData)(
                                                               (0x5000U 
                                                                == 
                                                                (0xfe007000U 
                                                                 & vlSelf->ysyx_24120011__DOT__inst)))
                                                        ? 4U
                                                        : 0U))))))))));
            vlSelf->ysyx_24120011__DOT__imme = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011__DOT__pc_ctrl = 0U;
            vlSelf->ysyx_24120011__DOT__imme = (((- (IData)(
                                                            (vlSelf->ysyx_24120011__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelf->ysyx_24120011__DOT__inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->ysyx_24120011__DOT__inst 
                                                         >> 7U))));
        } else {
            vlSelf->ysyx_24120011__DOT__pc_ctrl = 1U;
            vlSelf->ysyx_24120011__DOT__imme = (((- (IData)(
                                                            (vlSelf->ysyx_24120011__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0x15U) 
                                                | ((0x100000U 
                                                    & (vlSelf->ysyx_24120011__DOT__inst 
                                                       >> 0xbU)) 
                                                   | ((0xff000U 
                                                       & vlSelf->ysyx_24120011__DOT__inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->ysyx_24120011__DOT__inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->ysyx_24120011__DOT__inst 
                                                               >> 0x14U))))));
        }
        vlSelf->ysyx_24120011__DOT__ALU_ctrl = 0U;
    } else if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011__DOT__pc_ctrl = 0U;
        vlSelf->ysyx_24120011__DOT__ALU_ctrl = 0U;
        vlSelf->ysyx_24120011__DOT__imme = (0xfffff000U 
                                            & vlSelf->ysyx_24120011__DOT__inst);
    } else {
        vlSelf->ysyx_24120011__DOT__pc_ctrl = ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0)
                                                ? 2U
                                                : (
                                                   (0x30200073U 
                                                    == vlSelf->ysyx_24120011__DOT__inst)
                                                    ? 3U
                                                    : 
                                                   ((0x73U 
                                                     == vlSelf->ysyx_24120011__DOT__inst)
                                                     ? 3U
                                                     : 0U)));
        vlSelf->ysyx_24120011__DOT__ALU_ctrl = ((IData)(
                                                        (0x13U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->ysyx_24120011__DOT__inst)))
                                                 ? 0U
                                                 : 
                                                ((IData)(
                                                         (0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->ysyx_24120011__DOT__inst)))
                                                  ? 0xbU
                                                  : 
                                                 ((IData)(
                                                          (0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyx_24120011__DOT__inst)))
                                                   ? 0xdU
                                                   : 
                                                  ((IData)(
                                                           (0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->ysyx_24120011__DOT__inst)))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            (0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->ysyx_24120011__DOT__inst)))
                                                     ? 5U
                                                     : 
                                                    (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0) 
                                                      & (0x20U 
                                                         == 
                                                         (vlSelf->ysyx_24120011__DOT__inst 
                                                          >> 0x19U)))
                                                      ? 0xcU
                                                      : 
                                                     (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->ysyx_24120011__DOT__inst 
                                                           >> 0x19U)))
                                                       ? 4U
                                                       : 
                                                      ((IData)(
                                                               (0x1013U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->ysyx_24120011__DOT__inst)))
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0)
                                                         ? 5U
                                                         : 0U)))))))));
        vlSelf->ysyx_24120011__DOT__imme = (((- (IData)(
                                                        (vlSelf->ysyx_24120011__DOT__inst 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (vlSelf->ysyx_24120011__DOT__inst 
                                               >> 0x14U));
    }
    if ((0U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011__DOT__w_csr_ecall = (
                                                   (0x30200073U 
                                                    != vlSelf->ysyx_24120011__DOT__inst) 
                                                   & ((0x73U 
                                                       == vlSelf->ysyx_24120011__DOT__inst) 
                                                      & (IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready)));
        if ((0x30200073U == vlSelf->ysyx_24120011__DOT__inst)) {
            vlSelf->ysyx_24120011__DOT__r_csr_en = vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready;
            vlSelf->ysyx_24120011__DOT__w_csr_addr = 0U;
            vlSelf->ysyx_24120011__DOT__r_csr_addr = 0x341U;
        } else {
            vlSelf->ysyx_24120011__DOT__r_csr_en = 
                ((0x73U != vlSelf->ysyx_24120011__DOT__inst) 
                 & ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                     ? (IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready)
                     : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                        & (IData)(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready))));
            if ((0x73U == vlSelf->ysyx_24120011__DOT__inst)) {
                vlSelf->ysyx_24120011__DOT__w_csr_addr = 0U;
                vlSelf->ysyx_24120011__DOT__r_csr_addr = 0U;
            } else if (vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0) {
                vlSelf->ysyx_24120011__DOT__w_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011__DOT__imme);
                vlSelf->ysyx_24120011__DOT__r_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011__DOT__imme);
            } else if (vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) {
                vlSelf->ysyx_24120011__DOT__w_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011__DOT__imme);
                vlSelf->ysyx_24120011__DOT__r_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011__DOT__imme);
            } else {
                vlSelf->ysyx_24120011__DOT__w_csr_addr 
                    = (0xfffU & 0U);
                vlSelf->ysyx_24120011__DOT__r_csr_addr 
                    = (0xfffU & 0U);
            }
        }
    }
    vlSelf->ysyx_24120011__DOT__w_mem_len = ((3U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_24120011__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_24120011__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_24120011__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 4U
                                                    : 1U)))
                                              : 1U);
    vlSelf->__Vtableidx3 = (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                             << 3U) | (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type));
    vlSelf->ysyx_24120011__DOT__ALUBctrl = Vysyx_24120011__ConstPool__TABLE_h40570e4b_0
        [vlSelf->__Vtableidx3];
    if ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelf->ysyx_24120011__DOT__S0_wdata = 0U;
        vlSelf->ysyx_24120011__DOT__S0_wstrb = 0xfU;
        vlSelf->ysyx_24120011__DOT__S0_awsize = 2U;
    } else if ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelf->ysyx_24120011__DOT__S0_wdata = ((4U 
                                                 == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                                                 ? vlSelf->ysyx_24120011__DOT__src2
                                                 : 0U);
        vlSelf->ysyx_24120011__DOT__S0_wstrb = ((4U 
                                                 == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))
                                                 ? 0xfU
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))
                                                  ? 3U
                                                  : 1U));
        vlSelf->ysyx_24120011__DOT__S0_awsize = ((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                                                  ? 2U
                                                  : 
                                                 (7U 
                                                  & ((1U 
                                                      & (- (IData)(
                                                                   (2U 
                                                                    == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))))) 
                                                     | (2U 
                                                        & (- (IData)(
                                                                     (4U 
                                                                      == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))))))));
    } else {
        vlSelf->ysyx_24120011__DOT__S0_wdata = 0U;
        vlSelf->ysyx_24120011__DOT__S0_wstrb = 0U;
        vlSelf->ysyx_24120011__DOT__S0_awsize = 0U;
    }
    vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme 
        = (vlSelf->ysyx_24120011__DOT__imme + vlSelf->ysyx_24120011__DOT__pc);
    if ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = 0U;
    } else if ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata 
                = vlSelf->ysyx_24120011__DOT__S0_wdata;
        } else {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata 
                = vlSelf->ysyx_24120011__DOT__S0_wdata;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata = 0U;
        }
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = 0U;
    } else {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata 
            = ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                ? vlSelf->ysyx_24120011__DOT__S0_wdata
                : 0U);
    }
    vlSelf->io_master_wdata = vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata;
    if (vlSelf->ysyx_24120011__DOT__r_csr_en) {
        vlSelf->ysyx_24120011__DOT__r_csr_data = ((0x341U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__r_csr_addr))
                                                   ? vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mepc
                                                   : 
                                                  ((0x300U 
                                                    == (IData)(vlSelf->ysyx_24120011__DOT__r_csr_addr))
                                                    ? vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mstatus
                                                    : 
                                                   ((0x342U 
                                                     == (IData)(vlSelf->ysyx_24120011__DOT__r_csr_addr))
                                                     ? vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mcause
                                                     : 
                                                    ((0x305U 
                                                      == (IData)(vlSelf->ysyx_24120011__DOT__r_csr_addr))
                                                      ? vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mtvec
                                                      : 0U))));
    }
    if (vlSelf->ysyx_24120011__DOT__w_csr_ecall) {
        vlSelf->ysyx_24120011__DOT__r_csr_data = vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mtvec;
    }
    if ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
    } else if ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize 
                = vlSelf->ysyx_24120011__DOT__S0_arsize;
        } else {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize 
                = vlSelf->ysyx_24120011__DOT__S0_arsize;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize = 0U;
        }
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
    } else {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize 
            = ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                ? (IData)(vlSelf->ysyx_24120011__DOT__S0_arsize)
                : 0U);
    }
    vlSelf->io_master_arsize = vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize;
    if ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
        vlSelf->io_master_wstrb = vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
    } else {
        if ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
            if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb 
                    = vlSelf->ysyx_24120011__DOT__S0_wstrb;
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize 
                    = vlSelf->ysyx_24120011__DOT__S0_awsize;
            } else {
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb 
                    = vlSelf->ysyx_24120011__DOT__S0_wstrb;
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb = 0U;
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize 
                    = vlSelf->ysyx_24120011__DOT__S0_awsize;
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize = 0U;
            }
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
        } else {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb = 0U;
            if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb 
                    = vlSelf->ysyx_24120011__DOT__S0_wstrb;
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize 
                    = vlSelf->ysyx_24120011__DOT__S0_awsize;
            } else {
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
                vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
            }
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize = 0U;
        }
        vlSelf->io_master_wstrb = vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb;
    }
    vlSelf->io_master_awsize = vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize;
    vlSelf->ysyx_24120011__DOT__ALUB = ((0U == (IData)(vlSelf->ysyx_24120011__DOT__ALUBctrl))
                                         ? vlSelf->ysyx_24120011__DOT__imme
                                         : ((1U == (IData)(vlSelf->ysyx_24120011__DOT__ALUBctrl))
                                             ? vlSelf->ysyx_24120011__DOT__src2
                                             : ((2U 
                                                 == (IData)(vlSelf->ysyx_24120011__DOT__ALUBctrl))
                                                 ? vlSelf->ysyx_24120011__DOT__r_csr_data
                                                 : 0U)));
    vlSelf->ysyx_24120011__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0 
        = (vlSelf->ysyx_24120011__DOT__ALUB ^ (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl)))));
    vlSelf->ysyx_24120011__DOT__i_ALU__DOT__B_in = 
        ((1U & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
          ? ((IData)(1U) + vlSelf->ysyx_24120011__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0)
          : vlSelf->ysyx_24120011__DOT__ALUB);
    vlSelf->ysyx_24120011__DOT__i_ALU__DOT__carry = 
        (1U & (IData)((1ULL & (((QData)((IData)(vlSelf->ysyx_24120011__DOT__src1)) 
                                + (QData)((IData)(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__B_in))) 
                               >> 0x20U))));
    vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp 
        = (vlSelf->ysyx_24120011__DOT__src1 + vlSelf->ysyx_24120011__DOT__i_ALU__DOT__B_in);
    vlSelf->ysyx_24120011__DOT__i_ALU__DOT__sless = 
        (1U & ((vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp 
                >> 0x1fU) ^ (((vlSelf->ysyx_24120011__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                               ? vlSelf->ysyx_24120011__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyx_24120011__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyx_24120011__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    vlSelf->ysyx_24120011__DOT__alu_result = ((4U & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                     ? 
                                                    ((0U 
                                                      == vlSelf->ysyx_24120011__DOT__ALUB)
                                                      ? 1U
                                                      : (IData)(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__carry))
                                                     : 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__sless))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                     ? vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp
                                                     : 
                                                    (vlSelf->ysyx_24120011__DOT__src1 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_24120011__DOT__ALUB))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                     ? 
                                                    (vlSelf->ysyx_24120011__DOT__src1 
                                                     & vlSelf->ysyx_24120011__DOT__ALUB)
                                                     : 
                                                    (vlSelf->ysyx_24120011__DOT__src1 
                                                     | vlSelf->ysyx_24120011__DOT__ALUB))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_24120011__DOT__ALUB))
                                                      ? vlSelf->ysyx_24120011__DOT__src1
                                                      : 
                                                     ((vlSelf->ysyx_24120011__DOT__src1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->ysyx_24120011__DOT__ALUB)) 
                                                      | ((0x1fU 
                                                          >= 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & vlSelf->ysyx_24120011__DOT__ALUB)))
                                                          ? 
                                                         ((- (IData)(
                                                                     (vlSelf->ysyx_24120011__DOT__src1 
                                                                      >> 0x1fU))) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & vlSelf->ysyx_24120011__DOT__ALUB)))
                                                          : 0U)))
                                                     : 
                                                    (vlSelf->ysyx_24120011__DOT__src1 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_24120011__DOT__ALUB)))))
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                     ? 
                                                    ((0U 
                                                      == vlSelf->ysyx_24120011__DOT__ALUB)
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__carry))))
                                                     : (IData)(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__sless))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                     ? vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp
                                                     : 
                                                    (vlSelf->ysyx_24120011__DOT__src1 
                                                     ^ vlSelf->ysyx_24120011__DOT__ALUB)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                     ? 
                                                    (vlSelf->ysyx_24120011__DOT__src1 
                                                     != vlSelf->ysyx_24120011__DOT__ALUB)
                                                     : vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp)
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                                     ? 
                                                    (vlSelf->ysyx_24120011__DOT__src1 
                                                     == vlSelf->ysyx_24120011__DOT__ALUB)
                                                     : vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp))));
    vlSelf->ysyx_24120011__DOT__S0_araddr = ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                              ? vlSelf->ysyx_24120011__DOT__pc
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                                                   ? vlSelf->ysyx_24120011__DOT__alu_result
                                                   : 0U)
                                                  : 0U));
    if ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state = 0U;
    } else if ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr 
                = vlSelf->ysyx_24120011__DOT__S0_araddr;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                    ? 0U : 3U);
        } else {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr 
                = vlSelf->ysyx_24120011__DOT__S0_araddr;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                    ? 0U : 2U);
        }
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
    } else {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr = 0U;
        if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
                = vlSelf->ysyx_24120011__DOT__S0_araddr;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelf->io_master_rvalid) 
                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                    ? 0U : 1U);
        } else {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__S0_arvalid)
                    ? (((0xa0000048U == vlSelf->ysyx_24120011__DOT__S0_araddr) 
                        | (0xa000004cU == vlSelf->ysyx_24120011__DOT__S0_araddr))
                        ? 3U : 1U) : 0U);
        }
    }
    vlSelf->ysyx_24120011__DOT__S0_awaddr = ((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                              ? 0U : 
                                             ((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                               ? ((3U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                                                   ? vlSelf->ysyx_24120011__DOT__alu_result
                                                   : 0U)
                                               : 0U));
    if ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state = 0U;
    } else if ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr 
                = vlSelf->ysyx_24120011__DOT__S0_awaddr;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
                = (((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                    ? 0U : 3U);
        } else {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr 
                = vlSelf->ysyx_24120011__DOT__S0_awaddr;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
                = (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                    ? 0U : 2U);
        }
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
    } else {
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
        vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr = 0U;
        if ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr 
                = vlSelf->ysyx_24120011__DOT__S0_awaddr;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
                = (((IData)(vlSelf->io_master_bvalid) 
                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                    ? 0U : 1U);
        } else {
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
            vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
                = ((IData)(vlSelf->ysyx_24120011__DOT__S0_awvalid)
                    ? ((0xa00003f8U == vlSelf->ysyx_24120011__DOT__S0_awaddr)
                        ? 2U : 1U) : 0U);
        }
    }
    vlSelf->ysyx_24120011__DOT__w_csr_data = ((0U == (IData)(vlSelf->ysyx_24120011__DOT__w_csr_data_ctrl))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyx_24120011__DOT__w_csr_data_ctrl))
                                                   ? vlSelf->ysyx_24120011__DOT__src1
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_24120011__DOT__w_csr_data_ctrl))
                                                    ? vlSelf->ysyx_24120011__DOT__alu_result
                                                    : 0U)));
    vlSelf->ysyx_24120011__DOT__dnpc = ((2U & (IData)(vlSelf->ysyx_24120011__DOT__pc_ctrl))
                                         ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__pc_ctrl))
                                             ? vlSelf->ysyx_24120011__DOT__r_csr_data
                                             : vlSelf->ysyx_24120011__DOT__alu_result)
                                         : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__pc_ctrl))
                                             ? vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                             : (((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_24120011__DOT__inst)) 
                                                 & vlSelf->ysyx_24120011__DOT__alu_result)
                                                 ? vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->ysyx_24120011__DOT__pc))));
    vlSelf->io_master_awaddr = vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr;
    vlSelf->io_master_araddr = vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr;
}

void Vysyx_24120011___024root___eval_ico(Vysyx_24120011___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_24120011___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_24120011___024root___eval_act(Vysyx_24120011___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_act\n"); );
}

void Vysyx_24120011___024root___nba_sequent__TOP__0(Vysyx_24120011___024root* vlSelf);
void Vysyx_24120011___024root___nba_sequent__TOP__1(Vysyx_24120011___024root* vlSelf);

void Vysyx_24120011___024root___eval_nba(Vysyx_24120011___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24120011___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24120011___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vysyx_24120011___024root___eval_triggers__ico(Vysyx_24120011___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__ico(Vysyx_24120011___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_24120011___024root___eval_triggers__act(Vysyx_24120011___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__act(Vysyx_24120011___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__nba(Vysyx_24120011___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120011___024root___eval(Vysyx_24120011___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_24120011___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120011___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v", 6, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_24120011___024root___eval_ico(vlSelf);
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
            Vysyx_24120011___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_24120011___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v", 6, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_24120011___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24120011___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v", 6, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_24120011___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_24120011___024root___eval_debug_assertions(Vysyx_24120011___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_master_awready & 0xfeU))) {
        Verilated::overWidthError("io_master_awready");}
    if (VL_UNLIKELY((vlSelf->io_master_wready & 0xfeU))) {
        Verilated::overWidthError("io_master_wready");}
    if (VL_UNLIKELY((vlSelf->io_master_bvalid & 0xfeU))) {
        Verilated::overWidthError("io_master_bvalid");}
    if (VL_UNLIKELY((vlSelf->io_master_bres & 0xfcU))) {
        Verilated::overWidthError("io_master_bres");}
    if (VL_UNLIKELY((vlSelf->io_master_bid & 0xf0U))) {
        Verilated::overWidthError("io_master_bid");}
    if (VL_UNLIKELY((vlSelf->io_master_arready & 0xfeU))) {
        Verilated::overWidthError("io_master_arready");}
    if (VL_UNLIKELY((vlSelf->io_master_rvalid & 0xfeU))) {
        Verilated::overWidthError("io_master_rvalid");}
    if (VL_UNLIKELY((vlSelf->io_master_rresp & 0xfcU))) {
        Verilated::overWidthError("io_master_rresp");}
    if (VL_UNLIKELY((vlSelf->io_master_rlast & 0xfeU))) {
        Verilated::overWidthError("io_master_rlast");}
    if (VL_UNLIKELY((vlSelf->io_master_rid & 0xf0U))) {
        Verilated::overWidthError("io_master_rid");}
    if (VL_UNLIKELY((vlSelf->io_slave_awvalid & 0xfeU))) {
        Verilated::overWidthError("io_slave_awvalid");}
    if (VL_UNLIKELY((vlSelf->io_slave_awid & 0xf0U))) {
        Verilated::overWidthError("io_slave_awid");}
    if (VL_UNLIKELY((vlSelf->io_slave_awsize & 0xf8U))) {
        Verilated::overWidthError("io_slave_awsize");}
    if (VL_UNLIKELY((vlSelf->io_slave_awburst & 0xfcU))) {
        Verilated::overWidthError("io_slave_awburst");}
    if (VL_UNLIKELY((vlSelf->io_slave_wvalid & 0xfeU))) {
        Verilated::overWidthError("io_slave_wvalid");}
    if (VL_UNLIKELY((vlSelf->io_slave_wstrb & 0xf0U))) {
        Verilated::overWidthError("io_slave_wstrb");}
    if (VL_UNLIKELY((vlSelf->io_slave_wlast & 0xfeU))) {
        Verilated::overWidthError("io_slave_wlast");}
    if (VL_UNLIKELY((vlSelf->io_slave_bready & 0xfeU))) {
        Verilated::overWidthError("io_slave_bready");}
    if (VL_UNLIKELY((vlSelf->io_slave_arvalid & 0xfeU))) {
        Verilated::overWidthError("io_slave_arvalid");}
    if (VL_UNLIKELY((vlSelf->io_slave_arid & 0xf0U))) {
        Verilated::overWidthError("io_slave_arid");}
    if (VL_UNLIKELY((vlSelf->io_slave_arsize & 0xf8U))) {
        Verilated::overWidthError("io_slave_arsize");}
    if (VL_UNLIKELY((vlSelf->io_slave_arburst & 0xfcU))) {
        Verilated::overWidthError("io_slave_arburst");}
    if (VL_UNLIKELY((vlSelf->io_slave_rready & 0xfeU))) {
        Verilated::overWidthError("io_slave_rready");}
}
#endif  // VL_DEBUG
