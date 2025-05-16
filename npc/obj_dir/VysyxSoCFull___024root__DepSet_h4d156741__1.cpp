// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout3 
        = ((((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_0)) 
               | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_0)))
               ? (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                           << 4U))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                       << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                 << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
               : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1)
                   ? 0x80U : 0x7fU)) << 0x18U) | ((
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_0)) 
                                                    | (0xfU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_0)))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1) 
                                                       << 7U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                         << 6U)) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 5U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                           << 4U))) 
                                                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                           << 2U)) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1)
                                                     ? 0x80U
                                                     : 0x7fU)) 
                                                  << 0x10U)) 
           | (((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_0)) 
                 | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_0)))
                 ? (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1) 
                       << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                 << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                             << 5U) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 4U))) 
                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                         << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                 : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1)
                     ? 0x80U : 0x7fU)) << 8U) | (((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_0)) 
                                                  | (0xfU 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_0)))
                                                  ? 
                                                 (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1) 
                                                     << 7U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                       << 6U)) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                       << 5U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                         << 4U))) 
                                                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                       << 3U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                         << 2U)) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1)
                                                   ? 0x80U
                                                   : 0x7fU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout2 
        = ((((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_0)) 
               | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_0)))
               ? (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                           << 4U))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                       << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                 << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
               : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1)
                   ? 0x80U : 0x7fU)) << 0x18U) | ((
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_0)) 
                                                    | (0xfU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_0)))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1) 
                                                       << 7U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                         << 6U)) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 5U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                           << 4U))) 
                                                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                           << 2U)) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1)
                                                     ? 0x80U
                                                     : 0x7fU)) 
                                                  << 0x10U)) 
           | (((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_0)) 
                 | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_0)))
                 ? (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1) 
                       << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                 << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                             << 5U) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 4U))) 
                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                         << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                 : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1)
                     ? 0x80U : 0x7fU)) << 8U) | (((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_0)) 
                                                  | (0xfU 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_0)))
                                                  ? 
                                                 (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1) 
                                                     << 7U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                       << 6U)) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                       << 5U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                         << 4U))) 
                                                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                       << 3U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                         << 2U)) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1)
                                                   ? 0x80U
                                                   : 0x7fU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout1 
        = ((((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_0)) 
               | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_0)))
               ? (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                           << 4U))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                       << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                 << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
               : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1)
                   ? 0x80U : 0x7fU)) << 0x18U) | ((
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_0)) 
                                                    | (0xfU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_0)))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1) 
                                                       << 7U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                         << 6U)) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 5U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                           << 4U))) 
                                                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                           << 2U)) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1)
                                                     ? 0x80U
                                                     : 0x7fU)) 
                                                  << 0x10U)) 
           | (((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_0)) 
                 | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_0)))
                 ? (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1) 
                       << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                 << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                             << 5U) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 4U))) 
                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                         << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                 : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1)
                     ? 0x80U : 0x7fU)) << 8U) | (((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_0)) 
                                                  | (0xfU 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_0)))
                                                  ? 
                                                 (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1) 
                                                     << 7U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                       << 6U)) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                       << 5U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                         << 4U))) 
                                                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                       << 3U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                         << 2U)) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1)
                                                   ? 0x80U
                                                   : 0x7fU))));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout0 
        = ((((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_0)) 
               | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_0)))
               ? (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                           << 4U))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                       << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                 << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                             << 1U) 
                                            | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
               : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1)
                   ? 0x80U : 0x7fU)) << 0x18U) | ((
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_0)) 
                                                    | (0xfU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_0)))
                                                    ? 
                                                   (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1) 
                                                       << 7U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                         << 6U)) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                         << 5U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                           << 4U))) 
                                                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                           << 2U)) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                           << 1U) 
                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1)
                                                     ? 0x80U
                                                     : 0x7fU)) 
                                                  << 0x10U)) 
           | (((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_0)) 
                 | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_0)))
                 ? (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1) 
                       << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                 << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                             << 5U) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 4U))) 
                    | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                         << 3U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                   << 2U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                 : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1)
                     ? 0x80U : 0x7fU)) << 8U) | (((0U 
                                                   == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_0)) 
                                                  | (0xfU 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_0)))
                                                  ? 
                                                 (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1) 
                                                     << 7U) 
                                                    | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                       << 6U)) 
                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                       << 5U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                         << 4U))) 
                                                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                       << 3U) 
                                                      | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                         << 2U)) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1)
                                                   ? 0x80U
                                                   : 0x7fU))));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_0))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in1 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_0))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0 
            = (((0x8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x12U]) | (0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x12U] 
                                                       >> 0xfU)))) 
                                        << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x12U] >> 3U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in1 
            = (((0x8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x16U]) | (0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x16U] 
                                                       >> 0xfU)))) 
                                        << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x16U] >> 3U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add6__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_0))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in1 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgRegularize_h0309defd_0_0))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0 
            = (((0x8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x13U]) | (0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x13U] 
                                                       >> 0xfU)))) 
                                        << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x13U] >> 3U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in1 
            = (((0x8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x17U]) | (0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x17U] 
                                                       >> 0xfU)))) 
                                        << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x17U] >> 3U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add7__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_0))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in1 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_0))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0 
            = (((0x8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x11U]) | (0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x11U] 
                                                       >> 0xfU)))) 
                                        << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x11U] >> 3U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in1 
            = (((0x8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x15U]) | (0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x15U] 
                                                       >> 0xfU)))) 
                                        << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x15U] >> 3U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add5__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_0))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in1 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgRegularize_h0309defd_0_0))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0 
            = (((0x8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x10U]) | (0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x10U] 
                                                       >> 0xfU)))) 
                                        << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x10U] >> 3U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in1 
            = (((0x8000U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                 [0x14U]) | (0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x14U] 
                                                       >> 0xfU)))) 
                                        << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x14U] >> 3U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add4__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_0))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in1 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_0))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x12U] << 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x12U] 
                                                                 >> 7U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x12U] << 5U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x16U] << 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x16U] 
                                                                 >> 7U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x16U] << 5U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add2__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_0))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in1 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgRegularize_h0309defd_0_0))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x13U] << 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x13U] 
                                                                 >> 7U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x13U] << 5U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x17U] << 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x17U] 
                                                                 >> 7U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x17U] << 5U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add3__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_0))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in1 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_0))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x11U] << 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x11U] 
                                                                 >> 7U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x11U] << 5U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x15U] << 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x15U] 
                                                                 >> 7U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x15U] << 5U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add1__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_0))))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in1 
            = ((((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgRegularize_h60c5f4dd_0_1) 
                   << 0xfU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d) 
                               << 0xeU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d) 
                                             << 0xdU) 
                                            | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d) 
                                               << 0xcU))) 
                | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                     << 0xbU) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                 << 0xaU)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                               << 9U) 
                                              | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                 << 8U)))) 
               | (((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                     << 7U) | ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                               << 6U)) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d) 
                                           << 5U) | 
                                          (0x10U & 
                                           ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co) 
                                                  | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d))) 
                                                | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b))) 
                                            << 4U)))) 
                  | ((((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci) 
                       & ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1) 
                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                      << 3U) | ((4U & ((~ ((~ (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_0) 
                                                >> 2U) 
                                               | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_2))) 
                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b))) 
                                       << 2U)) | (3U 
                                                  & (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgRegularize_h0309defd_0_0))))));
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x10U] << 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x10U] 
                                                                 >> 7U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x10U] << 5U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x14U] << 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x14U] 
                                                                 >> 7U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x14U] << 5U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add0__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add6__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add6__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add7__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add7__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add5__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add5__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add4__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add4__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add2__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add2__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add3__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add3__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add1__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add1__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add0__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add0__DOT__temp_out));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x13U] >> 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x13U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x13U] >> 0xbU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x17U] >> 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x17U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x17U] >> 0xbU)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add11__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x16U] >> 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x16U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x16U] >> 0xbU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x12U] >> 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x12U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x12U] >> 0xbU)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add10__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x11U] >> 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x11U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x11U] >> 0xbU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x15U] >> 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x15U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x15U] >> 0xbU)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add9__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x14U] >> 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x14U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x14U] >> 0xbU)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x10U] >> 8U)) | (0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x10U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x10U] >> 0xbU)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add8__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add11__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add11__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add10__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add10__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add9__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add9__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add8__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add8__DOT__temp_out));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x15U] >> 0x10U)) | (0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x15U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x15U] >> 0x13U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x11U] >> 0x10U)) | (0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x11U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x11U] >> 0x13U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add13__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in1)));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x14U] >> 0x10U)) | (0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x14U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x14U] >> 0x13U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x10U] >> 0x10U)) | (0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x10U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x10U] >> 0x13U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add12__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add13__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add13__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add12__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add12__DOT__temp_out));
    if ((2U == (7U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in1 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x16U] >> 0x10U)) | (0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x16U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x16U] >> 0x13U)));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0 
            = (((0x8000U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x12U] >> 0x10U)) | (0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x12U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU))) 
               | (0xfe0U & (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                            [0x12U] >> 0x13U)));
    }
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add14__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0) 
                      + (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in1)));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16 
        = ((((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add14__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add14__DOT__temp_out));
    vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout8 
        = (((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16) 
                            >> 0xcU))) | (0xfU == (0xfU 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16) 
                                                      >> 0xcU))))
            ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16) 
                         >> 8U)) | (0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16) 
                                             >> 5U)))
            : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16))
                ? 0x80U : 0x7fU));
    if ((4U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
         [0x18U])) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 = 0U;
        if ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
             [0x18U])) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 = 0U;
        } else if ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                    [0x18U])) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 = 0U;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 
                = (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst4__DOT__LUT
                     [((0xaU >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index4))
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index4)
                        : 0U)][vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                     << 0x18U) | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst5__DOT__LUT
                                  [((0xaU >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index5))
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index5)
                                     : 0U)][vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                                  << 0x10U)) | ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst6__DOT__LUT
                                                 [(
                                                   (0xaU 
                                                    >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index6))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index6)
                                                    : 0U)]
                                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                                                 << 8U) 
                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst7__DOT__LUT
                                                [((0xaU 
                                                   >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index7))
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index7)
                                                   : 0U)]
                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg]));
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
                = (((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst0__DOT__LUT
                     [((0xaU >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index0))
                        ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index0)
                        : 0U)][vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                     << 0x18U) | (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst1__DOT__LUT
                                  [((0xaU >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index1))
                                     ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index1)
                                     : 0U)][vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                                  << 0x10U)) | ((vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst2__DOT__LUT
                                                 [(
                                                   (0xaU 
                                                    >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index2))
                                                    ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index2)
                                                    : 0U)]
                                                 [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                                                 << 8U) 
                                                | vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst3__DOT__LUT
                                                [((0xaU 
                                                   >= (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index3))
                                                   ? (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index3)
                                                   : 0U)]
                                                [vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg]));
        }
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 = 0U;
    } else if ((2U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U])) {
        if ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
             [0x18U])) {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout3;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout1;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout2;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout0;
        } else {
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 = 0U;
            vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout8;
        }
    } else if ((1U & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U])) {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout3;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout1;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout2;
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
            = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout0;
    } else {
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 
            = ((((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16) 
                                   >> 0xcU))) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16) 
                                                     >> 0xcU))))
                   ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16) 
                                >> 8U)) | (0x7fU & 
                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16) 
                                            >> 5U)))
                   : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16))
                       ? 0x80U : 0x7fU)) << 0x18U) 
                | ((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415) 
                                     >> 0xcU))) | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415) 
                                                       >> 0xcU))))
                     ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415) 
                                  >> 8U)) | (0x7fU 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415) 
                                                >> 5U)))
                     : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415))
                         ? 0x80U : 0x7fU)) << 0x10U)) 
               | (((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415) 
                                     >> 0xcU))) | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415) 
                                                       >> 0xcU))))
                     ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415) 
                                  >> 8U)) | (0x7fU 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415) 
                                                >> 5U)))
                     : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415))
                         ? 0x80U : 0x7fU)) << 8U) | 
                  (((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67) 
                                    >> 0xcU))) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67) 
                                                      >> 0xcU))))
                    ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67) 
                                 >> 8U)) | (0x7fU & 
                                            ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67) 
                                             >> 5U)))
                    : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67))
                        ? 0x80U : 0x7fU))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 
            = ((((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415) 
                                   >> 0xcU))) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415) 
                                                     >> 0xcU))))
                   ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415) 
                                >> 8U)) | (0x7fU & 
                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415) 
                                            >> 5U)))
                   : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415))
                       ? 0x80U : 0x7fU)) << 0x18U) 
                | ((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567) 
                                     >> 0xcU))) | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567) 
                                                       >> 0xcU))))
                     ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567) 
                                  >> 8U)) | (0x7fU 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567) 
                                                >> 5U)))
                     : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567))
                         ? 0x80U : 0x7fU)) << 0x10U)) 
               | (((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011) 
                                     >> 0xcU))) | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011) 
                                                       >> 0xcU))))
                     ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011) 
                                  >> 8U)) | (0x7fU 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011) 
                                                >> 5U)))
                     : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011))
                         ? 0x80U : 0x7fU)) << 8U) | 
                  (((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23) 
                                    >> 0xcU))) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23) 
                                                      >> 0xcU))))
                    ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23) 
                                 >> 8U)) | (0x7fU & 
                                            ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23) 
                                             >> 5U)))
                    : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23))
                        ? 0x80U : 0x7fU))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 
            = ((((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout8) 
                 << 0x18U) | ((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011) 
                                                >> 0xcU))) 
                                | (0xfU == (0xfU & 
                                            ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011) 
                                             >> 0xcU))))
                                ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011) 
                                             >> 8U)) 
                                   | (0x7fU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011) 
                                               >> 5U)))
                                : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011))
                                    ? 0x80U : 0x7fU)) 
                              << 0x10U)) | (((((0U 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213) 
                                                    >> 0xcU))) 
                                               | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213) 
                                                      >> 0xcU))))
                                               ? ((0x80U 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213) 
                                                      >> 8U)) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213) 
                                                        >> 5U)))
                                               : ((0x8000U 
                                                   & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213))
                                                   ? 0x80U
                                                   : 0x7fU)) 
                                             << 8U) 
                                            | (((0U 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45) 
                                                     >> 0xcU))) 
                                                | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45) 
                                                       >> 0xcU))))
                                                ? (
                                                   (0x80U 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45) 
                                                       >> 8U)) 
                                                   | (0x7fU 
                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45) 
                                                         >> 5U)))
                                                : (
                                                   (0x8000U 
                                                    & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45))
                                                    ? 0x80U
                                                    : 0x7fU))));
        vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
            = ((((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567) 
                                   >> 0xcU))) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567) 
                                                     >> 0xcU))))
                   ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567) 
                                >> 8U)) | (0x7fU & 
                                           ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567) 
                                            >> 5U)))
                   : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567))
                       ? 0x80U : 0x7fU)) << 0x18U) 
                | ((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123) 
                                     >> 0xcU))) | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123) 
                                                       >> 0xcU))))
                     ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123) 
                                  >> 8U)) | (0x7fU 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123) 
                                                >> 5U)))
                     : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123))
                         ? 0x80U : 0x7fU)) << 0x10U)) 
               | (((((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89) 
                                     >> 0xcU))) | (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89) 
                                                       >> 0xcU))))
                     ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89) 
                                  >> 8U)) | (0x7fU 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89) 
                                                >> 5U)))
                     : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89))
                         ? 0x80U : 0x7fU)) << 8U) | 
                  (((0U == (0xfU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01) 
                                    >> 0xcU))) | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01) 
                                                      >> 0xcU))))
                    ? ((0x80U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01) 
                                 >> 8U)) | (0x7fU & 
                                            ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01) 
                                             >> 5U)))
                    : ((0x8000U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01))
                        ? 0x80U : 0x7fU))));
    }
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__2\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_flash_read__7__data;
    __Vtask_flash_read__7__data = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
        = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bit_cnt;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data;
    if (((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))) {
        if (VL_LIKELY(((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd))))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                           ((0xfffffeU 
                                                                             & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi)), __Vtask_flash_read__7__data);
            vlSelfRef.ysyxSoCFull__DOT__flash__DOT__rdata 
                = __Vtask_flash_read__7__data;
        } else {
            VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",0,
                          8,vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF_NX("[%0t] %%Fatal: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 98, "", false);
        }
    }
    if ((0x80U & (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_ss))) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data = 0U;
    } else if ((7U >= (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bit_cnt))) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data 
            = ((0xfeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data) 
                         << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bit_cnt)));
    } else if ((0xfU >= (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bit_cnt))) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data 
            = vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data;
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bit_cnt)));
    }
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
        = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt;
    vlSelfRef.ysyxSoCFull__DOT__bitrev__DOT__data = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 0;
    IData/*23:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0;
    // Body
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
        = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr;
    if (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
            = (0xffU & ((7U > (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                         ? ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                         : 0U));
        __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 
            ((0xfeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd) 
                       << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
    } else {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
            = (0xffU & ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))
                         ? ((0x17U > (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                             ? ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                             : 0U) : ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))));
    }
    if (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((3U != (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                         ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)));
    } else if (VL_LIKELY(((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state;
    } else {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",0,
                      8,vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state;
        VL_WRITEF_NX("[%0t] %%Fatal: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 44, "", false);
    }
    if (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__reset) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__data = 0U;
        __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state))) {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
                = (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter))
                     ? vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data_bswap
                     : vlSelfRef.ysyxSoCFull__DOT__flash__DOT__data) 
                   << 1U);
        }
        if (((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelfRef.ysyxSoCFull__DOT__flash__DOT__counter)))) {
            __Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
                = ((0xfffffeU & (vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr 
                                 << 1U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT___asic_spi_mosi));
        }
    }
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__cmd = __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelfRef.ysyxSoCFull__DOT__flash__DOT__addr = __Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0;
    // Body
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter;
    vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
        = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state;
    if (vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0U;
    } else {
        if (((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)) 
             & (6U > (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter)))) {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                = ((0xfffff0U & (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__addr 
                                 << 4U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
        }
        if ((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                = ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__QPI_MODE)
                    ? ((0xf0U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 4U)) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))
                    : ((0xfeU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 1U)) | (1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))));
        }
        if (((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)) 
             & (0xebU == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = (((0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter))
                     ? vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data_bswap
                     : vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data) 
                   << 4U);
        } else if (((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state)) 
                    & (0x38U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = ((vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data 
                    << 4U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
        }
    }
    if (vlSelfRef.ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__counter = 0U;
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
    } else if (VL_UNLIKELY(((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state;
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `EBh,38H` read command\n",0,
                      8,vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        VL_WRITEF_NX("[%0t] %%Fatal: psram.v:99: Assertion failed in %NysyxSoCFull.psram\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/perip/psram/psram.v", 99, "", false);
    } else if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state;
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `EBh,38H` read command\n",0,
                      8,vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        VL_WRITEF_NX("[%0t] %%Fatal: psram.v:99: Assertion failed in %NysyxSoCFull.psram\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/perip/psram/psram.v", 99, "", false);
    } else if ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
                = ((6U > (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter)))
                    : 0U);
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = ((6U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter))
                    ? 2U : (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state));
        } else {
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter)));
            vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state;
        }
    } else if ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state))) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((5U > (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter))
                ? ((0xebU == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd))
                    ? 3U : ((0x38U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__cmd))
                             ? 2U : 4U)) : (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state));
    } else if (vlSelfRef.ysyxSoCFull__DOT__psram__DOT__QPI_MODE) {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((1U > (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter))
                ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state));
    } else {
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((7U > (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelfRef.__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((7U == (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__counter))
                ? 1U : (IData)(vlSelfRef.ysyxSoCFull__DOT__psram__DOT__state));
    }
    vlSelfRef.ysyxSoCFull__DOT__psram__DOT__data = __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
}

void VysyxSoCFull___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc, IData/*31:0*/ inst, IData/*31:0*/ IFU_valid_int);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0;
    __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    IData/*21:0*/ __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0;
    __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*1:0*/ __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0;
    __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1;
    __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    IData/*21:0*/ __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1;
    __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*1:0*/ __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1;
    __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0;
    __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    IData/*21:0*/ __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0;
    __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*1:0*/ __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0;
    __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1;
    __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    IData/*21:0*/ __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1;
    __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    CData/*1:0*/ __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1;
    __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0;
    __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    IData/*21:0*/ __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0;
    __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*1:0*/ __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0;
    __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1;
    __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    IData/*21:0*/ __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1;
    __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*1:0*/ __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1;
    __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0;
    __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    IData/*21:0*/ __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0;
    __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*1:0*/ __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0;
    __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*7:0*/ __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1;
    __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    IData/*21:0*/ __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1;
    __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    CData/*1:0*/ __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1;
    __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    // Body
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address 
        = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0U;
    __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0U;
    VysyxSoCFull___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc, 
                                                                    ((2U 
                                                                      & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                                                      ? 
                                                                     ((1U 
                                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data
                                                                       : vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                                                       ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                                                       : 
                                                                      (((0x63U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                                        & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                                                                        ? vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                                                        : 
                                                                       ((IData)(4U) 
                                                                        + vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)))), vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst, (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid));
    if (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q) {
        if (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command)))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        }
        if (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command)))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        }
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) {
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout = 0U;
        } else {
            if ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 1U;
            } else {
                if (((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter) 
                        < ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter)));
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 1U;
                } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter) 
                            >= ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
                        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter) 
                            < (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length) 
                                + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address)));
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 0U;
                }
                if (((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter) 
                        < ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter)));
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 1U;
                } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter) 
                            >= ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
                        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter) 
                            < (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length) 
                                + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address)));
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 0U;
                }
            }
            if ((5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 1U;
            } else {
                if (((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter) 
                        < ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter)));
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 1U;
                } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter) 
                            >= ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
                        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter) 
                            < (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length) 
                                + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address)));
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 0U;
                }
                if (((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter)) 
                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter) 
                        < ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter)));
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 1U;
                } else if (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter) 
                            >= ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
                        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter) 
                            < (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length) 
                                + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address)));
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 0U;
                }
            }
            if (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter) 
                 >= ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout 
                    = ((0xffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout)) 
                       | (0xff00U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank]
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address]));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout 
                    = ((0xff00U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout)) 
                       | (0xffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank]
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address]));
            } else {
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter))) {
                __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1))
                                 ? (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                                    [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank]
                                    [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data) 
                                              >> 8U)));
                __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address;
                __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank;
                __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 1U;
                __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1))
                                 ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank]
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address]
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data)));
                __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address;
                __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank;
            }
            if (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter) 
                 >= ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout 
                    = ((0xffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout)) 
                       | (0xff00U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank]
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address]));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout 
                    = ((0xff00U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout)) 
                       | (0xffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank]
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address]));
            } else {
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter))) {
                __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1))
                                 ? (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                                    [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank]
                                    [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data) 
                                              >> 8U)));
                __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address;
                __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank;
                __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 1U;
                __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1))
                                 ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank]
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address]
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data)));
                __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address;
                __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank;
            }
        }
        if (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command)))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length 
                = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length 
                = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
        }
        if ((8U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout = 0U;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout = 0U;
        } else {
            if (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter) 
                 >= ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout 
                    = ((0xffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout)) 
                       | (0xff00U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank]
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address]));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout 
                    = ((0xff00U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout)) 
                       | (0xffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank]
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address]));
            } else {
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter))) {
                __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1))
                                 ? (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                                    [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank]
                                    [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data) 
                                              >> 8U)));
                __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address;
                __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank;
                __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 1U;
                __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1))
                                 ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank]
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address]
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data)));
                __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address;
                __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank;
            }
            if (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter) 
                 >= ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout 
                    = ((0xffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout)) 
                       | (0xff00U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank]
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address]));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout 
                    = ((0xff00U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout)) 
                       | (0xffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank]
                          [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address]));
            } else {
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter))) {
                __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1))
                                 ? (vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                                    [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank]
                                    [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data) 
                                              >> 8U)));
                __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address;
                __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank;
                __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 1U;
                __VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1))
                                 ? vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank]
                                [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address]
                                 : (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data)));
                __VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address;
                __VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 
                    = vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank;
            }
        }
        if (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (0U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command)))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length 
                = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length 
                = (7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
        }
        if ((1U & (~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                      >> 3U)))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1 
                = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q));
            if ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data 
                    = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data 
                    = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                       >> 0x10U);
            } else {
                if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter 
                        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter) 
                            < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter)))
                            : 0U);
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data 
                        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data = 0U;
                }
                if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter 
                        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter) 
                            < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter)))
                            : 0U);
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data 
                        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                           >> 0x10U);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data = 0U;
                }
            }
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1 
                = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 2U));
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1 
                = (3U & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q));
            if ((4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data 
                    = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data 
                    = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                       >> 0x10U);
            } else {
                if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter 
                        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter) 
                            < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter)))
                            : 0U);
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data 
                        = (0xffffU & vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data = 0U;
                }
                if ((0U < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter 
                        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter) 
                            < (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter)))
                            : 0U);
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data 
                        = (vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                           >> 0x10U);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address = 0U;
                    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data = 0U;
                }
            }
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1 
                = (3U & ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 2U));
        }
        if (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command)) 
                             | (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command))) 
                            | (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command))))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
        }
        if (((~ ((IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command)) 
                             | (5U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command))) 
                            | (4U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command))))) {
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
            vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank 
                = vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
        }
    } else {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1 = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))) {
        __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0 = 1U;
        __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0 = 1U;
        __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0 = 1U;
        __VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0 = 1U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[0U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[1U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[2U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[3U] = 0U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[0U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[1U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[2U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[3U] = 0U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[0U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[1U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[2U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[3U] = 0U;
    }
    if (__VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[0U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[1U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[2U] = 0U;
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[3U] = 0U;
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter;
    if (__VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank[__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0][__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0] 
            = ((0xffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                [__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0]
                [__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0) 
                  << 8U));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank[__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1][__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1] 
            = ((0xff00U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                [__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1]
                [__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1]) 
               | (IData)(__VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter;
    if (__VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank[__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0][__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0] 
            = ((0xffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                [__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0]
                [__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0) 
                  << 8U));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank[__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1][__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1] 
            = ((0xff00U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                [__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1]
                [__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1]) 
               | (IData)(__VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter;
    if (__VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank[__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0][__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0] 
            = ((0xffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                [__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0]
                [__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0) 
                  << 8U));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank[__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1][__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1] 
            = ((0xff00U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                [__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1]
                [__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1]) 
               | (IData)(__VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter;
    if (__VdlySet__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0) {
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank[__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0][__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0] 
            = ((0xffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                [__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0]
                [__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0]) 
               | ((IData)(__VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0) 
                  << 8U));
        vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank[__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1][__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1] 
            = ((0xff00U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                [__VdlyDim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1]
                [__VdlyDim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1]) 
               | (IData)(__VdlyVal__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1));
    }
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__en0 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__en1 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__en0 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__en1 
        = (0xffffU & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                      | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
              & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 1U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 2U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 3U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 4U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 5U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 6U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 7U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 8U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 9U) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__dq__en0 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__en0) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__en1) 
              << 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__dq__en1 
        = ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__en0) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__en1) 
              << 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT____Vcelloutt__sdram_16_u0__dq__out 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out1) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                  << 1U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out2) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                 << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out3) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                << 3U)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out4) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                   << 4U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out5) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                      << 5U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out6) 
                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                         << 6U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out7) 
                                                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                            << 7U)) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out8) 
                                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                               << 8U)) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out9) 
                                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                  << 9U)) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out10) 
                                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                     << 0xaU)) 
                                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out11) 
                                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out12) 
                                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                           << 0xcU)) 
                                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out13) 
                                                                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out14) 
                                                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xeU)) 
                                                                             | (0x8000U 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)
                                                                                 ? 0xffffU
                                                                                 : 0U))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT____Vcelloutt__sdram_16_u1__dq__out 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out1) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                  << 1U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out2) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                 << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out3) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                << 3U)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out4) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                   << 4U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out5) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                      << 5U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out6) 
                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                         << 6U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out7) 
                                                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                            << 7U)) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out8) 
                                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                               << 8U)) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out9) 
                                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                  << 9U)) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out10) 
                                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                     << 0xaU)) 
                                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out11) 
                                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out12) 
                                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                           << 0xcU)) 
                                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out13) 
                                                                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out14) 
                                                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                                << 0xeU)) 
                                                                             | (0x8000U 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                                                                 ? 0xffffU
                                                                                 : 0U))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT____Vcelloutt__sdram_16_u0__dq__out 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out1) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                  << 1U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out2) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                 << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out3) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                << 3U)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out4) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                   << 4U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out5) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                      << 5U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out6) 
                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                         << 6U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out7) 
                                                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                            << 7U)) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out8) 
                                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                               << 8U)) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out9) 
                                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                  << 9U)) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out10) 
                                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                     << 0xaU)) 
                                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out11) 
                                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out12) 
                                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                           << 0xcU)) 
                                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out13) 
                                                                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out14) 
                                                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xeU)) 
                                                                             | (0x8000U 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)
                                                                                 ? 0xffffU
                                                                                 : 0U))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT____Vcelloutt__sdram_16_u1__dq__out 
        = (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out0) 
            & (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)) 
           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out1) 
               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                  << 1U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out2) 
                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                 << 2U)) | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out3) 
                                             & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                << 3U)) 
                                            | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out4) 
                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                   << 4U)) 
                                               | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out5) 
                                                   & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                      << 5U)) 
                                                  | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out6) 
                                                      & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                         << 6U)) 
                                                     | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out7) 
                                                         & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                            << 7U)) 
                                                        | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out8) 
                                                            & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                               << 8U)) 
                                                           | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out9) 
                                                               & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                  << 9U)) 
                                                              | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out10) 
                                                                  & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                     << 0xaU)) 
                                                                 | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out11) 
                                                                     & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                        << 0xbU)) 
                                                                    | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out12) 
                                                                        & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                           << 0xcU)) 
                                                                       | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out13) 
                                                                           & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                              << 0xdU)) 
                                                                          | (((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out14) 
                                                                              & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                                << 0xeU)) 
                                                                             | (0x8000U 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                                                                 ? 0xffffU
                                                                                 : 0U))))))))))))))))));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length 
        = ((3U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address;
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__out__strong__out2) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT____Vcelloutt__sdram_16_u0__dq__out));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address 
        = ((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address
            [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank] 
            << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address 
        = ((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address
            [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank] 
            << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__out__strong__out3) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT____Vcelloutt__sdram_16_u1__dq__out) 
              << 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address 
        = ((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address
            [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank] 
            << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address 
        = ((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address
            [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank] 
            << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__out__strong__out2) 
           | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT____Vcelloutt__sdram_16_u0__dq__out));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address 
        = ((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address
            [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank] 
            << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address 
        = ((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address
            [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank] 
            << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__out__strong__out3) 
           | ((IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT____Vcelloutt__sdram_16_u1__dq__out) 
              << 0x10U));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address 
        = ((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address
            [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank] 
            << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address));
    vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address 
        = ((vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address
            [vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank] 
            << 9U) | (IData)(vlSelfRef.ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address));
}
