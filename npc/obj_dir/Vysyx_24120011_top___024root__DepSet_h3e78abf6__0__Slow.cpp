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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24120011_top___024root___stl_sequent__TOP__0(Vysyx_24120011_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24120011_top___024root___eval_stl(Vysyx_24120011_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24120011_top___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
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
    vlSelf->ysyx_24120011_top__DOT__LSU_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__LSU_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_delay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__read_delay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__write_delay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__u_SRAM__DOT__write_delay_cnt = VL_RAND_RESET_I(32);
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
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_delay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__read_delay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__write_delay = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__u_SRAM__DOT__write_delay_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
