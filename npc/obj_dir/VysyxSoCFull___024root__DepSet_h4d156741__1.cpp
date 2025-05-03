// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout3 
        = (((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgTmp_ha31ccace__0)) 
              | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgTmp_ha31ccace__0)))
              ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgTmp_ha3115902__0) 
                  << 7U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                             << 6U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                        << 5U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
              : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__VdfgTmp_ha3115902__0)
                  ? 0x80U : 0x7fU)) << 0x18U) | (((
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgTmp_ha31ccace__0)) 
                                                    | (0xfU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgTmp_ha31ccace__0)))
                                                    ? 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgTmp_ha3115902__0) 
                                                     << 7U) 
                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                        << 6U) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                           << 5U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                              << 4U) 
                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                       << 1U) 
                                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__VdfgTmp_ha3115902__0)
                                                     ? 0x80U
                                                     : 0x7fU)) 
                                                  << 0x10U) 
                                                 | (((((0U 
                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgTmp_ha31ccace__0)) 
                                                       | (0xfU 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgTmp_ha31ccace__0)))
                                                       ? 
                                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgTmp_ha3115902__0) 
                                                        << 7U) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                           << 6U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                              << 5U) 
                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                                 << 4U) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                          << 1U) 
                                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__VdfgTmp_ha3115902__0)
                                                        ? 0x80U
                                                        : 0x7fU)) 
                                                     << 8U) 
                                                    | (((0U 
                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgTmp_ha31ccace__0)) 
                                                        | (0xfU 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgTmp_ha31ccace__0)))
                                                        ? 
                                                       (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgTmp_ha3115902__0) 
                                                         << 7U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                               << 5U) 
                                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__VdfgTmp_ha3115902__0)
                                                         ? 0x80U
                                                         : 0x7fU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout2 
        = (((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgTmp_ha31ccace__0)) 
              | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgTmp_ha31ccace__0)))
              ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgTmp_ha3115902__0) 
                  << 7U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                             << 6U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                        << 5U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
              : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__VdfgTmp_ha3115902__0)
                  ? 0x80U : 0x7fU)) << 0x18U) | (((
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgTmp_ha31ccace__0)) 
                                                    | (0xfU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgTmp_ha31ccace__0)))
                                                    ? 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgTmp_ha3115902__0) 
                                                     << 7U) 
                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                        << 6U) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                           << 5U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                              << 4U) 
                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                       << 1U) 
                                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__VdfgTmp_ha3115902__0)
                                                     ? 0x80U
                                                     : 0x7fU)) 
                                                  << 0x10U) 
                                                 | (((((0U 
                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgTmp_ha31ccace__0)) 
                                                       | (0xfU 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgTmp_ha31ccace__0)))
                                                       ? 
                                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgTmp_ha3115902__0) 
                                                        << 7U) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                           << 6U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                              << 5U) 
                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                                 << 4U) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                          << 1U) 
                                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__VdfgTmp_ha3115902__0)
                                                        ? 0x80U
                                                        : 0x7fU)) 
                                                     << 8U) 
                                                    | (((0U 
                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgTmp_ha31ccace__0)) 
                                                        | (0xfU 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgTmp_ha31ccace__0)))
                                                        ? 
                                                       (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgTmp_ha3115902__0) 
                                                         << 7U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                               << 5U) 
                                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__VdfgTmp_ha3115902__0)
                                                         ? 0x80U
                                                         : 0x7fU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout1 
        = (((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgTmp_ha31ccace__0)) 
              | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgTmp_ha31ccace__0)))
              ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgTmp_ha3115902__0) 
                  << 7U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                             << 6U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                        << 5U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
              : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__VdfgTmp_ha3115902__0)
                  ? 0x80U : 0x7fU)) << 0x18U) | (((
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgTmp_ha31ccace__0)) 
                                                    | (0xfU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgTmp_ha31ccace__0)))
                                                    ? 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgTmp_ha3115902__0) 
                                                     << 7U) 
                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                        << 6U) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                           << 5U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                              << 4U) 
                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                       << 1U) 
                                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__VdfgTmp_ha3115902__0)
                                                     ? 0x80U
                                                     : 0x7fU)) 
                                                  << 0x10U) 
                                                 | (((((0U 
                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgTmp_ha31ccace__0)) 
                                                       | (0xfU 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgTmp_ha31ccace__0)))
                                                       ? 
                                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgTmp_ha3115902__0) 
                                                        << 7U) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                           << 6U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                              << 5U) 
                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                                 << 4U) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                          << 1U) 
                                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__VdfgTmp_ha3115902__0)
                                                        ? 0x80U
                                                        : 0x7fU)) 
                                                     << 8U) 
                                                    | (((0U 
                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgTmp_ha31ccace__0)) 
                                                        | (0xfU 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgTmp_ha31ccace__0)))
                                                        ? 
                                                       (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgTmp_ha3115902__0) 
                                                         << 7U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                               << 5U) 
                                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__VdfgTmp_ha3115902__0)
                                                         ? 0x80U
                                                         : 0x7fU)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout0 
        = (((((0U == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgTmp_ha31ccace__0)) 
              | (0xfU == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgTmp_ha31ccace__0)))
              ? (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgTmp_ha3115902__0) 
                  << 7U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                             << 6U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                        << 5U) | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
              : ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__VdfgTmp_ha3115902__0)
                  ? 0x80U : 0x7fU)) << 0x18U) | (((
                                                   ((0U 
                                                     == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgTmp_ha31ccace__0)) 
                                                    | (0xfU 
                                                       == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgTmp_ha31ccace__0)))
                                                    ? 
                                                   (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgTmp_ha3115902__0) 
                                                     << 7U) 
                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                        << 6U) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                           << 5U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                              << 4U) 
                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                 << 3U) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                    << 2U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                       << 1U) 
                                                                      | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__VdfgTmp_ha3115902__0)
                                                     ? 0x80U
                                                     : 0x7fU)) 
                                                  << 0x10U) 
                                                 | (((((0U 
                                                        == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgTmp_ha31ccace__0)) 
                                                       | (0xfU 
                                                          == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgTmp_ha31ccace__0)))
                                                       ? 
                                                      (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgTmp_ha3115902__0) 
                                                        << 7U) 
                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                           << 6U) 
                                                          | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                              << 5U) 
                                                             | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                                 << 4U) 
                                                                | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                          << 1U) 
                                                                         | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__VdfgTmp_ha3115902__0)
                                                        ? 0x80U
                                                        : 0x7fU)) 
                                                     << 8U) 
                                                    | (((0U 
                                                         == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgTmp_ha31ccace__0)) 
                                                        | (0xfU 
                                                           == (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgTmp_ha31ccace__0)))
                                                        ? 
                                                       (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgTmp_ha3115902__0) 
                                                         << 7U) 
                                                        | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d) 
                                                               << 5U) 
                                                              | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d))))))))
                                                        : 
                                                       ((IData)(vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__VdfgTmp_ha3115902__0)
                                                         ? 0x80U
                                                         : 0x7fU)))));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.out16;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.out16;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0 
            = ((0x8000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x12U]) | ((0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x12U] 
                                                       >> 0xfU)))) 
                                        << 0xcU)) | 
                            (0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x12U] >> 3U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in1 
            = ((0x8000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x16U]) | ((0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x16U] 
                                                       >> 0xfU)))) 
                                        << 0xcU)) | 
                            (0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x16U] >> 3U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add6__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.out16;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.out16;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0 
            = ((0x8000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x13U]) | ((0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x13U] 
                                                       >> 0xfU)))) 
                                        << 0xcU)) | 
                            (0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x13U] >> 3U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in1 
            = ((0x8000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x17U]) | ((0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x17U] 
                                                       >> 0xfU)))) 
                                        << 0xcU)) | 
                            (0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x17U] >> 3U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add7__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.out16;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.out16;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0 
            = ((0x8000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x11U]) | ((0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x11U] 
                                                       >> 0xfU)))) 
                                        << 0xcU)) | 
                            (0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x11U] >> 3U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in1 
            = ((0x8000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x15U]) | ((0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x15U] 
                                                       >> 0xfU)))) 
                                        << 0xcU)) | 
                            (0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x15U] >> 3U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add5__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.out16;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.out16;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0 
            = ((0x8000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x10U]) | ((0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x10U] 
                                                       >> 0xfU)))) 
                                        << 0xcU)) | 
                            (0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x10U] >> 3U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in1 
            = ((0x8000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x14U]) | ((0x7000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x14U] 
                                                       >> 0xfU)))) 
                                        << 0xcU)) | 
                            (0xfe0U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                       [0x14U] >> 3U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add4__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.out16;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.out16;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x12U] << 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x12U] 
                                                                 >> 7U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x12U] 
                                                    << 5U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x16U] << 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x16U] 
                                                                 >> 7U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x16U] 
                                                    << 5U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add2__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.out16;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.out16;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x13U] << 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x13U] 
                                                                 >> 7U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x13U] 
                                                    << 5U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x17U] << 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x17U] 
                                                                 >> 7U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x17U] 
                                                    << 5U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add3__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.out16;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.out16;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x11U] << 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x11U] 
                                                                 >> 7U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x11U] 
                                                    << 5U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x15U] << 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x15U] 
                                                                 >> 7U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x15U] 
                                                    << 5U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add1__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.out16;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in1 
            = vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.out16;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x10U] << 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x10U] 
                                                                 >> 7U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x10U] 
                                                    << 5U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x14U] << 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x14U] 
                                                                 >> 7U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x14U] 
                                                    << 5U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add0__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add6__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add6__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add6__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add7__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add7__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add7__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add5__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add5__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add5__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add4__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add4__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add4__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add2__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add2__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add2__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add3__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add3__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add3__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add1__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add1__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add1__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add0__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add0__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add0__DOT__temp_out));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x13U] >> 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x13U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x13U] 
                                                    >> 0xbU))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x17U] >> 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x17U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x17U] 
                                                    >> 0xbU))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add11__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x16U] >> 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x16U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x16U] 
                                                    >> 0xbU))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x12U] >> 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x12U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x12U] 
                                                    >> 0xbU))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add10__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x11U] >> 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x11U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x11U] 
                                                    >> 0xbU))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x15U] >> 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x15U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x15U] 
                                                    >> 0xbU))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add9__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x14U] >> 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x14U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x14U] 
                                                    >> 0xbU))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x10U] >> 8U)) | ((0x7000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x10U] 
                                                                 >> 0x17U)))) 
                                                  << 0xcU)) 
                                              | (0xfe0U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                    [0x10U] 
                                                    >> 0xbU))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add8__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add11__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add11__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add11__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add10__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add10__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add10__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add9__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add9__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add9__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add8__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add8__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add8__DOT__temp_out));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x15U] >> 0x10U)) | ((0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x15U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU)) 
                                                 | (0xfe0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x15U] 
                                                       >> 0x13U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x11U] >> 0x10U)) | ((0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x11U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU)) 
                                                 | (0xfe0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x11U] 
                                                       >> 0x13U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add13__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in1)));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x14U] >> 0x10U)) | ((0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x14U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU)) 
                                                 | (0xfe0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x14U] 
                                                       >> 0x13U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x10U] >> 0x10U)) | ((0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x10U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU)) 
                                                 | (0xfe0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x10U] 
                                                       >> 0x13U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add12__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add13__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add13__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add13__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add12__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add12__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add12__DOT__temp_out));
    if ((2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U]))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in1 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x16U] >> 0x10U)) | ((0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x16U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU)) 
                                                 | (0xfe0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x16U] 
                                                       >> 0x13U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0 
            = ((0x8000U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                           [0x12U] >> 0x10U)) | ((0x7000U 
                                                  & ((- (IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                                 [0x12U] 
                                                                 >> 0x1fU))) 
                                                     << 0xcU)) 
                                                 | (0xfe0U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                                                       [0x12U] 
                                                       >> 0x13U))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add14__DOT__temp_out 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0) 
                      + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16 
        = ((((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0) 
                    >> 0xfU)) == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in1) 
                                        >> 0xfU))) 
            & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0) 
                      >> 0xfU)) != (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add14__DOT__temp_out) 
                                          >> 0xfU))))
            ? ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellinp__u_add14__in0))
                ? 0x8000U : 0x7fffU) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add14__DOT__temp_out));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellout__u_add14__out8 
        = (((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16) 
                            >> 0xcU))) | (0xfU == (0xfU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16) 
                                                      >> 0xcU))))
            ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16) 
                         >> 8U)) | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16) 
                                             >> 5U)))
            : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__macout16))
                ? 0x80U : 0x7fU));
    if ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
         [0x18U])) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 = 0U;
        if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
             [0x18U])) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 = 0U;
        } else if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                    [0x18U])) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 
                = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst4__DOT__LUT
                    [((0xaU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index4))
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index4)
                       : 0U)][vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                    << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst5__DOT__LUT
                                  [((0xaU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index5))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index5)
                                     : 0U)][vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                                  << 0x10U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst6__DOT__LUT
                                                [((0xaU 
                                                   >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index6))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index6)
                                                   : 0U)]
                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                                                << 8U) 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst7__DOT__LUT
                                               [((0xaU 
                                                  >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index7))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index7)
                                                  : 0U)]
                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg])));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
                = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst0__DOT__LUT
                    [((0xaU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index0))
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index0)
                       : 0U)][vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                    << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst1__DOT__LUT
                                  [((0xaU >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index1))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index1)
                                     : 0U)][vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                                  << 0x10U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst2__DOT__LUT
                                                [((0xaU 
                                                   >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index2))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index2)
                                                   : 0U)]
                                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg] 
                                                << 8U) 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__LUT2D_inst3__DOT__LUT
                                               [((0xaU 
                                                  >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index3))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__e_recip_out_index3)
                                                  : 0U)]
                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_softmax__DOT__sum_inst__DOT__sumreg])));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 = 0U;
    } else if ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U])) {
        if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
             [0x18U])) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout3;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout1;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout2;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout0;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellout__u_add14__out8;
        }
    } else if ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_RegStack__DOT__Regs
                [0x18U])) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mulout0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out3 
            = (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16) 
                                  >> 0xcU))) | (0xfU 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16) 
                                                    >> 0xcU))))
                  ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16) 
                               >> 8U)) | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16) 
                                                   >> 5U)))
                  : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__u_add15__DOT__out16))
                      ? 0x80U : 0x7fU)) << 0x18U) | 
               (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415) 
                                   >> 0xcU))) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415) 
                                                     >> 0xcU))))
                   ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415) 
                                >> 8U)) | (0x7fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415) 
                                            >> 5U)))
                   : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac12131415))
                       ? 0x80U : 0x7fU)) << 0x10U) 
                | (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415) 
                                      >> 0xcU))) | 
                      (0xfU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415) 
                                        >> 0xcU))))
                      ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415) 
                                   >> 8U)) | (0x7fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415) 
                                                 >> 5U)))
                      : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1415))
                          ? 0x80U : 0x7fU)) << 8U) 
                   | (((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67) 
                                       >> 0xcU))) | 
                       (0xfU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67) 
                                         >> 0xcU))))
                       ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67) 
                                    >> 8U)) | (0x7fU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67) 
                                                  >> 5U)))
                       : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac67))
                           ? 0x80U : 0x7fU)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out1 
            = (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415) 
                                  >> 0xcU))) | (0xfU 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415) 
                                                    >> 0xcU))))
                  ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415) 
                               >> 8U)) | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415) 
                                                   >> 5U)))
                  : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89101112131415))
                      ? 0x80U : 0x7fU)) << 0x18U) | 
               (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567) 
                                   >> 0xcU))) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567) 
                                                     >> 0xcU))))
                   ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567) 
                                >> 8U)) | (0x7fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567) 
                                            >> 5U)))
                   : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac4567))
                       ? 0x80U : 0x7fU)) << 0x10U) 
                | (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011) 
                                      >> 0xcU))) | 
                      (0xfU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011) 
                                        >> 0xcU))))
                      ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011) 
                                   >> 8U)) | (0x7fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011) 
                                                 >> 5U)))
                      : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1011))
                          ? 0x80U : 0x7fU)) << 8U) 
                   | (((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23) 
                                       >> 0xcU))) | 
                       (0xfU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23) 
                                         >> 0xcU))))
                       ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23) 
                                    >> 8U)) | (0x7fU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23) 
                                                  >> 5U)))
                       : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac23))
                           ? 0x80U : 0x7fU)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out2 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT____Vcellout__u_add14__out8) 
                << 0x18U) | (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011) 
                                                >> 0xcU))) 
                                | (0xfU == (0xfU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011) 
                                             >> 0xcU))))
                                ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011) 
                                             >> 8U)) 
                                   | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011) 
                                               >> 5U)))
                                : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac891011))
                                    ? 0x80U : 0x7fU)) 
                              << 0x10U) | (((((0U == 
                                               (0xfU 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213) 
                                                   >> 0xcU))) 
                                              | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213) 
                                                     >> 0xcU))))
                                              ? ((0x80U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213) 
                                                     >> 8U)) 
                                                 | (0x7fU 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213) 
                                                       >> 5U)))
                                              : ((0x8000U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac1213))
                                                  ? 0x80U
                                                  : 0x7fU)) 
                                            << 8U) 
                                           | (((0U 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45) 
                                                    >> 0xcU))) 
                                               | (0xfU 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45) 
                                                      >> 0xcU))))
                                               ? ((0x80U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45) 
                                                      >> 8U)) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45) 
                                                        >> 5U)))
                                               : ((0x8000U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac45))
                                                   ? 0x80U
                                                   : 0x7fU)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__out0 
            = (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567) 
                                  >> 0xcU))) | (0xfU 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567) 
                                                    >> 0xcU))))
                  ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567) 
                               >> 8U)) | (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567) 
                                                   >> 5U)))
                  : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01234567))
                      ? 0x80U : 0x7fU)) << 0x18U) | 
               (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123) 
                                   >> 0xcU))) | (0xfU 
                                                 == 
                                                 (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123) 
                                                     >> 0xcU))))
                   ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123) 
                                >> 8U)) | (0x7fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123) 
                                            >> 5U)))
                   : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac0123))
                       ? 0x80U : 0x7fU)) << 0x10U) 
                | (((((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89) 
                                      >> 0xcU))) | 
                      (0xfU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89) 
                                        >> 0xcU))))
                      ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89) 
                                   >> 8U)) | (0x7fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89) 
                                                 >> 5U)))
                      : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac89))
                          ? 0x80U : 0x7fU)) << 8U) 
                   | (((0U == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01) 
                                       >> 0xcU))) | 
                       (0xfU == (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01) 
                                         >> 0xcU))))
                       ? ((0x80U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01) 
                                    >> 8U)) | (0x7fU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01) 
                                                  >> 5U)))
                       : ((0x8000U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__mac01))
                           ? 0x80U : 0x7fU)))));
    }
}

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vtask_flash_read__7__data;
    __Vtask_flash_read__7__data = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt;
    if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
         & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))) {
        if (VL_LIKELY((3U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd)))) {
            VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(
                                                                           ((0xfffffeU 
                                                                             & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                                                << 1U)) 
                                                                            | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi)), __Vtask_flash_read__7__data);
            vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                = __Vtask_flash_read__7__data;
        } else {
            VL_FWRITEF(0x80000002U,"Assertion failed: Unsupport command `%xh`, only support `03h` read command\n",
                       8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
            if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
            VL_WRITEF("[%0t] %%Error: flash.v:98: Assertion failed in %NysyxSoCFull.flash.flash_cmd_i\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            Verilated::runFlushCallbacks();
            VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 98, "");
        }
    }
    if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss))) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data = 0U;
    } else if ((7U >= (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt))) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data 
            = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data) 
                         << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt)));
    } else if ((0xfU >= (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt))) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data 
            = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data;
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt 
        = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__bit_cnt;
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__data;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 0;
    IData/*23:0*/ __Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
        = vlSelf->ysyxSoCFull__DOT__flash__DOT__data;
    __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = vlSelf->ysyxSoCFull__DOT__flash__DOT__addr;
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
            = (0xffU & ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                         ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                         : 0U));
        __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd = 
            ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd) 
                       << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__counter 
            = (0xffU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))
                         ? ((0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                             ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                             : 0U) : ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))));
    }
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state));
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `03h` read command\n",
                   8,vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__flash__DOT__state;
        VL_WRITEF("[%0t] %%Error: flash.v:44: Assertion failed in %NysyxSoCFull.flash\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/perip/flash/flash.v", 44, "");
    }
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data = 0U;
        __Vdly__ysyxSoCFull__DOT__flash__DOT__addr = 0U;
    } else {
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__flash__DOT__data 
                = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter))
                     ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                     : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                   << 1U);
        }
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
             & (0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))) {
            __Vdly__ysyxSoCFull__DOT__flash__DOT__addr 
                = ((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                 << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
        }
    }
    vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd = __Vdly__ysyxSoCFull__DOT__flash__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__flash__DOT__addr = __Vdly__ysyxSoCFull__DOT__flash__DOT__addr;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__data = vlSelf->ysyxSoCFull__DOT__psram__DOT__data;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__counter;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__data = 0U;
    } else {
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
             & (6U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                = ((0xfffff0U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE)
                    ? ((0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))
                    : ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 1U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))));
        }
        if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
             & (0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                     ? vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap
                     : vlSelf->ysyxSoCFull__DOT__psram__DOT__data) 
                   << 4U);
        } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                    & (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd)))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__data 
                = ((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                    << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
    } else if (VL_UNLIKELY((8U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `EBh,38H` read command\n",
                   8,vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        VL_WRITEF("[%0t] %%Error: psram.v:99: Assertion failed in %NysyxSoCFull.psram\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/perip/psram/psram.v", 99, "");
    } else if (VL_UNLIKELY((4U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
        VL_FWRITEF(0x80000002U,"Assertion failed: Unsupported command `%xh`, only support `EBh,38H` read command\n",
                   8,vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd);
        if (0x80000002U) { VL_FFLUSH_I(0x80000002U); }
        VL_WRITEF("[%0t] %%Error: psram.v:99: Assertion failed in %NysyxSoCFull.psram\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("/home/plutoisy/ysyx-workbench/ysyxSoC/perip/psram/psram.v", 99, "");
    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
                = ((6U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                    ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                    : 0U);
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                    ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)));
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
        }
    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((5U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? ((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                    ? 3U : ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                             ? 2U : 4U)) : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    } else if (vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__counter 
            = ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter)))
                : 0U);
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state));
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__data = __Vdly__ysyxSoCFull__DOT__psram__DOT__data;
}

