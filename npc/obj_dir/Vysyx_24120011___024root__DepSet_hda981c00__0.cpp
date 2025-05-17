// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011.h for the primary calling header

#include "Vysyx_24120011__pch.h"
#include "Vysyx_24120011___024root.h"

void Vysyx_24120011___024root___ico_sequent__TOP__0(Vysyx_24120011___024root* vlSelf);

void Vysyx_24120011___024root___eval_ico(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_ico\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vysyx_24120011___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_24120011__ConstPool__TABLE_h9ca343f8_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vysyx_24120011__ConstPool__TABLE_haf93202d_0;

VL_INLINE_OPT void Vysyx_24120011___024root___ico_sequent__TOP__0(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___ico_sequent__TOP__0\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state = 0U;
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata = 0U;
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                    ? 0U : 3U);
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg;
        } else {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                    ? 0U : 2U);
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                = vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rdata;
        }
    } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
            = (((IData)(vlSelfRef.io_master_rvalid) 
                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                ? 0U : 1U);
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
            = vlSelfRef.io_master_rdata;
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
            = ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_arvalid)
                ? (((0x2000048U == vlSelfRef.ysyx_24120011__DOT__S0_araddr) 
                    | (0x200004cU == vlSelfRef.ysyx_24120011__DOT__S0_araddr))
                    ? 3U : 1U) : 0U);
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata = 0U;
    }
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
            ? 0U : ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                     ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                         ? (((5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                             & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                             ? 0U : 3U) : (((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                                            & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                            ? 0U : 2U))
                     : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                         ? (((IData)(vlSelfRef.io_master_bvalid) 
                             & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                             ? 0U : 1U) : ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_awvalid)
                                            ? ((0x3f8U 
                                                == vlSelfRef.ysyx_24120011__DOT__S0_awaddr)
                                                ? 2U
                                                : 1U)
                                            : 0U))));
    vlSelfRef.ysyx_24120011__DOT__M1_awready = ((2U 
                                                 == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                                & ((1U 
                                                    & (~ 
                                                       ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                        >> 2U))) 
                                                   && ((2U 
                                                        & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                         ? 
                                                        (3U 
                                                         == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                         : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                                        && (IData)(vlSelfRef.io_master_awready)))));
    vlSelfRef.ysyx_24120011__DOT__M1_wready = ((2U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                               & ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                       >> 2U))) 
                                                  && ((2U 
                                                       & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                        ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                        : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                                       && (IData)(vlSelfRef.io_master_wready)))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                     >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                       ? (5U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                       : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid))
                                   : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      && (IData)(vlSelfRef.io_master_bvalid))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? (1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                       : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_arready))
                                   : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                      && (IData)(vlSelfRef.io_master_arready))));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid 
        = ((1U & (~ ((IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                     >> 2U))) && ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                       ? (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                       : (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid))
                                   : ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                                      && (IData)(vlSelfRef.io_master_rvalid))));
    vlSelfRef.ysyx_24120011__DOT__M0_rdata = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                               ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                               : 0U);
    vlSelfRef.ysyx_24120011__DOT__M1_rdata = ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                               ? vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
                                               : 0U);
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_bready) 
           & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    vlSelfRef.ysyx_24120011__DOT__M0_arready = ((1U 
                                                 == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    vlSelfRef.ysyx_24120011__DOT__M1_arready = ((2U 
                                                 == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                                & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done 
        = ((IData)(vlSelfRef.ysyx_24120011__DOT__S0_rready) 
           & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelfRef.ysyx_24120011__DOT__M0_rvalid = ((1U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                               & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelfRef.ysyx_24120011__DOT__M1_rvalid = ((2U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                               & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rdata_mask 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_len))
            ? ((0U == (3U & vlSelfRef.ysyx_24120011__DOT__alu_result))
                ? ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                    ? (0xffU & vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                    : 0U) : ((1U == (3U & vlSelfRef.ysyx_24120011__DOT__alu_result))
                              ? ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                  ? (0xffU & (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                              >> 8U))
                                  : 0U) : ((2U == (3U 
                                                   & vlSelfRef.ysyx_24120011__DOT__alu_result))
                                            ? ((2U 
                                                == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                ? (0xffU 
                                                   & (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                      >> 0x10U))
                                                : 0U)
                                            : VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_24120011__DOT__M1_rdata, 0x18U))))
            : ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__r_mem_len))
                ? ((0U == (3U & vlSelfRef.ysyx_24120011__DOT__alu_result))
                    ? ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                        ? (0xffffU & vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                        : 0U) : ((1U == (3U & vlSelfRef.ysyx_24120011__DOT__alu_result))
                                  ? ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                      ? (0xffffU & 
                                         (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                          >> 8U)) : 0U)
                                  : ((2U == (3U & vlSelfRef.ysyx_24120011__DOT__alu_result))
                                      ? VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_24120011__DOT__M1_rdata, 0x10U)
                                      : 0xdeadbeefU)))
                : vlSelfRef.ysyx_24120011__DOT__M1_rdata));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        } else if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state = 0U;
    }
    if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                    ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                             ? 2U : 0U));
        } else if ((0U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                             ? 1U : 0U));
        }
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                             ? 1U : 0U));
        }
    } else if ((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid)
                    ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                             ? 2U : 0U));
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state = 0U;
    }
    vlSelfRef.__Vtableidx1 = (((((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__rready) 
                                 << 8U) | (((IData)(vlSelfRef.ysyx_24120011__DOT__M0_rvalid) 
                                            << 7U) 
                                           | ((IData)(vlSelfRef.ysyx_24120011__DOT__M0_arready) 
                                              << 6U))) 
                               | (((IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__arvalid) 
                                   << 5U) | ((IData)(vlSelfRef.ysyx_24120011__DOT__EXU_ready) 
                                             << 4U))) 
                              | (((IData)(vlSelfRef.ysyx_24120011__DOT__LSU_ready) 
                                  << 3U) | (IData)(vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__state)));
    if (Vysyx_24120011__ConstPool__TABLE_h9ca343f8_0
        [vlSelfRef.__Vtableidx1]) {
        vlSelfRef.ysyx_24120011__DOT__i_IFU__DOT__next_state 
            = Vysyx_24120011__ConstPool__TABLE_haf93202d_0
            [vlSelfRef.__Vtableidx1];
    }
    if ((4U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
            vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
            if ((((2U == (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                  & (IData)(vlSelfRef.ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid)) 
                 & (IData)(vlSelfRef.ysyx_24120011__DOT__M1_bready))) {
                vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__wvalid) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__M1_wready))) {
            vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
            if (((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__awvalid) 
                 & (IData)(vlSelfRef.ysyx_24120011__DOT__M1_awready))) {
                vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelfRef.ysyx_24120011__DOT__M1_rvalid) 
                    & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__rready))) {
            vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__state))) {
        if (((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__arvalid) 
             & (IData)(vlSelfRef.ysyx_24120011__DOT__M1_arready))) {
            vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__next_state 
            = ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_read_delay)
                ? 1U : ((IData)(vlSelfRef.ysyx_24120011__DOT__i_LSU__DOT__start_write_delay)
                         ? 3U : 0U));
    }
}

