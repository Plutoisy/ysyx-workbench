// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24120011__Syms.h"


VL_ATTR_COLD void Vysyx_24120011___024root__trace_init_sub__TOP__0(Vysyx_24120011___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBit(c+245,"io_master_awready", false,-1);
    tracep->declBit(c+246,"io_master_awvalid", false,-1);
    tracep->declBus(c+247,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+248,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+249,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+250,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+251,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+252,"io_master_wready", false,-1);
    tracep->declBit(c+253,"io_master_wvalid", false,-1);
    tracep->declBus(c+254,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+255,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+256,"io_master_wlast", false,-1);
    tracep->declBit(c+257,"io_master_bready", false,-1);
    tracep->declBit(c+258,"io_master_bvalid", false,-1);
    tracep->declBus(c+259,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+260,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+261,"io_master_arready", false,-1);
    tracep->declBit(c+262,"io_master_arvalid", false,-1);
    tracep->declBus(c+263,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+264,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+265,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+266,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+267,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+268,"io_master_rready", false,-1);
    tracep->declBit(c+269,"io_master_rvalid", false,-1);
    tracep->declBus(c+270,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+271,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+272,"io_master_rlast", false,-1);
    tracep->declBus(c+273,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+274,"io_slave_awready", false,-1);
    tracep->declBit(c+275,"io_slave_awvalid", false,-1);
    tracep->declBus(c+276,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+277,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+278,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+279,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+280,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+281,"io_slave_wready", false,-1);
    tracep->declBit(c+282,"io_slave_wvalid", false,-1);
    tracep->declBus(c+283,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+284,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+285,"io_slave_wlast", false,-1);
    tracep->declBit(c+286,"io_slave_bready", false,-1);
    tracep->declBit(c+287,"io_slave_bvalid", false,-1);
    tracep->declBus(c+288,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+289,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+290,"io_slave_arready", false,-1);
    tracep->declBit(c+291,"io_slave_arvalid", false,-1);
    tracep->declBus(c+292,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+293,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+294,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+295,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+296,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+297,"io_slave_rready", false,-1);
    tracep->declBit(c+298,"io_slave_rvalid", false,-1);
    tracep->declBus(c+299,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+300,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+301,"io_slave_rlast", false,-1);
    tracep->declBus(c+302,"io_slave_rid", false,-1, 3,0);
    tracep->pushNamePrefix("ysyx_24120011 ");
    tracep->declBit(c+243,"clock", false,-1);
    tracep->declBit(c+244,"reset", false,-1);
    tracep->declBit(c+245,"io_master_awready", false,-1);
    tracep->declBit(c+246,"io_master_awvalid", false,-1);
    tracep->declBus(c+247,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+248,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+249,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+250,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+251,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+252,"io_master_wready", false,-1);
    tracep->declBit(c+253,"io_master_wvalid", false,-1);
    tracep->declBus(c+254,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+255,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+256,"io_master_wlast", false,-1);
    tracep->declBit(c+257,"io_master_bready", false,-1);
    tracep->declBit(c+258,"io_master_bvalid", false,-1);
    tracep->declBus(c+259,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+260,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+261,"io_master_arready", false,-1);
    tracep->declBit(c+262,"io_master_arvalid", false,-1);
    tracep->declBus(c+263,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+264,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+265,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+266,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+267,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+268,"io_master_rready", false,-1);
    tracep->declBit(c+269,"io_master_rvalid", false,-1);
    tracep->declBus(c+270,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+271,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+272,"io_master_rlast", false,-1);
    tracep->declBus(c+273,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+274,"io_slave_awready", false,-1);
    tracep->declBit(c+275,"io_slave_awvalid", false,-1);
    tracep->declBus(c+276,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+277,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+278,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+279,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+280,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+281,"io_slave_wready", false,-1);
    tracep->declBit(c+282,"io_slave_wvalid", false,-1);
    tracep->declBus(c+283,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+284,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+285,"io_slave_wlast", false,-1);
    tracep->declBit(c+286,"io_slave_bready", false,-1);
    tracep->declBit(c+287,"io_slave_bvalid", false,-1);
    tracep->declBus(c+288,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+289,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+290,"io_slave_arready", false,-1);
    tracep->declBit(c+291,"io_slave_arvalid", false,-1);
    tracep->declBus(c+292,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+293,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+294,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+295,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+296,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+297,"io_slave_rready", false,-1);
    tracep->declBit(c+298,"io_slave_rvalid", false,-1);
    tracep->declBus(c+299,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+300,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+301,"io_slave_rlast", false,-1);
    tracep->declBus(c+302,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+1,"dnpc", false,-1, 31,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+5,"func3", false,-1, 2,0);
    tracep->declBus(c+6,"func7", false,-1, 6,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+8,"wdata", false,-1, 31,0);
    tracep->declBus(c+327,"rdata", false,-1, 31,0);
    tracep->declBus(c+94,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+9,"src1", false,-1, 31,0);
    tracep->declBus(c+10,"src2", false,-1, 31,0);
    tracep->declBus(c+11,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+95,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+12,"ALUB", false,-1, 31,0);
    tracep->declBus(c+13,"alu_result", false,-1, 31,0);
    tracep->declBus(c+14,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+15,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+16,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+17,"w_en", false,-1);
    tracep->declBit(c+18,"w_mem_en", false,-1);
    tracep->declBit(c+19,"r_mem_en", false,-1);
    tracep->declBit(c+20,"sign_extension", false,-1);
    tracep->declBit(c+21,"b_type_enter_if", false,-1);
    tracep->declBus(c+22,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+23,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+24,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+25,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+96,"a0", false,-1, 31,0);
    tracep->declBus(c+26,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+27,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+28,"w_csr_en", false,-1);
    tracep->declBit(c+29,"r_csr_en", false,-1);
    tracep->declBit(c+30,"w_csr_ecall", false,-1);
    tracep->declBus(c+31,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+32,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+97,"pc", false,-1, 31,0);
    tracep->declBus(c+33,"inst", false,-1, 31,0);
    tracep->declBit(c+98,"IFU_valid", false,-1);
    tracep->declBit(c+99,"LSU_valid", false,-1);
    tracep->declBit(c+100,"LSU_ready", false,-1);
    tracep->declBus(c+101,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+97,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+102,"M0_arvalid", false,-1);
    tracep->declBit(c+34,"M0_arready", false,-1);
    tracep->declBus(c+328,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+329,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+330,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+35,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+303,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+36,"M0_rvalid", false,-1);
    tracep->declBit(c+98,"M0_rready", false,-1);
    tracep->declBit(c+304,"M0_rlast", false,-1);
    tracep->declBus(c+305,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+332,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+333,"M0_awvalid", false,-1);
    tracep->declBit(c+306,"M0_awready", false,-1);
    tracep->declBus(c+328,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+329,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+330,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+332,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+334,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+333,"M0_wvalid", false,-1);
    tracep->declBit(c+307,"M0_wready", false,-1);
    tracep->declBit(c+333,"M0_wlast", false,-1);
    tracep->declBus(c+308,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+37,"M0_bvalid", false,-1);
    tracep->declBit(c+335,"M0_bready", false,-1);
    tracep->declBus(c+309,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+38,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+103,"M1_arvalid", false,-1);
    tracep->declBit(c+39,"M1_arready", false,-1);
    tracep->declBus(c+328,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+329,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+41,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+310,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+42,"M1_rvalid", false,-1);
    tracep->declBit(c+104,"M1_rready", false,-1);
    tracep->declBit(c+311,"M1_rlast", false,-1);
    tracep->declBus(c+312,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+43,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+105,"M1_awvalid", false,-1);
    tracep->declBit(c+313,"M1_awready", false,-1);
    tracep->declBus(c+328,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+329,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+44,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+45,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+106,"M1_wvalid", false,-1);
    tracep->declBit(c+47,"M1_wready", false,-1);
    tracep->declBit(c+106,"M1_wlast", false,-1);
    tracep->declBus(c+314,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+48,"M1_bvalid", false,-1);
    tracep->declBit(c+107,"M1_bready", false,-1);
    tracep->declBus(c+315,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+49,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+108,"S0_arvalid", false,-1);
    tracep->declBit(c+50,"S0_arready", false,-1);
    tracep->declBus(c+328,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+329,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+52,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+316,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+53,"S0_rvalid", false,-1);
    tracep->declBit(c+109,"S0_rready", false,-1);
    tracep->declBit(c+317,"S0_rlast", false,-1);
    tracep->declBus(c+318,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+54,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+110,"S0_awvalid", false,-1);
    tracep->declBit(c+319,"S0_awready", false,-1);
    tracep->declBus(c+328,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+329,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+55,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+56,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+57,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+111,"S0_wvalid", false,-1);
    tracep->declBit(c+320,"S0_wready", false,-1);
    tracep->declBit(c+111,"S0_wlast", false,-1);
    tracep->declBus(c+321,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"S0_bvalid", false,-1);
    tracep->declBit(c+112,"S0_bready", false,-1);
    tracep->declBus(c+322,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+336,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+337,"sram_arvalid", false,-1);
    tracep->declBit(c+338,"sram_arready", false,-1);
    tracep->declBus(c+339,"sram_arid", false,-1, 3,0);
    tracep->declBus(c+340,"sram_arlen", false,-1, 7,0);
    tracep->declBus(c+341,"sram_arsize", false,-1, 2,0);
    tracep->declBus(c+342,"sram_arburst", false,-1, 1,0);
    tracep->declBus(c+343,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+344,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+345,"sram_rvalid", false,-1);
    tracep->declBit(c+346,"sram_rready", false,-1);
    tracep->declBit(c+347,"sram_rlast", false,-1);
    tracep->declBus(c+348,"sram_rid", false,-1, 3,0);
    tracep->declBus(c+349,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+350,"sram_awvalid", false,-1);
    tracep->declBit(c+351,"sram_awready", false,-1);
    tracep->declBus(c+352,"sram_awid", false,-1, 3,0);
    tracep->declBus(c+353,"sram_awlen", false,-1, 7,0);
    tracep->declBus(c+354,"sram_awsize", false,-1, 2,0);
    tracep->declBus(c+355,"sram_awburst", false,-1, 1,0);
    tracep->declBus(c+356,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+357,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+358,"sram_wvalid", false,-1);
    tracep->declBit(c+359,"sram_wready", false,-1);
    tracep->declBit(c+360,"sram_wlast", false,-1);
    tracep->declBus(c+361,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+362,"sram_bvalid", false,-1);
    tracep->declBit(c+363,"sram_bready", false,-1);
    tracep->declBus(c+364,"sram_bid", false,-1, 3,0);
    tracep->declBus(c+365,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+366,"uart_arvalid", false,-1);
    tracep->declBit(c+367,"uart_arready", false,-1);
    tracep->declBus(c+368,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+369,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+370,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+371,"uart_arburst", false,-1, 1,0);
    tracep->declBus(c+372,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+373,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+374,"uart_rvalid", false,-1);
    tracep->declBit(c+375,"uart_rready", false,-1);
    tracep->declBit(c+376,"uart_rlast", false,-1);
    tracep->declBus(c+377,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+378,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+379,"uart_awvalid", false,-1);
    tracep->declBit(c+380,"uart_awready", false,-1);
    tracep->declBus(c+381,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+382,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+383,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+384,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+385,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+386,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+387,"uart_wvalid", false,-1);
    tracep->declBit(c+388,"uart_wready", false,-1);
    tracep->declBit(c+389,"uart_wlast", false,-1);
    tracep->declBus(c+390,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+391,"uart_bvalid", false,-1);
    tracep->declBit(c+392,"uart_bready", false,-1);
    tracep->declBus(c+393,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+59,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+113,"clint_arvalid", false,-1);
    tracep->declBit(c+114,"clint_arready", false,-1);
    tracep->declBus(c+328,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+329,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+60,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+115,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+331,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+116,"clint_rvalid", false,-1);
    tracep->declBit(c+117,"clint_rready", false,-1);
    tracep->declBit(c+116,"clint_rlast", false,-1);
    tracep->declBus(c+328,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+61,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+118,"clint_awvalid", false,-1);
    tracep->declBit(c+119,"clint_awready", false,-1);
    tracep->declBus(c+328,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+329,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+62,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+63,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+64,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+120,"clint_wvalid", false,-1);
    tracep->declBit(c+121,"clint_wready", false,-1);
    tracep->declBit(c+122,"clint_wlast", false,-1);
    tracep->declBus(c+331,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"clint_bvalid", false,-1);
    tracep->declBit(c+124,"clint_bready", false,-1);
    tracep->declBus(c+328,"clint_bid", false,-1, 3,0);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+9,"A", false,-1, 31,0);
    tracep->declBus(c+12,"B", false,-1, 31,0);
    tracep->declBus(c+24,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+13,"ALUout", false,-1, 31,0);
    tracep->declBus(c+65,"B_in", false,-1, 31,0);
    tracep->declBus(c+66,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+67,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+68,"carry", false,-1);
    tracep->declBit(c+69,"overflow", false,-1);
    tracep->declBit(c+70,"uless", false,-1);
    tracep->declBit(c+71,"sless", false,-1);
    tracep->declBit(c+72,"a_is_b", false,-1);
    tracep->declBit(c+73,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+9,"x", false,-1, 31,0);
    tracep->declBus(c+65,"y", false,-1, 31,0);
    tracep->declBus(c+67,"s", false,-1, 31,0);
    tracep->declBit(c+68,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+16,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+10,"src2", false,-1, 31,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+32,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+12,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBit(c+244,"rst", false,-1);
    tracep->declBus(c+26,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+27,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+28,"w_csr_en", false,-1);
    tracep->declBit(c+29,"r_csr_en", false,-1);
    tracep->declBit(c+30,"w_csr_ecall", false,-1);
    tracep->declBus(c+97,"pc", false,-1, 31,0);
    tracep->declBus(c+31,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+32,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+125,"mepc", false,-1, 31,0);
    tracep->declBus(c+126,"mstatus", false,-1, 31,0);
    tracep->declBus(c+127,"mcause", false,-1, 31,0);
    tracep->declBus(c+128,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+13,"alu_result", false,-1, 31,0);
    tracep->declBus(c+9,"src1", false,-1, 31,0);
    tracep->declBus(c+25,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+31,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBit(c+244,"rst", false,-1);
    tracep->declBus(c+97,"pc", false,-1, 31,0);
    tracep->declBus(c+33,"inst", false,-1, 31,0);
    tracep->declBit(c+98,"IFU_valid", false,-1);
    tracep->declBit(c+100,"LSU_ready", false,-1);
    tracep->declBus(c+97,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+102,"M0_arvalid", false,-1);
    tracep->declBit(c+34,"M0_arready", false,-1);
    tracep->declBus(c+328,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+329,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+330,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+35,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+303,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+36,"M0_rvalid", false,-1);
    tracep->declBit(c+98,"M0_rready", false,-1);
    tracep->declBit(c+304,"M0_rlast", false,-1);
    tracep->declBus(c+305,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+332,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+333,"M0_awvalid", false,-1);
    tracep->declBit(c+306,"M0_awready", false,-1);
    tracep->declBus(c+328,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+329,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+330,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+332,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+334,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+333,"M0_wvalid", false,-1);
    tracep->declBit(c+307,"M0_wready", false,-1);
    tracep->declBit(c+333,"M0_wlast", false,-1);
    tracep->declBus(c+308,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+37,"M0_bvalid", false,-1);
    tracep->declBit(c+335,"M0_bready", false,-1);
    tracep->declBus(c+309,"M0_bid", false,-1, 3,0);
    tracep->declBit(c+34,"arready", false,-1);
    tracep->declBus(c+303,"rresp", false,-1, 1,0);
    tracep->declBit(c+306,"awready", false,-1);
    tracep->declBit(c+307,"wready", false,-1);
    tracep->declBus(c+308,"bresp", false,-1, 1,0);
    tracep->declBit(c+37,"bvalid", false,-1);
    tracep->declBit(c+36,"rvalid", false,-1);
    tracep->declBit(c+98,"rready", false,-1);
    tracep->declBit(c+129,"rvalid_prev", false,-1);
    tracep->declBit(c+102,"arvalid", false,-1);
    tracep->declBus(c+130,"state", false,-1, 2,0);
    tracep->declBus(c+74,"next_state", false,-1, 2,0);
    tracep->declBit(c+394,"start_read_delay", false,-1);
    tracep->declBus(c+131,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+132,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+133,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+134,"random_delay", false,-1, 7,0);
    tracep->declBus(c+395,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+396,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+330,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBus(c+133,"in", false,-1, 7,0);
    tracep->declBus(c+134,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBit(c+244,"rst", false,-1);
    tracep->declBit(c+98,"IFU_valid", false,-1);
    tracep->declBus(c+13,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+13,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+22,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+23,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+18,"w_mem_en", false,-1);
    tracep->declBit(c+19,"r_mem_en", false,-1);
    tracep->declBit(c+20,"sign_extension", false,-1);
    tracep->declBus(c+10,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+94,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+99,"LSU_valid", false,-1);
    tracep->declBit(c+100,"LSU_ready", false,-1);
    tracep->declBus(c+38,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+103,"M1_arvalid", false,-1);
    tracep->declBit(c+39,"M1_arready", false,-1);
    tracep->declBus(c+328,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+329,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+41,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+310,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+42,"M1_rvalid", false,-1);
    tracep->declBit(c+104,"M1_rready", false,-1);
    tracep->declBit(c+311,"M1_rlast", false,-1);
    tracep->declBus(c+312,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+43,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+105,"M1_awvalid", false,-1);
    tracep->declBit(c+313,"M1_awready", false,-1);
    tracep->declBus(c+328,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+329,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+44,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+45,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+106,"M1_wvalid", false,-1);
    tracep->declBit(c+47,"M1_wready", false,-1);
    tracep->declBit(c+106,"M1_wlast", false,-1);
    tracep->declBus(c+314,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+48,"M1_bvalid", false,-1);
    tracep->declBit(c+107,"M1_bready", false,-1);
    tracep->declBus(c+315,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+395,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+396,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+330,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+397,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+398,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+399,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+331,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+135,"state", false,-1, 2,0);
    tracep->declBus(c+75,"next_state", false,-1, 2,0);
    tracep->declBit(c+136,"start_read_delay", false,-1);
    tracep->declBit(c+137,"start_write_delay", false,-1);
    tracep->declBus(c+38,"araddr", false,-1, 31,0);
    tracep->declBit(c+103,"arvalid", false,-1);
    tracep->declBit(c+39,"arready", false,-1);
    tracep->declBit(c+104,"rready", false,-1);
    tracep->declBus(c+310,"rresp", false,-1, 1,0);
    tracep->declBit(c+42,"rvalid", false,-1);
    tracep->declBit(c+105,"awvalid", false,-1);
    tracep->declBit(c+313,"awready", false,-1);
    tracep->declBus(c+43,"awaddr", false,-1, 31,0);
    tracep->declBit(c+106,"wvalid", false,-1);
    tracep->declBit(c+47,"wready", false,-1);
    tracep->declBus(c+45,"wdata", false,-1, 31,0);
    tracep->declBus(c+314,"bresp", false,-1, 1,0);
    tracep->declBus(c+46,"wstrb", false,-1, 3,0);
    tracep->declBit(c+107,"bready", false,-1);
    tracep->declBus(c+41,"rdata", false,-1, 31,0);
    tracep->declBit(c+48,"bvalid", false,-1);
    tracep->declBit(c+138,"LSU_working", false,-1);
    tracep->declBus(c+139,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+140,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+141,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+142,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+143,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+144,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+145,"random_delay", false,-1, 7,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBus(c+144,"in", false,-1, 7,0);
    tracep->declBus(c+145,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+97,"pc", false,-1, 31,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+13,"alu_result", false,-1, 31,0);
    tracep->declBus(c+32,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+14,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+21,"b_type_enter_if", false,-1);
    tracep->declBus(c+11,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+95,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+1,"dnpc", false,-1, 31,0);
    tracep->declBus(c+95,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+11,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBit(c+244,"rst", false,-1);
    tracep->declBit(c+17,"w_en", false,-1);
    tracep->declBus(c+8,"wdata", false,-1, 31,0);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+9,"src1", false,-1, 31,0);
    tracep->declBus(c+10,"src2", false,-1, 31,0);
    tracep->declBus(c+96,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+146+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+178+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+11,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+95,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+13,"alu_result", false,-1, 31,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+94,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+32,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+15,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+99,"LSU_valid", false,-1);
    tracep->declBit(c+17,"w_en", false,-1);
    tracep->declBus(c+8,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+400,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+401,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBit(c+244,"rst", false,-1);
    tracep->declBus(c+1,"din", false,-1, 31,0);
    tracep->declBus(c+97,"dout", false,-1, 31,0);
    tracep->declBit(c+99,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBit(c+244,"rst", false,-1);
    tracep->declBus(c+97,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+102,"M0_arvalid", false,-1);
    tracep->declBit(c+34,"M0_arready", false,-1);
    tracep->declBus(c+328,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+329,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+330,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+35,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+303,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+36,"M0_rvalid", false,-1);
    tracep->declBit(c+98,"M0_rready", false,-1);
    tracep->declBit(c+304,"M0_rlast", false,-1);
    tracep->declBus(c+305,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+332,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+333,"M0_awvalid", false,-1);
    tracep->declBit(c+306,"M0_awready", false,-1);
    tracep->declBus(c+328,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+329,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+330,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+332,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+334,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+333,"M0_wvalid", false,-1);
    tracep->declBit(c+307,"M0_wready", false,-1);
    tracep->declBit(c+333,"M0_wlast", false,-1);
    tracep->declBus(c+308,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+37,"M0_bvalid", false,-1);
    tracep->declBit(c+335,"M0_bready", false,-1);
    tracep->declBus(c+309,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+38,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+103,"M1_arvalid", false,-1);
    tracep->declBit(c+39,"M1_arready", false,-1);
    tracep->declBus(c+328,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+329,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+40,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+41,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+310,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+42,"M1_rvalid", false,-1);
    tracep->declBit(c+104,"M1_rready", false,-1);
    tracep->declBit(c+311,"M1_rlast", false,-1);
    tracep->declBus(c+312,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+43,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+105,"M1_awvalid", false,-1);
    tracep->declBit(c+313,"M1_awready", false,-1);
    tracep->declBus(c+328,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+329,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+44,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+45,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+46,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+106,"M1_wvalid", false,-1);
    tracep->declBit(c+47,"M1_wready", false,-1);
    tracep->declBit(c+106,"M1_wlast", false,-1);
    tracep->declBus(c+314,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+48,"M1_bvalid", false,-1);
    tracep->declBit(c+107,"M1_bready", false,-1);
    tracep->declBus(c+315,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+49,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+108,"S0_arvalid", false,-1);
    tracep->declBit(c+50,"S0_arready", false,-1);
    tracep->declBus(c+328,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+329,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+52,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+316,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+53,"S0_rvalid", false,-1);
    tracep->declBit(c+109,"S0_rready", false,-1);
    tracep->declBit(c+317,"S0_rlast", false,-1);
    tracep->declBus(c+318,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+54,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+110,"S0_awvalid", false,-1);
    tracep->declBit(c+319,"S0_awready", false,-1);
    tracep->declBus(c+328,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+329,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+55,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+56,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+57,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+111,"S0_wvalid", false,-1);
    tracep->declBit(c+320,"S0_wready", false,-1);
    tracep->declBit(c+111,"S0_wlast", false,-1);
    tracep->declBus(c+321,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"S0_bvalid", false,-1);
    tracep->declBit(c+112,"S0_bready", false,-1);
    tracep->declBus(c+322,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+395,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+396,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+330,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+210,"read_state", false,-1, 2,0);
    tracep->declBus(c+76,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+211,"write_state", false,-1, 2,0);
    tracep->declBus(c+77,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+212,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+213,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+78,"read_done", false,-1);
    tracep->declBit(c+79,"write_done", false,-1);
    tracep->declBus(c+402,"read_choose", false,-1, 2,0);
    tracep->declBus(c+403,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Clint ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBit(c+244,"rst", false,-1);
    tracep->declBus(c+59,"araddr", false,-1, 31,0);
    tracep->declBit(c+113,"arvalid", false,-1);
    tracep->declBit(c+114,"arready", false,-1);
    tracep->declBus(c+328,"arid", false,-1, 3,0);
    tracep->declBus(c+329,"arlen", false,-1, 7,0);
    tracep->declBus(c+60,"arsize", false,-1, 2,0);
    tracep->declBus(c+331,"arburst", false,-1, 1,0);
    tracep->declBus(c+115,"rdata", false,-1, 31,0);
    tracep->declBus(c+331,"rresp", false,-1, 1,0);
    tracep->declBit(c+116,"rvalid", false,-1);
    tracep->declBit(c+117,"rready", false,-1);
    tracep->declBit(c+116,"rlast", false,-1);
    tracep->declBus(c+328,"rid", false,-1, 3,0);
    tracep->declBus(c+61,"awaddr", false,-1, 31,0);
    tracep->declBit(c+118,"awvalid", false,-1);
    tracep->declBit(c+119,"awready", false,-1);
    tracep->declBus(c+328,"awid", false,-1, 3,0);
    tracep->declBus(c+329,"awlen", false,-1, 7,0);
    tracep->declBus(c+62,"awsize", false,-1, 2,0);
    tracep->declBus(c+331,"awburst", false,-1, 1,0);
    tracep->declBus(c+63,"wdata", false,-1, 31,0);
    tracep->declBus(c+64,"wstrb", false,-1, 3,0);
    tracep->declBit(c+120,"wvalid", false,-1);
    tracep->declBit(c+121,"wready", false,-1);
    tracep->declBit(c+122,"wlast", false,-1);
    tracep->declBus(c+331,"bresp", false,-1, 1,0);
    tracep->declBit(c+123,"bvalid", false,-1);
    tracep->declBit(c+124,"bready", false,-1);
    tracep->declBus(c+328,"bid", false,-1, 3,0);
    tracep->declBus(c+395,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+396,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+330,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+397,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+398,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+399,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+331,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+214,"state", false,-1, 2,0);
    tracep->declBus(c+215,"next_state", false,-1, 2,0);
    tracep->declBus(c+216,"addr", false,-1, 31,0);
    tracep->declBus(c+217,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+218,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+219,"pmem_readed", false,-1);
    tracep->declBit(c+220,"pmem_writed", false,-1);
    tracep->declBus(c+221,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+222,"random_delay", false,-1, 7,0);
    tracep->declBus(c+115,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+116,"rvalid_reg", false,-1);
    tracep->declBit(c+121,"wready_reg", false,-1);
    tracep->declQuad(c+223,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBus(c+221,"in", false,-1, 7,0);
    tracep->declBus(c+222,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+33,"inst", false,-1, 31,0);
    tracep->declBit(c+98,"IFU_valid", false,-1);
    tracep->declBit(c+99,"LSU_valid", false,-1);
    tracep->declBus(c+4,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"rs1", false,-1, 4,0);
    tracep->declBus(c+3,"rs2", false,-1, 4,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->declBus(c+5,"func3", false,-1, 2,0);
    tracep->declBus(c+6,"func7", false,-1, 6,0);
    tracep->declBus(c+14,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+15,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+16,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+18,"w_mem_en", false,-1);
    tracep->declBus(c+22,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+19,"r_mem_en", false,-1);
    tracep->declBit(c+20,"sign_extension", false,-1);
    tracep->declBus(c+24,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+23,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+26,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+28,"w_csr_en", false,-1);
    tracep->declBus(c+25,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+30,"w_csr_ecall", false,-1);
    tracep->declBus(c+27,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+29,"r_csr_en", false,-1);
    tracep->declBus(c+80,"opcode", false,-1, 6,0);
    tracep->declBus(c+81,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+33,"inst", false,-1, 31,0);
    tracep->declBus(c+81,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+7,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+80,"opcode", false,-1, 6,0);
    tracep->declBus(c+81,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+243,"clk", false,-1);
    tracep->declBit(c+244,"rst", false,-1);
    tracep->declBus(c+49,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+108,"Xbar_arvalid", false,-1);
    tracep->declBit(c+50,"Xbar_arready", false,-1);
    tracep->declBus(c+328,"Xbar_arid", false,-1, 3,0);
    tracep->declBus(c+329,"Xbar_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"Xbar_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"Xbar_arburst", false,-1, 1,0);
    tracep->declBus(c+52,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+316,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+53,"Xbar_rvalid", false,-1);
    tracep->declBit(c+109,"Xbar_rready", false,-1);
    tracep->declBit(c+317,"Xbar_rlast", false,-1);
    tracep->declBus(c+318,"Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+54,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+110,"Xbar_awvalid", false,-1);
    tracep->declBit(c+319,"Xbar_awready", false,-1);
    tracep->declBus(c+328,"Xbar_awid", false,-1, 3,0);
    tracep->declBus(c+329,"Xbar_awlen", false,-1, 7,0);
    tracep->declBus(c+55,"Xbar_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"Xbar_awburst", false,-1, 1,0);
    tracep->declBus(c+56,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+57,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+111,"Xbar_wvalid", false,-1);
    tracep->declBit(c+320,"Xbar_wready", false,-1);
    tracep->declBit(c+111,"Xbar_wlast", false,-1);
    tracep->declBus(c+321,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"Xbar_bvalid", false,-1);
    tracep->declBit(c+112,"Xbar_bready", false,-1);
    tracep->declBus(c+322,"Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+263,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+262,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+261,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+264,"Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+265,"Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+266,"Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+267,"Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+271,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+270,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+269,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+268,"Xbar_S0_rready", false,-1);
    tracep->declBit(c+272,"Xbar_S0_rlast", false,-1);
    tracep->declBus(c+273,"Xbar_S0_rid", false,-1, 3,0);
    tracep->declBus(c+247,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+246,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+245,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+248,"Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+249,"Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+250,"Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+251,"Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBus(c+254,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+255,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+253,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+252,"Xbar_S0_wready", false,-1);
    tracep->declBit(c+256,"Xbar_S0_wlast", false,-1);
    tracep->declBus(c+259,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+258,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+257,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+260,"Xbar_S0_bid", false,-1, 3,0);
    tracep->declBus(c+82,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+225,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+404,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+328,"Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+329,"Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+83,"Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+405,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+406,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+407,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+226,"Xbar_S1_rready", false,-1);
    tracep->declBit(c+408,"Xbar_S1_rlast", false,-1);
    tracep->declBus(c+409,"Xbar_S1_rid", false,-1, 3,0);
    tracep->declBus(c+84,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+227,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+410,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+328,"Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+329,"Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+85,"Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBus(c+86,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+87,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+228,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+411,"Xbar_S1_wready", false,-1);
    tracep->declBit(c+229,"Xbar_S1_wlast", false,-1);
    tracep->declBus(c+412,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+413,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+230,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+414,"Xbar_S1_bid", false,-1, 3,0);
    tracep->declBus(c+59,"Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+113,"Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+114,"Xbar_S2_arready", false,-1);
    tracep->declBus(c+328,"Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+329,"Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+60,"Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+115,"Xbar_S2_rdata", false,-1, 31,0);
    tracep->declBus(c+331,"Xbar_S2_rresp", false,-1, 1,0);
    tracep->declBit(c+116,"Xbar_S2_rvalid", false,-1);
    tracep->declBit(c+117,"Xbar_S2_rready", false,-1);
    tracep->declBit(c+116,"Xbar_S2_rlast", false,-1);
    tracep->declBus(c+328,"Xbar_S2_rid", false,-1, 3,0);
    tracep->declBus(c+61,"Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+118,"Xbar_S2_awvalid", false,-1);
    tracep->declBit(c+119,"Xbar_S2_awready", false,-1);
    tracep->declBus(c+328,"Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+329,"Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+62,"Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBus(c+63,"Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+64,"Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+120,"Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+121,"Xbar_S2_wready", false,-1);
    tracep->declBit(c+122,"Xbar_S2_wlast", false,-1);
    tracep->declBus(c+331,"Xbar_S2_bresp", false,-1, 1,0);
    tracep->declBit(c+123,"Xbar_S2_bvalid", false,-1);
    tracep->declBit(c+124,"Xbar_S2_bready", false,-1);
    tracep->declBus(c+328,"Xbar_S2_bid", false,-1, 3,0);
    tracep->declBus(c+395,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+396,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+330,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+397,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBus(c+231,"r_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+323,"r_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+232,"w_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+324,"w_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+52,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+316,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+53,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+319,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+320,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+321,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+58,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+50,"reg_Xbar_arready", false,-1);
    tracep->declBit(c+317,"reg_Xbar_rlast", false,-1);
    tracep->declBus(c+318,"reg_Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+322,"reg_Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+88,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+233,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+234,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+89,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+235,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBus(c+90,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+91,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+236,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+237,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+328,"reg_Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+329,"reg_Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+92,"reg_Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"reg_Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+328,"reg_Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+329,"reg_Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+93,"reg_Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"reg_Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBit(c+238,"reg_Xbar_S0_wlast", false,-1);
    tracep->declBus(c+82,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+225,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+226,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+84,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+227,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+86,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+87,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+228,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+230,"reg_Xbar_S1_bready", false,-1);
    tracep->declBus(c+328,"reg_Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+329,"reg_Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+83,"reg_Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"reg_Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+328,"reg_Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+329,"reg_Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+85,"reg_Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"reg_Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBit(c+229,"reg_Xbar_S1_wlast", false,-1);
    tracep->declBus(c+59,"reg_Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+113,"reg_Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+117,"reg_Xbar_S2_rready", false,-1);
    tracep->declBus(c+61,"reg_Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+118,"reg_Xbar_S2_awvalid", false,-1);
    tracep->declBus(c+63,"reg_Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+64,"reg_Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+120,"reg_Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+124,"reg_Xbar_S2_bready", false,-1);
    tracep->declBus(c+328,"reg_Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+329,"reg_Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+60,"reg_Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+331,"reg_Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+328,"reg_Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+329,"reg_Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+62,"reg_Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+331,"reg_Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBit(c+122,"reg_Xbar_S2_wlast", false,-1);
    tracep->declBit(c+325,"read_S0_done", false,-1);
    tracep->declBit(c+326,"write_S0_done", false,-1);
    tracep->declBit(c+239,"read_S1_done", false,-1);
    tracep->declBit(c+240,"write_S1_done", false,-1);
    tracep->declBit(c+241,"read_S2_done", false,-1);
    tracep->declBit(c+242,"write_S2_done", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_24120011___024root__trace_init_top(Vysyx_24120011___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_init_top\n"); );
    // Body
    Vysyx_24120011___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24120011___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120011___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24120011___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24120011___024root__trace_register(Vysyx_24120011___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24120011___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24120011___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24120011___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24120011___024root__trace_full_sub_0(Vysyx_24120011___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24120011___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24120011___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24120011___024root*>(voidSelf);
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24120011___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24120011___024root__trace_full_sub_0(Vysyx_24120011___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24120011__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24120011___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((2U & (IData)(vlSelf->ysyx_24120011__DOT__pc_ctrl))
                              ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__pc_ctrl))
                                  ? vlSelf->ysyx_24120011__DOT__r_csr_data
                                  : vlSelf->ysyx_24120011__DOT__alu_result)
                              : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__pc_ctrl))
                                  ? vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                  : (((0x63U == (0x7fU 
                                                 & vlSelf->ysyx_24120011__DOT__inst)) 
                                      & vlSelf->ysyx_24120011__DOT__alu_result)
                                      ? vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                      : ((IData)(4U) 
                                         + vlSelf->ysyx_24120011__DOT__pc))))),32);
    bufp->fullCData(oldp+2,((0x1fU & (vlSelf->ysyx_24120011__DOT__inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelf->ysyx_24120011__DOT__inst 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->ysyx_24120011__DOT__inst 
                                      >> 7U))),5);
    bufp->fullCData(oldp+5,((7U & (vlSelf->ysyx_24120011__DOT__inst 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+6,((vlSelf->ysyx_24120011__DOT__inst 
                             >> 0x19U)),7);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_24120011__DOT__imme),32);
    bufp->fullIData(oldp+8,(((8U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                              ? 0U : ((4U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                       ? ((2U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                           ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                               ? 0U
                                               : vlSelf->ysyx_24120011__DOT__r_csr_data)
                                           : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                               ? vlSelf->ysyx_24120011__DOT__r_mem_data
                                               : 0U))
                                       : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                           ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                               ? vlSelf->ysyx_24120011__DOT__imme
                                               : vlSelf->ysyx_24120011__DOT__alu_result)
                                           : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl))
                                               ? vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme
                                               : ((IData)(4U) 
                                                  + vlSelf->ysyx_24120011__DOT__pc)))))),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24120011__DOT__src1),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24120011__DOT__src2),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24120011__DOT__i_PCProcessor__DOT__pc_add_imme),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24120011__DOT__ALUB),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24120011__DOT__alu_result),32);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_24120011__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_24120011__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_24120011__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+17,(((IData)(vlSelf->ysyx_24120011__DOT__LSU_valid) 
                            & (4U != (IData)(vlSelf->ysyx_24120011__DOT__rd_ctrl)))));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_24120011__DOT__w_mem_en));
    bufp->fullBit(oldp+19,(vlSelf->ysyx_24120011__DOT__r_mem_en));
    bufp->fullBit(oldp+20,(vlSelf->ysyx_24120011__DOT__sign_extension));
    bufp->fullBit(oldp+21,(((0x63U == (0x7fU & vlSelf->ysyx_24120011__DOT__inst)) 
                            & vlSelf->ysyx_24120011__DOT__alu_result)));
    bufp->fullCData(oldp+22,(vlSelf->ysyx_24120011__DOT__w_mem_len),8);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_24120011__DOT__r_mem_len),8);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_24120011__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_24120011__DOT__w_csr_data_ctrl),4);
    bufp->fullSData(oldp+26,(vlSelf->ysyx_24120011__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+27,(vlSelf->ysyx_24120011__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+28,(vlSelf->ysyx_24120011__DOT__w_csr_en));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_24120011__DOT__r_csr_en));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_24120011__DOT__w_csr_ecall));
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24120011__DOT__w_csr_data),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24120011__DOT__r_csr_data),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24120011__DOT__inst),32);
    bufp->fullBit(oldp+34,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24120011__DOT__M0_rdata),32);
    bufp->fullBit(oldp+36,(vlSelf->ysyx_24120011__DOT__M0_rvalid));
    bufp->fullBit(oldp+37,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullIData(oldp+38,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+39,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullCData(oldp+40,(((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid)
                               ? 2U : ((1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelf->ysyx_24120011__DOT__r_mem_len))))) 
                                       | (2U & (- (IData)(
                                                          (4U 
                                                           == (IData)(vlSelf->ysyx_24120011__DOT__r_mem_len)))))))),3);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24120011__DOT__M1_rdata),32);
    bufp->fullBit(oldp+42,(vlSelf->ysyx_24120011__DOT__M1_rvalid));
    bufp->fullIData(oldp+43,(((3U == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011__DOT__alu_result
                               : 0U)),32);
    bufp->fullCData(oldp+44,(((IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid)
                               ? 2U : ((1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))))) 
                                       | (2U & (- (IData)(
                                                          (4U 
                                                           == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len)))))))),3);
    bufp->fullIData(oldp+45,(((4U == (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011__DOT__src2
                               : 0U)),32);
    bufp->fullCData(oldp+46,(((4U == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))
                               ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011__DOT__w_mem_len))
                                          ? 3U : 1U))),4);
    bufp->fullBit(oldp+47,(vlSelf->ysyx_24120011__DOT__M1_wready));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_24120011__DOT__M1_bvalid));
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24120011__DOT__S0_araddr),32);
    bufp->fullBit(oldp+50,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullCData(oldp+51,(vlSelf->ysyx_24120011__DOT__S0_arsize),3);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+53,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24120011__DOT__S0_awaddr),32);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_24120011__DOT__S0_awsize),3);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24120011__DOT__S0_wdata),32);
    bufp->fullCData(oldp+57,(vlSelf->ysyx_24120011__DOT__S0_wstrb),4);
    bufp->fullBit(oldp+58,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize),3);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize),3);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+66,(((1U & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                               ? vlSelf->ysyx_24120011__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                               : vlSelf->ysyx_24120011__DOT__ALUB)),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+68,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+69,((((vlSelf->ysyx_24120011__DOT__src1 
                              >> 0x1fU) == (((1U & (IData)(vlSelf->ysyx_24120011__DOT__ALU_ctrl))
                                              ? vlSelf->ysyx_24120011__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                              : vlSelf->ysyx_24120011__DOT__ALUB) 
                                            >> 0x1fU)) 
                            & ((vlSelf->ysyx_24120011__DOT__src1 
                                >> 0x1fU) != (vlSelf->ysyx_24120011__DOT__i_ALU__DOT__ALUout_tmp 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+70,((1U & (~ (IData)(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_24120011__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+72,((vlSelf->ysyx_24120011__DOT__src1 
                            == vlSelf->ysyx_24120011__DOT__ALUB)));
    bufp->fullBit(oldp+73,((vlSelf->ysyx_24120011__DOT__src1 
                            != vlSelf->ysyx_24120011__DOT__ALUB)));
    bufp->fullCData(oldp+74,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+75,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__next_state),3);
    bufp->fullCData(oldp+76,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+80,((0x7fU & vlSelf->ysyx_24120011__DOT__inst)),7);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
    bufp->fullCData(oldp+83,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
    bufp->fullCData(oldp+85,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
    bufp->fullCData(oldp+87,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
    bufp->fullCData(oldp+91,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
    bufp->fullCData(oldp+92,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
    bufp->fullCData(oldp+93,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24120011__DOT__r_mem_data),32);
    bufp->fullIData(oldp+95,(((IData)(4U) + vlSelf->ysyx_24120011__DOT__pc)),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs
                             [0xaU]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24120011__DOT__pc),32);
    bufp->fullBit(oldp+98,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_24120011__DOT__LSU_valid));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_24120011__DOT__LSU_ready));
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24120011__DOT__LSU_valid),32);
    bufp->fullBit(oldp+102,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__rready));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__bready));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_24120011__DOT__S0_arvalid));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_24120011__DOT__S0_rready));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_24120011__DOT__S0_awvalid));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24120011__DOT__S0_wvalid));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24120011__DOT__S0_bready));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
    bufp->fullBit(oldp+114,((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
    bufp->fullBit(oldp+116,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
    bufp->fullBit(oldp+119,((3U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
    bufp->fullBit(oldp+123,((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_24120011__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullBit(oldp+129,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+130,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+131,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+132,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+133,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+134,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+135,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state),3);
    bufp->fullBit(oldp+136,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+138,((0U != (IData)(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+139,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+140,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+141,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+142,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+143,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+144,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+145,(vlSelf->ysyx_24120011__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_24120011__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+210,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+211,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+212,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+213,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullCData(oldp+214,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state),3);
    bufp->fullCData(oldp+215,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
    bufp->fullCData(oldp+217,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+218,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+219,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
    bufp->fullBit(oldp+220,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
    bufp->fullCData(oldp+221,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
    bufp->fullCData(oldp+222,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
    bufp->fullQData(oldp+223,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
    bufp->fullBit(oldp+225,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullBit(oldp+226,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullBit(oldp+227,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullBit(oldp+228,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+229,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
    bufp->fullBit(oldp+230,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullCData(oldp+231,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
    bufp->fullCData(oldp+232,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
    bufp->fullBit(oldp+233,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullBit(oldp+234,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullBit(oldp+235,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullBit(oldp+236,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
    bufp->fullBit(oldp+237,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullBit(oldp+238,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
    bufp->fullBit(oldp+239,(((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                             & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+240,(((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                             & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+241,(((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
    bufp->fullBit(oldp+242,(((5U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    bufp->fullBit(oldp+243,(vlSelf->clock));
    bufp->fullBit(oldp+244,(vlSelf->reset));
    bufp->fullBit(oldp+245,(vlSelf->io_master_awready));
    bufp->fullBit(oldp+246,(vlSelf->io_master_awvalid));
    bufp->fullIData(oldp+247,(vlSelf->io_master_awaddr),32);
    bufp->fullCData(oldp+248,(vlSelf->io_master_awid),4);
    bufp->fullCData(oldp+249,(vlSelf->io_master_awlen),8);
    bufp->fullCData(oldp+250,(vlSelf->io_master_awsize),3);
    bufp->fullCData(oldp+251,(vlSelf->io_master_awburst),2);
    bufp->fullBit(oldp+252,(vlSelf->io_master_wready));
    bufp->fullBit(oldp+253,(vlSelf->io_master_wvalid));
    bufp->fullIData(oldp+254,(vlSelf->io_master_wdata),32);
    bufp->fullCData(oldp+255,(vlSelf->io_master_wstrb),4);
    bufp->fullBit(oldp+256,(vlSelf->io_master_wlast));
    bufp->fullBit(oldp+257,(vlSelf->io_master_bready));
    bufp->fullBit(oldp+258,(vlSelf->io_master_bvalid));
    bufp->fullCData(oldp+259,(vlSelf->io_master_bresp),2);
    bufp->fullCData(oldp+260,(vlSelf->io_master_bid),4);
    bufp->fullBit(oldp+261,(vlSelf->io_master_arready));
    bufp->fullBit(oldp+262,(vlSelf->io_master_arvalid));
    bufp->fullIData(oldp+263,(vlSelf->io_master_araddr),32);
    bufp->fullCData(oldp+264,(vlSelf->io_master_arid),4);
    bufp->fullCData(oldp+265,(vlSelf->io_master_arlen),8);
    bufp->fullCData(oldp+266,(vlSelf->io_master_arsize),3);
    bufp->fullCData(oldp+267,(vlSelf->io_master_arburst),2);
    bufp->fullBit(oldp+268,(vlSelf->io_master_rready));
    bufp->fullBit(oldp+269,(vlSelf->io_master_rvalid));
    bufp->fullCData(oldp+270,(vlSelf->io_master_rresp),2);
    bufp->fullIData(oldp+271,(vlSelf->io_master_rdata),32);
    bufp->fullBit(oldp+272,(vlSelf->io_master_rlast));
    bufp->fullCData(oldp+273,(vlSelf->io_master_rid),4);
    bufp->fullBit(oldp+274,(vlSelf->io_slave_awready));
    bufp->fullBit(oldp+275,(vlSelf->io_slave_awvalid));
    bufp->fullIData(oldp+276,(vlSelf->io_slave_awaddr),32);
    bufp->fullCData(oldp+277,(vlSelf->io_slave_awid),4);
    bufp->fullCData(oldp+278,(vlSelf->io_slave_awlen),8);
    bufp->fullCData(oldp+279,(vlSelf->io_slave_awsize),3);
    bufp->fullCData(oldp+280,(vlSelf->io_slave_awburst),2);
    bufp->fullBit(oldp+281,(vlSelf->io_slave_wready));
    bufp->fullBit(oldp+282,(vlSelf->io_slave_wvalid));
    bufp->fullIData(oldp+283,(vlSelf->io_slave_wdata),32);
    bufp->fullCData(oldp+284,(vlSelf->io_slave_wstrb),4);
    bufp->fullBit(oldp+285,(vlSelf->io_slave_wlast));
    bufp->fullBit(oldp+286,(vlSelf->io_slave_bready));
    bufp->fullBit(oldp+287,(vlSelf->io_slave_bvalid));
    bufp->fullCData(oldp+288,(vlSelf->io_slave_bresp),2);
    bufp->fullCData(oldp+289,(vlSelf->io_slave_bid),4);
    bufp->fullBit(oldp+290,(vlSelf->io_slave_arready));
    bufp->fullBit(oldp+291,(vlSelf->io_slave_arvalid));
    bufp->fullIData(oldp+292,(vlSelf->io_slave_araddr),32);
    bufp->fullCData(oldp+293,(vlSelf->io_slave_arid),4);
    bufp->fullCData(oldp+294,(vlSelf->io_slave_arlen),8);
    bufp->fullCData(oldp+295,(vlSelf->io_slave_arsize),3);
    bufp->fullCData(oldp+296,(vlSelf->io_slave_arburst),2);
    bufp->fullBit(oldp+297,(vlSelf->io_slave_rready));
    bufp->fullBit(oldp+298,(vlSelf->io_slave_rvalid));
    bufp->fullCData(oldp+299,(vlSelf->io_slave_rresp),2);
    bufp->fullIData(oldp+300,(vlSelf->io_slave_rdata),32);
    bufp->fullBit(oldp+301,(vlSelf->io_slave_rlast));
    bufp->fullCData(oldp+302,(vlSelf->io_slave_rid),4);
    bufp->fullCData(oldp+303,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? (IData)(vlSelf->io_master_rresp)
                                                 : 0U)))
                                : 0U)),2);
    bufp->fullBit(oldp+304,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                    : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                                : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                   & (IData)(vlSelf->io_master_rlast)))))));
    bufp->fullCData(oldp+305,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? (IData)(vlSelf->io_master_rid)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullBit(oldp+306,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                    : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                                : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (IData)(vlSelf->io_master_awready)))))));
    bufp->fullBit(oldp+307,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                    : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                                : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (IData)(vlSelf->io_master_wready)))))));
    bufp->fullCData(oldp+308,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? (IData)(vlSelf->io_master_bresp)
                                                 : 0U)))
                                : 0U)),2);
    bufp->fullCData(oldp+309,(((1U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? (IData)(vlSelf->io_master_bid)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullCData(oldp+310,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? (IData)(vlSelf->io_master_rresp)
                                                 : 0U)))
                                : 0U)),2);
    bufp->fullBit(oldp+311,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                    : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                                : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                   & (IData)(vlSelf->io_master_rlast)))))));
    bufp->fullCData(oldp+312,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? (IData)(vlSelf->io_master_rid)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullBit(oldp+313,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & ((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                    : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                                : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (IData)(vlSelf->io_master_awready)))))));
    bufp->fullCData(oldp+314,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? (IData)(vlSelf->io_master_bresp)
                                                 : 0U)))
                                : 0U)),2);
    bufp->fullCData(oldp+315,(((2U == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? (IData)(vlSelf->io_master_bid)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullCData(oldp+316,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                         : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (IData)(vlSelf->io_master_rresp)
                                             : 0U)))),2);
    bufp->fullBit(oldp+317,(((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                 >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                             : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                & (IData)(vlSelf->io_master_rlast))))));
    bufp->fullCData(oldp+318,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                         : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (IData)(vlSelf->io_master_rid)
                                             : 0U)))),4);
    bufp->fullBit(oldp+319,(((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                 >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 
                                                (3U 
                                                 == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                             : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                & (IData)(vlSelf->io_master_awready))))));
    bufp->fullBit(oldp+320,(((~ ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                 >> 2U)) & ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                 : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                             : ((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                & (IData)(vlSelf->io_master_wready))))));
    bufp->fullCData(oldp+321,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                         : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (IData)(vlSelf->io_master_bresp)
                                             : 0U)))),2);
    bufp->fullCData(oldp+322,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                         : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (IData)(vlSelf->io_master_bid)
                                             : 0U)))),4);
    bufp->fullCData(oldp+323,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                                                 ? 0U
                                                 : 3U)
                                             : (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                 ? 0U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (((IData)(vlSelf->io_master_rvalid) 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                                                 ? 0U
                                                 : 1U)
                                             : ((IData)(vlSelf->ysyx_24120011__DOT__S0_arvalid)
                                                 ? 
                                                (((0xa0000048U 
                                                   == vlSelf->ysyx_24120011__DOT__S0_araddr) 
                                                  | (0xa000004cU 
                                                     == vlSelf->ysyx_24120011__DOT__S0_araddr))
                                                  ? 3U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullCData(oldp+324,(((4U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (((5U 
                                                  == (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                                                 ? 0U
                                                 : 3U)
                                             : (((IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                                 ? 0U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (((IData)(vlSelf->io_master_bvalid) 
                                                 & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                                 ? 0U
                                                 : 1U)
                                             : ((IData)(vlSelf->ysyx_24120011__DOT__S0_awvalid)
                                                 ? 
                                                ((0xa00003f8U 
                                                  == vlSelf->ysyx_24120011__DOT__S0_awaddr)
                                                  ? 2U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullBit(oldp+325,(((IData)(vlSelf->io_master_rvalid) 
                             & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+326,(((IData)(vlSelf->io_master_bvalid) 
                             & (IData)(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullIData(oldp+327,(vlSelf->ysyx_24120011__DOT__rdata),32);
    bufp->fullCData(oldp+328,(0U),4);
    bufp->fullCData(oldp+329,(0U),8);
    bufp->fullCData(oldp+330,(2U),3);
    bufp->fullCData(oldp+331,(0U),2);
    bufp->fullIData(oldp+332,(0U),32);
    bufp->fullBit(oldp+333,(0U));
    bufp->fullCData(oldp+334,(0xfU),4);
    bufp->fullBit(oldp+335,(1U));
    bufp->fullIData(oldp+336,(vlSelf->ysyx_24120011__DOT__sram_araddr),32);
    bufp->fullBit(oldp+337,(vlSelf->ysyx_24120011__DOT__sram_arvalid));
    bufp->fullBit(oldp+338,(vlSelf->ysyx_24120011__DOT__sram_arready));
    bufp->fullCData(oldp+339,(vlSelf->ysyx_24120011__DOT__sram_arid),4);
    bufp->fullCData(oldp+340,(vlSelf->ysyx_24120011__DOT__sram_arlen),8);
    bufp->fullCData(oldp+341,(vlSelf->ysyx_24120011__DOT__sram_arsize),3);
    bufp->fullCData(oldp+342,(vlSelf->ysyx_24120011__DOT__sram_arburst),2);
    bufp->fullIData(oldp+343,(vlSelf->ysyx_24120011__DOT__sram_rdata),32);
    bufp->fullCData(oldp+344,(vlSelf->ysyx_24120011__DOT__sram_rresp),2);
    bufp->fullBit(oldp+345,(vlSelf->ysyx_24120011__DOT__sram_rvalid));
    bufp->fullBit(oldp+346,(vlSelf->ysyx_24120011__DOT__sram_rready));
    bufp->fullBit(oldp+347,(vlSelf->ysyx_24120011__DOT__sram_rlast));
    bufp->fullCData(oldp+348,(vlSelf->ysyx_24120011__DOT__sram_rid),4);
    bufp->fullIData(oldp+349,(vlSelf->ysyx_24120011__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+350,(vlSelf->ysyx_24120011__DOT__sram_awvalid));
    bufp->fullBit(oldp+351,(vlSelf->ysyx_24120011__DOT__sram_awready));
    bufp->fullCData(oldp+352,(vlSelf->ysyx_24120011__DOT__sram_awid),4);
    bufp->fullCData(oldp+353,(vlSelf->ysyx_24120011__DOT__sram_awlen),8);
    bufp->fullCData(oldp+354,(vlSelf->ysyx_24120011__DOT__sram_awsize),3);
    bufp->fullCData(oldp+355,(vlSelf->ysyx_24120011__DOT__sram_awburst),2);
    bufp->fullIData(oldp+356,(vlSelf->ysyx_24120011__DOT__sram_wdata),32);
    bufp->fullCData(oldp+357,(vlSelf->ysyx_24120011__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+358,(vlSelf->ysyx_24120011__DOT__sram_wvalid));
    bufp->fullBit(oldp+359,(vlSelf->ysyx_24120011__DOT__sram_wready));
    bufp->fullBit(oldp+360,(vlSelf->ysyx_24120011__DOT__sram_wlast));
    bufp->fullCData(oldp+361,(vlSelf->ysyx_24120011__DOT__sram_bresp),2);
    bufp->fullBit(oldp+362,(vlSelf->ysyx_24120011__DOT__sram_bvalid));
    bufp->fullBit(oldp+363,(vlSelf->ysyx_24120011__DOT__sram_bready));
    bufp->fullCData(oldp+364,(vlSelf->ysyx_24120011__DOT__sram_bid),4);
    bufp->fullIData(oldp+365,(vlSelf->ysyx_24120011__DOT__uart_araddr),32);
    bufp->fullBit(oldp+366,(vlSelf->ysyx_24120011__DOT__uart_arvalid));
    bufp->fullBit(oldp+367,(vlSelf->ysyx_24120011__DOT__uart_arready));
    bufp->fullCData(oldp+368,(vlSelf->ysyx_24120011__DOT__uart_arid),4);
    bufp->fullCData(oldp+369,(vlSelf->ysyx_24120011__DOT__uart_arlen),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyx_24120011__DOT__uart_arsize),3);
    bufp->fullCData(oldp+371,(vlSelf->ysyx_24120011__DOT__uart_arburst),2);
    bufp->fullIData(oldp+372,(vlSelf->ysyx_24120011__DOT__uart_rdata),32);
    bufp->fullCData(oldp+373,(vlSelf->ysyx_24120011__DOT__uart_rresp),2);
    bufp->fullBit(oldp+374,(vlSelf->ysyx_24120011__DOT__uart_rvalid));
    bufp->fullBit(oldp+375,(vlSelf->ysyx_24120011__DOT__uart_rready));
    bufp->fullBit(oldp+376,(vlSelf->ysyx_24120011__DOT__uart_rlast));
    bufp->fullCData(oldp+377,(vlSelf->ysyx_24120011__DOT__uart_rid),4);
    bufp->fullIData(oldp+378,(vlSelf->ysyx_24120011__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+379,(vlSelf->ysyx_24120011__DOT__uart_awvalid));
    bufp->fullBit(oldp+380,(vlSelf->ysyx_24120011__DOT__uart_awready));
    bufp->fullCData(oldp+381,(vlSelf->ysyx_24120011__DOT__uart_awid),4);
    bufp->fullCData(oldp+382,(vlSelf->ysyx_24120011__DOT__uart_awlen),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyx_24120011__DOT__uart_awsize),3);
    bufp->fullCData(oldp+384,(vlSelf->ysyx_24120011__DOT__uart_awburst),2);
    bufp->fullIData(oldp+385,(vlSelf->ysyx_24120011__DOT__uart_wdata),32);
    bufp->fullCData(oldp+386,(vlSelf->ysyx_24120011__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+387,(vlSelf->ysyx_24120011__DOT__uart_wvalid));
    bufp->fullBit(oldp+388,(vlSelf->ysyx_24120011__DOT__uart_wready));
    bufp->fullBit(oldp+389,(vlSelf->ysyx_24120011__DOT__uart_wlast));
    bufp->fullCData(oldp+390,(vlSelf->ysyx_24120011__DOT__uart_bresp),2);
    bufp->fullBit(oldp+391,(vlSelf->ysyx_24120011__DOT__uart_bvalid));
    bufp->fullBit(oldp+392,(vlSelf->ysyx_24120011__DOT__uart_bready));
    bufp->fullCData(oldp+393,(vlSelf->ysyx_24120011__DOT__uart_bid),4);
    bufp->fullBit(oldp+394,(vlSelf->ysyx_24120011__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+395,(0U),3);
    bufp->fullCData(oldp+396,(1U),3);
    bufp->fullCData(oldp+397,(3U),3);
    bufp->fullCData(oldp+398,(4U),3);
    bufp->fullCData(oldp+399,(5U),3);
    bufp->fullIData(oldp+400,(0x20U),32);
    bufp->fullIData(oldp+401,(0x80000000U),32);
    bufp->fullCData(oldp+402,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+403,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
    bufp->fullBit(oldp+404,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_arready));
    bufp->fullIData(oldp+405,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rdata),32);
    bufp->fullCData(oldp+406,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp),2);
    bufp->fullBit(oldp+407,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid));
    bufp->fullBit(oldp+408,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast));
    bufp->fullCData(oldp+409,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid),4);
    bufp->fullBit(oldp+410,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready));
    bufp->fullBit(oldp+411,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready));
    bufp->fullCData(oldp+412,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp),2);
    bufp->fullBit(oldp+413,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid));
    bufp->fullCData(oldp+414,(vlSelf->ysyx_24120011__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid),4);
}
