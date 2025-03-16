// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBus(c+1054,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1055,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1056,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1057,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1058,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1059,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1060,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1061,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1062,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1063,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1064,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1065,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1066,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1067,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1068,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1069,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1070,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1071,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1072,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1073,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBus(c+1054,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1055,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1056,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1057,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1058,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1059,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1060,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1061,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1062,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1063,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1064,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1065,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1066,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1067,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1068,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1069,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1070,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1071,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1072,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1073,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+1094,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1095,"spi_mosi", false,-1);
    tracep->declBit(c+1074,"spi_miso", false,-1);
    tracep->declBit(c+1072,"uart_rx", false,-1);
    tracep->declBit(c+1073,"uart_tx", false,-1);
    tracep->declBit(c+1075,"psram_sck", false,-1);
    tracep->declBit(c+1076,"psram_ce_n", false,-1);
    tracep->declBus(c+935,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1077,"sdram_clk", false,-1);
    tracep->declBit(c+686,"sdram_cke", false,-1);
    tracep->declBit(c+687,"sdram_cs", false,-1);
    tracep->declBit(c+688,"sdram_ras", false,-1);
    tracep->declBit(c+689,"sdram_cas", false,-1);
    tracep->declBit(c+690,"sdram_we", false,-1);
    tracep->declBus(c+691,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+692,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+693,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+694,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1054,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1055,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1056,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1057,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1058,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1059,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1060,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1061,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1062,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1063,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1064,"ps2_clk", false,-1);
    tracep->declBit(c+1065,"ps2_data", false,-1);
    tracep->declBus(c+1066,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1067,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1068,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1069,"vga_hsync", false,-1);
    tracep->declBit(c+1070,"vga_vsync", false,-1);
    tracep->declBit(c+1071,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBus(c+892,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+20,"in_psel", false,-1);
    tracep->declBit(c+21,"in_penable", false,-1);
    tracep->declBus(c+1096,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+22,"in_pwrite", false,-1);
    tracep->declBus(c+893,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+936,"in_pready", false,-1);
    tracep->declBus(c+937,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+894,"in_pslverr", false,-1);
    tracep->declBus(c+892,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+20,"out_psel", false,-1);
    tracep->declBit(c+21,"out_penable", false,-1);
    tracep->declBus(c+1096,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+22,"out_pwrite", false,-1);
    tracep->declBus(c+893,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+936,"out_pready", false,-1);
    tracep->declBus(c+937,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+894,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+20,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+21,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+22,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+892,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+936,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+894,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+937,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+619,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+620,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+22,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+892,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+695,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1097,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+696,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+621,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+622,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+22,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+895,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1096,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1099,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1100,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+623,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+624,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+22,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+896,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1096,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1101,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1102,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1103,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+625,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+626,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+22,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+896,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1096,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1104,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1105,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1106,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+897,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+627,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+22,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+892,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1078,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1097,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+24,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+898,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+899,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+22,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+896,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1096,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+900,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1097,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1079,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+901,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+902,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+22,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+895,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1096,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+628,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1097,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+25,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+903,"sel_0", false,-1);
    tracep->declBit(c+904,"sel_1", false,-1);
    tracep->declBit(c+905,"sel_2", false,-1);
    tracep->declBit(c+906,"sel_3", false,-1);
    tracep->declBit(c+907,"sel_4", false,-1);
    tracep->declBit(c+908,"sel_5", false,-1);
    tracep->declBit(c+909,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+26,"auto_in_awready", false,-1);
    tracep->declBit(c+27,"auto_in_awvalid", false,-1);
    tracep->declBus(c+28,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_in_wready", false,-1);
    tracep->declBit(c+31,"auto_in_wvalid", false,-1);
    tracep->declBus(c+32,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+938,"auto_in_bready", false,-1);
    tracep->declBit(c+939,"auto_in_bvalid", false,-1);
    tracep->declBus(c+34,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+910,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+35,"auto_in_arready", false,-1);
    tracep->declBit(c+36,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+940,"auto_in_rready", false,-1);
    tracep->declBit(c+941,"auto_in_rvalid", false,-1);
    tracep->declBus(c+40,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+629,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+910,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+20,"auto_out_psel", false,-1);
    tracep->declBit(c+21,"auto_out_penable", false,-1);
    tracep->declBit(c+22,"auto_out_pwrite", false,-1);
    tracep->declBus(c+892,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+893,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+936,"auto_out_pready", false,-1);
    tracep->declBit(c+894,"auto_out_pslverr", false,-1);
    tracep->declBus(c+937,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+21,"nodeOut_penable", false,-1);
    tracep->declBus(c+41,"state", false,-1, 1,0);
    tracep->declBit(c+35,"accept_read", false,-1);
    tracep->declBit(c+26,"accept_write", false,-1);
    tracep->declBit(c+42,"is_write_r", false,-1);
    tracep->declBit(c+22,"is_write", false,-1);
    tracep->declBus(c+40,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+34,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+43,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+44,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+45,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+46,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+911,"resp", false,-1, 1,0);
    tracep->declBus(c+47,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+910,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+941,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+48,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+939,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+49,"auto_in_awready", false,-1);
    tracep->declBit(c+50,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1107,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+52,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+53,"auto_in_wready", false,-1);
    tracep->declBit(c+54,"auto_in_wvalid", false,-1);
    tracep->declBus(c+55,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+57,"auto_in_wlast", false,-1);
    tracep->declBit(c+58,"auto_in_bready", false,-1);
    tracep->declBit(c+942,"auto_in_bvalid", false,-1);
    tracep->declBus(c+943,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+630,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+59,"auto_in_arready", false,-1);
    tracep->declBit(c+60,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1107,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+62,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+63,"auto_in_rready", false,-1);
    tracep->declBit(c+944,"auto_in_rvalid", false,-1);
    tracep->declBus(c+945,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+631,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+632,"auto_in_rlast", false,-1);
    tracep->declBit(c+946,"auto_out_awready", false,-1);
    tracep->declBit(c+64,"auto_out_awvalid", false,-1);
    tracep->declBus(c+28,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+65,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+947,"auto_out_wready", false,-1);
    tracep->declBit(c+66,"auto_out_wvalid", false,-1);
    tracep->declBus(c+32,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_out_wlast", false,-1);
    tracep->declBit(c+948,"auto_out_bready", false,-1);
    tracep->declBit(c+949,"auto_out_bvalid", false,-1);
    tracep->declBus(c+943,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+950,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+951,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+952,"auto_out_arready", false,-1);
    tracep->declBit(c+68,"auto_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+69,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+63,"auto_out_rready", false,-1);
    tracep->declBit(c+944,"auto_out_rvalid", false,-1);
    tracep->declBus(c+945,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+631,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+633,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+953,"auto_out_rlast", false,-1);
    tracep->declBit(c+66,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+70,"w_idle", false,-1);
    tracep->declBit(c+954,"in_awready", false,-1);
    tracep->declBit(c+71,"busy", false,-1);
    tracep->declBus(c+72,"r_addr", false,-1, 31,0);
    tracep->declBus(c+73,"r_len", false,-1, 7,0);
    tracep->declBus(c+74,"len", false,-1, 7,0);
    tracep->declBus(c+75,"addr", false,-1, 31,0);
    tracep->declBit(c+76,"busy_1", false,-1);
    tracep->declBus(c+77,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+78,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+79,"len_1", false,-1, 7,0);
    tracep->declBus(c+80,"addr_1", false,-1, 31,0);
    tracep->declBit(c+81,"wbeats_latched", false,-1);
    tracep->declBit(c+64,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+82,"wbeats_valid", false,-1);
    tracep->declBus(c+83,"w_counter", false,-1, 8,0);
    tracep->declBus(c+84,"w_todo", false,-1, 8,0);
    tracep->declBit(c+67,"w_last", false,-1);
    tracep->declBit(c+948,"nodeOut_bready", false,-1);
    tracep->declBus(c+85,"error_0", false,-1, 1,0);
    tracep->declBus(c+86,"error_1", false,-1, 1,0);
    tracep->declBus(c+87,"error_2", false,-1, 1,0);
    tracep->declBus(c+88,"error_3", false,-1, 1,0);
    tracep->declBus(c+89,"error_4", false,-1, 1,0);
    tracep->declBus(c+90,"error_5", false,-1, 1,0);
    tracep->declBus(c+91,"error_6", false,-1, 1,0);
    tracep->declBus(c+92,"error_7", false,-1, 1,0);
    tracep->declBus(c+93,"error_8", false,-1, 1,0);
    tracep->declBus(c+94,"error_9", false,-1, 1,0);
    tracep->declBus(c+95,"error_10", false,-1, 1,0);
    tracep->declBus(c+96,"error_11", false,-1, 1,0);
    tracep->declBus(c+97,"error_12", false,-1, 1,0);
    tracep->declBus(c+98,"error_13", false,-1, 1,0);
    tracep->declBus(c+99,"error_14", false,-1, 1,0);
    tracep->declBus(c+100,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+59,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBus(c+1107,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+61,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1094,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+62,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1108,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+955,"io_deq_ready", false,-1);
    tracep->declBit(c+68,"io_deq_valid", false,-1);
    tracep->declBus(c+37,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+101,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+102,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+39,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+103,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+104,"ram", false,-1, 48,0);
    tracep->declBit(c+106,"full", false,-1);
    tracep->declBit(c+68,"io_deq_valid_0", false,-1);
    tracep->declBit(c+956,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+49,"io_enq_ready", false,-1);
    tracep->declBit(c+50,"io_enq_valid", false,-1);
    tracep->declBus(c+1107,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+51,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1094,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+52,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1108,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+957,"io_deq_ready", false,-1);
    tracep->declBit(c+107,"io_deq_valid", false,-1);
    tracep->declBus(c+28,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+108,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+109,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+30,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+110,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+111,"ram", false,-1, 48,0);
    tracep->declBit(c+113,"full", false,-1);
    tracep->declBit(c+107,"io_deq_valid_0", false,-1);
    tracep->declBit(c+958,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+53,"io_enq_ready", false,-1);
    tracep->declBit(c+54,"io_enq_valid", false,-1);
    tracep->declBus(c+55,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+56,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+57,"io_enq_bits_last", false,-1);
    tracep->declBit(c+959,"io_deq_ready", false,-1);
    tracep->declBit(c+114,"io_deq_valid", false,-1);
    tracep->declBus(c+32,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+33,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+115,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+116,"ram", false,-1, 36,0);
    tracep->declBit(c+118,"full", false,-1);
    tracep->declBit(c+114,"io_deq_valid_0", false,-1);
    tracep->declBit(c+960,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+961,"auto_in_awready", false,-1);
    tracep->declBit(c+119,"auto_in_awvalid", false,-1);
    tracep->declBus(c+28,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+634,"auto_in_wready", false,-1);
    tracep->declBit(c+121,"auto_in_wvalid", false,-1);
    tracep->declBus(c+32,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+962,"auto_in_bready", false,-1);
    tracep->declBit(c+122,"auto_in_bvalid", false,-1);
    tracep->declBus(c+123,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+124,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+963,"auto_in_arready", false,-1);
    tracep->declBit(c+125,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+964,"auto_in_rready", false,-1);
    tracep->declBit(c+127,"auto_in_rvalid", false,-1);
    tracep->declBus(c+128,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+129,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+130,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+963,"nodeIn_arready", false,-1);
    tracep->declBit(c+961,"nodeIn_awready", false,-1);
    tracep->declBit(c+131,"w_sel0", false,-1);
    tracep->declBit(c+122,"w_full", false,-1);
    tracep->declBus(c+123,"w_id", false,-1, 3,0);
    tracep->declBit(c+132,"r_sel1", false,-1);
    tracep->declBit(c+133,"w_sel1", false,-1);
    tracep->declBit(c+127,"r_full", false,-1);
    tracep->declBus(c+128,"r_id", false,-1, 3,0);
    tracep->declBit(c+965,"ren", false,-1);
    tracep->declBit(c+134,"rdata_REG", false,-1);
    tracep->declBus(c+135,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+136,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+137,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+138,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+139,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+965,"R0_en", false,-1);
    tracep->declBit(c+1052,"R0_clk", false,-1);
    tracep->declBus(c+140,"R0_data", false,-1, 31,0);
    tracep->declBus(c+141,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+966,"W0_en", false,-1);
    tracep->declBit(c+1052,"W0_clk", false,-1);
    tracep->declBus(c+32,"W0_data", false,-1, 31,0);
    tracep->declBus(c+33,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+49,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+50,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1107,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+52,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+53,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+54,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+55,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+57,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+58,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+942,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+943,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+630,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+59,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+60,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1107,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+62,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+63,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+944,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+631,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+632,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+49,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+50,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1107,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+52,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+53,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+54,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+55,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+57,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+58,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+942,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+943,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+630,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+59,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+60,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1107,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+62,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+63,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+944,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+631,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+632,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+967,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+142,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+947,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+66,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+32,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+948,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+949,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+943,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+950,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+968,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+143,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+63,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+944,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+945,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+631,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+953,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+961,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+119,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+634,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+121,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+32,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+962,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+122,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+123,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+124,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+963,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+125,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+964,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+127,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+128,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+129,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+130,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+144,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+145,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+146,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+147,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+148,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+635,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+149,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+150,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+26,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+27,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+26,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+31,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+32,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+938,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+939,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+34,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+910,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+35,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+36,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+37,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+940,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+941,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+40,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+629,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+910,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+949,"in_0_bvalid", false,-1);
    tracep->declBit(c+944,"in_0_rvalid", false,-1);
    tracep->declBit(c+969,"in_0_wready", false,-1);
    tracep->declBit(c+970,"in_0_awready", false,-1);
    tracep->declBit(c+968,"in_0_arready", false,-1);
    tracep->declBit(c+967,"anonIn_awready", false,-1);
    tracep->declBit(c+152,"requestARIO_0_0", false,-1);
    tracep->declBit(c+153,"requestARIO_0_1", false,-1);
    tracep->declBit(c+154,"requestARIO_0_2", false,-1);
    tracep->declBit(c+155,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+156,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+157,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+158,"arSel", false,-1, 15,0);
    tracep->declBus(c+159,"awSel", false,-1, 15,0);
    tracep->declBus(c+971,"rSel", false,-1, 15,0);
    tracep->declBus(c+972,"bSel", false,-1, 15,0);
    tracep->declBit(c+160,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+161,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+162,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+163,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+164,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+165,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+166,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+167,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+168,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+169,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+170,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+171,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+172,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+173,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+174,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+175,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+176,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+177,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+178,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+179,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+180,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+181,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+182,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+183,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+184,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+185,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+186,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+187,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+188,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+189,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+190,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+191,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+192,"latched", false,-1);
    tracep->declBit(c+193,"in_0_awvalid", false,-1);
    tracep->declBit(c+194,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+195,"in_0_wvalid", false,-1);
    tracep->declBit(c+196,"idle_3", false,-1);
    tracep->declBit(c+973,"anyValid", false,-1);
    tracep->declBus(c+974,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+197,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+975,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+976,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+977,"prefixOR_1", false,-1);
    tracep->declBit(c+978,"winner_3_1", false,-1);
    tracep->declBit(c+979,"winner_3_2", false,-1);
    tracep->declBit(c+198,"state_3_0", false,-1);
    tracep->declBit(c+199,"state_3_1", false,-1);
    tracep->declBit(c+200,"state_3_2", false,-1);
    tracep->declBit(c+980,"muxState_3_0", false,-1);
    tracep->declBit(c+981,"muxState_3_1", false,-1);
    tracep->declBit(c+982,"muxState_3_2", false,-1);
    tracep->declBit(c+201,"idle_4", false,-1);
    tracep->declBit(c+983,"anyValid_1", false,-1);
    tracep->declBus(c+984,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+202,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+985,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+986,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+987,"winner_4_0", false,-1);
    tracep->declBit(c+988,"winner_4_2", false,-1);
    tracep->declBit(c+203,"state_4_0", false,-1);
    tracep->declBit(c+204,"state_4_2", false,-1);
    tracep->declBit(c+989,"muxState_4_0", false,-1);
    tracep->declBit(c+990,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+205,"io_enq_ready", false,-1);
    tracep->declBit(c+194,"io_enq_valid", false,-1);
    tracep->declBus(c+206,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+991,"io_deq_ready", false,-1);
    tracep->declBit(c+207,"io_deq_valid", false,-1);
    tracep->declBus(c+208,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+209,"wrap", false,-1);
    tracep->declBit(c+210,"wrap_1", false,-1);
    tracep->declBit(c+211,"maybe_full", false,-1);
    tracep->declBit(c+212,"ptr_match", false,-1);
    tracep->declBit(c+213,"empty", false,-1);
    tracep->declBit(c+214,"full", false,-1);
    tracep->declBit(c+207,"io_deq_valid_0", false,-1);
    tracep->declBit(c+992,"do_deq", false,-1);
    tracep->declBit(c+993,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+210,"R0_addr", false,-1);
    tracep->declBit(c+1095,"R0_en", false,-1);
    tracep->declBit(c+1052,"R0_clk", false,-1);
    tracep->declBus(c+215,"R0_data", false,-1, 2,0);
    tracep->declBit(c+209,"W0_addr", false,-1);
    tracep->declBit(c+993,"W0_en", false,-1);
    tracep->declBit(c+1052,"W0_clk", false,-1);
    tracep->declBus(c+206,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+216+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+946,"auto_in_awready", false,-1);
    tracep->declBit(c+64,"auto_in_awvalid", false,-1);
    tracep->declBus(c+28,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+65,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+947,"auto_in_wready", false,-1);
    tracep->declBit(c+66,"auto_in_wvalid", false,-1);
    tracep->declBus(c+32,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_in_wlast", false,-1);
    tracep->declBit(c+948,"auto_in_bready", false,-1);
    tracep->declBit(c+949,"auto_in_bvalid", false,-1);
    tracep->declBus(c+943,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+950,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+951,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+952,"auto_in_arready", false,-1);
    tracep->declBit(c+68,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+69,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+63,"auto_in_rready", false,-1);
    tracep->declBit(c+944,"auto_in_rvalid", false,-1);
    tracep->declBus(c+945,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+631,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+633,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+953,"auto_in_rlast", false,-1);
    tracep->declBit(c+967,"auto_out_awready", false,-1);
    tracep->declBit(c+142,"auto_out_awvalid", false,-1);
    tracep->declBus(c+28,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+29,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+30,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+947,"auto_out_wready", false,-1);
    tracep->declBit(c+66,"auto_out_wvalid", false,-1);
    tracep->declBus(c+32,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+67,"auto_out_wlast", false,-1);
    tracep->declBit(c+948,"auto_out_bready", false,-1);
    tracep->declBit(c+949,"auto_out_bvalid", false,-1);
    tracep->declBus(c+943,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+950,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+968,"auto_out_arready", false,-1);
    tracep->declBit(c+143,"auto_out_arvalid", false,-1);
    tracep->declBus(c+37,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+63,"auto_out_rready", false,-1);
    tracep->declBit(c+944,"auto_out_rvalid", false,-1);
    tracep->declBus(c+945,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+631,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+953,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+218,"io_enq_ready", false,-1);
    tracep->declBit(c+636,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+994,"io_deq_ready", false,-1);
    tracep->declBit(c+219,"io_deq_valid", false,-1);
    tracep->declBit(c+220,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+219,"full", false,-1);
    tracep->declBit(c+220,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+221,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+222,"io_enq_ready", false,-1);
    tracep->declBit(c+637,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+995,"io_deq_ready", false,-1);
    tracep->declBit(c+223,"io_deq_valid", false,-1);
    tracep->declBit(c+224,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+223,"full", false,-1);
    tracep->declBit(c+224,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+225,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+226,"io_enq_ready", false,-1);
    tracep->declBit(c+638,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+996,"io_deq_ready", false,-1);
    tracep->declBit(c+227,"io_deq_valid", false,-1);
    tracep->declBit(c+228,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+227,"full", false,-1);
    tracep->declBit(c+228,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+229,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+230,"io_enq_ready", false,-1);
    tracep->declBit(c+639,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+997,"io_deq_ready", false,-1);
    tracep->declBit(c+231,"io_deq_valid", false,-1);
    tracep->declBit(c+232,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+231,"full", false,-1);
    tracep->declBit(c+232,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+233,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+234,"io_enq_ready", false,-1);
    tracep->declBit(c+640,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+998,"io_deq_ready", false,-1);
    tracep->declBit(c+235,"io_deq_valid", false,-1);
    tracep->declBit(c+236,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+235,"full", false,-1);
    tracep->declBit(c+236,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+237,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+238,"io_enq_ready", false,-1);
    tracep->declBit(c+641,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+999,"io_deq_ready", false,-1);
    tracep->declBit(c+239,"io_deq_valid", false,-1);
    tracep->declBit(c+240,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+239,"full", false,-1);
    tracep->declBit(c+240,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+241,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+242,"io_enq_ready", false,-1);
    tracep->declBit(c+642,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1000,"io_deq_ready", false,-1);
    tracep->declBit(c+243,"io_deq_valid", false,-1);
    tracep->declBit(c+244,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+243,"full", false,-1);
    tracep->declBit(c+244,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+245,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+246,"io_enq_ready", false,-1);
    tracep->declBit(c+643,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1001,"io_deq_ready", false,-1);
    tracep->declBit(c+247,"io_deq_valid", false,-1);
    tracep->declBit(c+248,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+247,"full", false,-1);
    tracep->declBit(c+248,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+249,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+250,"io_enq_ready", false,-1);
    tracep->declBit(c+644,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1002,"io_deq_ready", false,-1);
    tracep->declBit(c+251,"io_deq_valid", false,-1);
    tracep->declBit(c+252,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+251,"full", false,-1);
    tracep->declBit(c+252,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+253,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+254,"io_enq_ready", false,-1);
    tracep->declBit(c+645,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1003,"io_deq_ready", false,-1);
    tracep->declBit(c+255,"io_deq_valid", false,-1);
    tracep->declBit(c+256,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+255,"full", false,-1);
    tracep->declBit(c+256,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+257,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+258,"io_enq_ready", false,-1);
    tracep->declBit(c+646,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1004,"io_deq_ready", false,-1);
    tracep->declBit(c+259,"io_deq_valid", false,-1);
    tracep->declBit(c+260,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+259,"full", false,-1);
    tracep->declBit(c+260,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+261,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+262,"io_enq_ready", false,-1);
    tracep->declBit(c+647,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1005,"io_deq_ready", false,-1);
    tracep->declBit(c+263,"io_deq_valid", false,-1);
    tracep->declBit(c+264,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+263,"full", false,-1);
    tracep->declBit(c+264,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+265,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+266,"io_enq_ready", false,-1);
    tracep->declBit(c+648,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1006,"io_deq_ready", false,-1);
    tracep->declBit(c+267,"io_deq_valid", false,-1);
    tracep->declBit(c+268,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+267,"full", false,-1);
    tracep->declBit(c+268,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+269,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+270,"io_enq_ready", false,-1);
    tracep->declBit(c+649,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1007,"io_deq_ready", false,-1);
    tracep->declBit(c+271,"io_deq_valid", false,-1);
    tracep->declBit(c+272,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+271,"full", false,-1);
    tracep->declBit(c+272,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+273,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+274,"io_enq_ready", false,-1);
    tracep->declBit(c+650,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1008,"io_deq_ready", false,-1);
    tracep->declBit(c+275,"io_deq_valid", false,-1);
    tracep->declBit(c+276,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+275,"full", false,-1);
    tracep->declBit(c+276,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+277,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+278,"io_enq_ready", false,-1);
    tracep->declBit(c+651,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1009,"io_deq_ready", false,-1);
    tracep->declBit(c+279,"io_deq_valid", false,-1);
    tracep->declBit(c+280,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+279,"full", false,-1);
    tracep->declBit(c+280,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+281,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+282,"io_enq_ready", false,-1);
    tracep->declBit(c+652,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1010,"io_deq_ready", false,-1);
    tracep->declBit(c+283,"io_deq_valid", false,-1);
    tracep->declBit(c+284,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+283,"full", false,-1);
    tracep->declBit(c+284,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+285,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+286,"io_enq_ready", false,-1);
    tracep->declBit(c+653,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1011,"io_deq_ready", false,-1);
    tracep->declBit(c+287,"io_deq_valid", false,-1);
    tracep->declBit(c+288,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+287,"full", false,-1);
    tracep->declBit(c+288,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+289,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+290,"io_enq_ready", false,-1);
    tracep->declBit(c+654,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1012,"io_deq_ready", false,-1);
    tracep->declBit(c+291,"io_deq_valid", false,-1);
    tracep->declBit(c+292,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+291,"full", false,-1);
    tracep->declBit(c+292,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+293,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+294,"io_enq_ready", false,-1);
    tracep->declBit(c+655,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1013,"io_deq_ready", false,-1);
    tracep->declBit(c+295,"io_deq_valid", false,-1);
    tracep->declBit(c+296,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+295,"full", false,-1);
    tracep->declBit(c+296,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+297,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+298,"io_enq_ready", false,-1);
    tracep->declBit(c+656,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1014,"io_deq_ready", false,-1);
    tracep->declBit(c+299,"io_deq_valid", false,-1);
    tracep->declBit(c+300,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+299,"full", false,-1);
    tracep->declBit(c+300,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+301,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+302,"io_enq_ready", false,-1);
    tracep->declBit(c+657,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1015,"io_deq_ready", false,-1);
    tracep->declBit(c+303,"io_deq_valid", false,-1);
    tracep->declBit(c+304,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+303,"full", false,-1);
    tracep->declBit(c+304,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+305,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+306,"io_enq_ready", false,-1);
    tracep->declBit(c+658,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1016,"io_deq_ready", false,-1);
    tracep->declBit(c+307,"io_deq_valid", false,-1);
    tracep->declBit(c+308,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+307,"full", false,-1);
    tracep->declBit(c+308,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+309,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+310,"io_enq_ready", false,-1);
    tracep->declBit(c+659,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1017,"io_deq_ready", false,-1);
    tracep->declBit(c+311,"io_deq_valid", false,-1);
    tracep->declBit(c+312,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+311,"full", false,-1);
    tracep->declBit(c+312,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+313,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+314,"io_enq_ready", false,-1);
    tracep->declBit(c+660,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1018,"io_deq_ready", false,-1);
    tracep->declBit(c+315,"io_deq_valid", false,-1);
    tracep->declBit(c+316,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+315,"full", false,-1);
    tracep->declBit(c+316,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+317,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+318,"io_enq_ready", false,-1);
    tracep->declBit(c+661,"io_enq_valid", false,-1);
    tracep->declBit(c+65,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1019,"io_deq_ready", false,-1);
    tracep->declBit(c+319,"io_deq_valid", false,-1);
    tracep->declBit(c+320,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+319,"full", false,-1);
    tracep->declBit(c+320,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+321,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+322,"io_enq_ready", false,-1);
    tracep->declBit(c+662,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1020,"io_deq_ready", false,-1);
    tracep->declBit(c+323,"io_deq_valid", false,-1);
    tracep->declBit(c+324,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+323,"full", false,-1);
    tracep->declBit(c+324,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+325,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+326,"io_enq_ready", false,-1);
    tracep->declBit(c+663,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1021,"io_deq_ready", false,-1);
    tracep->declBit(c+327,"io_deq_valid", false,-1);
    tracep->declBit(c+328,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+327,"full", false,-1);
    tracep->declBit(c+328,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+329,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+330,"io_enq_ready", false,-1);
    tracep->declBit(c+664,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1022,"io_deq_ready", false,-1);
    tracep->declBit(c+331,"io_deq_valid", false,-1);
    tracep->declBit(c+332,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+331,"full", false,-1);
    tracep->declBit(c+332,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+333,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+334,"io_enq_ready", false,-1);
    tracep->declBit(c+665,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1023,"io_deq_ready", false,-1);
    tracep->declBit(c+335,"io_deq_valid", false,-1);
    tracep->declBit(c+336,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+335,"full", false,-1);
    tracep->declBit(c+336,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+337,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+338,"io_enq_ready", false,-1);
    tracep->declBit(c+666,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1024,"io_deq_ready", false,-1);
    tracep->declBit(c+339,"io_deq_valid", false,-1);
    tracep->declBit(c+340,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+339,"full", false,-1);
    tracep->declBit(c+340,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+341,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+342,"io_enq_ready", false,-1);
    tracep->declBit(c+667,"io_enq_valid", false,-1);
    tracep->declBit(c+69,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1025,"io_deq_ready", false,-1);
    tracep->declBit(c+343,"io_deq_valid", false,-1);
    tracep->declBit(c+344,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+343,"full", false,-1);
    tracep->declBit(c+344,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+345,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+49,"auto_master_out_awready", false,-1);
    tracep->declBit(c+50,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1107,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+51,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+52,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+53,"auto_master_out_wready", false,-1);
    tracep->declBit(c+54,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+55,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+56,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+57,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+58,"auto_master_out_bready", false,-1);
    tracep->declBit(c+942,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+943,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+630,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+59,"auto_master_out_arready", false,-1);
    tracep->declBit(c+60,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1107,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+61,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1094,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+62,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+63,"auto_master_out_rready", false,-1);
    tracep->declBit(c+944,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+945,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+631,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+632,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+1097,"io_interrupt", false,-1);
    tracep->declBit(c+49,"io_master_awready", false,-1);
    tracep->declBit(c+50,"io_master_awvalid", false,-1);
    tracep->declBus(c+51,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1107,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+52,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+53,"io_master_wready", false,-1);
    tracep->declBit(c+54,"io_master_wvalid", false,-1);
    tracep->declBus(c+55,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+56,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+57,"io_master_wlast", false,-1);
    tracep->declBit(c+58,"io_master_bready", false,-1);
    tracep->declBit(c+942,"io_master_bvalid", false,-1);
    tracep->declBus(c+630,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+943,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+59,"io_master_arready", false,-1);
    tracep->declBit(c+60,"io_master_arvalid", false,-1);
    tracep->declBus(c+61,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1107,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+62,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+63,"io_master_rready", false,-1);
    tracep->declBit(c+944,"io_master_rvalid", false,-1);
    tracep->declBus(c+1080,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+631,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+632,"io_master_rlast", false,-1);
    tracep->declBus(c+945,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1097,"io_slave_awready", false,-1);
    tracep->declBit(c+1097,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1109,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1107,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1110,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1097,"io_slave_wready", false,-1);
    tracep->declBit(c+1097,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1109,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1107,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"io_slave_wlast", false,-1);
    tracep->declBit(c+1097,"io_slave_bready", false,-1);
    tracep->declBit(c+1097,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1108,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1107,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1097,"io_slave_arready", false,-1);
    tracep->declBit(c+1097,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1109,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1107,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1110,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1097,"io_slave_rready", false,-1);
    tracep->declBit(c+1097,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1108,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1109,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1097,"io_slave_rlast", false,-1);
    tracep->declBus(c+1107,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+346,"dnpc", false,-1, 31,0);
    tracep->declBus(c+347,"rs1", false,-1, 4,0);
    tracep->declBus(c+348,"rs2", false,-1, 4,0);
    tracep->declBus(c+349,"rd", false,-1, 4,0);
    tracep->declBus(c+350,"func3", false,-1, 2,0);
    tracep->declBus(c+351,"func7", false,-1, 6,0);
    tracep->declBus(c+352,"imme", false,-1, 31,0);
    tracep->declBus(c+353,"wdata", false,-1, 31,0);
    tracep->declBus(c+1111,"rdata", false,-1, 31,0);
    tracep->declBus(c+354,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+355,"src1", false,-1, 31,0);
    tracep->declBus(c+356,"src2", false,-1, 31,0);
    tracep->declBus(c+357,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+358,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+359,"ALUB", false,-1, 31,0);
    tracep->declBus(c+360,"alu_result", false,-1, 31,0);
    tracep->declBus(c+361,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+362,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+363,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+364,"w_en", false,-1);
    tracep->declBit(c+365,"w_mem_en", false,-1);
    tracep->declBit(c+366,"r_mem_en", false,-1);
    tracep->declBit(c+367,"sign_extension", false,-1);
    tracep->declBit(c+368,"b_type_enter_if", false,-1);
    tracep->declBus(c+369,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+370,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+371,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+372,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+373,"a0", false,-1, 31,0);
    tracep->declBus(c+374,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+375,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+376,"w_csr_en", false,-1);
    tracep->declBit(c+377,"r_csr_en", false,-1);
    tracep->declBit(c+378,"w_csr_ecall", false,-1);
    tracep->declBus(c+379,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+380,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+381,"pc", false,-1, 31,0);
    tracep->declBus(c+382,"inst", false,-1, 31,0);
    tracep->declBit(c+383,"IFU_valid", false,-1);
    tracep->declBit(c+384,"LSU_valid", false,-1);
    tracep->declBit(c+385,"LSU_ready", false,-1);
    tracep->declBus(c+386,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+381,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+387,"M0_arvalid", false,-1);
    tracep->declBit(c+388,"M0_arready", false,-1);
    tracep->declBus(c+1107,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+1026,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1081,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+1027,"M0_rvalid", false,-1);
    tracep->declBit(c+383,"M0_rready", false,-1);
    tracep->declBit(c+668,"M0_rlast", false,-1);
    tracep->declBus(c+669,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1109,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1097,"M0_awvalid", false,-1);
    tracep->declBit(c+389,"M0_awready", false,-1);
    tracep->declBus(c+1107,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1112,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1109,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"M0_wvalid", false,-1);
    tracep->declBit(c+390,"M0_wready", false,-1);
    tracep->declBit(c+1097,"M0_wlast", false,-1);
    tracep->declBus(c+670,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+671,"M0_bvalid", false,-1);
    tracep->declBit(c+1095,"M0_bready", false,-1);
    tracep->declBus(c+672,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+360,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+391,"M1_arvalid", false,-1);
    tracep->declBit(c+392,"M1_arready", false,-1);
    tracep->declBus(c+1107,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+393,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+1028,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1082,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+1029,"M1_rvalid", false,-1);
    tracep->declBit(c+394,"M1_rready", false,-1);
    tracep->declBit(c+673,"M1_rlast", false,-1);
    tracep->declBus(c+674,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+360,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+395,"M1_awvalid", false,-1);
    tracep->declBit(c+396,"M1_awready", false,-1);
    tracep->declBus(c+1107,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+397,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+398,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+399,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+400,"M1_wvalid", false,-1);
    tracep->declBit(c+401,"M1_wready", false,-1);
    tracep->declBit(c+400,"M1_wlast", false,-1);
    tracep->declBus(c+675,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+676,"M1_bvalid", false,-1);
    tracep->declBit(c+402,"M1_bready", false,-1);
    tracep->declBus(c+677,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+403,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+404,"S0_arvalid", false,-1);
    tracep->declBit(c+405,"S0_arready", false,-1);
    tracep->declBus(c+1107,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+406,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1030,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1083,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+1031,"S0_rvalid", false,-1);
    tracep->declBit(c+407,"S0_rready", false,-1);
    tracep->declBit(c+678,"S0_rlast", false,-1);
    tracep->declBus(c+679,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+408,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+409,"S0_awvalid", false,-1);
    tracep->declBit(c+410,"S0_awready", false,-1);
    tracep->declBus(c+1107,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+411,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+412,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+413,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+414,"S0_wvalid", false,-1);
    tracep->declBit(c+415,"S0_wready", false,-1);
    tracep->declBit(c+414,"S0_wlast", false,-1);
    tracep->declBus(c+680,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+1032,"S0_bvalid", false,-1);
    tracep->declBit(c+416,"S0_bready", false,-1);
    tracep->declBus(c+681,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1114,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1115,"sram_arvalid", false,-1);
    tracep->declBit(c+1116,"sram_arready", false,-1);
    tracep->declBus(c+1117,"sram_arid", false,-1, 3,0);
    tracep->declBus(c+1118,"sram_arlen", false,-1, 7,0);
    tracep->declBus(c+1119,"sram_arsize", false,-1, 2,0);
    tracep->declBus(c+1120,"sram_arburst", false,-1, 1,0);
    tracep->declBus(c+1121,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+1123,"sram_rvalid", false,-1);
    tracep->declBit(c+1124,"sram_rready", false,-1);
    tracep->declBit(c+1125,"sram_rlast", false,-1);
    tracep->declBus(c+1126,"sram_rid", false,-1, 3,0);
    tracep->declBus(c+1127,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+1128,"sram_awvalid", false,-1);
    tracep->declBit(c+1129,"sram_awready", false,-1);
    tracep->declBus(c+1130,"sram_awid", false,-1, 3,0);
    tracep->declBus(c+1131,"sram_awlen", false,-1, 7,0);
    tracep->declBus(c+1132,"sram_awsize", false,-1, 2,0);
    tracep->declBus(c+1133,"sram_awburst", false,-1, 1,0);
    tracep->declBus(c+1134,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1135,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1136,"sram_wvalid", false,-1);
    tracep->declBit(c+1137,"sram_wready", false,-1);
    tracep->declBit(c+1138,"sram_wlast", false,-1);
    tracep->declBus(c+1139,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1140,"sram_bvalid", false,-1);
    tracep->declBit(c+1141,"sram_bready", false,-1);
    tracep->declBus(c+1142,"sram_bid", false,-1, 3,0);
    tracep->declBus(c+1143,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1144,"uart_arvalid", false,-1);
    tracep->declBit(c+1145,"uart_arready", false,-1);
    tracep->declBus(c+1146,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1147,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1148,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1149,"uart_arburst", false,-1, 1,0);
    tracep->declBus(c+1150,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1152,"uart_rvalid", false,-1);
    tracep->declBit(c+1153,"uart_rready", false,-1);
    tracep->declBit(c+1154,"uart_rlast", false,-1);
    tracep->declBus(c+1155,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+1156,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+1157,"uart_awvalid", false,-1);
    tracep->declBit(c+1158,"uart_awready", false,-1);
    tracep->declBus(c+1159,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1160,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1161,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1162,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+1163,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+1164,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"uart_wvalid", false,-1);
    tracep->declBit(c+1166,"uart_wready", false,-1);
    tracep->declBit(c+1167,"uart_wlast", false,-1);
    tracep->declBus(c+1168,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+1169,"uart_bvalid", false,-1);
    tracep->declBit(c+1170,"uart_bready", false,-1);
    tracep->declBus(c+1171,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+417,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+418,"clint_arvalid", false,-1);
    tracep->declBit(c+419,"clint_arready", false,-1);
    tracep->declBus(c+1107,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+420,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+421,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1108,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+422,"clint_rvalid", false,-1);
    tracep->declBit(c+423,"clint_rready", false,-1);
    tracep->declBit(c+422,"clint_rlast", false,-1);
    tracep->declBus(c+1107,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+424,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+425,"clint_awvalid", false,-1);
    tracep->declBit(c+426,"clint_awready", false,-1);
    tracep->declBus(c+1107,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+427,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+428,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+429,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+430,"clint_wvalid", false,-1);
    tracep->declBit(c+431,"clint_wready", false,-1);
    tracep->declBit(c+432,"clint_wlast", false,-1);
    tracep->declBus(c+1108,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+433,"clint_bvalid", false,-1);
    tracep->declBit(c+434,"clint_bready", false,-1);
    tracep->declBus(c+1107,"clint_bid", false,-1, 3,0);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+355,"A", false,-1, 31,0);
    tracep->declBus(c+359,"B", false,-1, 31,0);
    tracep->declBus(c+371,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+360,"ALUout", false,-1, 31,0);
    tracep->declBus(c+435,"B_in", false,-1, 31,0);
    tracep->declBus(c+436,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+437,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+438,"carry", false,-1);
    tracep->declBit(c+439,"overflow", false,-1);
    tracep->declBit(c+440,"uless", false,-1);
    tracep->declBit(c+441,"sless", false,-1);
    tracep->declBit(c+442,"a_is_b", false,-1);
    tracep->declBit(c+443,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+355,"x", false,-1, 31,0);
    tracep->declBus(c+435,"y", false,-1, 31,0);
    tracep->declBus(c+437,"s", false,-1, 31,0);
    tracep->declBit(c+438,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+363,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+356,"src2", false,-1, 31,0);
    tracep->declBus(c+352,"imme", false,-1, 31,0);
    tracep->declBus(c+380,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+359,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"rst", false,-1);
    tracep->declBus(c+374,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+375,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+376,"w_csr_en", false,-1);
    tracep->declBit(c+377,"r_csr_en", false,-1);
    tracep->declBit(c+378,"w_csr_ecall", false,-1);
    tracep->declBus(c+381,"pc", false,-1, 31,0);
    tracep->declBus(c+379,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+380,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+444,"mepc", false,-1, 31,0);
    tracep->declBus(c+445,"mstatus", false,-1, 31,0);
    tracep->declBus(c+446,"mcause", false,-1, 31,0);
    tracep->declBus(c+447,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+360,"alu_result", false,-1, 31,0);
    tracep->declBus(c+355,"src1", false,-1, 31,0);
    tracep->declBus(c+372,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+379,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"rst", false,-1);
    tracep->declBus(c+381,"pc", false,-1, 31,0);
    tracep->declBus(c+382,"inst", false,-1, 31,0);
    tracep->declBit(c+383,"IFU_valid", false,-1);
    tracep->declBit(c+385,"LSU_ready", false,-1);
    tracep->declBus(c+381,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+387,"M0_arvalid", false,-1);
    tracep->declBit(c+388,"M0_arready", false,-1);
    tracep->declBus(c+1107,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+1026,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1081,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+1027,"M0_rvalid", false,-1);
    tracep->declBit(c+383,"M0_rready", false,-1);
    tracep->declBit(c+668,"M0_rlast", false,-1);
    tracep->declBus(c+669,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1109,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1097,"M0_awvalid", false,-1);
    tracep->declBit(c+389,"M0_awready", false,-1);
    tracep->declBus(c+1107,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1112,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1109,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"M0_wvalid", false,-1);
    tracep->declBit(c+390,"M0_wready", false,-1);
    tracep->declBit(c+1097,"M0_wlast", false,-1);
    tracep->declBus(c+670,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+671,"M0_bvalid", false,-1);
    tracep->declBit(c+1095,"M0_bready", false,-1);
    tracep->declBus(c+672,"M0_bid", false,-1, 3,0);
    tracep->declBit(c+388,"arready", false,-1);
    tracep->declBus(c+1081,"rresp", false,-1, 1,0);
    tracep->declBit(c+389,"awready", false,-1);
    tracep->declBit(c+390,"wready", false,-1);
    tracep->declBus(c+670,"bresp", false,-1, 1,0);
    tracep->declBit(c+671,"bvalid", false,-1);
    tracep->declBit(c+1027,"rvalid", false,-1);
    tracep->declBit(c+383,"rready", false,-1);
    tracep->declBit(c+448,"rvalid_prev", false,-1);
    tracep->declBit(c+387,"arvalid", false,-1);
    tracep->declBus(c+449,"state", false,-1, 2,0);
    tracep->declBus(c+1033,"next_state", false,-1, 2,0);
    tracep->declBit(c+1172,"start_read_delay", false,-1);
    tracep->declBus(c+450,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+451,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+452,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+453,"random_delay", false,-1, 7,0);
    tracep->declBus(c+1110,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1096,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1112,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBus(c+452,"in", false,-1, 7,0);
    tracep->declBus(c+453,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"rst", false,-1);
    tracep->declBit(c+383,"IFU_valid", false,-1);
    tracep->declBus(c+360,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+360,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+369,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+370,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+365,"w_mem_en", false,-1);
    tracep->declBit(c+366,"r_mem_en", false,-1);
    tracep->declBit(c+367,"sign_extension", false,-1);
    tracep->declBus(c+356,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+354,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+384,"LSU_valid", false,-1);
    tracep->declBit(c+385,"LSU_ready", false,-1);
    tracep->declBus(c+360,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+391,"M1_arvalid", false,-1);
    tracep->declBit(c+392,"M1_arready", false,-1);
    tracep->declBus(c+1107,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+393,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+1028,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1082,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+1029,"M1_rvalid", false,-1);
    tracep->declBit(c+394,"M1_rready", false,-1);
    tracep->declBit(c+673,"M1_rlast", false,-1);
    tracep->declBus(c+674,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+360,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+395,"M1_awvalid", false,-1);
    tracep->declBit(c+396,"M1_awready", false,-1);
    tracep->declBus(c+1107,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+397,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+398,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+399,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+400,"M1_wvalid", false,-1);
    tracep->declBit(c+401,"M1_wready", false,-1);
    tracep->declBit(c+400,"M1_wlast", false,-1);
    tracep->declBus(c+675,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+676,"M1_bvalid", false,-1);
    tracep->declBit(c+402,"M1_bready", false,-1);
    tracep->declBus(c+677,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+1110,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1096,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1112,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1173,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1174,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1175,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1108,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+454,"state", false,-1, 2,0);
    tracep->declBus(c+1034,"next_state", false,-1, 2,0);
    tracep->declBit(c+455,"start_read_delay", false,-1);
    tracep->declBit(c+456,"start_write_delay", false,-1);
    tracep->declBus(c+360,"araddr", false,-1, 31,0);
    tracep->declBit(c+391,"arvalid", false,-1);
    tracep->declBit(c+392,"arready", false,-1);
    tracep->declBit(c+394,"rready", false,-1);
    tracep->declBus(c+1082,"rresp", false,-1, 1,0);
    tracep->declBit(c+1029,"rvalid", false,-1);
    tracep->declBit(c+395,"awvalid", false,-1);
    tracep->declBit(c+396,"awready", false,-1);
    tracep->declBus(c+360,"awaddr", false,-1, 31,0);
    tracep->declBit(c+400,"wvalid", false,-1);
    tracep->declBit(c+401,"wready", false,-1);
    tracep->declBus(c+398,"wdata", false,-1, 31,0);
    tracep->declBus(c+675,"bresp", false,-1, 1,0);
    tracep->declBus(c+399,"wstrb", false,-1, 3,0);
    tracep->declBit(c+402,"bready", false,-1);
    tracep->declBus(c+1028,"rdata", false,-1, 31,0);
    tracep->declBit(c+676,"bvalid", false,-1);
    tracep->declBit(c+457,"LSU_working", false,-1);
    tracep->declBus(c+458,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+459,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+460,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+461,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+462,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+463,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+464,"random_delay", false,-1, 7,0);
    tracep->declBus(c+399,"reg_wstrb", false,-1, 3,0);
    tracep->declBus(c+398,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+465,"wdata_format", false,-1, 5,0);
    tracep->declBus(c+1035,"rdata_mask", false,-1, 31,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBus(c+463,"in", false,-1, 7,0);
    tracep->declBus(c+464,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+381,"pc", false,-1, 31,0);
    tracep->declBus(c+352,"imme", false,-1, 31,0);
    tracep->declBus(c+360,"alu_result", false,-1, 31,0);
    tracep->declBus(c+380,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+361,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+368,"b_type_enter_if", false,-1);
    tracep->declBus(c+357,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+358,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+346,"dnpc", false,-1, 31,0);
    tracep->declBus(c+358,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+357,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"rst", false,-1);
    tracep->declBit(c+364,"w_en", false,-1);
    tracep->declBus(c+353,"wdata", false,-1, 31,0);
    tracep->declBus(c+349,"rd", false,-1, 4,0);
    tracep->declBus(c+347,"rs1", false,-1, 4,0);
    tracep->declBus(c+348,"rs2", false,-1, 4,0);
    tracep->declBus(c+355,"src1", false,-1, 31,0);
    tracep->declBus(c+356,"src2", false,-1, 31,0);
    tracep->declBus(c+373,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+466+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+498+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+357,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+358,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+360,"alu_result", false,-1, 31,0);
    tracep->declBus(c+352,"imme", false,-1, 31,0);
    tracep->declBus(c+354,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+380,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+362,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+384,"LSU_valid", false,-1);
    tracep->declBit(c+364,"w_en", false,-1);
    tracep->declBus(c+353,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+1176,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1177,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"rst", false,-1);
    tracep->declBus(c+346,"din", false,-1, 31,0);
    tracep->declBus(c+381,"dout", false,-1, 31,0);
    tracep->declBit(c+384,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"rst", false,-1);
    tracep->declBus(c+381,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+387,"M0_arvalid", false,-1);
    tracep->declBit(c+388,"M0_arready", false,-1);
    tracep->declBus(c+1107,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1112,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+1026,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1081,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+1027,"M0_rvalid", false,-1);
    tracep->declBit(c+383,"M0_rready", false,-1);
    tracep->declBit(c+668,"M0_rlast", false,-1);
    tracep->declBus(c+669,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1109,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1097,"M0_awvalid", false,-1);
    tracep->declBit(c+389,"M0_awready", false,-1);
    tracep->declBus(c+1107,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1112,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1109,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1113,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1097,"M0_wvalid", false,-1);
    tracep->declBit(c+390,"M0_wready", false,-1);
    tracep->declBit(c+1097,"M0_wlast", false,-1);
    tracep->declBus(c+670,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+671,"M0_bvalid", false,-1);
    tracep->declBit(c+1095,"M0_bready", false,-1);
    tracep->declBus(c+672,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+360,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+391,"M1_arvalid", false,-1);
    tracep->declBit(c+392,"M1_arready", false,-1);
    tracep->declBus(c+1107,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+393,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+1028,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1082,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+1029,"M1_rvalid", false,-1);
    tracep->declBit(c+394,"M1_rready", false,-1);
    tracep->declBit(c+673,"M1_rlast", false,-1);
    tracep->declBus(c+674,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+360,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+395,"M1_awvalid", false,-1);
    tracep->declBit(c+396,"M1_awready", false,-1);
    tracep->declBus(c+1107,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+397,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+398,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+399,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+400,"M1_wvalid", false,-1);
    tracep->declBit(c+401,"M1_wready", false,-1);
    tracep->declBit(c+400,"M1_wlast", false,-1);
    tracep->declBus(c+675,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+676,"M1_bvalid", false,-1);
    tracep->declBit(c+402,"M1_bready", false,-1);
    tracep->declBus(c+677,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+403,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+404,"S0_arvalid", false,-1);
    tracep->declBit(c+405,"S0_arready", false,-1);
    tracep->declBus(c+1107,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+406,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1030,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1083,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+1031,"S0_rvalid", false,-1);
    tracep->declBit(c+407,"S0_rready", false,-1);
    tracep->declBit(c+678,"S0_rlast", false,-1);
    tracep->declBus(c+679,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+408,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+409,"S0_awvalid", false,-1);
    tracep->declBit(c+410,"S0_awready", false,-1);
    tracep->declBus(c+1107,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+411,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+412,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+413,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+414,"S0_wvalid", false,-1);
    tracep->declBit(c+415,"S0_wready", false,-1);
    tracep->declBit(c+414,"S0_wlast", false,-1);
    tracep->declBus(c+680,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+1032,"S0_bvalid", false,-1);
    tracep->declBit(c+416,"S0_bready", false,-1);
    tracep->declBus(c+681,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1110,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+1096,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+1112,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+530,"read_state", false,-1, 2,0);
    tracep->declBus(c+1036,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+531,"write_state", false,-1, 2,0);
    tracep->declBus(c+1037,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+532,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+533,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+1038,"read_done", false,-1);
    tracep->declBit(c+1039,"write_done", false,-1);
    tracep->declBus(c+1178,"read_choose", false,-1, 2,0);
    tracep->declBus(c+1179,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Clint ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"rst", false,-1);
    tracep->declBus(c+417,"araddr", false,-1, 31,0);
    tracep->declBit(c+418,"arvalid", false,-1);
    tracep->declBit(c+419,"arready", false,-1);
    tracep->declBus(c+1107,"arid", false,-1, 3,0);
    tracep->declBus(c+1094,"arlen", false,-1, 7,0);
    tracep->declBus(c+420,"arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"arburst", false,-1, 1,0);
    tracep->declBus(c+421,"rdata", false,-1, 31,0);
    tracep->declBus(c+1108,"rresp", false,-1, 1,0);
    tracep->declBit(c+422,"rvalid", false,-1);
    tracep->declBit(c+423,"rready", false,-1);
    tracep->declBit(c+422,"rlast", false,-1);
    tracep->declBus(c+1107,"rid", false,-1, 3,0);
    tracep->declBus(c+424,"awaddr", false,-1, 31,0);
    tracep->declBit(c+425,"awvalid", false,-1);
    tracep->declBit(c+426,"awready", false,-1);
    tracep->declBus(c+1107,"awid", false,-1, 3,0);
    tracep->declBus(c+1094,"awlen", false,-1, 7,0);
    tracep->declBus(c+427,"awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"awburst", false,-1, 1,0);
    tracep->declBus(c+428,"wdata", false,-1, 31,0);
    tracep->declBus(c+429,"wstrb", false,-1, 3,0);
    tracep->declBit(c+430,"wvalid", false,-1);
    tracep->declBit(c+431,"wready", false,-1);
    tracep->declBit(c+432,"wlast", false,-1);
    tracep->declBus(c+1108,"bresp", false,-1, 1,0);
    tracep->declBit(c+433,"bvalid", false,-1);
    tracep->declBit(c+434,"bready", false,-1);
    tracep->declBus(c+1107,"bid", false,-1, 3,0);
    tracep->declBus(c+1110,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1096,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1112,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1173,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1174,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1175,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1108,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+534,"state", false,-1, 2,0);
    tracep->declBus(c+535,"next_state", false,-1, 2,0);
    tracep->declBus(c+536,"addr", false,-1, 31,0);
    tracep->declBus(c+537,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+538,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+539,"pmem_readed", false,-1);
    tracep->declBit(c+540,"pmem_writed", false,-1);
    tracep->declBus(c+541,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+542,"random_delay", false,-1, 7,0);
    tracep->declBus(c+421,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+422,"rvalid_reg", false,-1);
    tracep->declBit(c+431,"wready_reg", false,-1);
    tracep->declQuad(c+543,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBus(c+541,"in", false,-1, 7,0);
    tracep->declBus(c+542,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+382,"inst", false,-1, 31,0);
    tracep->declBit(c+383,"IFU_valid", false,-1);
    tracep->declBit(c+384,"LSU_valid", false,-1);
    tracep->declBus(c+349,"rd", false,-1, 4,0);
    tracep->declBus(c+347,"rs1", false,-1, 4,0);
    tracep->declBus(c+348,"rs2", false,-1, 4,0);
    tracep->declBus(c+352,"imme", false,-1, 31,0);
    tracep->declBus(c+350,"func3", false,-1, 2,0);
    tracep->declBus(c+351,"func7", false,-1, 6,0);
    tracep->declBus(c+361,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+362,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+363,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+365,"w_mem_en", false,-1);
    tracep->declBus(c+369,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+366,"r_mem_en", false,-1);
    tracep->declBit(c+367,"sign_extension", false,-1);
    tracep->declBus(c+371,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+370,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+374,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+376,"w_csr_en", false,-1);
    tracep->declBus(c+372,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+378,"w_csr_ecall", false,-1);
    tracep->declBus(c+375,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+377,"r_csr_en", false,-1);
    tracep->declBus(c+545,"opcode", false,-1, 6,0);
    tracep->declBus(c+546,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+382,"inst", false,-1, 31,0);
    tracep->declBus(c+546,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+352,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+545,"opcode", false,-1, 6,0);
    tracep->declBus(c+546,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"rst", false,-1);
    tracep->declBus(c+403,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+404,"Xbar_arvalid", false,-1);
    tracep->declBit(c+405,"Xbar_arready", false,-1);
    tracep->declBus(c+1107,"Xbar_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"Xbar_arlen", false,-1, 7,0);
    tracep->declBus(c+406,"Xbar_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"Xbar_arburst", false,-1, 1,0);
    tracep->declBus(c+1030,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1083,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+1031,"Xbar_rvalid", false,-1);
    tracep->declBit(c+407,"Xbar_rready", false,-1);
    tracep->declBit(c+678,"Xbar_rlast", false,-1);
    tracep->declBus(c+679,"Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+408,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+409,"Xbar_awvalid", false,-1);
    tracep->declBit(c+410,"Xbar_awready", false,-1);
    tracep->declBus(c+1107,"Xbar_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"Xbar_awlen", false,-1, 7,0);
    tracep->declBus(c+411,"Xbar_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"Xbar_awburst", false,-1, 1,0);
    tracep->declBus(c+412,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+413,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+414,"Xbar_wvalid", false,-1);
    tracep->declBit(c+415,"Xbar_wready", false,-1);
    tracep->declBit(c+414,"Xbar_wlast", false,-1);
    tracep->declBus(c+680,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+1032,"Xbar_bvalid", false,-1);
    tracep->declBit(c+416,"Xbar_bready", false,-1);
    tracep->declBus(c+681,"Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+61,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+60,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+59,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+1107,"Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+62,"Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+631,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1080,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+944,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+63,"Xbar_S0_rready", false,-1);
    tracep->declBit(c+632,"Xbar_S0_rlast", false,-1);
    tracep->declBus(c+945,"Xbar_S0_rid", false,-1, 3,0);
    tracep->declBus(c+51,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+50,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+49,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+1107,"Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+52,"Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBus(c+55,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+56,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+54,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+53,"Xbar_S0_wready", false,-1);
    tracep->declBit(c+57,"Xbar_S0_wlast", false,-1);
    tracep->declBus(c+630,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+942,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+58,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+943,"Xbar_S0_bid", false,-1, 3,0);
    tracep->declBus(c+547,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+548,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+1180,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+1107,"Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+549,"Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1181,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+1183,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+550,"Xbar_S1_rready", false,-1);
    tracep->declBit(c+1184,"Xbar_S1_rlast", false,-1);
    tracep->declBus(c+1185,"Xbar_S1_rid", false,-1, 3,0);
    tracep->declBus(c+551,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+552,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+1186,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+1107,"Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+553,"Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBus(c+554,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+555,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+556,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+1187,"Xbar_S1_wready", false,-1);
    tracep->declBit(c+557,"Xbar_S1_wlast", false,-1);
    tracep->declBus(c+1188,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+1189,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+558,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+1190,"Xbar_S1_bid", false,-1, 3,0);
    tracep->declBus(c+417,"Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+418,"Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+419,"Xbar_S2_arready", false,-1);
    tracep->declBus(c+1107,"Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+420,"Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+421,"Xbar_S2_rdata", false,-1, 31,0);
    tracep->declBus(c+1108,"Xbar_S2_rresp", false,-1, 1,0);
    tracep->declBit(c+422,"Xbar_S2_rvalid", false,-1);
    tracep->declBit(c+423,"Xbar_S2_rready", false,-1);
    tracep->declBit(c+422,"Xbar_S2_rlast", false,-1);
    tracep->declBus(c+1107,"Xbar_S2_rid", false,-1, 3,0);
    tracep->declBus(c+424,"Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+425,"Xbar_S2_awvalid", false,-1);
    tracep->declBit(c+426,"Xbar_S2_awready", false,-1);
    tracep->declBus(c+1107,"Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+427,"Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBus(c+428,"Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+429,"Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+430,"Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+431,"Xbar_S2_wready", false,-1);
    tracep->declBit(c+432,"Xbar_S2_wlast", false,-1);
    tracep->declBus(c+1108,"Xbar_S2_bresp", false,-1, 1,0);
    tracep->declBit(c+433,"Xbar_S2_bvalid", false,-1);
    tracep->declBit(c+434,"Xbar_S2_bready", false,-1);
    tracep->declBus(c+1107,"Xbar_S2_bid", false,-1, 3,0);
    tracep->declBus(c+1110,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+1096,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+1112,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+1173,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBus(c+559,"r_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+682,"r_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+560,"w_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+683,"w_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+1030,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1083,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+1031,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+410,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+415,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+680,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+1032,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+405,"reg_Xbar_arready", false,-1);
    tracep->declBit(c+678,"reg_Xbar_rlast", false,-1);
    tracep->declBus(c+679,"reg_Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+681,"reg_Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+61,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+60,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+63,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+51,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+50,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBus(c+55,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+56,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+54,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+58,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+1107,"reg_Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"reg_Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+62,"reg_Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"reg_Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1107,"reg_Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"reg_Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+52,"reg_Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"reg_Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBit(c+57,"reg_Xbar_S0_wlast", false,-1);
    tracep->declBus(c+547,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+548,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+550,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+551,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+552,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+554,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+555,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+556,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+558,"reg_Xbar_S1_bready", false,-1);
    tracep->declBus(c+1107,"reg_Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"reg_Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+549,"reg_Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"reg_Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1107,"reg_Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"reg_Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+553,"reg_Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"reg_Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBit(c+557,"reg_Xbar_S1_wlast", false,-1);
    tracep->declBus(c+417,"reg_Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+418,"reg_Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+423,"reg_Xbar_S2_rready", false,-1);
    tracep->declBus(c+424,"reg_Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+425,"reg_Xbar_S2_awvalid", false,-1);
    tracep->declBus(c+428,"reg_Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+429,"reg_Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+430,"reg_Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+434,"reg_Xbar_S2_bready", false,-1);
    tracep->declBus(c+1107,"reg_Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1094,"reg_Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+420,"reg_Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1108,"reg_Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+1107,"reg_Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1094,"reg_Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+427,"reg_Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1108,"reg_Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBit(c+432,"reg_Xbar_S2_wlast", false,-1);
    tracep->declBit(c+684,"read_S0_done", false,-1);
    tracep->declBit(c+685,"write_S0_done", false,-1);
    tracep->declBit(c+561,"read_S1_done", false,-1);
    tracep->declBit(c+562,"write_S1_done", false,-1);
    tracep->declBit(c+563,"read_S2_done", false,-1);
    tracep->declBit(c+564,"write_S2_done", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"io_d", false,-1);
    tracep->declBit(c+565,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"io_d", false,-1);
    tracep->declBit(c+565,"io_q", false,-1);
    tracep->declBit(c+565,"sync_0", false,-1);
    tracep->declBit(c+566,"sync_1", false,-1);
    tracep->declBit(c+567,"sync_2", false,-1);
    tracep->declBit(c+568,"sync_3", false,-1);
    tracep->declBit(c+569,"sync_4", false,-1);
    tracep->declBit(c+570,"sync_5", false,-1);
    tracep->declBit(c+571,"sync_6", false,-1);
    tracep->declBit(c+572,"sync_7", false,-1);
    tracep->declBit(c+573,"sync_8", false,-1);
    tracep->declBit(c+574,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+625,"auto_in_psel", false,-1);
    tracep->declBit(c+626,"auto_in_penable", false,-1);
    tracep->declBit(c+22,"auto_in_pwrite", false,-1);
    tracep->declBus(c+896,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1096,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1104,"auto_in_pready", false,-1);
    tracep->declBit(c+1105,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1106,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1054,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1055,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1056,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1057,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1058,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1059,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1060,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1061,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1062,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1063,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBus(c+912,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+625,"in_psel", false,-1);
    tracep->declBit(c+626,"in_penable", false,-1);
    tracep->declBus(c+1096,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+22,"in_pwrite", false,-1);
    tracep->declBus(c+893,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1104,"in_pready", false,-1);
    tracep->declBus(c+1106,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1105,"in_pslverr", false,-1);
    tracep->declBus(c+1054,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1055,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1056,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1057,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1058,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1059,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1060,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1061,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1062,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1063,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+623,"auto_in_psel", false,-1);
    tracep->declBit(c+624,"auto_in_penable", false,-1);
    tracep->declBit(c+22,"auto_in_pwrite", false,-1);
    tracep->declBus(c+896,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1096,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1101,"auto_in_pready", false,-1);
    tracep->declBit(c+1102,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1103,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1064,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1065,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBus(c+912,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+623,"in_psel", false,-1);
    tracep->declBit(c+624,"in_penable", false,-1);
    tracep->declBus(c+1096,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+22,"in_pwrite", false,-1);
    tracep->declBus(c+893,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1101,"in_pready", false,-1);
    tracep->declBus(c+1103,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1102,"in_pslverr", false,-1);
    tracep->declBit(c+1064,"ps2_clk", false,-1);
    tracep->declBit(c+1065,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+144,"auto_in_awvalid", false,-1);
    tracep->declBit(c+145,"auto_in_wvalid", false,-1);
    tracep->declBit(c+146,"auto_in_arready", false,-1);
    tracep->declBit(c+147,"auto_in_arvalid", false,-1);
    tracep->declBus(c+37,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+148,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+635,"auto_in_rready", false,-1);
    tracep->declBit(c+149,"auto_in_rvalid", false,-1);
    tracep->declBus(c+150,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+151,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+149,"state", false,-1);
    tracep->declBus(c+151,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+150,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+575,"raddr", false,-1, 31,0);
    tracep->declBit(c+576,"ren", false,-1);
    tracep->declBus(c+577,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+897,"auto_in_psel", false,-1);
    tracep->declBit(c+627,"auto_in_penable", false,-1);
    tracep->declBit(c+22,"auto_in_pwrite", false,-1);
    tracep->declBus(c+892,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1078,"auto_in_pready", false,-1);
    tracep->declBit(c+1097,"auto_in_pslverr", false,-1);
    tracep->declBus(c+24,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1075,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1076,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+935,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBus(c+892,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+897,"in_psel", false,-1);
    tracep->declBit(c+627,"in_penable", false,-1);
    tracep->declBus(c+1096,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+22,"in_pwrite", false,-1);
    tracep->declBus(c+893,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1078,"in_pready", false,-1);
    tracep->declBus(c+24,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1097,"in_pslverr", false,-1);
    tracep->declBit(c+1075,"qspi_sck", false,-1);
    tracep->declBit(c+1076,"qspi_ce_n", false,-1);
    tracep->declBus(c+935,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+935,"din", false,-1, 3,0);
    tracep->declBus(c+1040,"dout", false,-1, 3,0);
    tracep->declBus(c+1041,"douten", false,-1, 3,0);
    tracep->declBit(c+1084,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1052,"clk_i", false,-1);
    tracep->declBit(c+1053,"rst_i", false,-1);
    tracep->declBus(c+892,"adr_i", false,-1, 31,0);
    tracep->declBus(c+893,"dat_i", false,-1, 31,0);
    tracep->declBus(c+24,"dat_o", false,-1, 31,0);
    tracep->declBus(c+23,"sel_i", false,-1, 3,0);
    tracep->declBit(c+897,"cyc_i", false,-1);
    tracep->declBit(c+897,"stb_i", false,-1);
    tracep->declBit(c+1084,"ack_o", false,-1);
    tracep->declBit(c+22,"we_i", false,-1);
    tracep->declBit(c+1075,"sck", false,-1);
    tracep->declBit(c+1076,"ce_n", false,-1);
    tracep->declBus(c+935,"din", false,-1, 3,0);
    tracep->declBus(c+1040,"dout", false,-1, 3,0);
    tracep->declBus(c+1041,"douten", false,-1, 3,0);
    tracep->declBus(c+1191,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1192,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+697,"mr_sck", false,-1);
    tracep->declBit(c+698,"mr_ce_n", false,-1);
    tracep->declBus(c+935,"mr_din", false,-1, 3,0);
    tracep->declBus(c+699,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+700,"mr_doe", false,-1);
    tracep->declBit(c+701,"mw_sck", false,-1);
    tracep->declBit(c+702,"mw_ce_n", false,-1);
    tracep->declBus(c+935,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1042,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+703,"mw_doe", false,-1);
    tracep->declBit(c+1043,"mr_rd", false,-1);
    tracep->declBit(c+704,"mr_done", false,-1);
    tracep->declBit(c+1044,"mw_wr", false,-1);
    tracep->declBit(c+1085,"mw_done", false,-1);
    tracep->declBit(c+897,"wb_valid", false,-1);
    tracep->declBit(c+913,"wb_we", false,-1);
    tracep->declBit(c+914,"wb_re", false,-1);
    tracep->declBit(c+705,"state", false,-1);
    tracep->declBit(c+1045,"nstate", false,-1);
    tracep->declBus(c+578,"size", false,-1, 2,0);
    tracep->declBus(c+915,"byte0", false,-1, 7,0);
    tracep->declBus(c+916,"byte1", false,-1, 7,0);
    tracep->declBus(c+917,"byte2", false,-1, 7,0);
    tracep->declBus(c+918,"byte3", false,-1, 7,0);
    tracep->declBus(c+919,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1086,"rst_n", false,-1);
    tracep->declBus(c+920,"addr", false,-1, 23,0);
    tracep->declBit(c+1043,"rd", false,-1);
    tracep->declBus(c+1174,"size", false,-1, 2,0);
    tracep->declBit(c+704,"done", false,-1);
    tracep->declBus(c+24,"line", false,-1, 31,0);
    tracep->declBit(c+697,"sck", false,-1);
    tracep->declBit(c+698,"ce_n", false,-1);
    tracep->declBus(c+935,"din", false,-1, 3,0);
    tracep->declBus(c+699,"dout", false,-1, 3,0);
    tracep->declBit(c+700,"douten", false,-1);
    tracep->declBus(c+1191,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1192,"READ", false,-1, 0,0);
    tracep->declBus(c+1193,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+706,"state", false,-1);
    tracep->declBit(c+1046,"nstate", false,-1);
    tracep->declBus(c+707,"counter", false,-1, 7,0);
    tracep->declBus(c+708,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+579+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1194,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+709,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1086,"rst_n", false,-1);
    tracep->declBus(c+921,"addr", false,-1, 23,0);
    tracep->declBus(c+919,"line", false,-1, 31,0);
    tracep->declBus(c+578,"size", false,-1, 2,0);
    tracep->declBit(c+1044,"wr", false,-1);
    tracep->declBit(c+1085,"done", false,-1);
    tracep->declBit(c+701,"sck", false,-1);
    tracep->declBit(c+702,"ce_n", false,-1);
    tracep->declBus(c+935,"din", false,-1, 3,0);
    tracep->declBus(c+1042,"dout", false,-1, 3,0);
    tracep->declBit(c+703,"douten", false,-1);
    tracep->declBus(c+1191,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1192,"WRITE", false,-1, 0,0);
    tracep->declBus(c+583,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+710,"state", false,-1);
    tracep->declBit(c+1047,"nstate", false,-1);
    tracep->declBus(c+711,"counter", false,-1, 7,0);
    tracep->declBus(c+712,"saddr", false,-1, 23,0);
    tracep->declBus(c+1195,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+619,"auto_in_psel", false,-1);
    tracep->declBit(c+620,"auto_in_penable", false,-1);
    tracep->declBit(c+22,"auto_in_pwrite", false,-1);
    tracep->declBus(c+892,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1096,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+695,"auto_in_pready", false,-1);
    tracep->declBit(c+1097,"auto_in_pslverr", false,-1);
    tracep->declBus(c+696,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1077,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+686,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+687,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+688,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+689,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+690,"sdram_bundle_we", false,-1);
    tracep->declBus(c+691,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+692,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+693,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+694,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBus(c+892,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+619,"in_psel", false,-1);
    tracep->declBit(c+620,"in_penable", false,-1);
    tracep->declBus(c+1096,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+22,"in_pwrite", false,-1);
    tracep->declBus(c+893,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+695,"in_pready", false,-1);
    tracep->declBus(c+696,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1097,"in_pslverr", false,-1);
    tracep->declBit(c+1077,"sdram_clk", false,-1);
    tracep->declBit(c+686,"sdram_cke", false,-1);
    tracep->declBit(c+687,"sdram_cs", false,-1);
    tracep->declBit(c+688,"sdram_ras", false,-1);
    tracep->declBit(c+689,"sdram_cas", false,-1);
    tracep->declBit(c+690,"sdram_we", false,-1);
    tracep->declBus(c+691,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+692,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+693,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+694,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+713,"sdram_dout_en", false,-1);
    tracep->declBus(c+714,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+584,"state", false,-1, 1,0);
    tracep->declBit(c+715,"req_accept", false,-1);
    tracep->declBit(c+922,"is_read", false,-1);
    tracep->declBit(c+923,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1052,"clk_i", false,-1);
    tracep->declBit(c+1053,"rst_i", false,-1);
    tracep->declBus(c+924,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+922,"inport_rd_i", false,-1);
    tracep->declBus(c+1094,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+892,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+893,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+694,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+715,"inport_accept_o", false,-1);
    tracep->declBit(c+695,"inport_ack_o", false,-1);
    tracep->declBit(c+1097,"inport_error_o", false,-1);
    tracep->declBus(c+696,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1077,"sdram_clk_o", false,-1);
    tracep->declBit(c+686,"sdram_cke_o", false,-1);
    tracep->declBit(c+687,"sdram_cs_o", false,-1);
    tracep->declBit(c+688,"sdram_ras_o", false,-1);
    tracep->declBit(c+689,"sdram_cas_o", false,-1);
    tracep->declBit(c+690,"sdram_we_o", false,-1);
    tracep->declBus(c+693,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+691,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+692,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+714,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+713,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1196,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1197,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1198,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1199,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1199,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1199,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1200,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1201,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1202,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1203,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1204,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1200,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1205,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1206,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1207,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1208,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1209,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1210,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1211,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1107,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1212,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1200,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1107,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1211,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1210,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1206,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1208,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1207,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1209,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1205,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1213,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1214,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1215,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1215,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1216,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1215,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1199,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1199,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1217,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+892,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+924,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+922,"ram_rd_w", false,-1);
    tracep->declBit(c+715,"ram_accept_w", false,-1);
    tracep->declBus(c+893,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+696,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+695,"ram_ack_w", false,-1);
    tracep->declBit(c+925,"ram_req_w", false,-1);
    tracep->declBus(c+716,"command_q", false,-1, 3,0);
    tracep->declBus(c+691,"addr_q", false,-1, 12,0);
    tracep->declBus(c+714,"data_q", false,-1, 15,0);
    tracep->declBit(c+717,"data_rd_en_q", false,-1);
    tracep->declBus(c+693,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+686,"cke_q", false,-1);
    tracep->declBus(c+692,"bank_q", false,-1, 1,0);
    tracep->declBus(c+718,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+719,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+694,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+720,"refresh_q", false,-1);
    tracep->declBus(c+721,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+722+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+726,"state_q", false,-1, 3,0);
    tracep->declBus(c+1048,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1049,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+727,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+728,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+926,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+927,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+928,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1200,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+729,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1050,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1218,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+730,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+731,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+732,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+733,"idx", false,-1, 31,0);
    tracep->declBus(c+734,"rd_q", false,-1, 3,0);
    tracep->declBit(c+695,"ack_q", false,-1);
    tracep->declArray(c+735,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+901,"auto_in_psel", false,-1);
    tracep->declBit(c+902,"auto_in_penable", false,-1);
    tracep->declBit(c+22,"auto_in_pwrite", false,-1);
    tracep->declBus(c+895,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1096,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+628,"auto_in_pready", false,-1);
    tracep->declBit(c+1097,"auto_in_pslverr", false,-1);
    tracep->declBus(c+25,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1,"spi_bundle_sck", false,-1);
    tracep->declBus(c+1094,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1095,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1074,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1219,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1220,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1221,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBus(c+929,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+901,"in_psel", false,-1);
    tracep->declBit(c+902,"in_penable", false,-1);
    tracep->declBus(c+1096,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+22,"in_pwrite", false,-1);
    tracep->declBus(c+893,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+628,"in_pready", false,-1);
    tracep->declBus(c+25,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1097,"in_pslverr", false,-1);
    tracep->declBit(c+1,"spi_sck", false,-1);
    tracep->declBus(c+1094,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1095,"spi_mosi", false,-1);
    tracep->declBit(c+1074,"spi_miso", false,-1);
    tracep->declBit(c+1097,"spi_irq_out", false,-1);
    tracep->declBus(c+25,"data", false,-1, 31,0);
    tracep->declBus(c+1094,"invalid_cmd", false,-1, 7,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+930,"valid", false,-1);
    tracep->declBus(c+585,"cmd", false,-1, 7,0);
    tracep->declBus(c+931,"addr", false,-1, 31,0);
    tracep->declBus(c+25,"data", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+898,"auto_in_psel", false,-1);
    tracep->declBit(c+899,"auto_in_penable", false,-1);
    tracep->declBit(c+22,"auto_in_pwrite", false,-1);
    tracep->declBus(c+896,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1096,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+900,"auto_in_pready", false,-1);
    tracep->declBit(c+1097,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1079,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1072,"uart_rx", false,-1);
    tracep->declBit(c+1073,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+898,"in_psel", false,-1);
    tracep->declBit(c+899,"in_penable", false,-1);
    tracep->declBus(c+1096,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+900,"in_pready", false,-1);
    tracep->declBit(c+1097,"in_pslverr", false,-1);
    tracep->declBus(c+912,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+22,"in_pwrite", false,-1);
    tracep->declBus(c+1079,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+893,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1072,"uart_rx", false,-1);
    tracep->declBit(c+1073,"uart_tx", false,-1);
    tracep->declBit(c+738,"rtsn", false,-1);
    tracep->declBit(c+1097,"ctsn", false,-1);
    tracep->declBit(c+739,"dtr_pad_o", false,-1);
    tracep->declBit(c+1097,"dsr_pad_i", false,-1);
    tracep->declBit(c+1097,"ri_pad_i", false,-1);
    tracep->declBit(c+1097,"dcd_pad_i", false,-1);
    tracep->declBit(c+740,"interrupt", false,-1);
    tracep->declBit(c+1087,"reg_we", false,-1);
    tracep->declBit(c+1088,"reg_re", false,-1);
    tracep->declBus(c+932,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+933,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+586,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1051,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+741,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"wb_rst_i", false,-1);
    tracep->declBus(c+932,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+934,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1051,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1087,"wb_we_i", false,-1);
    tracep->declBit(c+1088,"wb_re_i", false,-1);
    tracep->declBit(c+1073,"stx_pad_o", false,-1);
    tracep->declBit(c+1072,"srx_pad_i", false,-1);
    tracep->declBus(c+1213,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+741,"rts_pad_o", false,-1);
    tracep->declBit(c+739,"dtr_pad_o", false,-1);
    tracep->declBit(c+740,"int_o", false,-1);
    tracep->declBit(c+742,"enable", false,-1);
    tracep->declBit(c+743,"srx_pad", false,-1);
    tracep->declBus(c+744,"ier", false,-1, 3,0);
    tracep->declBus(c+745,"iir", false,-1, 3,0);
    tracep->declBus(c+746,"fcr", false,-1, 1,0);
    tracep->declBus(c+747,"mcr", false,-1, 4,0);
    tracep->declBus(c+748,"lcr", false,-1, 7,0);
    tracep->declBus(c+749,"msr", false,-1, 7,0);
    tracep->declBus(c+750,"dl", false,-1, 15,0);
    tracep->declBus(c+751,"scratch", false,-1, 7,0);
    tracep->declBit(c+752,"start_dlc", false,-1);
    tracep->declBit(c+753,"lsr_mask_d", false,-1);
    tracep->declBit(c+754,"msi_reset", false,-1);
    tracep->declBus(c+755,"dlc", false,-1, 15,0);
    tracep->declBus(c+756,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+757,"rx_reset", false,-1);
    tracep->declBit(c+758,"tx_reset", false,-1);
    tracep->declBit(c+759,"dlab", false,-1);
    tracep->declBit(c+1095,"cts_pad_i", false,-1);
    tracep->declBit(c+1097,"dsr_pad_i", false,-1);
    tracep->declBit(c+1097,"ri_pad_i", false,-1);
    tracep->declBit(c+1097,"dcd_pad_i", false,-1);
    tracep->declBit(c+760,"loopback", false,-1);
    tracep->declBit(c+1097,"cts", false,-1);
    tracep->declBit(c+1095,"dsr", false,-1);
    tracep->declBit(c+1095,"ri", false,-1);
    tracep->declBit(c+1095,"dcd", false,-1);
    tracep->declBit(c+761,"cts_c", false,-1);
    tracep->declBit(c+762,"dsr_c", false,-1);
    tracep->declBit(c+763,"ri_c", false,-1);
    tracep->declBit(c+764,"dcd_c", false,-1);
    tracep->declBus(c+765,"lsr", false,-1, 7,0);
    tracep->declBit(c+766,"lsr0", false,-1);
    tracep->declBit(c+767,"lsr1", false,-1);
    tracep->declBit(c+768,"lsr2", false,-1);
    tracep->declBit(c+769,"lsr3", false,-1);
    tracep->declBit(c+770,"lsr4", false,-1);
    tracep->declBit(c+771,"lsr5", false,-1);
    tracep->declBit(c+772,"lsr6", false,-1);
    tracep->declBit(c+773,"lsr7", false,-1);
    tracep->declBit(c+774,"lsr0r", false,-1);
    tracep->declBit(c+775,"lsr1r", false,-1);
    tracep->declBit(c+776,"lsr2r", false,-1);
    tracep->declBit(c+777,"lsr3r", false,-1);
    tracep->declBit(c+778,"lsr4r", false,-1);
    tracep->declBit(c+779,"lsr5r", false,-1);
    tracep->declBit(c+780,"lsr6r", false,-1);
    tracep->declBit(c+781,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+782,"rls_int", false,-1);
    tracep->declBit(c+783,"rda_int", false,-1);
    tracep->declBit(c+784,"ti_int", false,-1);
    tracep->declBit(c+785,"thre_int", false,-1);
    tracep->declBit(c+786,"ms_int", false,-1);
    tracep->declBit(c+787,"tf_push", false,-1);
    tracep->declBit(c+788,"rf_pop", false,-1);
    tracep->declBus(c+1089,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+789,"rf_error_bit", false,-1);
    tracep->declBit(c+767,"rf_overrun", false,-1);
    tracep->declBit(c+790,"rf_push_pulse", false,-1);
    tracep->declBus(c+791,"rf_count", false,-1, 4,0);
    tracep->declBus(c+792,"tf_count", false,-1, 4,0);
    tracep->declBus(c+793,"tstate", false,-1, 2,0);
    tracep->declBus(c+794,"rstate", false,-1, 3,0);
    tracep->declBus(c+795,"counter_t", false,-1, 9,0);
    tracep->declBit(c+796,"thre_set_en", false,-1);
    tracep->declBus(c+797,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+798,"block_value", false,-1, 7,0);
    tracep->declBit(c+799,"serial_out", false,-1);
    tracep->declBit(c+800,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+801,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+802,"lsr0_d", false,-1);
    tracep->declBit(c+803,"lsr1_d", false,-1);
    tracep->declBit(c+804,"lsr2_d", false,-1);
    tracep->declBit(c+805,"lsr3_d", false,-1);
    tracep->declBit(c+806,"lsr4_d", false,-1);
    tracep->declBit(c+807,"lsr5_d", false,-1);
    tracep->declBit(c+808,"lsr6_d", false,-1);
    tracep->declBit(c+809,"lsr7_d", false,-1);
    tracep->declBit(c+810,"rls_int_d", false,-1);
    tracep->declBit(c+811,"thre_int_d", false,-1);
    tracep->declBit(c+812,"ms_int_d", false,-1);
    tracep->declBit(c+813,"ti_int_d", false,-1);
    tracep->declBit(c+814,"rda_int_d", false,-1);
    tracep->declBit(c+815,"rls_int_rise", false,-1);
    tracep->declBit(c+816,"thre_int_rise", false,-1);
    tracep->declBit(c+817,"ms_int_rise", false,-1);
    tracep->declBit(c+818,"ti_int_rise", false,-1);
    tracep->declBit(c+819,"rda_int_rise", false,-1);
    tracep->declBit(c+820,"rls_int_pnd", false,-1);
    tracep->declBit(c+821,"rda_int_pnd", false,-1);
    tracep->declBit(c+822,"thre_int_pnd", false,-1);
    tracep->declBit(c+823,"ms_int_pnd", false,-1);
    tracep->declBit(c+824,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1222,"Tp", false,-1, 31,0);
    tracep->declBus(c+1222,"width", false,-1, 31,0);
    tracep->declBus(c+1192,"init_value", false,-1, 0,0);
    tracep->declBit(c+1053,"rst_i", false,-1);
    tracep->declBit(c+1052,"clk_i", false,-1);
    tracep->declBit(c+1097,"stage1_rst_i", false,-1);
    tracep->declBit(c+1095,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1072,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+743,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+825,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"wb_rst_i", false,-1);
    tracep->declBus(c+748,"lcr", false,-1, 7,0);
    tracep->declBit(c+788,"rf_pop", false,-1);
    tracep->declBit(c+800,"srx_pad_i", false,-1);
    tracep->declBit(c+742,"enable", false,-1);
    tracep->declBit(c+757,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+795,"counter_t", false,-1, 9,0);
    tracep->declBus(c+791,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1089,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+767,"rf_overrun", false,-1);
    tracep->declBit(c+789,"rf_error_bit", false,-1);
    tracep->declBus(c+794,"rstate", false,-1, 3,0);
    tracep->declBit(c+790,"rf_push_pulse", false,-1);
    tracep->declBus(c+826,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+827,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+828,"rshift", false,-1, 7,0);
    tracep->declBit(c+829,"rparity", false,-1);
    tracep->declBit(c+830,"rparity_error", false,-1);
    tracep->declBit(c+831,"rframing_error", false,-1);
    tracep->declBit(c+832,"rbit_in", false,-1);
    tracep->declBit(c+833,"rparity_xor", false,-1);
    tracep->declBus(c+834,"counter_b", false,-1, 7,0);
    tracep->declBit(c+835,"rf_push_q", false,-1);
    tracep->declBus(c+836,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+837,"rf_push", false,-1);
    tracep->declBit(c+838,"break_error", false,-1);
    tracep->declBit(c+839,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+840,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+841,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+842,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1107,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1211,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1210,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1206,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1208,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1207,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1209,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1205,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1213,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1214,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1223,"sr_push", false,-1, 3,0);
    tracep->declBus(c+843,"toc_value", false,-1, 9,0);
    tracep->declBus(c+844,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1224,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1216,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1200,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1225,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"wb_rst_i", false,-1);
    tracep->declBit(c+790,"push", false,-1);
    tracep->declBit(c+788,"pop", false,-1);
    tracep->declBus(c+836,"data_in", false,-1, 10,0);
    tracep->declBit(c+757,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1089,"data_out", false,-1, 10,0);
    tracep->declBit(c+767,"overrun", false,-1);
    tracep->declBus(c+791,"count", false,-1, 4,0);
    tracep->declBit(c+789,"error_bit", false,-1);
    tracep->declBus(c+1090,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+845+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+861,"top", false,-1, 3,0);
    tracep->declBus(c+862,"bottom", false,-1, 3,0);
    tracep->declBus(c+863,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+864,"word0", false,-1, 2,0);
    tracep->declBus(c+865,"word1", false,-1, 2,0);
    tracep->declBus(c+866,"word2", false,-1, 2,0);
    tracep->declBus(c+867,"word3", false,-1, 2,0);
    tracep->declBus(c+868,"word4", false,-1, 2,0);
    tracep->declBus(c+869,"word5", false,-1, 2,0);
    tracep->declBus(c+870,"word6", false,-1, 2,0);
    tracep->declBus(c+871,"word7", false,-1, 2,0);
    tracep->declBus(c+872,"word8", false,-1, 2,0);
    tracep->declBus(c+873,"word9", false,-1, 2,0);
    tracep->declBus(c+874,"word10", false,-1, 2,0);
    tracep->declBus(c+875,"word11", false,-1, 2,0);
    tracep->declBus(c+876,"word12", false,-1, 2,0);
    tracep->declBus(c+877,"word13", false,-1, 2,0);
    tracep->declBus(c+878,"word14", false,-1, 2,0);
    tracep->declBus(c+879,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1200,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1221,"data_width", false,-1, 31,0);
    tracep->declBus(c+1216,"depth", false,-1, 31,0);
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+790,"we", false,-1);
    tracep->declBus(c+861,"a", false,-1, 3,0);
    tracep->declBus(c+862,"dpra", false,-1, 3,0);
    tracep->declBus(c+880,"di", false,-1, 7,0);
    tracep->declBus(c+1090,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+587+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"wb_rst_i", false,-1);
    tracep->declBus(c+748,"lcr", false,-1, 7,0);
    tracep->declBit(c+787,"tf_push", false,-1);
    tracep->declBus(c+934,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+742,"enable", false,-1);
    tracep->declBit(c+758,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+799,"stx_pad_o", false,-1);
    tracep->declBus(c+793,"tstate", false,-1, 2,0);
    tracep->declBus(c+792,"tf_count", false,-1, 4,0);
    tracep->declBus(c+881,"counter", false,-1, 4,0);
    tracep->declBus(c+882,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+883,"shift_out", false,-1, 6,0);
    tracep->declBit(c+884,"stx_o_tmp", false,-1);
    tracep->declBit(c+885,"parity_xor", false,-1);
    tracep->declBit(c+886,"tf_pop", false,-1);
    tracep->declBit(c+887,"bit_out", false,-1);
    tracep->declBus(c+934,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1091,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+888,"tf_overrun", false,-1);
    tracep->declBus(c+1110,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1096,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1112,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1173,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1174,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1175,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1221,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1216,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1200,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1225,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+1053,"wb_rst_i", false,-1);
    tracep->declBit(c+787,"push", false,-1);
    tracep->declBit(c+886,"pop", false,-1);
    tracep->declBus(c+934,"data_in", false,-1, 7,0);
    tracep->declBit(c+758,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1091,"data_out", false,-1, 7,0);
    tracep->declBit(c+888,"overrun", false,-1);
    tracep->declBus(c+792,"count", false,-1, 4,0);
    tracep->declBus(c+889,"top", false,-1, 3,0);
    tracep->declBus(c+890,"bottom", false,-1, 3,0);
    tracep->declBus(c+891,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1200,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1221,"data_width", false,-1, 31,0);
    tracep->declBus(c+1216,"depth", false,-1, 31,0);
    tracep->declBit(c+1052,"clk", false,-1);
    tracep->declBit(c+787,"we", false,-1);
    tracep->declBus(c+889,"a", false,-1, 3,0);
    tracep->declBus(c+890,"dpra", false,-1, 3,0);
    tracep->declBus(c+934,"di", false,-1, 7,0);
    tracep->declBus(c+1091,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+603+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBit(c+621,"auto_in_psel", false,-1);
    tracep->declBit(c+622,"auto_in_penable", false,-1);
    tracep->declBit(c+22,"auto_in_pwrite", false,-1);
    tracep->declBus(c+895,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1096,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+893,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"auto_in_pready", false,-1);
    tracep->declBit(c+1099,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1100,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1066,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1067,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1068,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1069,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1070,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1071,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1052,"clock", false,-1);
    tracep->declBit(c+1053,"reset", false,-1);
    tracep->declBus(c+929,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+621,"in_psel", false,-1);
    tracep->declBit(c+622,"in_penable", false,-1);
    tracep->declBus(c+1096,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+22,"in_pwrite", false,-1);
    tracep->declBus(c+893,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+23,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1098,"in_pready", false,-1);
    tracep->declBus(c+1100,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1099,"in_pslverr", false,-1);
    tracep->declBus(c+1066,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1067,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1068,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1069,"vga_hsync", false,-1);
    tracep->declBit(c+1070,"vga_vsync", false,-1);
    tracep->declBit(c+1071,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+1097,"ss", false,-1);
    tracep->declBit(c+1095,"mosi", false,-1);
    tracep->declBit(c+1092,"miso", false,-1);
    tracep->declBus(c+9,"data", false,-1, 7,0);
    tracep->declBus(c+10,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+1,"sck", false,-1);
    tracep->declBit(c+2,"ss", false,-1);
    tracep->declBit(c+1095,"mosi", false,-1);
    tracep->declBit(c+1093,"miso", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+13,"state", false,-1, 2,0);
    tracep->declBus(c+14,"counter", false,-1, 7,0);
    tracep->declBus(c+15,"cmd", false,-1, 7,0);
    tracep->declBus(c+16,"addr", false,-1, 23,0);
    tracep->declBus(c+17,"data", false,-1, 31,0);
    tracep->declBit(c+18,"ren", false,-1);
    tracep->declBus(c+11,"rdata", false,-1, 31,0);
    tracep->declBus(c+19,"raddr", false,-1, 31,0);
    tracep->declBus(c+12,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+1,"clock", false,-1);
    tracep->declBit(c+18,"valid", false,-1);
    tracep->declBus(c+15,"cmd", false,-1, 7,0);
    tracep->declBus(c+19,"addr", false,-1, 31,0);
    tracep->declBus(c+11,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1075,"sck", false,-1);
    tracep->declBit(c+1076,"ce_n", false,-1);
    tracep->declBus(c+935,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1077,"clk", false,-1);
    tracep->declBit(c+686,"cke", false,-1);
    tracep->declBit(c+687,"cs", false,-1);
    tracep->declBit(c+688,"ras", false,-1);
    tracep->declBit(c+689,"cas", false,-1);
    tracep->declBit(c+690,"we", false,-1);
    tracep->declBus(c+691,"a", false,-1, 12,0);
    tracep->declBus(c+692,"ba", false,-1, 1,0);
    tracep->declBus(c+693,"dqm", false,-1, 1,0);
    tracep->declBus(c+694,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data),8);
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
    bufp->fullIData(oldp+11,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+12,(((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                               << 0x18U) | ((0xff0000U 
                                             & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                << 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                   >> 8U)) 
                                               | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                  >> 0x18U))))),32);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+16,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+18,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                            & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+19,((1U | (0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                                 << 1U)))),32);
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+21,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+24,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data),32);
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullIData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
    bufp->fullBit(oldp+53,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
    bufp->fullIData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullBit(oldp+59,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullIData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullBit(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+65,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+67,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+69,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+70,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+115,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast)))));
    bufp->fullQData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+120,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+126,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+129,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+130,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+131,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+139,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+141,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+144,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+145,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+146,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+148,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+156,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+158,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+159,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+205,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+218,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+222,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+226,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+230,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+234,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+238,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+242,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+246,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+250,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+254,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+258,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+262,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+266,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+270,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+274,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+278,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+282,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+286,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+290,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+294,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+298,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+302,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+306,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+310,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+314,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+318,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+322,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+326,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+330,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+334,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+338,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+342,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+346,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                                : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                    : (((0x63U == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                        : ((IData)(4U) 
                                           + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc))))),32);
    bufp->fullCData(oldp+347,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+348,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+349,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+350,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+351,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imme),32);
    bufp->fullIData(oldp+353,(((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                ? 0U : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                         ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                                 ? 0U
                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data)
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_data
                                                 : 0U))
                                         : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imme
                                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)))))),32);
    bufp->fullIData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_data),32);
    bufp->fullIData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme),32);
    bufp->fullIData(oldp+358,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB),32);
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result),32);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+364,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid) 
                             & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_en));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_en));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sign_extension));
    bufp->fullBit(oldp+368,(((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)));
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len),8);
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len),8);
    bufp->fullCData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_data_ctrl),4);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs
                              [0xaU]),32);
    bufp->fullSData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_en));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_en));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_ecall));
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_data),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_ready));
    bufp->fullIData(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid),32);
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_arready));
    bufp->fullBit(oldp+389,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   (3U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))))));
    bufp->fullBit(oldp+390,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))))));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_arready));
    bufp->fullCData(oldp+393,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid)
                                ? ((1U & (- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len))))) 
                                   | (2U & (- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len))))))
                                : 2U)),3);
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_awready));
    bufp->fullCData(oldp+397,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid)
                                ? ((1U & (- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))))) 
                                   | (2U & (- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))))))
                                : 2U)),3);
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__reg_wdata),32);
    bufp->fullCData(oldp+399,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))
                                ? ((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                    ? 1U : ((1U == 
                                             (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                             ? 2U : 
                                            ((2U == 
                                              (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                              ? 4U : 8U)))
                                : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))
                                    ? ((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                        ? 3U : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                                 ? 6U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                                  ? 0xcU
                                                  : 0U)))
                                    : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))
                                        ? 0xfU : 0U)))),4);
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_wready));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_bready));
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr),32);
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arsize),3);
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_rready));
    bufp->fullIData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awaddr),32);
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid));
    bufp->fullBit(oldp+410,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                       >> 2U)) & ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   (3U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))))));
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awsize),3);
    bufp->fullIData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wdata),32);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wstrb),4);
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wvalid));
    bufp->fullBit(oldp+415,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                       >> 2U)) & ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))))));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_bready));
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
    bufp->fullBit(oldp+419,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize),3);
    bufp->fullIData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
    bufp->fullBit(oldp+426,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize),3);
    bufp->fullIData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
    bufp->fullCData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
    bufp->fullBit(oldp+433,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+436,(((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)),32);
    bufp->fullIData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+439,((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+440,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+442,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
    bufp->fullBit(oldp+443,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
    bufp->fullIData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state),3);
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+457,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullCData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wdata_format),6);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullCData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state),3);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
    bufp->fullCData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
    bufp->fullCData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
    bufp->fullQData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
    bufp->fullCData(oldp+545,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullIData(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullIData(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullCData(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
    bufp->fullIData(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
    bufp->fullCData(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
    bufp->fullBit(oldp+561,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+562,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+563,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
    bufp->fullBit(oldp+564,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+575,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+583,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+585,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)
                                ? 0U : 3U)),8);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+619,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+620,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+621,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+622,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+623,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+624,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+625,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+626,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+627,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+628,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable) 
                             & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel)))));
    bufp->fullIData(oldp+629,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+630,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullIData(oldp+631,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullBit(oldp+632,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+633,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+634,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+635,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+636,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+637,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+638,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+639,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+640,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+641,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+642,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+643,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+644,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+645,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+646,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+647,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+648,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+649,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+650,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+651,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+652,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+653,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+654,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+655,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+656,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+657,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+658,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+659,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+660,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+661,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+662,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+663,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+664,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+665,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+666,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+667,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+668,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                   & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                                         << 0xfU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                            << 0xeU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                               << 0xdU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                                  << 0xcU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                                     << 0xbU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                           << 9U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                              << 8U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))))));
    bufp->fullCData(oldp+669,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullCData(oldp+670,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : (3U & ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                         << 0x1eU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                           << 1U))))
                                                    : 0U))))
                                : 0U)),2);
    bufp->fullBit(oldp+671,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullCData(oldp+672,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullBit(oldp+673,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                   & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                                         << 0xfU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                            << 0xeU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                               << 0xdU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                                  << 0xcU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                                     << 0xbU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                           << 9U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                              << 8U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))))));
    bufp->fullCData(oldp+674,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullCData(oldp+675,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : (3U & ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                         << 0x1eU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                           << 1U))))
                                                    : 0U))))
                                : 0U)),2);
    bufp->fullBit(oldp+676,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullCData(oldp+677,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullBit(oldp+678,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                 >> 2U)) & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                                      << 0xfU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                         << 0xeU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                            << 0xdU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                               << 0xcU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                                  << 0xbU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                     << 0xaU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                        << 9U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                              << 7U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                                    >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))))));
    bufp->fullCData(oldp+679,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)
                                             : 0U)))),4);
    bufp->fullCData(oldp+680,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : (3U & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 0U
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                   | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                        << 0x1eU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                          << 1U))))
                                                   : 0U))))),2);
    bufp->fullCData(oldp+681,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
                                             : 0U)))),4);
    bufp->fullCData(oldp+682,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                                                 ? 0U
                                                 : 3U)
                                             : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                 ? 0U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                                                 ? 0U
                                                 : 1U)
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid)
                                                 ? 
                                                (((0xa0000048U 
                                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr) 
                                                  | (0xa000004cU 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr))
                                                  ? 3U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullCData(oldp+683,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (((5U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                                                 ? 0U
                                                 : 3U)
                                             : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                                 ? 0U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                                 ? 0U
                                                 : 1U)
                                             : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid)
                                                 ? 
                                                ((0xa00003f8U 
                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awaddr)
                                                  ? 2U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullBit(oldp+684,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+685,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+687,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+688,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+689,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+690,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+694,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+696,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+699,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+700,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+703,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+704,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+709,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+713,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+715,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+738,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+739,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+741,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+759,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+760,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+761,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+762,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+763,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+764,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+765,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+768,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+769,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+770,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+789,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+796,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+815,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+816,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+817,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+818,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+819,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+838,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+839,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+840,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+841,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+842,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+844,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+863,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+880,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+891,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullIData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullIData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+895,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+896,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+900,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+911,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+912,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+917,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+918,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+919,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+920,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+921,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+926,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+927,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+928,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+929,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+930,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel))));
    bufp->fullIData(oldp+931,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+932,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+935,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+971,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+972,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+994,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+995,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+996,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+997,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+998,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+999,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1000,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1001,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1002,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1003,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1004,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1005,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1006,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1007,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1008,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1009,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1010,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1011,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1012,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1013,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1014,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1015,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1016,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1017,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1018,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1019,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1020,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1021,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1022,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1023,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1024,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1025,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rdata),32);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rvalid));
    bufp->fullIData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rdata),32);
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rvalid));
    bufp->fullIData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__next_state),3);
    bufp->fullIData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rdata_mask),32);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1052,(vlSelf->clock));
    bufp->fullBit(oldp+1053,(vlSelf->reset));
    bufp->fullSData(oldp+1054,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1055,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1056,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1057,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1058,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1059,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1060,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1061,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1062,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1063,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1064,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1065,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1066,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1067,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1068,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1069,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1070,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1071,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1072,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1073,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1074,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                          << 0x18U) 
                                         | ((0xff0000U 
                                             & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                << 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                   >> 8U)) 
                                               | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                  >> 0x18U))))
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1075,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1076,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1077,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1078,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1079,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1080,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullCData(oldp+1081,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                 ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                     ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                    : 0U) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                       ? 0U
                                                       : 3U)
                                                      : 0U))
                                                  : 0U)))
                                 : 0U)),2);
    bufp->fullCData(oldp+1082,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                 ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                     ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                    : 0U) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                       ? 0U
                                                       : 3U)
                                                      : 0U))
                                                  : 0U)))
                                 : 0U)),2);
    bufp->fullCData(oldp+1083,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                      ? 0U
                                                      : 3U)
                                                     : 0U))
                                              : 0U)))),2);
    bufp->fullBit(oldp+1084,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1086,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1089,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1093,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? ((vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                   << 8U)) 
                                               | ((0xff00U 
                                                   & (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                      >> 8U)) 
                                                  | (vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata 
                                                     >> 0x18U))))
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1094,(0U),8);
    bufp->fullBit(oldp+1095,(1U));
    bufp->fullCData(oldp+1096,(1U),3);
    bufp->fullBit(oldp+1097,(0U));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1107,(0U),4);
    bufp->fullCData(oldp+1108,(0U),2);
    bufp->fullIData(oldp+1109,(0U),32);
    bufp->fullCData(oldp+1110,(0U),3);
    bufp->fullIData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata),32);
    bufp->fullCData(oldp+1112,(2U),3);
    bufp->fullCData(oldp+1113,(0xfU),4);
    bufp->fullIData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arid),4);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arlen),8);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arsize),3);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arburst),2);
    bufp->fullIData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullBit(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rlast));
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rid),4);
    bufp->fullIData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awid),4);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awlen),8);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awsize),3);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awburst),2);
    bufp->fullIData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wlast));
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bid),4);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arid),4);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arlen),8);
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arsize),3);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arburst),2);
    bufp->fullIData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullBit(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rlast));
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rid),4);
    bufp->fullIData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullBit(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awid),4);
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awlen),8);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awsize),3);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awburst),2);
    bufp->fullIData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wlast));
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bid),4);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+1173,(3U),3);
    bufp->fullCData(oldp+1174,(4U),3);
    bufp->fullCData(oldp+1175,(5U),3);
    bufp->fullIData(oldp+1176,(0x20U),32);
    bufp->fullIData(oldp+1177,(0x20000000U),32);
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_arready));
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rdata),32);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp),2);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast));
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid),4);
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready));
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp),2);
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid));
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid),4);
    bufp->fullBit(oldp+1191,(0U));
    bufp->fullBit(oldp+1192,(1U));
    bufp->fullCData(oldp+1193,(0x1bU),8);
    bufp->fullCData(oldp+1194,(0xebU),8);
    bufp->fullCData(oldp+1195,(0x38U),8);
    bufp->fullIData(oldp+1196,(0x64U),32);
    bufp->fullIData(oldp+1197,(0x18U),32);
    bufp->fullIData(oldp+1198,(9U),32);
    bufp->fullIData(oldp+1199,(2U),32);
    bufp->fullIData(oldp+1200,(4U),32);
    bufp->fullIData(oldp+1201,(0xdU),32);
    bufp->fullIData(oldp+1202,(0x2000U),32);
    bufp->fullIData(oldp+1203,(0x2710U),32);
    bufp->fullIData(oldp+1204,(0x30cU),32);
    bufp->fullCData(oldp+1205,(7U),4);
    bufp->fullCData(oldp+1206,(3U),4);
    bufp->fullCData(oldp+1207,(5U),4);
    bufp->fullCData(oldp+1208,(4U),4);
    bufp->fullCData(oldp+1209,(6U),4);
    bufp->fullCData(oldp+1210,(2U),4);
    bufp->fullCData(oldp+1211,(1U),4);
    bufp->fullSData(oldp+1212,(0x21U),13);
    bufp->fullCData(oldp+1213,(8U),4);
    bufp->fullCData(oldp+1214,(9U),4);
    bufp->fullIData(oldp+1215,(0xaU),32);
    bufp->fullIData(oldp+1216,(0x10U),32);
    bufp->fullIData(oldp+1217,(6U),32);
    bufp->fullIData(oldp+1218,(0x11U),32);
    bufp->fullIData(oldp+1219,(0x30000000U),32);
    bufp->fullIData(oldp+1220,(0x3fffffffU),32);
    bufp->fullIData(oldp+1221,(8U),32);
    bufp->fullIData(oldp+1222,(1U),32);
    bufp->fullCData(oldp+1223,(0xaU),4);
    bufp->fullIData(oldp+1224,(0xbU),32);
    bufp->fullIData(oldp+1225,(5U),32);
}
