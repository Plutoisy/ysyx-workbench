// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_tb.h for the primary calling header

#include "Vysyx_24120011_tb__pch.h"
#include "Vysyx_24120011_tb__Syms.h"
#include "Vysyx_24120011_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_tb___024root___dump_triggers__stl(Vysyx_24120011_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24120011_tb___024root___eval_triggers__stl(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___eval_triggers__stl\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24120011_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*3:0*/, 1024> Vysyx_24120011_tb__ConstPool__TABLE_h644530c1_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vysyx_24120011_tb__ConstPool__TABLE_h29c5c868_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_tb__ConstPool__TABLE_hd20d1557_0;
void Vysyx_24120011_tb___024unit____Vdpiimwrap_reg_out_TOP____024unit(VlUnpacked<IData/*31:0*/, 16> array);
extern const VlUnpacked<CData/*2:0*/, 1024> Vysyx_24120011_tb__ConstPool__TABLE_h0d11ff25_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_24120011_tb__ConstPool__TABLE_hbfe48bf0_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vysyx_24120011_tb__ConstPool__TABLE_hce00ea1d_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_24120011_tb__ConstPool__TABLE_h53c35a41_0;

VL_ATTR_COLD void Vysyx_24120011_tb___024root___stl_sequent__TOP__0(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___stl_sequent__TOP__0\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_1_3 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_rd_data 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type))
            ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__r_mem_data
            : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f454d46__0 
        = (IData)((0x67U == (0x707fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[1U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [1U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[2U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [2U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[3U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [3U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[4U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [4U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[5U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [5U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[6U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [6U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[7U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [7U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[8U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [8U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[9U] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [9U];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xaU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xaU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xbU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xbU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xcU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xcU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xdU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xdU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xeU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xeU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[0xfU] 
        = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs
        [0xfU];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awready 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                  && (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wready 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
              && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                  && (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit 
        = (IData)((((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                    & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[2U] 
                       >> 0x1dU)) & ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc 
                                      >> 3U) == (0x1fffffffU 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[2U]))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f76f74c__0 
        = (IData)((0x1073U == (0x707fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))));
    vlSelfRef.__Vtableidx4 = (((2U == (3U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result)) 
                               << 9U) | (((1U == (3U 
                                                  & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result)) 
                                          << 8U) | 
                                         (((0U == (3U 
                                                   & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result)) 
                                           << 7U) | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wstrb 
        = Vysyx_24120011_tb__ConstPool__TABLE_h644530c1_0
        [vlSelfRef.__Vtableidx4];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format 
        = Vysyx_24120011_tb__ConstPool__TABLE_h29c5c868_0
        [vlSelfRef.__Vtableidx4];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                ? (1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))
                : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   && (1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0 
        = (IData)((0x2073U == (0x707fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid 
        = ((~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush)) 
           & ((~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing)) 
              & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cache_IFU_valid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                ? (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))
                : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M1_bready 
        = ((7U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
           | (6U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_mem 
        = ((((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                      >> 0xfU)) == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd)) 
            | ((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                        >> 0x14U)) == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd))) 
           & ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)) 
              & (0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type))));
    vlSelfRef.__Vtableidx2 = (0x7fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type 
        = Vysyx_24120011_tb__ConstPool__TABLE_hd20d1557_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type 
        = ((4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
            ? 0U : ((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                     ? 1U : 2U));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B 
        = ((0U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl) 
                         >> 4U))) ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm
            : ((1U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl) 
                             >> 4U))) ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src2
                : ((2U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl) 
                                 >> 4U))) ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__r_csr_data
                    : 0U)));
    if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arlen 
            = (((0xa0000000U <= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc) 
                & (0xbfffffffU >= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc))
                ? 1U : 0U);
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize = 2U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize = 2U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid 
            = (1U & (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready 
            = (1U & (4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)));
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arlen = 0U;
        if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize 
                = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid)
                    ? (7U & ((1U & (- (IData)((1U == 
                                               (3U 
                                                & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                                                   >> 3U)))))) 
                             | (2U & (- (IData)((2U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                                                     >> 3U))))))))
                    : 2U);
            if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize 
                    = (7U & ((1U & (- (IData)((1U == 
                                               (3U 
                                                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl)))))) 
                             | (2U & (- (IData)((2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))))))));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid = 1U;
            } else {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize = 2U;
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid = 0U;
            }
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid 
                = (1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid));
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready 
                = (1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rready));
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid 
                = (1U & 0U);
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready 
                = (1U & 0U);
        }
    }
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arlen;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize;
    } else {
        if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arlen;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize;
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = 0U;
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = 0U;
    }
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = 0U;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize 
            = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                ? (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize)
                : 0U);
    }
    if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.__VdfgRegularize_hd87f99a1_2_3 = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wvalid;
        vlSelfRef.__VdfgRegularize_hd87f99a1_2_2 = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result;
    } else {
        vlSelfRef.__VdfgRegularize_hd87f99a1_2_3 = 0U;
        vlSelfRef.__VdfgRegularize_hd87f99a1_2_2 = 0U;
    }
    Vysyx_24120011_tb___024unit____Vdpiimwrap_reg_out_TOP____024unit(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout);
    if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wlast = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb = 0xfU;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid 
            = (1U & vlSelfRef.__VdfgRegularize_hd87f99a1_2_3);
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wlast 
            = (1U & vlSelfRef.__VdfgRegularize_hd87f99a1_2_3);
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb 
            = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                ? (0xfU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wstrb))
                : 0U);
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst_cache 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit)
            ? ((4U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc)
                ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[1U]
                : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache[0U])
            : 0U);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wdata 
        = (((((((((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format)) 
                  | (1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
                 | (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
                | (3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
               | (4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
              | (5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
             | (6U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))) 
            | (7U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format)))
            ? ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                ? (0xffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2)
                : ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                    ? (0xff00U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                  << 8U)) : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                              ? (0xff0000U 
                                                 & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                                    << 0x10U))
                                              : ((3U 
                                                  == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                                  ? 
                                                 (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                                  << 0x18U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                                    ? 
                                                   (0xffff00U 
                                                    & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                                       << 8U))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format))
                                                     ? 
                                                    (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 
                                                     << 0x10U)
                                                     : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2)))))))
            : 0xdeadbeefU);
    if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__araddr;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready = 1U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata = 0U;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_2_2;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_2_2;
        if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready 
                = (1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M1_bready));
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wdata;
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata = 0U;
        }
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arready 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M0_rvalid 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rvalid 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
           & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_1 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_mem) 
           & (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready)));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
            = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid)
                ? (((0x2000048U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr) 
                    | (0x200004cU == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr))
                    ? 2U : 1U) : 0U);
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata = 0U;
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
            = (((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                ? 0U : 1U);
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
            = (((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                 [(0x3ffffffU & ((IData)(3U) + (0x3fffffcU 
                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr)))] 
                 << 0x18U) | (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                              [(0x3ffffffU & ((IData)(2U) 
                                              + (0x3fffffcU 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr)))] 
                              << 0x10U)) | ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                                             [(0x3ffffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x3fffffcU 
                                                   & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr)))] 
                                             << 8U) 
                                            | vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram
                                            [(0x3fffffcU 
                                              & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr)]));
    } else {
        if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state 
                = (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                    & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                    ? 0U : 2U);
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg;
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata = 0U;
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = 0U;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata 
        = ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
            ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata
            : 0U);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl 
        = ((0xfU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl)) 
           | (((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                ? 1U : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                         ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                             ? 0U : 1U) : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                            ? 1U : 
                                           ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0)
                                             ? 2U : 0U)))) 
              << 4U));
    if ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
            = (4U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
            = ((0x7cU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl)) 
               | ((0U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                >> 0xcU))) ? 0U : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 2U
                                                     : 0U))));
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
            = (0x78U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl 
        = ((0x30U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl)) 
           | ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
               ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                   ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                            ? ((0U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                             >> 0xcU)))
                                ? 8U : ((1U == (7U 
                                                & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                   >> 0xcU)))
                                         ? 9U : ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 7U
                                                  : 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 0xfU
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 3U
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 0xbU
                                                     : 0U))))))
                            : ((IData)((0U == (0xfe007000U 
                                               & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                ? 0U : ((IData)((0x40000000U 
                                                 == 
                                                 (0xfe007000U 
                                                  & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                         ? 1U : ((IData)(
                                                         (0x3000U 
                                                          == 
                                                          (0xfe007000U 
                                                           & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                  ? 0xbU
                                                  : 
                                                 ((IData)(
                                                          (0x2000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           (0x4000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            (0x1000U 
                                                             == 
                                                             (0xfe007000U 
                                                              & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                     ? 6U
                                                     : 
                                                    ((IData)(
                                                             (0x7000U 
                                                              == 
                                                              (0xfe007000U 
                                                               & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                      ? 0xdU
                                                      : 
                                                     ((IData)(
                                                              (0x40005000U 
                                                               == 
                                                               (0xfe007000U 
                                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                       ? 0xcU
                                                       : 
                                                      ((IData)(
                                                               (0x6000U 
                                                                == 
                                                                (0xfe007000U 
                                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                        ? 5U
                                                        : 
                                                       ((IData)(
                                                                (0x5000U 
                                                                 == 
                                                                 (0xfe007000U 
                                                                  & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                         ? 4U
                                                         : 0U))))))))))))
               : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                   ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                            ? 0U : ((IData)((0x13U 
                                             == (0x707fU 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                     ? 0U : ((IData)(
                                                     (0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                              ? 0xbU
                                              : ((IData)(
                                                         (0x7013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                  ? 0xdU
                                                  : 
                                                 ((IData)(
                                                          (0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                   ? 2U
                                                   : 
                                                  ((IData)(
                                                           (0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                    ? 5U
                                                    : 
                                                   (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_1_3) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                         >> 0x19U)))
                                                     ? 0xcU
                                                     : 
                                                    (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_1_3) 
                                                      & (0U 
                                                         == 
                                                         (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                          >> 0x19U)))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              (0x1013U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0)
                                                        ? 5U
                                                        : 0U)))))))))))));
    vlSelfRef.__Vtableidx3 = (((((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0) 
                                 << 9U) | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f76f74c__0) 
                                            << 8U) 
                                           | ((3U == 
                                               (0x7fU 
                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) 
                                              << 7U))) 
                               | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f454d46__0) 
                                   << 6U) | ((0x37U 
                                              == (0x7fU 
                                                  & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) 
                                             << 5U))) 
                              | (((0x17U == (0x7fU 
                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) 
                                  << 4U) | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type) 
                                             << 1U) 
                                            | (0U == 
                                               (0xfU 
                                                & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                   >> 7U))))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__rd_ctrl 
        = Vysyx_24120011_tb__ConstPool__TABLE_h0d11ff25_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                         ? (((- (IData)((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                         >> 0x1fU))) 
                             << 0xcU) | ((0x800U & 
                                          (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                  >> 7U)))))
                         : 0U)) : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                        ? (((- (IData)(
                                                       (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                    >> 7U))))
                                        : ((((- (IData)(
                                                        (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | (0x100000U 
                                               & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                  >> 0xbU))) 
                                           | (((0xff000U 
                                                & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst) 
                                               | (0x800U 
                                                  & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                     >> 9U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                    >> 0x14U)))))
                                    : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))
                                        ? (0xfffff000U 
                                           & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)
                                        : (((- (IData)(
                                                       (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                              >> 0x14U)))));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type))) {
        if ((3U == (0x7fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                = (0x20U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            if ((0U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                              >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x40U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else if ((1U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                     >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (8U | (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl)));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x40U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else if ((2U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                     >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x10U | (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl)));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x40U | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else if ((4U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                     >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x3fU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else if ((5U == (7U & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                     >> 0xcU)))) {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (8U | (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl)));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x3fU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            } else {
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x67U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
                vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                    = (0x3fU & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
            }
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
                = (7U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
        }
        if ((0x30200073U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr = 0x341U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr = 0U;
        } else if ((0x73U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst)) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 7U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr = 0x305U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr = 0x341U;
        } else if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f76f74c__0) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 1U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm);
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm);
        } else if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 2U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm);
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr 
                = (0xfffU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm);
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr 
                = (0xfffU & 0U);
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr 
                = (0xfffU & 0U);
        }
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl 
            = (7U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr = 0U;
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_exu 
        = ((~ ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)) 
               | (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type)))) 
           & (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd) 
               == (0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                           >> 0xfU))) | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd) 
                                         == (0xfU & 
                                             (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                                              >> 0x14U)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT____VdfgRegularize_he4da4b0f_3_1 
        = (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B 
           ^ (- (IData)((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wlast))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wlast)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__next_state 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                         ? 0U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M0_rvalid) 
                                  & (4U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)))
                                  ? ((4U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size)
                                      ? 2U : (((0xa0000000U 
                                                <= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc) 
                                               & (0xbfffffffU 
                                                  >= vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc))
                                               ? 4U
                                               : 3U))
                                  : 4U))) : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                                                  ? 
                                                 (((3U 
                                                    == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state)) 
                                                   & ((1U 
                                                       == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                                                      & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready)))
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit)
                                                   ? 0U
                                                   : 3U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state))
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))) 
                                                   | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush) 
                                                      | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing)))
                                                   ? 1U
                                                   : 0U))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                   && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__done 
        = ((((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
             && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                  ? (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))
                  : ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)) 
                     && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)))) 
            & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready) 
               & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid))) 
           | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready) 
              & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready 
        = ((0U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
           && ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
               && (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready)));
    if ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
            = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state 
            = (((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                ? 0U : 1U);
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = 0U;
        if ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))) {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata 
                = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state = 2U;
        } else {
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = 0U;
            vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state = 0U;
        }
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = 0U;
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = 0U;
    }
    vlSelfRef.__Vtableidx5 = ((((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready) 
                                << 6U) | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                          << 5U)) | 
                              (((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                << 4U) | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid) 
                                           << 3U) | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state 
        = Vysyx_24120011_tb__ConstPool__TABLE_hbfe48bf0_0
        [vlSelfRef.__Vtableidx5];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_0 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_exu) 
           & (2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_stop_pipe 
        = (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_exu) 
            & (2U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type))) 
           | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_mem) 
              & (2U != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in 
        = ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
            ? ((IData)(1U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT____VdfgRegularize_he4da4b0f_3_1)
            : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
            ? ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_master))
                ? ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                    ? 1U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                             | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                             ? 2U : 0U)) : ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_master))
                                             ? (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                                                 | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                                                 ? 2U
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                                                  ? 1U
                                                  : 0U))
                                             : 0U))
            : ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                ? ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__done)
                    ? (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                        | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                        ? 2U : ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                                 ? 1U : 0U)) : 1U) : 
               ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                 ? ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__done)
                     ? ((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state))
                         ? 1U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                                  | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid))
                                  ? 2U : 0U)) : 2U)
                 : 0U)));
    vlSelfRef.__Vtableidx6 = (((((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                 << 0xaU) | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid) 
                                              << 9U) 
                                             | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
                                                << 8U))) 
                               | (((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                   << 7U) | (((3U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                              << 6U) 
                                             | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid) 
                                                << 5U)))) 
                              | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready) 
                                  << 4U) | (((5U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state)) 
                                             << 3U) 
                                            | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__next_state 
        = Vysyx_24120011_tb__ConstPool__TABLE_hce00ea1d_0
        [vlSelfRef.__Vtableidx6];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_bypass 
        = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_0) 
           | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_1));
    vlSelfRef.__Vtableidx1 = (((((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)) 
                                 << 6U) | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_stop_pipe) 
                                           << 5U)) 
                               | (((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state)) 
                                   << 4U) | ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid) 
                                             << 3U))) 
                              | (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush) 
                                  << 2U) | (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__next_state 
        = Vysyx_24120011_tb__ConstPool__TABLE_h53c35a41_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp 
        = (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
           + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in);
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDU_valid 
        = ((~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush)) 
           & ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state)) 
              & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__next_state))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__sless 
        = (1U & ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp 
                  >> 0x1fU) ^ (((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                 >> 0x1fU) == (((1U 
                                                 & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                                                 ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT____VdfgRegularize_he4da4b0f_3_1
                                                 : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B) 
                                               >> 0x1fU)) 
                               & ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                   >> 0x1fU) != (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp 
                                                 >> 0x1fU)))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask 
        = ((0U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                         >> 3U))) ? ((0U == (3U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                      ? ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                          ? (0xffU 
                                             & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                          : 0U) : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                     ? 
                                                    (0xffU 
                                                     & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                        >> 8U))
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                      ? 
                                                     (0xffU 
                                                      & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                         >> 0x10U))
                                                      : 0U)
                                                     : 
                                                    VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata, 0x18U))))
            : ((1U == (3U & ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl) 
                             >> 3U))) ? ((0U == (3U 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                          ? ((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                              ? (0xffffU 
                                                 & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata)
                                              : 0U)
                                          : ((1U == 
                                              (3U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                              ? ((2U 
                                                  == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state))
                                                  ? 
                                                 (0xffffU 
                                                  & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata 
                                                     >> 8U))
                                                  : 0U)
                                              : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result))
                                                  ? 
                                                 VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata, 0x10U)
                                                  : 0xdeadbeefU)))
                : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__next_state 
        = ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state))
            ? (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDU_valid) 
                & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)))
                ? 1U : 0U) : ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state))
                               ? ((0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                                   ? 0U : 1U) : 0U));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result 
        = ((8U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
            ? ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? ((0U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                            ? 1U : (1U & (IData)((1ULL 
                                                  & (((QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1)) 
                                                      + (QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in))) 
                                                     >> 0x20U)))))
                        : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp)
                    : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                        : ((0U == (0x1fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B))
                            ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1
                            : ((vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                >> (0x1fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)) 
                               | VL_SHIFTL_III(32,32,32, 
                                               (- (IData)(
                                                          (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                                                           >> 0x1fU))), 
                                               ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)))))))
                : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? ((0U == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                            ? 0U : (1U & (~ (IData)(
                                                    (1ULL 
                                                     & (((QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1)) 
                                                         + (QData)((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in))) 
                                                        >> 0x20U))))))
                        : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp)
                    : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           != vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                        : (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B 
                           == vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1))))
            : ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (1U & (~ (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__sless)))
                        : (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           << (0x1fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)))
                    : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           | vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B)
                        : (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           >> (0x1fU & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B))))
                : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                    ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl))
                        ? (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__sless)
                        : (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 
                           ^ vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B))
                    : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid 
        = ((1U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state)) 
           & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__next_state)));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                ? 0U : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                         ? 0U : ((1U & vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result)
                                  ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc 
                                     + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm)
                                  : ((IData)(4U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc))))
            : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                    ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__r_csr_data
                    : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result)
                : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl))
                    ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc 
                       + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm)
                    : ((IData)(4U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc))));
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_data 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                    ? 0U : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__r_csr_data)
                : 0U) : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                          ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                              ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm
                              : vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result)
                          : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl))
                              ? (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc 
                                 + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm)
                              : ((IData)(4U) + vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc))));
    if (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_0) {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_rs1_or_rs2 
            = ((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                        >> 0xfU)) != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata 
            = vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_data;
    } else {
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_rs1_or_rs2 
            = ((0xfU & (vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst 
                        >> 0xfU)) != (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd));
        vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata 
            = ((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_1)
                ? vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_rd_data
                : 0U);
    }
    vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__next_state 
        = ((4U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
            ? ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                    ? ((((2U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state)) 
                         & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid)) 
                        & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M1_bready))
                        ? 0U : 7U) : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wvalid) 
                                       & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wready))
                                       ? 7U : 6U)) : 
               ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                 ? (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wvalid) 
                     & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wready))
                     ? 7U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid) 
                              & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awready))
                              ? 6U : 5U)) : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rvalid) 
                                              & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rready))
                                              ? 0U : 4U)))
            : ((2U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                ? ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                    ? (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid) 
                        & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arready))
                        ? 4U : 3U) : ((0x20U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))
                                       ? 3U : ((4U 
                                                & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl))
                                                ? 5U
                                                : 0U)))
                : ((1U & (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state))
                    ? 2U : (((IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid) 
                             & (0U == (IData)(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state)))
                             ? 1U : 0U))));
}
