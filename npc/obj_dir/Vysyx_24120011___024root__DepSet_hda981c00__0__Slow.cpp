// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011.h for the primary calling header

#include "Vysyx_24120011__pch.h"
#include "Vysyx_24120011___024root.h"

VL_ATTR_COLD void Vysyx_24120011___024root___eval_static(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_static\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vysyx_24120011___024root___eval_initial__TOP(Vysyx_24120011___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120011___024root___eval_initial(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_initial\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_24120011___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vysyx_24120011___024root___eval_initial__TOP(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_initial__TOP\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_slave_awready = 0U;
    vlSelfRef.io_slave_wready = 0U;
    vlSelfRef.io_slave_bvalid = 0U;
    vlSelfRef.io_slave_bresp = 0U;
    vlSelfRef.io_slave_bid = 0U;
    vlSelfRef.io_slave_arready = 0U;
    vlSelfRef.io_slave_rvalid = 0U;
    vlSelfRef.io_slave_rresp = 0U;
    vlSelfRef.io_slave_rdata = 0U;
    vlSelfRef.io_slave_rlast = 0U;
    vlSelfRef.io_slave_rid = 0U;
}

VL_ATTR_COLD void Vysyx_24120011___024root___eval_final(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_final\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__stl(Vysyx_24120011___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_24120011___024root___eval_phase__stl(Vysyx_24120011___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120011___024root___eval_settle(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_settle\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_24120011___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/npc_specific/ysyx_24120011.v", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_24120011___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__stl(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___dump_triggers__stl\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24120011___024root___stl_sequent__TOP__0(Vysyx_24120011___024root* vlSelf);
VL_ATTR_COLD void Vysyx_24120011___024root____Vm_traceActivitySetAll(Vysyx_24120011___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120011___024root___eval_stl(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_stl\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_24120011___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_24120011___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vysyx_24120011___024root___eval_triggers__stl(Vysyx_24120011___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_24120011___024root___eval_phase__stl(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___eval_phase__stl\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_24120011___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_24120011___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__act(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___dump_triggers__act\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011___024root___dump_triggers__nba(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___dump_triggers__nba\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24120011___024root____Vm_traceActivitySetAll(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vysyx_24120011___024root___ctor_var_reset(Vysyx_24120011___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root___ctor_var_reset\n"); );
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_interrupt = VL_RAND_RESET_I(1);
    vlSelf->io_master_awready = VL_RAND_RESET_I(1);
    vlSelf->io_master_awvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_awaddr = VL_RAND_RESET_I(32);
    vlSelf->io_master_awid = VL_RAND_RESET_I(4);
    vlSelf->io_master_awlen = VL_RAND_RESET_I(8);
    vlSelf->io_master_awsize = VL_RAND_RESET_I(3);
    vlSelf->io_master_awburst = VL_RAND_RESET_I(2);
    vlSelf->io_master_wready = VL_RAND_RESET_I(1);
    vlSelf->io_master_wvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_master_wstrb = VL_RAND_RESET_I(4);
    vlSelf->io_master_wlast = VL_RAND_RESET_I(1);
    vlSelf->io_master_bready = VL_RAND_RESET_I(1);
    vlSelf->io_master_bvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_bresp = VL_RAND_RESET_I(2);
    vlSelf->io_master_bid = VL_RAND_RESET_I(4);
    vlSelf->io_master_arready = VL_RAND_RESET_I(1);
    vlSelf->io_master_arvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_araddr = VL_RAND_RESET_I(32);
    vlSelf->io_master_arid = VL_RAND_RESET_I(4);
    vlSelf->io_master_arlen = VL_RAND_RESET_I(8);
    vlSelf->io_master_arsize = VL_RAND_RESET_I(3);
    vlSelf->io_master_arburst = VL_RAND_RESET_I(2);
    vlSelf->io_master_rready = VL_RAND_RESET_I(1);
    vlSelf->io_master_rvalid = VL_RAND_RESET_I(1);
    vlSelf->io_master_rresp = VL_RAND_RESET_I(2);
    vlSelf->io_master_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_master_rlast = VL_RAND_RESET_I(1);
    vlSelf->io_master_rid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_awready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_awvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_awaddr = VL_RAND_RESET_I(32);
    vlSelf->io_slave_awid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_awlen = VL_RAND_RESET_I(8);
    vlSelf->io_slave_awsize = VL_RAND_RESET_I(3);
    vlSelf->io_slave_awburst = VL_RAND_RESET_I(2);
    vlSelf->io_slave_wready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_wvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_wdata = VL_RAND_RESET_I(32);
    vlSelf->io_slave_wstrb = VL_RAND_RESET_I(4);
    vlSelf->io_slave_wlast = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_bresp = VL_RAND_RESET_I(2);
    vlSelf->io_slave_bid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_arready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_arvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_araddr = VL_RAND_RESET_I(32);
    vlSelf->io_slave_arid = VL_RAND_RESET_I(4);
    vlSelf->io_slave_arlen = VL_RAND_RESET_I(8);
    vlSelf->io_slave_arsize = VL_RAND_RESET_I(3);
    vlSelf->io_slave_arburst = VL_RAND_RESET_I(2);
    vlSelf->io_slave_rready = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rvalid = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rresp = VL_RAND_RESET_I(2);
    vlSelf->io_slave_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_slave_rlast = VL_RAND_RESET_I(1);
    vlSelf->io_slave_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011__DOT__dnpc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__imme = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__r_mem_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__ALUB = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__pc_ctrl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011__DOT__rd_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011__DOT__ALUBctrl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011__DOT__w_mem_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__r_mem_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__sign_extension = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__w_mem_len = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__r_mem_len = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__ALU_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011__DOT__w_csr_data_ctrl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011__DOT__w_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011__DOT__r_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011__DOT__w_csr_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__r_csr_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__w_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__w_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__r_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__LSU_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__LSU_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__EXU_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__M1_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__M1_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__M1_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__S0_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__S0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__S0_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__S0_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__S0_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__S0_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__S0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__S0_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__S0_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__S0_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011__DOT__S0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__S0_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__S0_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__IFU_valid_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__IFU_valid_rising_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__LSU_rready_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__LSU_rready_rising_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__EXU_valid_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__EXU_valid_rising_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__miss_counter = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__cache_IFU_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(90, vlSelf->ysyx_24120011__DOT__i_IFU__DOT__icache[__Vi0]);
    }
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__inst_cache = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__cached_size = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_IFU__DOT____Vlvbound_h43cc13dc__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f54ddbf__0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f909a4d__0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f7d0840__0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_0_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__B_in = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__sless = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgRegularize_hba31148f_0_3 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[__Vi0] = 0;
    }
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_read_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_write_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__LSFR_in = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__i_LSU__DOT__random_delay = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mvendorid = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__i_Csr__DOT__marchid = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__random_delay = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__random_delay = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Uart__DOT__wready_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
