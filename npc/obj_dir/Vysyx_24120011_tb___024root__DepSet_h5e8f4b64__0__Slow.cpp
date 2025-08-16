// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24120011_tb.h for the primary calling header

#include "Vysyx_24120011_tb__pch.h"
#include "Vysyx_24120011_tb___024root.h"

VL_ATTR_COLD void Vysyx_24120011_tb___024root___eval_static(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___eval_static\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vysyx_24120011_tb___024root___eval_initial__TOP(Vysyx_24120011_tb___024root* vlSelf);
VL_ATTR_COLD void Vysyx_24120011_tb___024root____Vm_traceActivitySetAll(Vysyx_24120011_tb___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120011_tb___024root___eval_initial(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___eval_initial\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_24120011_tb___024root___eval_initial__TOP(vlSelf);
    Vysyx_24120011_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vysyx_24120011_tb___024root___eval_initial__TOP(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___eval_initial__TOP\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((! VL_VALUEPLUSARGS_INN(64, std::string{"IMG=%s"}, 
                                             vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__unnamedblk1__DOT__img_file))))) {
        VL_WRITEF_NX("Error: IMG not provided.\n",0);
        VL_FINISH_MT("/home/plutoisy/ysyx-workbench/npc/npc_specific/ysyx_24120011_SRAMUART.v", 80, "");
    }
    VL_READMEM_N(true, 8, 67108864, 0, VL_CVT_PACK_STR_NN(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__unnamedblk1__DOT__img_file)
                 ,  &(vlSelfRef.ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram)
                 , 0U, 0x3ffffffU);
}

VL_ATTR_COLD void Vysyx_24120011_tb___024root___eval_final(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___eval_final\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_tb___024root___dump_triggers__stl(Vysyx_24120011_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_24120011_tb___024root___eval_phase__stl(Vysyx_24120011_tb___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120011_tb___024root___eval_settle(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___eval_settle\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vysyx_24120011_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/plutoisy/ysyx-workbench/npc/npc_specific/ysyx_24120011_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_24120011_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_tb___024root___dump_triggers__stl(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___dump_triggers__stl\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vysyx_24120011_tb___024root___stl_sequent__TOP__0(Vysyx_24120011_tb___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120011_tb___024root___eval_stl(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___eval_stl\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_24120011_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_24120011_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vysyx_24120011_tb___024root___eval_triggers__stl(Vysyx_24120011_tb___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_24120011_tb___024root___eval_phase__stl(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___eval_phase__stl\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_24120011_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_24120011_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24120011_tb___024root___dump_triggers__act(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___dump_triggers__act\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vysyx_24120011_tb___024root___dump_triggers__nba(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___dump_triggers__nba\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vysyx_24120011_tb___024root____Vm_traceActivitySetAll(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vysyx_24120011_tb___024root___ctor_var_reset(Vysyx_24120011_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_tb___024root___ctor_var_reset\n"); );
    Vysyx_24120011_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_interrupt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_bid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__io_slave_rid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M0_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__M1_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__S0_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid_rising_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__LSU_rready_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__LSU_rready_rising_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid_rising_edge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__PC_IFU_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__PC_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__PC_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFID_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFU_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFID_IDU_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFID_IDU_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IFID_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDU_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_pc_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_ALU_ctrl = VL_RAND_RESET_I(6);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_mem_ctrl = VL_RAND_RESET_I(19);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_csr_ctrl = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_r_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_EXU_w_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__IDEX_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_csr_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_r_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXU_MEM_rd_data_type = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_mem_ctrl = VL_RAND_RESET_I(19);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_csr_ctrl = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_r_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_w_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_MEM_ALU_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__EXMEM_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_r_mem_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_csr_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_r_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_ALU_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEM_WBU_rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_r_mem_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_csr_ctrl = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_r_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_rd = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_w_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_WBU_ALU_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__MEMWB_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__WBU_rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_stop_pipe = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_r_ddata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_rs1_or_rs2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__DATAHAZARD_IDU_bypass = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__flushing = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__miss_counter = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cache_IFU_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(94, vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__icache);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__inst_cache = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__cached_size = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT__rready_delay = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IFU__DOT____Vlvbound_ha0981349__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__ALU_ctrl = VL_RAND_RESET_I(6);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__mem_ctrl = VL_RAND_RESET_I(7);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__r_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__w_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__csr_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f454d46__0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f76f74c__0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgExtracted_h8f6b4f39__0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT____VdfgRegularize_hbb60b87e_1_3 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__miss_counter_branch = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__all_counter_branch = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_ctrl = VL_RAND_RESET_I(6);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__mem_ctrl = VL_RAND_RESET_I(7);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__csr_ctrl = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__r_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__w_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALU_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__B_in = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__ALUout_tmp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__sless = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__npc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_EXU__DOT____VdfgRegularize_he4da4b0f_3_1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__mem_ctrl = VL_RAND_RESET_I(7);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__ALU_result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__r_mem_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rd_data_type = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__w_csr_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__wdata_format = VL_RAND_RESET_I(6);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__rdata_mask = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_MEM__DOT__LSU_working_delay = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__GPRs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_GPR__DOT__regout[__Vi0] = 0;
    }
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_CSR__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_exu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT__hazard_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_0 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_data_hazard_detection__DOT____VdfgRegularize_h570457f4_0_1 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_master = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__choose = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 67108864; ++__Vi0) {
        vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__sram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_tb__DOT__u_ysyx_24120011_SRAMUART__DOT__wready_reg = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_2_2 = VL_RAND_RESET_I(32);
    vlSelf->__VdfgRegularize_hd87f99a1_2_3 = VL_RAND_RESET_I(32);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtableidx5 = 0;
    vlSelf->__Vtableidx6 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