void Vysyx_24120011___024root___eval_triggers__ico(Vysyx_24120011___024root* vlSelf);

bool Vysyx_24120011___024root___eval_phase__ico(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_phase__ico\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_24120011___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_24120011___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vysyx_24120011___024root___eval_act(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_act\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vysyx_24120011___024root___nba_sequent__TOP__0(Vysyx_24120011___024root* vlSelf);
void Vysyx_24120011___024root___nba_sequent__TOP__1(Vysyx_24120011___024root* vlSelf);

void Vysyx_24120011___024root___eval_nba(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_nba\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_24120011___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_24120011___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vysyx_24120011___024root___eval_triggers__act(Vysyx_24120011___024root* vlSelf);

bool Vysyx_24120011___024root___eval_phase__act(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_phase__act\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_24120011___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_24120011___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vysyx_24120011___024root___eval_phase__nba(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_phase__nba\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_24120011___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__ico(Vysyx_24120011___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__nba(Vysyx_24120011___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__act(Vysyx_24120011___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24120011___024root___eval(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_24120011___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v", 7, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vysyx_24120011___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_24120011___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_24120011___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/vsrc/ysyx_24120011.v", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_24120011___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vysyx_24120011___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_24120011___024root___eval_debug_assertions(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_debug_assertions\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY(((vlSelfRef.io_interrupt & 0xfeU)))) {
        Verilated::overWidthError("io_interrupt");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_awready & 0xfeU)))) {
        Verilated::overWidthError("io_master_awready");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_wready & 0xfeU)))) {
        Verilated::overWidthError("io_master_wready");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_bvalid & 0xfeU)))) {
        Verilated::overWidthError("io_master_bvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_bresp & 0xfcU)))) {
        Verilated::overWidthError("io_master_bresp");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_bid & 0xf0U)))) {
        Verilated::overWidthError("io_master_bid");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_arready & 0xfeU)))) {
        Verilated::overWidthError("io_master_arready");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rvalid & 0xfeU)))) {
        Verilated::overWidthError("io_master_rvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rresp & 0xfcU)))) {
        Verilated::overWidthError("io_master_rresp");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rlast & 0xfeU)))) {
        Verilated::overWidthError("io_master_rlast");}
    if (VL_UNLIKELY(((vlSelfRef.io_master_rid & 0xf0U)))) {
        Verilated::overWidthError("io_master_rid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awvalid & 0xfeU)))) {
        Verilated::overWidthError("io_slave_awvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awid & 0xf0U)))) {
        Verilated::overWidthError("io_slave_awid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awsize & 0xf8U)))) {
        Verilated::overWidthError("io_slave_awsize");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_awburst & 0xfcU)))) {
        Verilated::overWidthError("io_slave_awburst");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_wvalid & 0xfeU)))) {
        Verilated::overWidthError("io_slave_wvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_wstrb & 0xf0U)))) {
        Verilated::overWidthError("io_slave_wstrb");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_wlast & 0xfeU)))) {
        Verilated::overWidthError("io_slave_wlast");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_bready & 0xfeU)))) {
        Verilated::overWidthError("io_slave_bready");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arvalid & 0xfeU)))) {
        Verilated::overWidthError("io_slave_arvalid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arid & 0xf0U)))) {
        Verilated::overWidthError("io_slave_arid");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arsize & 0xf8U)))) {
        Verilated::overWidthError("io_slave_arsize");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_arburst & 0xfcU)))) {
        Verilated::overWidthError("io_slave_arburst");}
    if (VL_UNLIKELY(((vlSelfRef.io_slave_rready & 0xfeU)))) {
        Verilated::overWidthError("io_slave_rready");}
}
#endif  // VL_DEBUG
