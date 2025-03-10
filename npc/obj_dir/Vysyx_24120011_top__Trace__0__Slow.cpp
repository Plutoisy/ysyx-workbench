// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120011_top__Syms.h"


VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_init_sub__TOP__0(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24120011_top ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+1,"dnpc", false,-1, 31,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+5,"func3", false,-1, 2,0);
    tracep->declBus(c+6,"func7", false,-1, 6,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+8,"wdata", false,-1, 31,0);
    tracep->declBus(c+287,"rdata", false,-1, 31,0);
    tracep->declBus(c+9,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+10,"src1", false,-1, 31,0);
    tracep->declBus(c+11,"src2", false,-1, 31,0);
    tracep->declBus(c+12,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+13,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+14,"ALUB", false,-1, 31,0);
    tracep->declBus(c+15,"alu_result", false,-1, 31,0);
    tracep->declBus(c+16,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+17,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+18,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+19,"w_en", false,-1);
    tracep->declBit(c+20,"w_mem_en", false,-1);
    tracep->declBit(c+21,"r_mem_en", false,-1);
    tracep->declBit(c+22,"sign_extension", false,-1);
    tracep->declBit(c+23,"b_type_enter_if", false,-1);
    tracep->declBus(c+24,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+25,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+26,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+27,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+28,"a0", false,-1, 31,0);
    tracep->declBus(c+29,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+30,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+31,"w_csr_en", false,-1);
    tracep->declBit(c+32,"r_csr_en", false,-1);
    tracep->declBit(c+33,"w_csr_ecall", false,-1);
    tracep->declBus(c+34,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+35,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+36,"pc", false,-1, 31,0);
    tracep->declBus(c+37,"inst", false,-1, 31,0);
    tracep->declBit(c+38,"IFU_valid", false,-1);
    tracep->declBit(c+39,"LSU_valid", false,-1);
    tracep->declBit(c+40,"LSU_ready", false,-1);
    tracep->declBus(c+41,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+36,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+42,"M0_arvalid", false,-1);
    tracep->declBit(c+43,"M0_arready", false,-1);
    tracep->declBus(c+288,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+289,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+290,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+44,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+45,"M0_rvalid", false,-1);
    tracep->declBit(c+38,"M0_rready", false,-1);
    tracep->declBit(c+46,"M0_rlast", false,-1);
    tracep->declBus(c+288,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+292,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+293,"M0_awvalid", false,-1);
    tracep->declBit(c+47,"M0_awready", false,-1);
    tracep->declBus(c+288,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+289,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+294,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+292,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+295,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+293,"M0_wvalid", false,-1);
    tracep->declBit(c+48,"M0_wready", false,-1);
    tracep->declBit(c+293,"M0_wlast", false,-1);
    tracep->declBus(c+291,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+49,"M0_bvalid", false,-1);
    tracep->declBit(c+296,"M0_bready", false,-1);
    tracep->declBus(c+288,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+50,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+51,"M1_arvalid", false,-1);
    tracep->declBit(c+52,"M1_arready", false,-1);
    tracep->declBus(c+288,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+289,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+54,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+55,"M1_rvalid", false,-1);
    tracep->declBit(c+56,"M1_rready", false,-1);
    tracep->declBit(c+57,"M1_rlast", false,-1);
    tracep->declBus(c+288,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+58,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+59,"M1_awvalid", false,-1);
    tracep->declBit(c+60,"M1_awready", false,-1);
    tracep->declBus(c+288,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+289,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+297,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+61,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+62,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+63,"M1_wvalid", false,-1);
    tracep->declBit(c+64,"M1_wready", false,-1);
    tracep->declBit(c+63,"M1_wlast", false,-1);
    tracep->declBus(c+291,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+65,"M1_bvalid", false,-1);
    tracep->declBit(c+66,"M1_bready", false,-1);
    tracep->declBus(c+288,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+67,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+68,"S0_arvalid", false,-1);
    tracep->declBit(c+69,"S0_arready", false,-1);
    tracep->declBus(c+288,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+289,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+70,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+71,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+72,"S0_rvalid", false,-1);
    tracep->declBit(c+73,"S0_rready", false,-1);
    tracep->declBit(c+74,"S0_rlast", false,-1);
    tracep->declBus(c+288,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+75,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+76,"S0_awvalid", false,-1);
    tracep->declBit(c+77,"S0_awready", false,-1);
    tracep->declBus(c+288,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+289,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+78,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+79,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+81,"S0_wvalid", false,-1);
    tracep->declBit(c+82,"S0_wready", false,-1);
    tracep->declBit(c+83,"S0_wlast", false,-1);
    tracep->declBus(c+291,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+84,"S0_bvalid", false,-1);
    tracep->declBit(c+85,"S0_bready", false,-1);
    tracep->declBus(c+288,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+86,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+87,"sram_arvalid", false,-1);
    tracep->declBit(c+88,"sram_arready", false,-1);
    tracep->declBus(c+288,"sram_arid", false,-1, 3,0);
    tracep->declBus(c+289,"sram_arlen", false,-1, 7,0);
    tracep->declBus(c+89,"sram_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"sram_arburst", false,-1, 1,0);
    tracep->declBus(c+90,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+91,"sram_rvalid", false,-1);
    tracep->declBit(c+92,"sram_rready", false,-1);
    tracep->declBit(c+91,"sram_rlast", false,-1);
    tracep->declBus(c+288,"sram_rid", false,-1, 3,0);
    tracep->declBus(c+93,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+94,"sram_awvalid", false,-1);
    tracep->declBit(c+95,"sram_awready", false,-1);
    tracep->declBus(c+288,"sram_awid", false,-1, 3,0);
    tracep->declBus(c+289,"sram_awlen", false,-1, 7,0);
    tracep->declBus(c+96,"sram_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"sram_awburst", false,-1, 1,0);
    tracep->declBus(c+97,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+99,"sram_wvalid", false,-1);
    tracep->declBit(c+100,"sram_wready", false,-1);
    tracep->declBit(c+101,"sram_wlast", false,-1);
    tracep->declBus(c+291,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+102,"sram_bvalid", false,-1);
    tracep->declBit(c+103,"sram_bready", false,-1);
    tracep->declBus(c+288,"sram_bid", false,-1, 3,0);
    tracep->declBus(c+104,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+105,"uart_arvalid", false,-1);
    tracep->declBit(c+106,"uart_arready", false,-1);
    tracep->declBus(c+288,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+289,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+107,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"uart_arburst", false,-1, 1,0);
    tracep->declBus(c+108,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+109,"uart_rvalid", false,-1);
    tracep->declBit(c+110,"uart_rready", false,-1);
    tracep->declBit(c+109,"uart_rlast", false,-1);
    tracep->declBus(c+288,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+111,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+112,"uart_awvalid", false,-1);
    tracep->declBit(c+113,"uart_awready", false,-1);
    tracep->declBus(c+288,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+289,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+114,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+115,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+116,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+117,"uart_wvalid", false,-1);
    tracep->declBit(c+118,"uart_wready", false,-1);
    tracep->declBit(c+119,"uart_wlast", false,-1);
    tracep->declBus(c+291,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+120,"uart_bvalid", false,-1);
    tracep->declBit(c+121,"uart_bready", false,-1);
    tracep->declBus(c+288,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+122,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+123,"clint_arvalid", false,-1);
    tracep->declBit(c+124,"clint_arready", false,-1);
    tracep->declBus(c+288,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+289,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+125,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+126,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+127,"clint_rvalid", false,-1);
    tracep->declBit(c+128,"clint_rready", false,-1);
    tracep->declBit(c+127,"clint_rlast", false,-1);
    tracep->declBus(c+288,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+129,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+130,"clint_awvalid", false,-1);
    tracep->declBit(c+131,"clint_awready", false,-1);
    tracep->declBus(c+288,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+289,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+132,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+133,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+134,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+135,"clint_wvalid", false,-1);
    tracep->declBit(c+136,"clint_wready", false,-1);
    tracep->declBit(c+137,"clint_wlast", false,-1);
    tracep->declBus(c+291,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+138,"clint_bvalid", false,-1);
    tracep->declBit(c+139,"clint_bready", false,-1);
    tracep->declBus(c+288,"clint_bid", false,-1, 3,0);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+10,"A", false,-1, 31,0);
    tracep->declBus(c+14,"B", false,-1, 31,0);
    tracep->declBus(c+26,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+15,"ALUout", false,-1, 31,0);
    tracep->declBus(c+140,"B_in", false,-1, 31,0);
    tracep->declBus(c+141,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+142,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+143,"carry", false,-1);
    tracep->declBit(c+144,"overflow", false,-1);
    tracep->declBit(c+145,"uless", false,-1);
    tracep->declBit(c+146,"sless", false,-1);
    tracep->declBit(c+147,"a_is_b", false,-1);
    tracep->declBit(c+148,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+10,"x", false,-1, 31,0);
    tracep->declBus(c+140,"y", false,-1, 31,0);
    tracep->declBus(c+142,"s", false,-1, 31,0);
    tracep->declBit(c+143,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+18,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+11,"src2", false,-1, 31,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+35,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+14,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+29,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+30,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+31,"w_csr_en", false,-1);
    tracep->declBit(c+32,"r_csr_en", false,-1);
    tracep->declBit(c+33,"w_csr_ecall", false,-1);
    tracep->declBus(c+36,"pc", false,-1, 31,0);
    tracep->declBus(c+34,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+35,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+149,"mepc", false,-1, 31,0);
    tracep->declBus(c+150,"mstatus", false,-1, 31,0);
    tracep->declBus(c+151,"mcause", false,-1, 31,0);
    tracep->declBus(c+152,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+15,"alu_result", false,-1, 31,0);
    tracep->declBus(c+10,"src1", false,-1, 31,0);
    tracep->declBus(c+27,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+34,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+36,"pc", false,-1, 31,0);
    tracep->declBus(c+37,"inst", false,-1, 31,0);
    tracep->declBit(c+38,"IFU_valid", false,-1);
    tracep->declBit(c+40,"LSU_ready", false,-1);
    tracep->declBus(c+36,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+42,"M0_arvalid", false,-1);
    tracep->declBit(c+43,"M0_arready", false,-1);
    tracep->declBus(c+288,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+289,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+290,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+44,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+45,"M0_rvalid", false,-1);
    tracep->declBit(c+38,"M0_rready", false,-1);
    tracep->declBit(c+46,"M0_rlast", false,-1);
    tracep->declBus(c+288,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+292,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+293,"M0_awvalid", false,-1);
    tracep->declBit(c+47,"M0_awready", false,-1);
    tracep->declBus(c+288,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+289,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+294,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+292,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+295,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+293,"M0_wvalid", false,-1);
    tracep->declBit(c+48,"M0_wready", false,-1);
    tracep->declBit(c+293,"M0_wlast", false,-1);
    tracep->declBus(c+291,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+49,"M0_bvalid", false,-1);
    tracep->declBit(c+296,"M0_bready", false,-1);
    tracep->declBus(c+288,"M0_bid", false,-1, 3,0);
    tracep->declBit(c+43,"arready", false,-1);
    tracep->declBus(c+291,"rresp", false,-1, 1,0);
    tracep->declBit(c+47,"awready", false,-1);
    tracep->declBit(c+48,"wready", false,-1);
    tracep->declBus(c+291,"bresp", false,-1, 1,0);
    tracep->declBit(c+49,"bvalid", false,-1);
    tracep->declBit(c+45,"rvalid", false,-1);
    tracep->declBit(c+38,"rready", false,-1);
    tracep->declBit(c+153,"rvalid_prev", false,-1);
    tracep->declBit(c+42,"arvalid", false,-1);
    tracep->declBus(c+154,"state", false,-1, 2,0);
    tracep->declBus(c+155,"next_state", false,-1, 2,0);
    tracep->declBit(c+298,"start_read_delay", false,-1);
    tracep->declBus(c+156,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+157,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+158,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+159,"random_delay", false,-1, 7,0);
    tracep->declBus(c+299,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+300,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+290,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBus(c+158,"in", false,-1, 7,0);
    tracep->declBus(c+159,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+38,"IFU_valid", false,-1);
    tracep->declBus(c+15,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+15,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+24,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+25,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+20,"w_mem_en", false,-1);
    tracep->declBit(c+21,"r_mem_en", false,-1);
    tracep->declBit(c+22,"sign_extension", false,-1);
    tracep->declBus(c+11,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+9,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+39,"LSU_valid", false,-1);
    tracep->declBit(c+40,"LSU_ready", false,-1);
    tracep->declBus(c+50,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+51,"M1_arvalid", false,-1);
    tracep->declBit(c+52,"M1_arready", false,-1);
    tracep->declBus(c+288,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+289,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+54,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+55,"M1_rvalid", false,-1);
    tracep->declBit(c+56,"M1_rready", false,-1);
    tracep->declBit(c+57,"M1_rlast", false,-1);
    tracep->declBus(c+288,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+58,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+59,"M1_awvalid", false,-1);
    tracep->declBit(c+60,"M1_awready", false,-1);
    tracep->declBus(c+288,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+289,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+297,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+61,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+62,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+63,"M1_wvalid", false,-1);
    tracep->declBit(c+64,"M1_wready", false,-1);
    tracep->declBit(c+63,"M1_wlast", false,-1);
    tracep->declBus(c+291,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+65,"M1_bvalid", false,-1);
    tracep->declBit(c+66,"M1_bready", false,-1);
    tracep->declBus(c+288,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+299,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+300,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+290,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+301,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+302,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+303,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+291,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+160,"state", false,-1, 2,0);
    tracep->declBus(c+161,"next_state", false,-1, 2,0);
    tracep->declBit(c+162,"start_read_delay", false,-1);
    tracep->declBit(c+163,"start_write_delay", false,-1);
    tracep->declBus(c+50,"araddr", false,-1, 31,0);
    tracep->declBit(c+51,"arvalid", false,-1);
    tracep->declBit(c+52,"arready", false,-1);
    tracep->declBit(c+56,"rready", false,-1);
    tracep->declBus(c+291,"rresp", false,-1, 1,0);
    tracep->declBit(c+55,"rvalid", false,-1);
    tracep->declBit(c+59,"awvalid", false,-1);
    tracep->declBit(c+60,"awready", false,-1);
    tracep->declBus(c+58,"awaddr", false,-1, 31,0);
    tracep->declBit(c+63,"wvalid", false,-1);
    tracep->declBit(c+64,"wready", false,-1);
    tracep->declBus(c+61,"wdata", false,-1, 31,0);
    tracep->declBus(c+291,"bresp", false,-1, 1,0);
    tracep->declBus(c+62,"wstrb", false,-1, 3,0);
    tracep->declBit(c+66,"bready", false,-1);
    tracep->declBus(c+54,"rdata", false,-1, 31,0);
    tracep->declBit(c+65,"bvalid", false,-1);
    tracep->declBit(c+164,"LSU_working", false,-1);
    tracep->declBus(c+165,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+166,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+167,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+168,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+169,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+170,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+171,"random_delay", false,-1, 7,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBus(c+170,"in", false,-1, 7,0);
    tracep->declBus(c+171,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+36,"pc", false,-1, 31,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+15,"alu_result", false,-1, 31,0);
    tracep->declBus(c+35,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+16,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+23,"b_type_enter_if", false,-1);
    tracep->declBus(c+12,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+13,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+1,"dnpc", false,-1, 31,0);
    tracep->declBus(c+13,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+12,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+19,"w_en", false,-1);
    tracep->declBus(c+8,"wdata", false,-1, 31,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"src1", false,-1, 31,0);
    tracep->declBus(c+11,"src2", false,-1, 31,0);
    tracep->declBus(c+28,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+172+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+204+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+12,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+13,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+15,"alu_result", false,-1, 31,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+9,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+35,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+17,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+39,"LSU_valid", false,-1);
    tracep->declBit(c+19,"w_en", false,-1);
    tracep->declBus(c+8,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+304,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+305,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 31,0);
    tracep->declBus(c+36,"dout", false,-1, 31,0);
    tracep->declBit(c+39,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+36,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+42,"M0_arvalid", false,-1);
    tracep->declBit(c+43,"M0_arready", false,-1);
    tracep->declBus(c+288,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+289,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+290,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+44,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+45,"M0_rvalid", false,-1);
    tracep->declBit(c+38,"M0_rready", false,-1);
    tracep->declBit(c+46,"M0_rlast", false,-1);
    tracep->declBus(c+288,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+292,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+293,"M0_awvalid", false,-1);
    tracep->declBit(c+47,"M0_awready", false,-1);
    tracep->declBus(c+288,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+289,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+294,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+292,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+295,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+293,"M0_wvalid", false,-1);
    tracep->declBit(c+48,"M0_wready", false,-1);
    tracep->declBit(c+293,"M0_wlast", false,-1);
    tracep->declBus(c+291,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+49,"M0_bvalid", false,-1);
    tracep->declBit(c+296,"M0_bready", false,-1);
    tracep->declBus(c+288,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+50,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+51,"M1_arvalid", false,-1);
    tracep->declBit(c+52,"M1_arready", false,-1);
    tracep->declBus(c+288,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+289,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+53,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+54,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+55,"M1_rvalid", false,-1);
    tracep->declBit(c+56,"M1_rready", false,-1);
    tracep->declBit(c+57,"M1_rlast", false,-1);
    tracep->declBus(c+288,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+58,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+59,"M1_awvalid", false,-1);
    tracep->declBit(c+60,"M1_awready", false,-1);
    tracep->declBus(c+288,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+289,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+297,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+61,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+62,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+63,"M1_wvalid", false,-1);
    tracep->declBit(c+64,"M1_wready", false,-1);
    tracep->declBit(c+63,"M1_wlast", false,-1);
    tracep->declBus(c+291,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+65,"M1_bvalid", false,-1);
    tracep->declBit(c+66,"M1_bready", false,-1);
    tracep->declBus(c+288,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+67,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+68,"S0_arvalid", false,-1);
    tracep->declBit(c+69,"S0_arready", false,-1);
    tracep->declBus(c+288,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+289,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+70,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+71,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+72,"S0_rvalid", false,-1);
    tracep->declBit(c+73,"S0_rready", false,-1);
    tracep->declBit(c+74,"S0_rlast", false,-1);
    tracep->declBus(c+288,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+75,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+76,"S0_awvalid", false,-1);
    tracep->declBit(c+77,"S0_awready", false,-1);
    tracep->declBus(c+288,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+289,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+78,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+79,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+81,"S0_wvalid", false,-1);
    tracep->declBit(c+82,"S0_wready", false,-1);
    tracep->declBit(c+83,"S0_wlast", false,-1);
    tracep->declBus(c+291,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+84,"S0_bvalid", false,-1);
    tracep->declBit(c+85,"S0_bready", false,-1);
    tracep->declBus(c+288,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+299,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+300,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+290,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+236,"read_state", false,-1, 2,0);
    tracep->declBus(c+237,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+238,"write_state", false,-1, 2,0);
    tracep->declBus(c+239,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+240,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+241,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+242,"read_done", false,-1);
    tracep->declBit(c+243,"write_done", false,-1);
    tracep->declBus(c+306,"read_choose", false,-1, 2,0);
    tracep->declBus(c+307,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Clint ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+122,"araddr", false,-1, 31,0);
    tracep->declBit(c+123,"arvalid", false,-1);
    tracep->declBit(c+124,"arready", false,-1);
    tracep->declBus(c+288,"arid", false,-1, 3,0);
    tracep->declBus(c+289,"arlen", false,-1, 7,0);
    tracep->declBus(c+125,"arsize", false,-1, 2,0);
    tracep->declBus(c+291,"arburst", false,-1, 1,0);
    tracep->declBus(c+126,"rdata", false,-1, 31,0);
    tracep->declBus(c+291,"rresp", false,-1, 1,0);
    tracep->declBit(c+127,"rvalid", false,-1);
    tracep->declBit(c+128,"rready", false,-1);
    tracep->declBit(c+127,"rlast", false,-1);
    tracep->declBus(c+288,"rid", false,-1, 3,0);
    tracep->declBus(c+129,"awaddr", false,-1, 31,0);
    tracep->declBit(c+130,"awvalid", false,-1);
    tracep->declBit(c+131,"awready", false,-1);
    tracep->declBus(c+288,"awid", false,-1, 3,0);
    tracep->declBus(c+289,"awlen", false,-1, 7,0);
    tracep->declBus(c+132,"awsize", false,-1, 2,0);
    tracep->declBus(c+291,"awburst", false,-1, 1,0);
    tracep->declBus(c+133,"wdata", false,-1, 31,0);
    tracep->declBus(c+134,"wstrb", false,-1, 3,0);
    tracep->declBit(c+135,"wvalid", false,-1);
    tracep->declBit(c+136,"wready", false,-1);
    tracep->declBit(c+137,"wlast", false,-1);
    tracep->declBus(c+291,"bresp", false,-1, 1,0);
    tracep->declBit(c+138,"bvalid", false,-1);
    tracep->declBit(c+139,"bready", false,-1);
    tracep->declBus(c+288,"bid", false,-1, 3,0);
    tracep->declBus(c+299,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+300,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+290,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+301,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+302,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+303,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+291,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+244,"state", false,-1, 2,0);
    tracep->declBus(c+245,"next_state", false,-1, 2,0);
    tracep->declBus(c+246,"addr", false,-1, 31,0);
    tracep->declBus(c+247,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+248,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+249,"pmem_readed", false,-1);
    tracep->declBit(c+250,"pmem_writed", false,-1);
    tracep->declBus(c+251,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+252,"random_delay", false,-1, 7,0);
    tracep->declBus(c+126,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+127,"rvalid_reg", false,-1);
    tracep->declBit(c+136,"wready_reg", false,-1);
    tracep->declQuad(c+253,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBus(c+251,"in", false,-1, 7,0);
    tracep->declBus(c+252,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+37,"inst", false,-1, 31,0);
    tracep->declBit(c+38,"IFU_valid", false,-1);
    tracep->declBit(c+39,"LSU_valid", false,-1);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+5,"func3", false,-1, 2,0);
    tracep->declBus(c+6,"func7", false,-1, 6,0);
    tracep->declBus(c+16,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+17,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+18,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+20,"w_mem_en", false,-1);
    tracep->declBus(c+24,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+21,"r_mem_en", false,-1);
    tracep->declBit(c+22,"sign_extension", false,-1);
    tracep->declBus(c+26,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+25,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+29,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+31,"w_csr_en", false,-1);
    tracep->declBus(c+27,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+33,"w_csr_ecall", false,-1);
    tracep->declBus(c+30,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+32,"r_csr_en", false,-1);
    tracep->declBus(c+255,"opcode", false,-1, 6,0);
    tracep->declBus(c+256,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+37,"inst", false,-1, 31,0);
    tracep->declBus(c+256,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+255,"opcode", false,-1, 6,0);
    tracep->declBus(c+256,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_SRAM ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+86,"araddr", false,-1, 31,0);
    tracep->declBit(c+87,"arvalid", false,-1);
    tracep->declBit(c+88,"arready", false,-1);
    tracep->declBus(c+288,"arid", false,-1, 3,0);
    tracep->declBus(c+289,"arlen", false,-1, 7,0);
    tracep->declBus(c+89,"arsize", false,-1, 2,0);
    tracep->declBus(c+291,"arburst", false,-1, 1,0);
    tracep->declBus(c+90,"rdata", false,-1, 31,0);
    tracep->declBus(c+291,"rresp", false,-1, 1,0);
    tracep->declBit(c+91,"rvalid", false,-1);
    tracep->declBit(c+92,"rready", false,-1);
    tracep->declBit(c+91,"rlast", false,-1);
    tracep->declBus(c+288,"rid", false,-1, 3,0);
    tracep->declBus(c+93,"awaddr", false,-1, 31,0);
    tracep->declBit(c+94,"awvalid", false,-1);
    tracep->declBit(c+95,"awready", false,-1);
    tracep->declBus(c+288,"awid", false,-1, 3,0);
    tracep->declBus(c+289,"awlen", false,-1, 7,0);
    tracep->declBus(c+96,"awsize", false,-1, 2,0);
    tracep->declBus(c+291,"awburst", false,-1, 1,0);
    tracep->declBus(c+97,"wdata", false,-1, 31,0);
    tracep->declBus(c+98,"wstrb", false,-1, 3,0);
    tracep->declBit(c+99,"wvalid", false,-1);
    tracep->declBit(c+100,"wready", false,-1);
    tracep->declBit(c+101,"wlast", false,-1);
    tracep->declBus(c+291,"bresp", false,-1, 1,0);
    tracep->declBit(c+102,"bvalid", false,-1);
    tracep->declBit(c+103,"bready", false,-1);
    tracep->declBus(c+288,"bid", false,-1, 3,0);
    tracep->declBus(c+299,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+300,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+290,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+301,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+302,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+303,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+291,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+257,"state", false,-1, 2,0);
    tracep->declBus(c+258,"next_state", false,-1, 2,0);
    tracep->declBus(c+259,"addr", false,-1, 31,0);
    tracep->declBus(c+260,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+261,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+262,"pmem_readed", false,-1);
    tracep->declBit(c+263,"pmem_writed", false,-1);
    tracep->declBus(c+264,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+265,"random_delay", false,-1, 7,0);
    tracep->declBus(c+90,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+91,"rvalid_reg", false,-1);
    tracep->declBit(c+100,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBus(c+264,"in", false,-1, 7,0);
    tracep->declBus(c+265,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Uart ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+104,"araddr", false,-1, 31,0);
    tracep->declBit(c+105,"arvalid", false,-1);
    tracep->declBit(c+106,"arready", false,-1);
    tracep->declBus(c+288,"arid", false,-1, 3,0);
    tracep->declBus(c+289,"arlen", false,-1, 7,0);
    tracep->declBus(c+107,"arsize", false,-1, 2,0);
    tracep->declBus(c+291,"arburst", false,-1, 1,0);
    tracep->declBus(c+108,"rdata", false,-1, 31,0);
    tracep->declBus(c+291,"rresp", false,-1, 1,0);
    tracep->declBit(c+109,"rvalid", false,-1);
    tracep->declBit(c+110,"rready", false,-1);
    tracep->declBit(c+109,"rlast", false,-1);
    tracep->declBus(c+288,"rid", false,-1, 3,0);
    tracep->declBus(c+111,"awaddr", false,-1, 31,0);
    tracep->declBit(c+112,"awvalid", false,-1);
    tracep->declBit(c+113,"awready", false,-1);
    tracep->declBus(c+288,"awid", false,-1, 3,0);
    tracep->declBus(c+289,"awlen", false,-1, 7,0);
    tracep->declBus(c+114,"awsize", false,-1, 2,0);
    tracep->declBus(c+291,"awburst", false,-1, 1,0);
    tracep->declBus(c+115,"wdata", false,-1, 31,0);
    tracep->declBus(c+116,"wstrb", false,-1, 3,0);
    tracep->declBit(c+117,"wvalid", false,-1);
    tracep->declBit(c+118,"wready", false,-1);
    tracep->declBit(c+119,"wlast", false,-1);
    tracep->declBus(c+291,"bresp", false,-1, 1,0);
    tracep->declBit(c+120,"bvalid", false,-1);
    tracep->declBit(c+121,"bready", false,-1);
    tracep->declBus(c+288,"bid", false,-1, 3,0);
    tracep->declBus(c+299,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+300,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+290,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+301,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+302,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+303,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+291,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+266,"state", false,-1, 2,0);
    tracep->declBus(c+267,"next_state", false,-1, 2,0);
    tracep->declBus(c+268,"addr", false,-1, 31,0);
    tracep->declBus(c+269,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+270,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+271,"pmem_readed", false,-1);
    tracep->declBit(c+272,"pmem_writed", false,-1);
    tracep->declBus(c+273,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+274,"random_delay", false,-1, 7,0);
    tracep->declBus(c+108,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+109,"rvalid_reg", false,-1);
    tracep->declBit(c+118,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBus(c+273,"in", false,-1, 7,0);
    tracep->declBus(c+274,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+67,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+68,"Xbar_arvalid", false,-1);
    tracep->declBit(c+69,"Xbar_arready", false,-1);
    tracep->declBus(c+288,"Xbar_arid", false,-1, 3,0);
    tracep->declBus(c+289,"Xbar_arlen", false,-1, 7,0);
    tracep->declBus(c+70,"Xbar_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"Xbar_arburst", false,-1, 1,0);
    tracep->declBus(c+71,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+72,"Xbar_rvalid", false,-1);
    tracep->declBit(c+73,"Xbar_rready", false,-1);
    tracep->declBit(c+74,"Xbar_rlast", false,-1);
    tracep->declBus(c+288,"Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+75,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+76,"Xbar_awvalid", false,-1);
    tracep->declBit(c+77,"Xbar_awready", false,-1);
    tracep->declBus(c+288,"Xbar_awid", false,-1, 3,0);
    tracep->declBus(c+289,"Xbar_awlen", false,-1, 7,0);
    tracep->declBus(c+78,"Xbar_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"Xbar_awburst", false,-1, 1,0);
    tracep->declBus(c+79,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+81,"Xbar_wvalid", false,-1);
    tracep->declBit(c+82,"Xbar_wready", false,-1);
    tracep->declBit(c+83,"Xbar_wlast", false,-1);
    tracep->declBus(c+291,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+84,"Xbar_bvalid", false,-1);
    tracep->declBit(c+85,"Xbar_bready", false,-1);
    tracep->declBus(c+288,"Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+86,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+87,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+88,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+288,"Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+289,"Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+89,"Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+90,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+91,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+92,"Xbar_S0_rready", false,-1);
    tracep->declBit(c+91,"Xbar_S0_rlast", false,-1);
    tracep->declBus(c+288,"Xbar_S0_rid", false,-1, 3,0);
    tracep->declBus(c+93,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+94,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+95,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+288,"Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+289,"Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+96,"Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBus(c+97,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+99,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+100,"Xbar_S0_wready", false,-1);
    tracep->declBit(c+101,"Xbar_S0_wlast", false,-1);
    tracep->declBus(c+291,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+102,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+103,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+288,"Xbar_S0_bid", false,-1, 3,0);
    tracep->declBus(c+104,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+105,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+106,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+288,"Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+289,"Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+107,"Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+108,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+109,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+110,"Xbar_S1_rready", false,-1);
    tracep->declBit(c+109,"Xbar_S1_rlast", false,-1);
    tracep->declBus(c+288,"Xbar_S1_rid", false,-1, 3,0);
    tracep->declBus(c+111,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+112,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+113,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+288,"Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+289,"Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+114,"Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBus(c+115,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+116,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+117,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+118,"Xbar_S1_wready", false,-1);
    tracep->declBit(c+119,"Xbar_S1_wlast", false,-1);
    tracep->declBus(c+291,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+120,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+121,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+288,"Xbar_S1_bid", false,-1, 3,0);
    tracep->declBus(c+122,"Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+123,"Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+124,"Xbar_S2_arready", false,-1);
    tracep->declBus(c+288,"Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+289,"Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+125,"Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+126,"Xbar_S2_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"Xbar_S2_rresp", false,-1, 1,0);
    tracep->declBit(c+127,"Xbar_S2_rvalid", false,-1);
    tracep->declBit(c+128,"Xbar_S2_rready", false,-1);
    tracep->declBit(c+127,"Xbar_S2_rlast", false,-1);
    tracep->declBus(c+288,"Xbar_S2_rid", false,-1, 3,0);
    tracep->declBus(c+129,"Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+130,"Xbar_S2_awvalid", false,-1);
    tracep->declBit(c+131,"Xbar_S2_awready", false,-1);
    tracep->declBus(c+288,"Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+289,"Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+132,"Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBus(c+133,"Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+134,"Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+135,"Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+136,"Xbar_S2_wready", false,-1);
    tracep->declBit(c+137,"Xbar_S2_wlast", false,-1);
    tracep->declBus(c+291,"Xbar_S2_bresp", false,-1, 1,0);
    tracep->declBit(c+138,"Xbar_S2_bvalid", false,-1);
    tracep->declBit(c+139,"Xbar_S2_bready", false,-1);
    tracep->declBus(c+288,"Xbar_S2_bid", false,-1, 3,0);
    tracep->declBus(c+299,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+300,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+290,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+301,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBus(c+275,"r_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+276,"r_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+277,"w_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+278,"w_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+71,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+291,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+72,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+77,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+82,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+291,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+84,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+69,"reg_Xbar_arready", false,-1);
    tracep->declBit(c+74,"reg_Xbar_rlast", false,-1);
    tracep->declBus(c+288,"reg_Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+288,"reg_Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+86,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+87,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+92,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+93,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+94,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBus(c+97,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+98,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+99,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+103,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+288,"reg_Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+289,"reg_Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+89,"reg_Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"reg_Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+288,"reg_Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+289,"reg_Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+96,"reg_Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"reg_Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBit(c+101,"reg_Xbar_S0_wlast", false,-1);
    tracep->declBus(c+104,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+105,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+110,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+111,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+112,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+115,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+116,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+117,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+121,"reg_Xbar_S1_bready", false,-1);
    tracep->declBus(c+288,"reg_Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+289,"reg_Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+107,"reg_Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"reg_Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+288,"reg_Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+289,"reg_Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+114,"reg_Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"reg_Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBit(c+119,"reg_Xbar_S1_wlast", false,-1);
    tracep->declBus(c+122,"reg_Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+123,"reg_Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+128,"reg_Xbar_S2_rready", false,-1);
    tracep->declBus(c+129,"reg_Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+130,"reg_Xbar_S2_awvalid", false,-1);
    tracep->declBus(c+133,"reg_Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+134,"reg_Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+135,"reg_Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+139,"reg_Xbar_S2_bready", false,-1);
    tracep->declBus(c+288,"reg_Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+289,"reg_Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+125,"reg_Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+291,"reg_Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+288,"reg_Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+289,"reg_Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+132,"reg_Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+291,"reg_Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBit(c+137,"reg_Xbar_S2_wlast", false,-1);
    tracep->declBit(c+279,"read_S0_done", false,-1);
    tracep->declBit(c+280,"write_S0_done", false,-1);
    tracep->declBit(c+281,"read_S1_done", false,-1);
    tracep->declBit(c+282,"write_S1_done", false,-1);
    tracep->declBit(c+283,"read_S2_done", false,-1);
    tracep->declBit(c+284,"write_S2_done", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_init_top(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_24120011_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120011_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120011_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_register(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24120011_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24120011_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24120011_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_full_sub_0(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24120011_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011_top___024root*>(voidSelf);
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24120011_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24120011_top___024root__trace_full_sub_0(Vysyx_24120011_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                              ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                  ? vlSelf->ysyx_24120011_top__DOT__r_csr_data
                                  : vlSelf->ysyx_24120011_top__DOT__alu_result)
                              : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
                                  ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                  : (((0x63U == (0x7fU 
                                                 & vlSelf->ysyx_24120011_top__DOT__inst)) 
                                      & vlSelf->ysyx_24120011_top__DOT__alu_result)
                                      ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                      : ((IData)(4U) 
                                         + vlSelf->ysyx_24120011_top__DOT__pc))))),32);
    bufp->fullCData(oldp+2,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                      >> 7U))),5);
    bufp->fullCData(oldp+5,((7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+6,((vlSelf->ysyx_24120011_top__DOT__inst 
                             >> 0x19U)),7);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_24120011_top__DOT__imme),32);
    bufp->fullIData(oldp+8,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                              ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                       ? ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                           ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                               ? 0U
                                               : vlSelf->ysyx_24120011_top__DOT__r_csr_data)
                                           : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                               ? vlSelf->ysyx_24120011_top__DOT__r_mem_data
                                               : 0U))
                                       : ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                           ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                               ? vlSelf->ysyx_24120011_top__DOT__imme
                                               : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                           : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                               ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                               : ((IData)(4U) 
                                                  + vlSelf->ysyx_24120011_top__DOT__pc)))))),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24120011_top__DOT__src1),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24120011_top__DOT__src2),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
    bufp->fullIData(oldp+13,(((IData)(4U) + vlSelf->ysyx_24120011_top__DOT__pc)),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24120011_top__DOT__ALUB),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_24120011_top__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+19,(((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_valid) 
                            & (4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl)))));
    bufp->fullBit(oldp+20,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
    bufp->fullBit(oldp+22,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
    bufp->fullBit(oldp+23,(((0x63U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
                            & vlSelf->ysyx_24120011_top__DOT__alu_result)));
    bufp->fullCData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__w_mem_len),8);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl),4);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [0xaU]),32);
    bufp->fullSData(oldp+29,(vlSelf->ysyx_24120011_top__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+30,(vlSelf->ysyx_24120011_top__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+31,(vlSelf->ysyx_24120011_top__DOT__w_csr_en));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_24120011_top__DOT__r_csr_en));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_24120011_top__DOT__w_csr_ecall));
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24120011_top__DOT__w_csr_data),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24120011_top__DOT__r_csr_data),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24120011_top__DOT__pc),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24120011_top__DOT__inst),32);
    bufp->fullBit(oldp+38,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_24120011_top__DOT__LSU_valid));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_24120011_top__DOT__LSU_ready));
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24120011_top__DOT__LSU_valid),32);
    bufp->fullBit(oldp+42,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+43,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24120011_top__DOT__M0_rdata),32);
    bufp->fullBit(oldp+45,(vlSelf->ysyx_24120011_top__DOT__M0_rvalid));
    bufp->fullBit(oldp+46,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                   : (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                               : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg)))))));
    bufp->fullBit(oldp+47,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                                   : 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))
                                               : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (3U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))))))));
    bufp->fullBit(oldp+48,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)
                                               : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)))))));
    bufp->fullBit(oldp+49,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullIData(oldp+50,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+52,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullCData(oldp+53,(((IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid)
                               ? 2U : ((1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len))))) 
                                       | (2U & (- (IData)(
                                                          (4U 
                                                           == (IData)(vlSelf->ysyx_24120011_top__DOT__r_mem_len)))))))),3);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24120011_top__DOT__M1_rdata),32);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_24120011_top__DOT__M1_rvalid));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready));
    bufp->fullBit(oldp+57,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                   : (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                               : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                  & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg)))))));
    bufp->fullIData(oldp+58,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+60,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                                   : 
                                                  (3U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))
                                               : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                  & (3U 
                                                     == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))))))));
    bufp->fullIData(oldp+61,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__src2
                               : 0U)),32);
    bufp->fullCData(oldp+62,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                               ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                          ? 3U : 1U))),4);
    bufp->fullBit(oldp+63,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_24120011_top__DOT__M1_wready));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_24120011_top__DOT__M1_bvalid));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready));
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24120011_top__DOT__S0_araddr),32);
    bufp->fullBit(oldp+68,(vlSelf->ysyx_24120011_top__DOT__S0_arvalid));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullCData(oldp+70,(vlSelf->ysyx_24120011_top__DOT__S0_arsize),3);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+72,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_24120011_top__DOT__S0_rready));
    bufp->fullBit(oldp+74,(((~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                : (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg))
                                            : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                               & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg))))));
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24120011_top__DOT__S0_awaddr),32);
    bufp->fullBit(oldp+76,(vlSelf->ysyx_24120011_top__DOT__S0_awvalid));
    bufp->fullBit(oldp+77,(((~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (3U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                                : (3U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))
                                            : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                               & (3U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))))));
    bufp->fullCData(oldp+78,(vlSelf->ysyx_24120011_top__DOT__S0_awsize),3);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120011_top__DOT__S0_wdata),32);
    bufp->fullCData(oldp+80,(vlSelf->ysyx_24120011_top__DOT__S0_wstrb),4);
    bufp->fullBit(oldp+81,(vlSelf->ysyx_24120011_top__DOT__S0_wvalid));
    bufp->fullBit(oldp+82,(((~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                            ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)
                                            : ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                               & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg))))));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_24120011_top__DOT__S0_wlast));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_24120011_top__DOT__S0_bready));
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullBit(oldp+87,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullBit(oldp+88,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullCData(oldp+89,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg),32);
    bufp->fullBit(oldp+91,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
    bufp->fullBit(oldp+94,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullBit(oldp+95,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullCData(oldp+96,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
    bufp->fullCData(oldp+98,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
    bufp->fullBit(oldp+99,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
    bufp->fullBit(oldp+102,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
    bufp->fullBit(oldp+105,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullBit(oldp+106,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullCData(oldp+107,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg),32);
    bufp->fullBit(oldp+109,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullBit(oldp+113,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullCData(oldp+114,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
    bufp->fullCData(oldp+116,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
    bufp->fullBit(oldp+117,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
    bufp->fullBit(oldp+120,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullIData(oldp+122,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
    bufp->fullBit(oldp+123,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
    bufp->fullBit(oldp+124,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullCData(oldp+125,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize),3);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
    bufp->fullBit(oldp+127,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
    bufp->fullBit(oldp+128,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
    bufp->fullIData(oldp+129,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
    bufp->fullBit(oldp+130,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
    bufp->fullBit(oldp+131,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullCData(oldp+132,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize),3);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
    bufp->fullCData(oldp+134,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
    bufp->fullBit(oldp+135,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
    bufp->fullBit(oldp+138,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    bufp->fullIData(oldp+140,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+141,(((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                : vlSelf->ysyx_24120011_top__DOT__ALUB)),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+143,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+144,((((vlSelf->ysyx_24120011_top__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                               ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+145,((1U & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+146,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+147,((vlSelf->ysyx_24120011_top__DOT__src1 
                             == vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullBit(oldp+148,((vlSelf->ysyx_24120011_top__DOT__src1 
                             != vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullBit(oldp+153,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+154,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+155,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+156,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+157,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+158,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+159,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+160,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state),3);
    bufp->fullCData(oldp+161,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state),3);
    bufp->fullBit(oldp+162,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+164,((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+165,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+166,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+167,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+168,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+169,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+170,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+171,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+236,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+237,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+238,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+239,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullCData(oldp+240,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+241,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullBit(oldp+242,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+243,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+244,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state),3);
    bufp->fullCData(oldp+245,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
    bufp->fullCData(oldp+247,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+248,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+249,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
    bufp->fullBit(oldp+250,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
    bufp->fullCData(oldp+251,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
    bufp->fullCData(oldp+252,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
    bufp->fullQData(oldp+253,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
    bufp->fullCData(oldp+255,((0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)),7);
    bufp->fullCData(oldp+256,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullCData(oldp+257,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state),3);
    bufp->fullCData(oldp+258,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state),3);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr),32);
    bufp->fullCData(oldp+260,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+261,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+262,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed));
    bufp->fullBit(oldp+263,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed));
    bufp->fullCData(oldp+264,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in),8);
    bufp->fullCData(oldp+265,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay),8);
    bufp->fullCData(oldp+266,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state),3);
    bufp->fullCData(oldp+267,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state),3);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr),32);
    bufp->fullCData(oldp+269,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+270,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+271,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed));
    bufp->fullBit(oldp+272,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed));
    bufp->fullCData(oldp+273,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in),8);
    bufp->fullCData(oldp+274,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay),8);
    bufp->fullCData(oldp+275,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
    bufp->fullCData(oldp+276,(((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                                                 ? 0U
                                                 : 3U)
                                             : (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                 ? 0U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                                                 ? 0U
                                                 : 1U)
                                             : ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_arvalid)
                                                 ? 
                                                (((0xa0000048U 
                                                   == vlSelf->ysyx_24120011_top__DOT__S0_araddr) 
                                                  | (0xa000004cU 
                                                     == vlSelf->ysyx_24120011_top__DOT__S0_araddr))
                                                  ? 3U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullCData(oldp+277,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
    bufp->fullCData(oldp+278,(((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (((5U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                                                 ? 0U
                                                 : 3U)
                                             : (((5U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                                 ? 0U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (((5U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                                                 & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                                 ? 0U
                                                 : 1U)
                                             : ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_awvalid)
                                                 ? 
                                                ((0xa00003f8U 
                                                  == vlSelf->ysyx_24120011_top__DOT__S0_awaddr)
                                                  ? 2U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullBit(oldp+279,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+280,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullBit(oldp+281,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+282,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+283,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
    bufp->fullBit(oldp+284,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    bufp->fullBit(oldp+285,(vlSelf->clk));
    bufp->fullBit(oldp+286,(vlSelf->rst));
    bufp->fullIData(oldp+287,(vlSelf->ysyx_24120011_top__DOT__rdata),32);
    bufp->fullCData(oldp+288,(0U),4);
    bufp->fullCData(oldp+289,(0U),8);
    bufp->fullCData(oldp+290,(2U),3);
    bufp->fullCData(oldp+291,(0U),2);
    bufp->fullIData(oldp+292,(0U),32);
    bufp->fullBit(oldp+293,(0U));
    bufp->fullCData(oldp+294,(vlSelf->ysyx_24120011_top__DOT__M0_awsize),3);
    bufp->fullCData(oldp+295,(0xfU),4);
    bufp->fullBit(oldp+296,(1U));
    bufp->fullCData(oldp+297,(vlSelf->ysyx_24120011_top__DOT__M1_awsize),3);
    bufp->fullBit(oldp+298,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+299,(0U),3);
    bufp->fullCData(oldp+300,(1U),3);
    bufp->fullCData(oldp+301,(3U),3);
    bufp->fullCData(oldp+302,(4U),3);
    bufp->fullCData(oldp+303,(5U),3);
    bufp->fullIData(oldp+304,(0x20U),32);
    bufp->fullIData(oldp+305,(0x80000000U),32);
    bufp->fullCData(oldp+306,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+307,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
}
