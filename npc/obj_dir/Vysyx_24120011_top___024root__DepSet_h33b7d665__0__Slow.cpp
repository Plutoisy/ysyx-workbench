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

extern const VlUnpacked<CData/*0:0*/, 256> Vysyx_24120011_top__ConstPool__TABLE_hd9fd978c_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vysyx_24120011_top__ConstPool__TABLE_h095d415c_0;
void Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 32> array);
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_top__ConstPool__TABLE_h129a8bb7_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vysyx_24120011_top__ConstPool__TABLE_h284954d7_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vysyx_24120011_top__ConstPool__TABLE_h40570e4b_0;

VL_ATTR_COLD void Vysyx_24120011_top___024root___stl_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24120011_top__DOT__M1_rdata = ((2U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                                 ? vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg
                                                 : 0U);
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        vlSelf->ysyx_24120011_top__DOT__rd = (0x1fU 
                                              & (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg 
                                                 >> 7U));
        vlSelf->ysyx_24120011_top__DOT__S0_arvalid 
            = (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid));
        vlSelf->ysyx_24120011_top__DOT__S0_rready = 
            (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready));
        vlSelf->ysyx_24120011_top__DOT__func7 = (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg 
                                                 >> 0x19U);
        vlSelf->ysyx_24120011_top__DOT__inst = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg;
        vlSelf->ysyx_24120011_top__DOT__func3 = (7U 
                                                 & (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg 
                                                    >> 0xcU));
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode 
            = (0x7fU & vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg);
        vlSelf->ysyx_24120011_top__DOT__M0_rvalid = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg;
    } else {
        vlSelf->ysyx_24120011_top__DOT__rd = 0U;
        if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
            vlSelf->ysyx_24120011_top__DOT__S0_arvalid 
                = (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid));
            vlSelf->ysyx_24120011_top__DOT__S0_rready 
                = (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready));
        } else {
            vlSelf->ysyx_24120011_top__DOT__S0_arvalid 
                = (1U & 0U);
            vlSelf->ysyx_24120011_top__DOT__S0_rready 
                = (1U & 0U);
        }
        vlSelf->ysyx_24120011_top__DOT__func7 = 0U;
        vlSelf->ysyx_24120011_top__DOT__inst = 0U;
        vlSelf->ysyx_24120011_top__DOT__func3 = 0U;
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode = 0U;
        vlSelf->ysyx_24120011_top__DOT__M0_rvalid = 0U;
    }
    vlSelf->ysyx_24120011_top__DOT__M1_rvalid = ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
    vlSelf->ysyx_24120011_top__DOT__M1_wready = ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg));
    vlSelf->ysyx_24120011_top__DOT__M1_bvalid = ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                                                 & (5U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)));
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
        [((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
           ? (0x1fU & (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg 
                       >> 0xfU)) : 0U)];
    vlSelf->ysyx_24120011_top__DOT__src2 = vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
        [((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
           ? (0x1fU & (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg 
                       >> 0x14U)) : 0U)];
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready) 
                             << 7U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__M0_rvalid) 
                                        << 6U) | ((
                                                   ((1U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                                                    & (1U 
                                                       == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) 
                                                   << 5U) 
                                                  | (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid) 
                                                      << 4U) 
                                                     | (((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__start_read_delay) 
                                                         << 3U) 
                                                        | (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state))))));
    if (Vysyx_24120011_top__ConstPool__TABLE_hd9fd978c_0
        [vlSelf->__Vtableidx1]) {
        vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__next_state 
            = Vysyx_24120011_top__ConstPool__TABLE_h095d415c_0
            [vlSelf->__Vtableidx1];
    }
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            if (((IData)(vlSelf->ysyx_24120011_top__DOT__M1_bvalid) 
                 & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid) 
                    & (IData)(vlSelf->ysyx_24120011_top__DOT__M1_wready))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
            if (((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid) 
                 & ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                    & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))))) {
                vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__M1_rvalid) 
                    & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))) {
        if (((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid) 
             & ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                & (1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))))) {
            vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state = 2U;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state 
            = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay)
                ? 1U : ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay)
                         ? 3U : 0U));
    }
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelf->ysyx_24120011_top__DOT__S0_awvalid = 0U;
        vlSelf->ysyx_24120011_top__DOT__S0_bready = 1U;
    } else if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelf->ysyx_24120011_top__DOT__S0_awvalid 
            = (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid));
        vlSelf->ysyx_24120011_top__DOT__S0_bready = 
            (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready));
    } else {
        vlSelf->ysyx_24120011_top__DOT__S0_awvalid = 0U;
        vlSelf->ysyx_24120011_top__DOT__S0_bready = 0U;
    }
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done 
        = ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_bready) 
           & (5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)));
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
            if (((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                 & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_bready))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 0U;
            }
        } else if ((((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                      ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid)
                               : 0U)) & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
            if (((IData)(vlSelf->ysyx_24120011_top__DOT__S0_awvalid) 
                 & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 4U;
            }
        } else if (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                    & (IData)(vlSelf->ysyx_24120011_top__DOT__S0_rready))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))) {
        if (((IData)(vlSelf->ysyx_24120011_top__DOT__S0_arvalid) 
             & (1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state = 2U;
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state 
            = ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_arvalid)
                ? 1U : ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_awvalid)
                         ? 3U : 0U));
    }
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done 
        = ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_rready) 
           & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
    Vysyx_24120011_top___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout);
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0 
        = ((0x67U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)) 
           & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0 
        = ((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
           & (0x13U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0 
        = ((0x73U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)) 
           & (1U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)));
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0 
        = ((0x73U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)) 
           & (2U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)));
    vlSelf->__Vtableidx4 = vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode;
    vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type 
        = Vysyx_24120011_top__ConstPool__TABLE_h129a8bb7_0
        [vlSelf->__Vtableidx4];
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        } else if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master))) {
            if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
                vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                    = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid)
                        ? 2U : 0U);
            }
        }
    } else if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid)
                    ? 2U : 0U);
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state = 0U;
    }
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid)
                    ? 1U : ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid)
                             ? 2U : 0U));
        } else if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master))) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid)
                             ? 1U : 0U));
        }
    } else if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid)
                    ? 2U : ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid)
                             ? 1U : 0U));
        }
    } else if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))) {
        if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done) {
            vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state 
                = ((IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid)
                    ? 1U : ((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid)
                             ? 2U : 0U));
        }
    } else {
        vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state = 0U;
    }
    vlSelf->ysyx_24120011_top__DOT__w_mem_en = ((3U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready));
    vlSelf->ysyx_24120011_top__DOT__r_mem_en = ((0U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)) 
                                                   & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready)));
    vlSelf->ysyx_24120011_top__DOT__w_mem_len = ((3U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                                     ? 4U
                                                     : 1U)))
                                                  : 1U);
    if ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelf->ysyx_24120011_top__DOT__S0_wdata = 0U;
        vlSelf->ysyx_24120011_top__DOT__S0_wstrb = 0xfU;
    } else if ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))) {
        vlSelf->ysyx_24120011_top__DOT__S0_wdata = 
            ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
              ? vlSelf->ysyx_24120011_top__DOT__src2
              : 0U);
        vlSelf->ysyx_24120011_top__DOT__S0_wstrb = 
            ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
              ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                         ? 3U : 1U));
    } else {
        vlSelf->ysyx_24120011_top__DOT__S0_wdata = 0U;
        vlSelf->ysyx_24120011_top__DOT__S0_wstrb = 0U;
    }
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                             << 9U) | (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0) 
                                        << 8U) | ((
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0) 
                                                      << 6U) 
                                                     | (((0x37U 
                                                          == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)) 
                                                         << 5U) 
                                                        | (((0x17U 
                                                             == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)) 
                                                            << 4U) 
                                                           | (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type) 
                                                               << 1U) 
                                                              | (0U 
                                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__rd)))))))));
    vlSelf->ysyx_24120011_top__DOT__rd_ctrl = Vysyx_24120011_top__ConstPool__TABLE_h284954d7_0
        [vlSelf->__Vtableidx2];
    if ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__pc_ctrl = 0U;
        if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 0U;
            vlSelf->ysyx_24120011_top__DOT__imme = 0U;
        } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011_top__DOT__ALU_ctrl 
                = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                    ? 8U : ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                             ? 9U : ((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                      ? 7U : ((7U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                               ? 0xfU
                                               : ((4U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                                   ? 3U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                                    ? 0xbU
                                                    : 0U))))));
            vlSelf->ysyx_24120011_top__DOT__imme = 
                (((- (IData)((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x1fU))) << 0xcU) 
                 | ((0x800U & (vlSelf->ysyx_24120011_top__DOT__inst 
                               << 4U)) | ((0x7e0U & 
                                           (vlSelf->ysyx_24120011_top__DOT__inst 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                >> 7U)))));
        } else {
            vlSelf->ysyx_24120011_top__DOT__ALU_ctrl 
                = (((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                    & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                    ? 0U : (((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                             & (0x20U == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                             ? 1U : (((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                      & (0U == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                      ? 0xbU : (((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                                 ? 3U
                                                 : 
                                                (((4U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                                  ? 2U
                                                  : 
                                                 (((1U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                                   ? 6U
                                                   : 
                                                  (((7U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                                    ? 0xdU
                                                    : 
                                                   (((5U 
                                                      == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                                     & (0x20U 
                                                        == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                                     ? 0xcU
                                                     : 
                                                    (((6U 
                                                       == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                                      ? 5U
                                                      : 
                                                     (((5U 
                                                        == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                                       & (0U 
                                                          == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                                       ? 4U
                                                       : 0U))))))))));
            vlSelf->ysyx_24120011_top__DOT__imme = 0U;
        }
    } else if ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
            vlSelf->ysyx_24120011_top__DOT__pc_ctrl = 0U;
            vlSelf->ysyx_24120011_top__DOT__imme = 
                (((- (IData)((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x1fU))) << 0xcU) 
                 | ((0xfe0U & (vlSelf->ysyx_24120011_top__DOT__inst 
                               >> 0x14U)) | (0x1fU 
                                             & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                >> 7U))));
        } else {
            vlSelf->ysyx_24120011_top__DOT__pc_ctrl = 1U;
            vlSelf->ysyx_24120011_top__DOT__imme = 
                (((- (IData)((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x1fU))) << 0x15U) 
                 | ((0x100000U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                  >> 0xbU)) | ((0xff000U 
                                                & vlSelf->ysyx_24120011_top__DOT__inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_24120011_top__DOT__inst 
                                                        >> 0x14U))))));
        }
        vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 0U;
    } else if ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelf->ysyx_24120011_top__DOT__pc_ctrl = 0U;
        vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 0U;
        vlSelf->ysyx_24120011_top__DOT__imme = (0xfffff000U 
                                                & vlSelf->ysyx_24120011_top__DOT__inst);
    } else {
        vlSelf->ysyx_24120011_top__DOT__pc_ctrl = ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hd7d5a5db__0)
                                                    ? 2U
                                                    : 
                                                   ((0x30200073U 
                                                     == vlSelf->ysyx_24120011_top__DOT__inst)
                                                     ? 3U
                                                     : 
                                                    ((0x73U 
                                                      == vlSelf->ysyx_24120011_top__DOT__inst)
                                                      ? 3U
                                                      : 0U)));
        vlSelf->ysyx_24120011_top__DOT__ALU_ctrl = 
            (((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
              & (0x13U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)))
              ? 0U : (((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                       & (0x13U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)))
                       ? 0xbU : (((7U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                  & (0x13U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)))
                                  ? 0xdU : (((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                             & (0x13U 
                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)))
                                             ? 2U : 
                                            (((6U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                              & (0x13U 
                                                 == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)))
                                              ? 5U : 
                                             (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0) 
                                               & (0x20U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                               ? 0xcU
                                               : (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgTmp_h53d597ad__0) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyx_24120011_top__DOT__func7)))
                                                   ? 4U
                                                   : 
                                                  (((1U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                                                    & ((0x13U 
                                                        == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)) 
                                                       & (0U 
                                                          == (IData)(vlSelf->ysyx_24120011_top__DOT__func7))))
                                                    ? 6U
                                                    : 
                                                   ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0)
                                                     ? 5U
                                                     : 0U)))))))));
        vlSelf->ysyx_24120011_top__DOT__imme = (((- (IData)(
                                                            (vlSelf->ysyx_24120011_top__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->ysyx_24120011_top__DOT__inst 
                                                   >> 0x14U));
    }
    if ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode))) {
            vlSelf->ysyx_24120011_top__DOT__r_mem_len 
                = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                    ? 1U : ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                             ? 2U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                      ? 4U : ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                               ? 1U
                                               : ((5U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))
                                                   ? 2U
                                                   : 1U)))));
            vlSelf->ysyx_24120011_top__DOT__sign_extension 
                = ((0U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                   | ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3)) 
                      | (2U == (IData)(vlSelf->ysyx_24120011_top__DOT__func3))));
        }
        vlSelf->ysyx_24120011_top__DOT__w_csr_en = 
            ((0x30200073U != vlSelf->ysyx_24120011_top__DOT__inst) 
             & ((0x73U != vlSelf->ysyx_24120011_top__DOT__inst) 
                & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                    ? (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready)
                    : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                       & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready)))));
        if ((0x30200073U == vlSelf->ysyx_24120011_top__DOT__inst)) {
            vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 0U;
            vlSelf->ysyx_24120011_top__DOT__r_csr_en 
                = vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready;
            vlSelf->ysyx_24120011_top__DOT__w_csr_addr = 0U;
            vlSelf->ysyx_24120011_top__DOT__r_csr_addr = 0x341U;
        } else {
            if ((0x73U == vlSelf->ysyx_24120011_top__DOT__inst)) {
                vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 0U;
                vlSelf->ysyx_24120011_top__DOT__w_csr_addr = 0U;
                vlSelf->ysyx_24120011_top__DOT__r_csr_addr = 0U;
            } else if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0) {
                vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 1U;
                vlSelf->ysyx_24120011_top__DOT__w_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011_top__DOT__imme);
                vlSelf->ysyx_24120011_top__DOT__r_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011_top__DOT__imme);
            } else if (vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) {
                vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 2U;
                vlSelf->ysyx_24120011_top__DOT__w_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011_top__DOT__imme);
                vlSelf->ysyx_24120011_top__DOT__r_csr_addr 
                    = (0xfffU & vlSelf->ysyx_24120011_top__DOT__imme);
            } else {
                vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl = 0U;
                vlSelf->ysyx_24120011_top__DOT__w_csr_addr 
                    = (0xfffU & 0U);
                vlSelf->ysyx_24120011_top__DOT__r_csr_addr 
                    = (0xfffU & 0U);
            }
            vlSelf->ysyx_24120011_top__DOT__r_csr_en 
                = ((0x73U != vlSelf->ysyx_24120011_top__DOT__inst) 
                   & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hecfb244b__0)
                       ? (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready)
                       : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                          & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready))));
        }
        vlSelf->ysyx_24120011_top__DOT__w_csr_ecall 
            = ((0x30200073U != vlSelf->ysyx_24120011_top__DOT__inst) 
               & ((0x73U == vlSelf->ysyx_24120011_top__DOT__inst) 
                  & (IData)(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready)));
    } else {
        vlSelf->ysyx_24120011_top__DOT__r_mem_len = 1U;
        vlSelf->ysyx_24120011_top__DOT__sign_extension = 0U;
    }
    vlSelf->__Vtableidx3 = (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_hed3628ff__0) 
                             << 3U) | (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type));
    vlSelf->ysyx_24120011_top__DOT__ALUBctrl = Vysyx_24120011_top__ConstPool__TABLE_h40570e4b_0
        [vlSelf->__Vtableidx3];
    vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out 
        = (vlSelf->ysyx_24120011_top__DOT__imme + vlSelf->ysyx_24120011_top__DOT__pc);
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
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode)) 
                                                  & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                                  ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->ysyx_24120011_top__DOT__pc))));
}