void VysyxSoCFull___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ dnpc, IData/*31:0*/ inst, IData/*31:0*/ IFU_valid_int);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    IData/*21:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1;
    __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    CData/*7:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter = 0;
    SData/*8:0*/ __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address = 0;
    // Body
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address;
    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 0U;
    VysyxSoCFull___024unit____Vdpiimwrap_get_pc_inst_TOP____024unit(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc, 
                                                                    ((2U 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                                                      ? 
                                                                     ((1U 
                                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data
                                                                       : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                                                       : 
                                                                      (((0x63U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                                                        : 
                                                                       ((IData)(4U) 
                                                                        + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)))), vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q) {
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q;
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) {
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout = 0U;
        } else {
            if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 1U;
            } else {
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 0U;
                }
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 0U;
                }
            }
            if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 1U;
            } else {
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 0U;
                }
                if (((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter) 
                        < ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency) 
                           - (IData)(1U))))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 1U;
                } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter) 
                            >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency) 
                                - (IData)(1U)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter) 
                            < (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length) 
                                + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency)) 
                               - (IData)(1U))) ? (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter)))
                            : 0U);
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address)));
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 1U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 0U;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1))
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1))
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1))
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1))
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank;
            }
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout = 0U;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout = 0U;
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1))
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1))
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter) 
                 >= ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency) 
                     - (IData)(1U)))) {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address]));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank]
                          [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address]));
            } else {
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout = 0U;
            }
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter))) {
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 
                    = (0xffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1))
                                 ? (vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank]
                                    [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address] 
                                    >> 8U) : ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data) 
                                              >> 8U)));
                __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 1U;
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 = 8U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank;
                __Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 
                    = (0xffU & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1))
                                 ? vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank]
                                [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address]
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data)));
                __Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 = 0U;
                __Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address;
                __Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1 
                    = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank;
            }
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q) 
                         >> 4U));
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                      >> 3U)))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 2U));
            if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                       >> 0x10U);
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data 
                    = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
            } else {
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data 
                        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                           >> 0x10U);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data = 0U;
                }
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data 
                        = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data = 0U;
                }
            }
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1 
                = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q));
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                         >> 2U));
            if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command))) {
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                       >> 0x10U);
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter)));
                __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q));
                vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data 
                    = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
            } else {
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data 
                        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                           >> 0x10U);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data = 0U;
                }
                if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter))) {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address)));
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter 
                        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter) 
                            < (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length))
                            ? (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter)))
                            : 0U);
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data 
                        = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w);
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address = 0U;
                    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data = 0U;
                }
            }
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1 
                = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q));
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command)) 
                             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command))) 
                            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
        }
        if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                 >> 3U)) & (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command)) 
                             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command))) 
                            | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command))))) {
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
            vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1 = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter = 0U;
        __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q)))) {
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0 = 1U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[3U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0) {
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v0))));
        vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank[__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1][__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1))) 
                & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank
                [__Vdlyvdim0__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1]
                [__Vdlyvdim1__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1]) 
               | (0xffffU & ((IData)(__Vdlyvval__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1) 
                             << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__bank__v1))));
    }
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__en1 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__en0 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__en1 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__en0 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                      | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                          << 1U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                     << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                         << 6U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                  << 9U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                        << 0xbU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                              << 0xdU) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xeU) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out0 
        = ((0xfffeU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out0)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out1 
        = ((0xfffdU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out1)) 
           | (0xfffffffeU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out2 
        = ((0xfffbU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out2)) 
           | (0xfffffffcU & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out3 
        = ((0xfff7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out3)) 
           | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out4 
        = ((0xffefU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out4)) 
           | (0xfffffff0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out5 
        = ((0xffdfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out5)) 
           | (0xffffffe0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out6 
        = ((0xffbfU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out6)) 
           | (0xffffffc0U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out7 
        = ((0xff7fU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out7)) 
           | (0xffffff80U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out8 
        = ((0xfeffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out8)) 
           | (0xffffff00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out9 
        = ((0xfdffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out9)) 
           | (0xfffffe00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out10 
        = ((0xfbffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out10)) 
           | (0xfffffc00U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out11 
        = ((0xf7ffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out11)) 
           | (0xfffff800U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out12 
        = ((0xefffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out12)) 
           | (0xfffff000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out13 
        = ((0xdfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out13)) 
           | (0xffffe000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out14 
        = ((0xbfffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out14)) 
           | (0xffffc000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out15 
        = ((0x7fffU & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out15)) 
           | (0xffff8000U & (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                              << 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en1 = 
        ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__en0) 
         | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__en1) 
            << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__dq__en0 = 
        ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__en0) 
         | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__en1) 
            << 0x10U));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)) 
               << 0x10U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out1) 
                              << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                           << 0x11U)) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out2) 
                                 << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                              << 0x12U)) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out3) 
                                    << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                 << 0x13U)) 
                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out4) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                       << 0x14U)) | 
                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out5) 
                                        << 0x10U) & 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                        << 0x15U)) 
                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out6) 
                                           << 0x10U) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                             << 0x16U)) 
                                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out7) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                << 0x17U)) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out8) 
                                                 << 0x10U) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                   << 0x18U)) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out9) 
                                                    << 0x10U) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                      << 0x19U)) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out10) 
                                                       << 0x10U) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                         << 0x1aU)) 
                                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out11) 
                                                          << 0x10U) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                            << 0x1bU)) 
                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out12) 
                                                             << 0x10U) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                               << 0x1cU)) 
                                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out13) 
                                                                << 0x10U) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                  << 0x1dU)) 
                                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out14) 
                                                                   << 0x10U) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dq__out__strong__out15) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                                                         ? 0x8000U
                                                                         : 0U)) 
                                                                    << 0x10U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)) 
              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out1) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                     << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out2) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                    << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out3) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out4) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out5) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out6) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                            << 6U)) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out7) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                               << 7U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out8) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                  << 8U)) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out9) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                     << 9U)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out10) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                        << 0xaU)) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out11) 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                           << 0xbU)) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out12) 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                              << 0xcU)) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out13) 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xdU)) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out14) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xeU)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__out__strong__out3 
        = ((0xffffU & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__out__strong__out3) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)) 
               << 0x10U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out1) 
                              << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                           << 0x11U)) 
                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out2) 
                                 << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                              << 0x12U)) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out3) 
                                    << 0x10U) & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                 << 0x13U)) 
                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out4) 
                                       << 0x10U) & 
                                      ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                       << 0x14U)) | 
                                     ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out5) 
                                        << 0x10U) & 
                                       ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                        << 0x15U)) 
                                      | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out6) 
                                           << 0x10U) 
                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                             << 0x16U)) 
                                         | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out7) 
                                              << 0x10U) 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                << 0x17U)) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out8) 
                                                 << 0x10U) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                   << 0x18U)) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out9) 
                                                    << 0x10U) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                      << 0x19U)) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out10) 
                                                       << 0x10U) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                         << 0x1aU)) 
                                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out11) 
                                                          << 0x10U) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                            << 0x1bU)) 
                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out12) 
                                                             << 0x10U) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                               << 0x1cU)) 
                                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out13) 
                                                                << 0x10U) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                  << 0x1dU)) 
                                                              | ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out14) 
                                                                   << 0x10U) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag) 
                                                                     << 0x1eU)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dq__out__strong__out15) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                                                         ? 0x8000U
                                                                         : 0U)) 
                                                                    << 0x10U)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__out__strong__out2 
        = ((0xffff0000U & vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__dq__out__strong__out2) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out0) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)) 
              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out1) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                     << 1U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out2) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                    << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out3) 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                   << 3U)) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out4) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                      << 4U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out5) 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                         << 5U)) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out6) 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                            << 6U)) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out7) 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                               << 7U)) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out8) 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                  << 8U)) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out9) 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                     << 9U)) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out10) 
                                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                        << 0xaU)) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out11) 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                           << 0xbU)) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out12) 
                                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                              << 0xcU)) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out13) 
                                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xdU)) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out14) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag) 
                                                                                << 0xeU)) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dq__out__strong__out15) 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)
                                                                                 ? 0x8000U
                                                                                 : 0U))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length))
            ? 8U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length))
                     ? 4U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length))
                              ? 2U : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address 
        = __Vdly__ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address;
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT____VdfgTmp_hd54fd850__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT____VdfgTmp_hd54fd850__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT____VdfgTmp_hd54fd850__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT____VdfgTmp_hd54fd850__0 
        = vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address
        [vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank];
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address));
    vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT____VdfgTmp_hd54fd850__0) 
            << 9U) | (IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address));
}

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0__0(VysyxSoCFull_mul_top* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__16(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0));
        VysyxSoCFull_mul_top___nba_sequent__TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0__0((&vlSymsp->TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0));
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__8(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__9(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__10(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__12(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        VysyxSoCFull___024root___nba_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__14(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        VysyxSoCFull___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VysyxSoCFull___024root___nba_sequent__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(7U) | vlSelf->__VnbaTriggered.at(8U))) {
        VysyxSoCFull___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        VysyxSoCFull___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U)) 
          | vlSelf->__VnbaTriggered.at(7U)) | vlSelf->__VnbaTriggered.at(8U))) {
        VysyxSoCFull___024root___nba_comb__TOP__4(vlSelf);
    }
}
