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
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24120011_top ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBus(c+7,"dnpc", false,-1, 31,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+11,"func3", false,-1, 2,0);
    tracep->declBus(c+12,"func7", false,-1, 6,0);
    tracep->declBus(c+13,"imme", false,-1, 31,0);
    tracep->declBus(c+14,"wdata", false,-1, 31,0);
    tracep->declBus(c+271,"rdata", false,-1, 31,0);
    tracep->declBus(c+15,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+16,"src1", false,-1, 31,0);
    tracep->declBus(c+17,"src2", false,-1, 31,0);
    tracep->declBus(c+18,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+19,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+20,"ALUB", false,-1, 31,0);
    tracep->declBus(c+21,"alu_result", false,-1, 31,0);
    tracep->declBus(c+22,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+23,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+24,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+25,"w_en", false,-1);
    tracep->declBit(c+26,"w_mem_en", false,-1);
    tracep->declBit(c+27,"r_mem_en", false,-1);
    tracep->declBit(c+28,"sign_extension", false,-1);
    tracep->declBit(c+29,"b_type_enter_if", false,-1);
    tracep->declBus(c+30,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+31,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+32,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+33,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+34,"a0", false,-1, 31,0);
    tracep->declBus(c+35,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+36,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+37,"w_csr_en", false,-1);
    tracep->declBit(c+38,"r_csr_en", false,-1);
    tracep->declBit(c+39,"w_csr_ecall", false,-1);
    tracep->declBus(c+40,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+41,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBit(c+44,"IFU_valid", false,-1);
    tracep->declBit(c+45,"LSU_valid", false,-1);
    tracep->declBit(c+46,"LSU_ready", false,-1);
    tracep->declBus(c+47,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+42,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+48,"M0_arvalid", false,-1);
    tracep->declBit(c+49,"M0_arready", false,-1);
    tracep->declBus(c+50,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+51,"M0_rvalid", false,-1);
    tracep->declBit(c+44,"M0_rready", false,-1);
    tracep->declBus(c+273,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+274,"M0_awvalid", false,-1);
    tracep->declBit(c+52,"M0_awready", false,-1);
    tracep->declBus(c+273,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+275,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+274,"M0_wvalid", false,-1);
    tracep->declBit(c+53,"M0_wready", false,-1);
    tracep->declBus(c+272,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+54,"M0_bvalid", false,-1);
    tracep->declBit(c+276,"M0_bready", false,-1);
    tracep->declBus(c+55,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+56,"M1_arvalid", false,-1);
    tracep->declBit(c+57,"M1_arready", false,-1);
    tracep->declBus(c+58,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+59,"M1_rvalid", false,-1);
    tracep->declBit(c+60,"M1_rready", false,-1);
    tracep->declBus(c+61,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+62,"M1_awvalid", false,-1);
    tracep->declBit(c+63,"M1_awready", false,-1);
    tracep->declBus(c+64,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+65,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+66,"M1_wvalid", false,-1);
    tracep->declBit(c+67,"M1_wready", false,-1);
    tracep->declBus(c+272,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+68,"M1_bvalid", false,-1);
    tracep->declBit(c+69,"M1_bready", false,-1);
    tracep->declBus(c+70,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+71,"S0_arvalid", false,-1);
    tracep->declBit(c+72,"S0_arready", false,-1);
    tracep->declBus(c+73,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+74,"S0_rvalid", false,-1);
    tracep->declBit(c+75,"S0_rready", false,-1);
    tracep->declBus(c+76,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+77,"S0_awvalid", false,-1);
    tracep->declBit(c+78,"S0_awready", false,-1);
    tracep->declBus(c+79,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+81,"S0_wvalid", false,-1);
    tracep->declBit(c+82,"S0_wready", false,-1);
    tracep->declBus(c+272,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+83,"S0_bvalid", false,-1);
    tracep->declBit(c+84,"S0_bready", false,-1);
    tracep->declBus(c+85,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+86,"sram_arvalid", false,-1);
    tracep->declBit(c+87,"sram_arready", false,-1);
    tracep->declBus(c+88,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+89,"sram_rvalid", false,-1);
    tracep->declBit(c+90,"sram_rready", false,-1);
    tracep->declBus(c+91,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+92,"sram_awvalid", false,-1);
    tracep->declBit(c+93,"sram_awready", false,-1);
    tracep->declBus(c+94,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+95,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+96,"sram_wvalid", false,-1);
    tracep->declBit(c+97,"sram_wready", false,-1);
    tracep->declBus(c+272,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+98,"sram_bvalid", false,-1);
    tracep->declBit(c+99,"sram_bready", false,-1);
    tracep->declBus(c+100,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+101,"uart_arvalid", false,-1);
    tracep->declBit(c+102,"uart_arready", false,-1);
    tracep->declBus(c+103,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+104,"uart_rvalid", false,-1);
    tracep->declBit(c+105,"uart_rready", false,-1);
    tracep->declBus(c+106,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+107,"uart_awvalid", false,-1);
    tracep->declBit(c+108,"uart_awready", false,-1);
    tracep->declBus(c+109,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+111,"uart_wvalid", false,-1);
    tracep->declBit(c+112,"uart_wready", false,-1);
    tracep->declBus(c+272,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+113,"uart_bvalid", false,-1);
    tracep->declBit(c+114,"uart_bready", false,-1);
    tracep->declBus(c+115,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+116,"clint_arvalid", false,-1);
    tracep->declBit(c+117,"clint_arready", false,-1);
    tracep->declBus(c+118,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+119,"clint_rvalid", false,-1);
    tracep->declBit(c+120,"clint_rready", false,-1);
    tracep->declBus(c+1,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+2,"clint_awvalid", false,-1);
    tracep->declBit(c+121,"clint_awready", false,-1);
    tracep->declBus(c+3,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+4,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+5,"clint_wvalid", false,-1);
    tracep->declBit(c+122,"clint_wready", false,-1);
    tracep->declBus(c+272,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"clint_bvalid", false,-1);
    tracep->declBit(c+6,"clint_bready", false,-1);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+16,"A", false,-1, 31,0);
    tracep->declBus(c+20,"B", false,-1, 31,0);
    tracep->declBus(c+32,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+21,"ALUout", false,-1, 31,0);
    tracep->declBus(c+124,"B_in", false,-1, 31,0);
    tracep->declBus(c+125,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+126,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+127,"carry", false,-1);
    tracep->declBit(c+128,"overflow", false,-1);
    tracep->declBit(c+129,"uless", false,-1);
    tracep->declBit(c+130,"sless", false,-1);
    tracep->declBit(c+131,"a_is_b", false,-1);
    tracep->declBit(c+132,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+16,"x", false,-1, 31,0);
    tracep->declBus(c+124,"y", false,-1, 31,0);
    tracep->declBus(c+126,"s", false,-1, 31,0);
    tracep->declBit(c+127,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+24,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+17,"src2", false,-1, 31,0);
    tracep->declBus(c+13,"imme", false,-1, 31,0);
    tracep->declBus(c+41,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+20,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBus(c+35,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+36,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+37,"w_csr_en", false,-1);
    tracep->declBit(c+38,"r_csr_en", false,-1);
    tracep->declBit(c+39,"w_csr_ecall", false,-1);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+40,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+41,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+133,"mepc", false,-1, 31,0);
    tracep->declBus(c+134,"mstatus", false,-1, 31,0);
    tracep->declBus(c+135,"mcause", false,-1, 31,0);
    tracep->declBus(c+136,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+21,"alu_result", false,-1, 31,0);
    tracep->declBus(c+16,"src1", false,-1, 31,0);
    tracep->declBus(c+33,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+40,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBit(c+44,"IFU_valid", false,-1);
    tracep->declBit(c+46,"LSU_ready", false,-1);
    tracep->declBus(c+42,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+48,"M0_arvalid", false,-1);
    tracep->declBit(c+49,"M0_arready", false,-1);
    tracep->declBus(c+50,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+51,"M0_rvalid", false,-1);
    tracep->declBit(c+44,"M0_rready", false,-1);
    tracep->declBus(c+273,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+274,"M0_awvalid", false,-1);
    tracep->declBit(c+52,"M0_awready", false,-1);
    tracep->declBus(c+273,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+275,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+274,"M0_wvalid", false,-1);
    tracep->declBit(c+53,"M0_wready", false,-1);
    tracep->declBus(c+272,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+54,"M0_bvalid", false,-1);
    tracep->declBit(c+276,"M0_bready", false,-1);
    tracep->declBit(c+49,"arready", false,-1);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+52,"awready", false,-1);
    tracep->declBit(c+53,"wready", false,-1);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBit(c+54,"bvalid", false,-1);
    tracep->declBit(c+51,"rvalid", false,-1);
    tracep->declBit(c+44,"rready", false,-1);
    tracep->declBit(c+137,"rvalid_prev", false,-1);
    tracep->declBit(c+48,"arvalid", false,-1);
    tracep->declBus(c+138,"state", false,-1, 2,0);
    tracep->declBus(c+139,"next_state", false,-1, 2,0);
    tracep->declBit(c+277,"start_read_delay", false,-1);
    tracep->declBus(c+140,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+141,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+142,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+143,"random_delay", false,-1, 7,0);
    tracep->declBus(c+278,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+279,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+280,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBus(c+142,"in", false,-1, 7,0);
    tracep->declBus(c+143,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBit(c+44,"IFU_valid", false,-1);
    tracep->declBus(c+21,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+21,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+30,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+31,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+26,"w_mem_en", false,-1);
    tracep->declBit(c+27,"r_mem_en", false,-1);
    tracep->declBit(c+28,"sign_extension", false,-1);
    tracep->declBus(c+17,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+15,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+45,"LSU_valid", false,-1);
    tracep->declBit(c+46,"LSU_ready", false,-1);
    tracep->declBus(c+55,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+56,"M1_arvalid", false,-1);
    tracep->declBit(c+57,"M1_arready", false,-1);
    tracep->declBus(c+58,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+59,"M1_rvalid", false,-1);
    tracep->declBit(c+60,"M1_rready", false,-1);
    tracep->declBus(c+61,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+62,"M1_awvalid", false,-1);
    tracep->declBit(c+63,"M1_awready", false,-1);
    tracep->declBus(c+64,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+65,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+66,"M1_wvalid", false,-1);
    tracep->declBit(c+67,"M1_wready", false,-1);
    tracep->declBus(c+272,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+68,"M1_bvalid", false,-1);
    tracep->declBit(c+69,"M1_bready", false,-1);
    tracep->declBus(c+278,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+279,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+280,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+283,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+272,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+144,"state", false,-1, 2,0);
    tracep->declBus(c+145,"next_state", false,-1, 2,0);
    tracep->declBit(c+146,"start_read_delay", false,-1);
    tracep->declBit(c+147,"start_write_delay", false,-1);
    tracep->declBus(c+55,"araddr", false,-1, 31,0);
    tracep->declBit(c+56,"arvalid", false,-1);
    tracep->declBit(c+57,"arready", false,-1);
    tracep->declBit(c+60,"rready", false,-1);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+59,"rvalid", false,-1);
    tracep->declBit(c+62,"awvalid", false,-1);
    tracep->declBit(c+63,"awready", false,-1);
    tracep->declBus(c+61,"awaddr", false,-1, 31,0);
    tracep->declBit(c+66,"wvalid", false,-1);
    tracep->declBit(c+67,"wready", false,-1);
    tracep->declBus(c+64,"wdata", false,-1, 31,0);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBus(c+65,"wstrb", false,-1, 3,0);
    tracep->declBit(c+69,"bready", false,-1);
    tracep->declBus(c+58,"rdata", false,-1, 31,0);
    tracep->declBit(c+68,"bvalid", false,-1);
    tracep->declBit(c+148,"LSU_working", false,-1);
    tracep->declBus(c+149,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+150,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+151,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+152,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+153,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+154,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+155,"random_delay", false,-1, 7,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBus(c+154,"in", false,-1, 7,0);
    tracep->declBus(c+155,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+13,"imme", false,-1, 31,0);
    tracep->declBus(c+21,"alu_result", false,-1, 31,0);
    tracep->declBus(c+41,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+22,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+29,"b_type_enter_if", false,-1);
    tracep->declBus(c+18,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+19,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+7,"dnpc", false,-1, 31,0);
    tracep->declBus(c+19,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+18,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBit(c+25,"w_en", false,-1);
    tracep->declBus(c+14,"wdata", false,-1, 31,0);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+16,"src1", false,-1, 31,0);
    tracep->declBus(c+17,"src2", false,-1, 31,0);
    tracep->declBus(c+34,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+156+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+188+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+18,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+19,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+21,"alu_result", false,-1, 31,0);
    tracep->declBus(c+13,"imme", false,-1, 31,0);
    tracep->declBus(c+15,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+41,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+23,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+45,"LSU_valid", false,-1);
    tracep->declBit(c+25,"w_en", false,-1);
    tracep->declBus(c+14,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+284,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+285,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBus(c+7,"din", false,-1, 31,0);
    tracep->declBus(c+42,"dout", false,-1, 31,0);
    tracep->declBit(c+45,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBus(c+42,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+48,"M0_arvalid", false,-1);
    tracep->declBit(c+49,"M0_arready", false,-1);
    tracep->declBus(c+50,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+51,"M0_rvalid", false,-1);
    tracep->declBit(c+44,"M0_rready", false,-1);
    tracep->declBus(c+273,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+274,"M0_awvalid", false,-1);
    tracep->declBit(c+52,"M0_awready", false,-1);
    tracep->declBus(c+273,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+275,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+274,"M0_wvalid", false,-1);
    tracep->declBit(c+53,"M0_wready", false,-1);
    tracep->declBus(c+272,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+54,"M0_bvalid", false,-1);
    tracep->declBit(c+276,"M0_bready", false,-1);
    tracep->declBus(c+55,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+56,"M1_arvalid", false,-1);
    tracep->declBit(c+57,"M1_arready", false,-1);
    tracep->declBus(c+58,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+59,"M1_rvalid", false,-1);
    tracep->declBit(c+60,"M1_rready", false,-1);
    tracep->declBus(c+61,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+62,"M1_awvalid", false,-1);
    tracep->declBit(c+63,"M1_awready", false,-1);
    tracep->declBus(c+64,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+65,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+66,"M1_wvalid", false,-1);
    tracep->declBit(c+67,"M1_wready", false,-1);
    tracep->declBus(c+272,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+68,"M1_bvalid", false,-1);
    tracep->declBit(c+69,"M1_bready", false,-1);
    tracep->declBus(c+70,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+71,"S0_arvalid", false,-1);
    tracep->declBit(c+72,"S0_arready", false,-1);
    tracep->declBus(c+73,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+74,"S0_rvalid", false,-1);
    tracep->declBit(c+75,"S0_rready", false,-1);
    tracep->declBus(c+76,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+77,"S0_awvalid", false,-1);
    tracep->declBit(c+78,"S0_awready", false,-1);
    tracep->declBus(c+79,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+81,"S0_wvalid", false,-1);
    tracep->declBit(c+82,"S0_wready", false,-1);
    tracep->declBus(c+272,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+83,"S0_bvalid", false,-1);
    tracep->declBit(c+84,"S0_bready", false,-1);
    tracep->declBus(c+278,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+279,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+280,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+220,"read_state", false,-1, 2,0);
    tracep->declBus(c+221,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+222,"write_state", false,-1, 2,0);
    tracep->declBus(c+223,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+224,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+225,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+226,"read_done", false,-1);
    tracep->declBit(c+227,"write_done", false,-1);
    tracep->declBus(c+286,"read_choose", false,-1, 2,0);
    tracep->declBus(c+287,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Clint ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBus(c+115,"araddr", false,-1, 31,0);
    tracep->declBit(c+116,"arvalid", false,-1);
    tracep->declBit(c+117,"arready", false,-1);
    tracep->declBus(c+118,"rdata", false,-1, 31,0);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+119,"rvalid", false,-1);
    tracep->declBit(c+120,"rready", false,-1);
    tracep->declBus(c+1,"awaddr", false,-1, 31,0);
    tracep->declBit(c+2,"awvalid", false,-1);
    tracep->declBit(c+121,"awready", false,-1);
    tracep->declBus(c+3,"wdata", false,-1, 31,0);
    tracep->declBus(c+4,"wstrb", false,-1, 3,0);
    tracep->declBit(c+5,"wvalid", false,-1);
    tracep->declBit(c+122,"wready", false,-1);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBit(c+123,"bvalid", false,-1);
    tracep->declBit(c+6,"bready", false,-1);
    tracep->declBus(c+278,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+279,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+280,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+283,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+272,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+228,"state", false,-1, 2,0);
    tracep->declBus(c+229,"next_state", false,-1, 2,0);
    tracep->declBus(c+230,"addr", false,-1, 31,0);
    tracep->declBus(c+231,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+232,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+233,"pmem_readed", false,-1);
    tracep->declBit(c+234,"pmem_writed", false,-1);
    tracep->declBus(c+235,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+236,"random_delay", false,-1, 7,0);
    tracep->declBus(c+118,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+119,"rvalid_reg", false,-1);
    tracep->declBit(c+122,"wready_reg", false,-1);
    tracep->declQuad(c+237,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBus(c+235,"in", false,-1, 7,0);
    tracep->declBus(c+236,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBit(c+44,"IFU_valid", false,-1);
    tracep->declBit(c+45,"LSU_valid", false,-1);
    tracep->declBus(c+10,"rd", false,-1, 4,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+13,"imme", false,-1, 31,0);
    tracep->declBus(c+11,"func3", false,-1, 2,0);
    tracep->declBus(c+12,"func7", false,-1, 6,0);
    tracep->declBus(c+22,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+23,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+24,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+26,"w_mem_en", false,-1);
    tracep->declBus(c+30,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+27,"r_mem_en", false,-1);
    tracep->declBit(c+28,"sign_extension", false,-1);
    tracep->declBus(c+32,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+31,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+35,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+37,"w_csr_en", false,-1);
    tracep->declBus(c+33,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+39,"w_csr_ecall", false,-1);
    tracep->declBus(c+36,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+38,"r_csr_en", false,-1);
    tracep->declBus(c+239,"opcode", false,-1, 6,0);
    tracep->declBus(c+240,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+43,"inst", false,-1, 31,0);
    tracep->declBus(c+240,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+13,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+239,"opcode", false,-1, 6,0);
    tracep->declBus(c+240,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_SRAM ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBus(c+85,"araddr", false,-1, 31,0);
    tracep->declBit(c+86,"arvalid", false,-1);
    tracep->declBit(c+87,"arready", false,-1);
    tracep->declBus(c+88,"rdata", false,-1, 31,0);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+89,"rvalid", false,-1);
    tracep->declBit(c+90,"rready", false,-1);
    tracep->declBus(c+91,"awaddr", false,-1, 31,0);
    tracep->declBit(c+92,"awvalid", false,-1);
    tracep->declBit(c+93,"awready", false,-1);
    tracep->declBus(c+94,"wdata", false,-1, 31,0);
    tracep->declBus(c+95,"wstrb", false,-1, 3,0);
    tracep->declBit(c+96,"wvalid", false,-1);
    tracep->declBit(c+97,"wready", false,-1);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBit(c+98,"bvalid", false,-1);
    tracep->declBit(c+99,"bready", false,-1);
    tracep->declBus(c+278,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+279,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+280,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+283,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+272,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+241,"state", false,-1, 2,0);
    tracep->declBus(c+242,"next_state", false,-1, 2,0);
    tracep->declBus(c+243,"addr", false,-1, 31,0);
    tracep->declBus(c+244,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+245,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+246,"pmem_readed", false,-1);
    tracep->declBit(c+247,"pmem_writed", false,-1);
    tracep->declBus(c+248,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+249,"random_delay", false,-1, 7,0);
    tracep->declBus(c+88,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+89,"rvalid_reg", false,-1);
    tracep->declBit(c+97,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBus(c+248,"in", false,-1, 7,0);
    tracep->declBus(c+249,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Uart ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBus(c+100,"araddr", false,-1, 31,0);
    tracep->declBit(c+101,"arvalid", false,-1);
    tracep->declBit(c+102,"arready", false,-1);
    tracep->declBus(c+103,"rdata", false,-1, 31,0);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+104,"rvalid", false,-1);
    tracep->declBit(c+105,"rready", false,-1);
    tracep->declBus(c+106,"awaddr", false,-1, 31,0);
    tracep->declBit(c+107,"awvalid", false,-1);
    tracep->declBit(c+108,"awready", false,-1);
    tracep->declBus(c+109,"wdata", false,-1, 31,0);
    tracep->declBus(c+110,"wstrb", false,-1, 3,0);
    tracep->declBit(c+111,"wvalid", false,-1);
    tracep->declBit(c+112,"wready", false,-1);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBit(c+113,"bvalid", false,-1);
    tracep->declBit(c+114,"bready", false,-1);
    tracep->declBus(c+278,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+279,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+280,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+283,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+272,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+250,"state", false,-1, 2,0);
    tracep->declBus(c+251,"next_state", false,-1, 2,0);
    tracep->declBus(c+252,"addr", false,-1, 31,0);
    tracep->declBus(c+253,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+254,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+255,"pmem_readed", false,-1);
    tracep->declBit(c+256,"pmem_writed", false,-1);
    tracep->declBus(c+257,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+258,"random_delay", false,-1, 7,0);
    tracep->declBus(c+103,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+104,"rvalid_reg", false,-1);
    tracep->declBit(c+112,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBus(c+257,"in", false,-1, 7,0);
    tracep->declBus(c+258,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+269,"clk", false,-1);
    tracep->declBit(c+270,"rst", false,-1);
    tracep->declBus(c+70,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+71,"Xbar_arvalid", false,-1);
    tracep->declBit(c+72,"Xbar_arready", false,-1);
    tracep->declBus(c+73,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+74,"Xbar_rvalid", false,-1);
    tracep->declBit(c+75,"Xbar_rready", false,-1);
    tracep->declBus(c+76,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+77,"Xbar_awvalid", false,-1);
    tracep->declBit(c+78,"Xbar_awready", false,-1);
    tracep->declBus(c+79,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+81,"Xbar_wvalid", false,-1);
    tracep->declBit(c+82,"Xbar_wready", false,-1);
    tracep->declBus(c+272,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+83,"Xbar_bvalid", false,-1);
    tracep->declBit(c+84,"Xbar_bready", false,-1);
    tracep->declBus(c+85,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+86,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+87,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+88,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+89,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+90,"Xbar_S0_rready", false,-1);
    tracep->declBus(c+91,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+92,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+93,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+94,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+95,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+96,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+97,"Xbar_S0_wready", false,-1);
    tracep->declBus(c+272,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+98,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+99,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+100,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+101,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+102,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+103,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+104,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+105,"Xbar_S1_rready", false,-1);
    tracep->declBus(c+106,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+107,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+108,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+109,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+111,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+112,"Xbar_S1_wready", false,-1);
    tracep->declBus(c+272,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+113,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+114,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+115,"Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+116,"Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+117,"Xbar_S2_arready", false,-1);
    tracep->declBus(c+118,"Xbar_S2_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"Xbar_S2_rresp", false,-1, 1,0);
    tracep->declBit(c+119,"Xbar_S2_rvalid", false,-1);
    tracep->declBit(c+120,"Xbar_S2_rready", false,-1);
    tracep->declBus(c+1,"Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+2,"Xbar_S2_awvalid", false,-1);
    tracep->declBit(c+121,"Xbar_S2_awready", false,-1);
    tracep->declBus(c+3,"Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+4,"Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+5,"Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+122,"Xbar_S2_wready", false,-1);
    tracep->declBus(c+272,"Xbar_S2_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"Xbar_S2_bvalid", false,-1);
    tracep->declBit(c+6,"Xbar_S2_bready", false,-1);
    tracep->declBus(c+278,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+279,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+280,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBus(c+259,"r_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+260,"r_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+261,"w_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+262,"w_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+73,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+74,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+78,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+82,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+272,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+83,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+72,"reg_Xbar_arready", false,-1);
    tracep->declBus(c+85,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+86,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+90,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+91,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+92,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBus(c+94,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+95,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+96,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+99,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+100,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+101,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+105,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+106,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+107,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+109,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+111,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+114,"reg_Xbar_S1_bready", false,-1);
    tracep->declBus(c+115,"reg_Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+116,"reg_Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+120,"reg_Xbar_S2_rready", false,-1);
    tracep->declBus(c+1,"reg_Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+2,"reg_Xbar_S2_awvalid", false,-1);
    tracep->declBus(c+3,"reg_Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+4,"reg_Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+5,"reg_Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+6,"reg_Xbar_S2_bready", false,-1);
    tracep->declBit(c+263,"read_S0_done", false,-1);
    tracep->declBit(c+264,"write_S0_done", false,-1);
    tracep->declBit(c+265,"read_S1_done", false,-1);
    tracep->declBit(c+266,"write_S1_done", false,-1);
    tracep->declBit(c+267,"read_S2_done", false,-1);
    tracep->declBit(c+268,"write_S2_done", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
    bufp->fullBit(oldp+2,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
    bufp->fullIData(oldp+3,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    bufp->fullIData(oldp+7,(((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
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
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+11,((7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+12,((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24120011_top__DOT__imme),32);
    bufp->fullIData(oldp+14,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                               ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                        ? ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                ? 0U
                                                : vlSelf->ysyx_24120011_top__DOT__r_csr_data)
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                ? vlSelf->ysyx_24120011_top__DOT__r_mem_data
                                                : 0U))
                                        : ((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                ? vlSelf->ysyx_24120011_top__DOT__imme
                                                : vlSelf->ysyx_24120011_top__DOT__alu_result)
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
                                                ? vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out
                                                : ((IData)(4U) 
                                                   + vlSelf->ysyx_24120011_top__DOT__pc)))))),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__src1),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24120011_top__DOT__src2),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
    bufp->fullIData(oldp+19,(((IData)(4U) + vlSelf->ysyx_24120011_top__DOT__pc)),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24120011_top__DOT__ALUB),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+25,(((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_valid) 
                            & (4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl)))));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
    bufp->fullBit(oldp+29,(((0x63U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
                            & vlSelf->ysyx_24120011_top__DOT__alu_result)));
    bufp->fullCData(oldp+30,(vlSelf->ysyx_24120011_top__DOT__w_mem_len),8);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl),4);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [0xaU]),32);
    bufp->fullSData(oldp+35,(vlSelf->ysyx_24120011_top__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+36,(vlSelf->ysyx_24120011_top__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+37,(vlSelf->ysyx_24120011_top__DOT__w_csr_en));
    bufp->fullBit(oldp+38,(vlSelf->ysyx_24120011_top__DOT__r_csr_en));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_24120011_top__DOT__w_csr_ecall));
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24120011_top__DOT__w_csr_data),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24120011_top__DOT__r_csr_data),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24120011_top__DOT__pc),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24120011_top__DOT__inst),32);
    bufp->fullBit(oldp+44,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_24120011_top__DOT__LSU_valid));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_24120011_top__DOT__LSU_ready));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24120011_top__DOT__LSU_valid),32);
    bufp->fullBit(oldp+48,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+49,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24120011_top__DOT__M0_rdata),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_24120011_top__DOT__M0_rvalid));
    bufp->fullBit(oldp+52,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))))))));
    bufp->fullBit(oldp+53,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg)))))));
    bufp->fullBit(oldp+54,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullIData(oldp+55,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+56,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+57,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+58,(vlSelf->ysyx_24120011_top__DOT__M1_rdata),32);
    bufp->fullBit(oldp+59,(vlSelf->ysyx_24120011_top__DOT__M1_rvalid));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready));
    bufp->fullIData(oldp+61,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+63,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))))))));
    bufp->fullIData(oldp+64,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__src2
                               : 0U)),32);
    bufp->fullCData(oldp+65,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                               ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                          ? 3U : 1U))),4);
    bufp->fullBit(oldp+66,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_24120011_top__DOT__M1_wready));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_24120011_top__DOT__M1_bvalid));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready));
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24120011_top__DOT__S0_araddr),32);
    bufp->fullBit(oldp+71,(vlSelf->ysyx_24120011_top__DOT__S0_arvalid));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+74,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_24120011_top__DOT__S0_rready));
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24120011_top__DOT__S0_awaddr),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_24120011_top__DOT__S0_awvalid));
    bufp->fullBit(oldp+78,(((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                            & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)))))));
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120011_top__DOT__S0_wdata),32);
    bufp->fullCData(oldp+80,(vlSelf->ysyx_24120011_top__DOT__S0_wstrb),4);
    bufp->fullBit(oldp+81,(vlSelf->ysyx_24120011_top__DOT__S0_wvalid));
    bufp->fullBit(oldp+82,(((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                            & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)
                                : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))))));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_24120011_top__DOT__S0_bready));
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullBit(oldp+86,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullBit(oldp+87,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg),32);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
    bufp->fullBit(oldp+92,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullBit(oldp+93,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
    bufp->fullCData(oldp+95,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg));
    bufp->fullBit(oldp+98,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
    bufp->fullBit(oldp+101,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullBit(oldp+102,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg),32);
    bufp->fullBit(oldp+104,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullIData(oldp+106,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
    bufp->fullBit(oldp+107,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullBit(oldp+108,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
    bufp->fullCData(oldp+110,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg));
    bufp->fullBit(oldp+113,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
    bufp->fullBit(oldp+116,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
    bufp->fullBit(oldp+117,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullIData(oldp+118,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
    bufp->fullBit(oldp+119,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
    bufp->fullBit(oldp+121,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
    bufp->fullBit(oldp+123,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+125,(((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                : vlSelf->ysyx_24120011_top__DOT__ALUB)),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+127,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+128,((((vlSelf->ysyx_24120011_top__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                               ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+129,((1U & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+130,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+131,((vlSelf->ysyx_24120011_top__DOT__src1 
                             == vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullBit(oldp+132,((vlSelf->ysyx_24120011_top__DOT__src1 
                             != vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullIData(oldp+133,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullBit(oldp+137,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+138,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+139,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+140,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+141,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+142,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+143,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+144,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state),3);
    bufp->fullCData(oldp+145,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state),3);
    bufp->fullBit(oldp+146,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+147,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+148,((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+149,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+150,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+151,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+152,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+153,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+154,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+155,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+220,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+221,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+222,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+223,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullCData(oldp+224,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+225,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullBit(oldp+226,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+227,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+228,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state),3);
    bufp->fullCData(oldp+229,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
    bufp->fullCData(oldp+231,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+232,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+233,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
    bufp->fullBit(oldp+234,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
    bufp->fullCData(oldp+235,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
    bufp->fullCData(oldp+236,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
    bufp->fullQData(oldp+237,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
    bufp->fullCData(oldp+239,((0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)),7);
    bufp->fullCData(oldp+240,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullCData(oldp+241,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state),3);
    bufp->fullCData(oldp+242,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state),3);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr),32);
    bufp->fullCData(oldp+244,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+245,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+246,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed));
    bufp->fullBit(oldp+247,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed));
    bufp->fullCData(oldp+248,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in),8);
    bufp->fullCData(oldp+249,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay),8);
    bufp->fullCData(oldp+250,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state),3);
    bufp->fullCData(oldp+251,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state),3);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr),32);
    bufp->fullCData(oldp+253,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+254,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+255,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed));
    bufp->fullBit(oldp+256,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed));
    bufp->fullCData(oldp+257,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in),8);
    bufp->fullCData(oldp+258,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay),8);
    bufp->fullCData(oldp+259,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
    bufp->fullCData(oldp+260,(((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
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
    bufp->fullCData(oldp+261,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
    bufp->fullCData(oldp+262,(((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
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
    bufp->fullBit(oldp+263,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+264,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullBit(oldp+265,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+266,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+267,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
    bufp->fullBit(oldp+268,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    bufp->fullBit(oldp+269,(vlSelf->clk));
    bufp->fullBit(oldp+270,(vlSelf->rst));
    bufp->fullIData(oldp+271,(vlSelf->ysyx_24120011_top__DOT__rdata),32);
    bufp->fullCData(oldp+272,(0U),2);
    bufp->fullIData(oldp+273,(0U),32);
    bufp->fullBit(oldp+274,(0U));
    bufp->fullCData(oldp+275,(0xfU),4);
    bufp->fullBit(oldp+276,(1U));
    bufp->fullBit(oldp+277,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+278,(0U),3);
    bufp->fullCData(oldp+279,(1U),3);
    bufp->fullCData(oldp+280,(2U),3);
    bufp->fullCData(oldp+281,(3U),3);
    bufp->fullCData(oldp+282,(4U),3);
    bufp->fullCData(oldp+283,(5U),3);
    bufp->fullIData(oldp+284,(0x20U),32);
    bufp->fullIData(oldp+285,(0x80000000U),32);
    bufp->fullCData(oldp+286,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+287,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
}
