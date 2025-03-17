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
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBus(c+1094,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1095,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1096,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1097,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1098,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1099,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1100,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1101,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1102,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1103,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1104,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1105,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1106,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1107,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1108,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1109,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1110,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1111,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1112,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1113,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBus(c+1094,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1095,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1096,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1097,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1098,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1099,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1100,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1101,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1102,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1103,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1104,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1105,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1106,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1107,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1108,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1109,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1110,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1111,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1112,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1113,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+674,"spi_sck", false,-1);
    tracep->declBus(c+675,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+676,"spi_mosi", false,-1);
    tracep->declBit(c+1114,"spi_miso", false,-1);
    tracep->declBit(c+1112,"uart_rx", false,-1);
    tracep->declBit(c+1113,"uart_tx", false,-1);
    tracep->declBit(c+1115,"psram_sck", false,-1);
    tracep->declBit(c+1116,"psram_ce_n", false,-1);
    tracep->declBus(c+963,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1117,"sdram_clk", false,-1);
    tracep->declBit(c+677,"sdram_cke", false,-1);
    tracep->declBit(c+678,"sdram_cs", false,-1);
    tracep->declBit(c+679,"sdram_ras", false,-1);
    tracep->declBit(c+680,"sdram_cas", false,-1);
    tracep->declBit(c+681,"sdram_we", false,-1);
    tracep->declBus(c+682,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+683,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+684,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+685,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1094,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1095,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1096,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1097,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1098,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1099,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1100,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1101,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1102,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1103,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1104,"ps2_clk", false,-1);
    tracep->declBit(c+1105,"ps2_data", false,-1);
    tracep->declBus(c+1106,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1107,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1108,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1109,"vga_hsync", false,-1);
    tracep->declBit(c+1110,"vga_vsync", false,-1);
    tracep->declBit(c+1111,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBus(c+921,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+10,"in_psel", false,-1);
    tracep->declBit(c+11,"in_penable", false,-1);
    tracep->declBus(c+1138,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+12,"in_pwrite", false,-1);
    tracep->declBus(c+922,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+964,"in_pready", false,-1);
    tracep->declBus(c+965,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+923,"in_pslverr", false,-1);
    tracep->declBus(c+921,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+10,"out_psel", false,-1);
    tracep->declBit(c+11,"out_penable", false,-1);
    tracep->declBus(c+1138,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+12,"out_pwrite", false,-1);
    tracep->declBus(c+922,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+964,"out_pready", false,-1);
    tracep->declBus(c+965,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+923,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+10,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+11,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+12,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+921,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1138,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+923,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+965,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+608,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+609,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+12,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+921,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1138,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+686,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1139,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+687,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+610,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+611,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+12,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+924,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1138,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1140,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1141,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1142,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+612,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+613,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+12,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+925,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1138,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1143,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1144,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1145,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+614,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+615,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+12,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+925,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1138,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1147,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1148,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+926,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+616,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+12,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+921,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1138,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1118,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1139,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+14,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+927,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+928,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+12,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+925,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1138,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+929,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1139,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1119,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+930,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+931,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+12,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+924,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1138,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1120,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1139,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1121,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+932,"sel_0", false,-1);
    tracep->declBit(c+933,"sel_1", false,-1);
    tracep->declBit(c+934,"sel_2", false,-1);
    tracep->declBit(c+935,"sel_3", false,-1);
    tracep->declBit(c+936,"sel_4", false,-1);
    tracep->declBit(c+937,"sel_5", false,-1);
    tracep->declBit(c+938,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+15,"auto_in_awready", false,-1);
    tracep->declBit(c+16,"auto_in_awvalid", false,-1);
    tracep->declBus(c+17,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+18,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+15,"auto_in_wready", false,-1);
    tracep->declBit(c+20,"auto_in_wvalid", false,-1);
    tracep->declBus(c+21,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+966,"auto_in_bready", false,-1);
    tracep->declBit(c+967,"auto_in_bvalid", false,-1);
    tracep->declBus(c+23,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+939,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_in_arready", false,-1);
    tracep->declBit(c+25,"auto_in_arvalid", false,-1);
    tracep->declBus(c+26,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+27,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+28,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+968,"auto_in_rready", false,-1);
    tracep->declBit(c+969,"auto_in_rvalid", false,-1);
    tracep->declBus(c+29,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+617,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+939,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+10,"auto_out_psel", false,-1);
    tracep->declBit(c+11,"auto_out_penable", false,-1);
    tracep->declBit(c+12,"auto_out_pwrite", false,-1);
    tracep->declBus(c+921,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+922,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+964,"auto_out_pready", false,-1);
    tracep->declBit(c+923,"auto_out_pslverr", false,-1);
    tracep->declBus(c+965,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+11,"nodeOut_penable", false,-1);
    tracep->declBus(c+30,"state", false,-1, 1,0);
    tracep->declBit(c+24,"accept_read", false,-1);
    tracep->declBit(c+15,"accept_write", false,-1);
    tracep->declBit(c+31,"is_write_r", false,-1);
    tracep->declBit(c+12,"is_write", false,-1);
    tracep->declBus(c+29,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+23,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+32,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+33,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+34,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+35,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+940,"resp", false,-1, 1,0);
    tracep->declBus(c+36,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+939,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+969,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+37,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+967,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+38,"auto_in_awready", false,-1);
    tracep->declBit(c+39,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1149,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1150,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+41,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_in_wready", false,-1);
    tracep->declBit(c+43,"auto_in_wvalid", false,-1);
    tracep->declBus(c+44,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+45,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+46,"auto_in_wlast", false,-1);
    tracep->declBit(c+47,"auto_in_bready", false,-1);
    tracep->declBit(c+970,"auto_in_bvalid", false,-1);
    tracep->declBus(c+971,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+618,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+48,"auto_in_arready", false,-1);
    tracep->declBit(c+49,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1149,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1150,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_rready", false,-1);
    tracep->declBit(c+972,"auto_in_rvalid", false,-1);
    tracep->declBus(c+973,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+619,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+620,"auto_in_rlast", false,-1);
    tracep->declBit(c+974,"auto_out_awready", false,-1);
    tracep->declBit(c+53,"auto_out_awvalid", false,-1);
    tracep->declBus(c+17,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+18,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+54,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+975,"auto_out_wready", false,-1);
    tracep->declBit(c+55,"auto_out_wvalid", false,-1);
    tracep->declBus(c+21,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+56,"auto_out_wlast", false,-1);
    tracep->declBit(c+976,"auto_out_bready", false,-1);
    tracep->declBit(c+977,"auto_out_bvalid", false,-1);
    tracep->declBus(c+971,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+979,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+980,"auto_out_arready", false,-1);
    tracep->declBit(c+57,"auto_out_arvalid", false,-1);
    tracep->declBus(c+26,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+27,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+28,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+58,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+52,"auto_out_rready", false,-1);
    tracep->declBit(c+972,"auto_out_rvalid", false,-1);
    tracep->declBus(c+973,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+619,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+621,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+981,"auto_out_rlast", false,-1);
    tracep->declBit(c+55,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+59,"w_idle", false,-1);
    tracep->declBit(c+982,"in_awready", false,-1);
    tracep->declBit(c+60,"busy", false,-1);
    tracep->declBus(c+61,"r_addr", false,-1, 31,0);
    tracep->declBus(c+62,"r_len", false,-1, 7,0);
    tracep->declBus(c+63,"len", false,-1, 7,0);
    tracep->declBus(c+64,"addr", false,-1, 31,0);
    tracep->declBit(c+65,"busy_1", false,-1);
    tracep->declBus(c+66,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+67,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+68,"len_1", false,-1, 7,0);
    tracep->declBus(c+69,"addr_1", false,-1, 31,0);
    tracep->declBit(c+70,"wbeats_latched", false,-1);
    tracep->declBit(c+53,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+71,"wbeats_valid", false,-1);
    tracep->declBus(c+72,"w_counter", false,-1, 8,0);
    tracep->declBus(c+73,"w_todo", false,-1, 8,0);
    tracep->declBit(c+56,"w_last", false,-1);
    tracep->declBit(c+976,"nodeOut_bready", false,-1);
    tracep->declBus(c+74,"error_0", false,-1, 1,0);
    tracep->declBus(c+75,"error_1", false,-1, 1,0);
    tracep->declBus(c+76,"error_2", false,-1, 1,0);
    tracep->declBus(c+77,"error_3", false,-1, 1,0);
    tracep->declBus(c+78,"error_4", false,-1, 1,0);
    tracep->declBus(c+79,"error_5", false,-1, 1,0);
    tracep->declBus(c+80,"error_6", false,-1, 1,0);
    tracep->declBus(c+81,"error_7", false,-1, 1,0);
    tracep->declBus(c+82,"error_8", false,-1, 1,0);
    tracep->declBus(c+83,"error_9", false,-1, 1,0);
    tracep->declBus(c+84,"error_10", false,-1, 1,0);
    tracep->declBus(c+85,"error_11", false,-1, 1,0);
    tracep->declBus(c+86,"error_12", false,-1, 1,0);
    tracep->declBus(c+87,"error_13", false,-1, 1,0);
    tracep->declBus(c+88,"error_14", false,-1, 1,0);
    tracep->declBus(c+89,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+48,"io_enq_ready", false,-1);
    tracep->declBit(c+49,"io_enq_valid", false,-1);
    tracep->declBus(c+1149,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+50,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1150,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+51,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1151,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+983,"io_deq_ready", false,-1);
    tracep->declBit(c+57,"io_deq_valid", false,-1);
    tracep->declBus(c+26,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+90,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+91,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+28,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+92,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+93,"ram", false,-1, 48,0);
    tracep->declBit(c+95,"full", false,-1);
    tracep->declBit(c+57,"io_deq_valid_0", false,-1);
    tracep->declBit(c+984,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+38,"io_enq_ready", false,-1);
    tracep->declBit(c+39,"io_enq_valid", false,-1);
    tracep->declBus(c+1149,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+40,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1150,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+41,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1151,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+985,"io_deq_ready", false,-1);
    tracep->declBit(c+96,"io_deq_valid", false,-1);
    tracep->declBus(c+17,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+97,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+98,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+19,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+99,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+100,"ram", false,-1, 48,0);
    tracep->declBit(c+102,"full", false,-1);
    tracep->declBit(c+96,"io_deq_valid_0", false,-1);
    tracep->declBit(c+986,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+42,"io_enq_ready", false,-1);
    tracep->declBit(c+43,"io_enq_valid", false,-1);
    tracep->declBus(c+44,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+45,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+46,"io_enq_bits_last", false,-1);
    tracep->declBit(c+987,"io_deq_ready", false,-1);
    tracep->declBit(c+103,"io_deq_valid", false,-1);
    tracep->declBus(c+21,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+22,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+104,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+105,"ram", false,-1, 36,0);
    tracep->declBit(c+107,"full", false,-1);
    tracep->declBit(c+103,"io_deq_valid_0", false,-1);
    tracep->declBit(c+988,"do_enq", false,-1);
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
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+989,"auto_in_awready", false,-1);
    tracep->declBit(c+108,"auto_in_awvalid", false,-1);
    tracep->declBus(c+17,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+109,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+622,"auto_in_wready", false,-1);
    tracep->declBit(c+110,"auto_in_wvalid", false,-1);
    tracep->declBus(c+21,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+990,"auto_in_bready", false,-1);
    tracep->declBit(c+111,"auto_in_bvalid", false,-1);
    tracep->declBus(c+112,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+991,"auto_in_arready", false,-1);
    tracep->declBit(c+114,"auto_in_arvalid", false,-1);
    tracep->declBus(c+26,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+992,"auto_in_rready", false,-1);
    tracep->declBit(c+116,"auto_in_rvalid", false,-1);
    tracep->declBus(c+117,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+118,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+119,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+991,"nodeIn_arready", false,-1);
    tracep->declBit(c+989,"nodeIn_awready", false,-1);
    tracep->declBit(c+120,"w_sel0", false,-1);
    tracep->declBit(c+111,"w_full", false,-1);
    tracep->declBus(c+112,"w_id", false,-1, 3,0);
    tracep->declBit(c+121,"r_sel1", false,-1);
    tracep->declBit(c+122,"w_sel1", false,-1);
    tracep->declBit(c+116,"r_full", false,-1);
    tracep->declBus(c+117,"r_id", false,-1, 3,0);
    tracep->declBit(c+993,"ren", false,-1);
    tracep->declBit(c+123,"rdata_REG", false,-1);
    tracep->declBus(c+124,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+125,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+126,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+127,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+128,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+993,"R0_en", false,-1);
    tracep->declBit(c+1092,"R0_clk", false,-1);
    tracep->declBus(c+129,"R0_data", false,-1, 31,0);
    tracep->declBus(c+130,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+994,"W0_en", false,-1);
    tracep->declBit(c+1092,"W0_clk", false,-1);
    tracep->declBus(c+21,"W0_data", false,-1, 31,0);
    tracep->declBus(c+22,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+38,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+39,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1149,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1150,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+41,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+43,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+44,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+45,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+46,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+47,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+970,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+971,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+618,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+48,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+49,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1149,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1150,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+972,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+973,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+619,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+620,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+38,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+39,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1149,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1150,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+41,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+43,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+44,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+45,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+46,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+47,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+970,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+971,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+618,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+48,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+49,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1149,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1150,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+972,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+973,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+619,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+620,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+995,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+131,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+17,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+18,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+975,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+55,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+21,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+56,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+976,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+977,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+971,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+996,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+132,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+26,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+27,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+28,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+52,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+972,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+973,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+619,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+981,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+989,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+108,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+17,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+109,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+622,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+110,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+21,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+990,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+111,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+112,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+113,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+991,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+114,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+26,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+992,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+116,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+117,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+118,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+119,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+133,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+134,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+135,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+136,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+26,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+137,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+623,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+138,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+139,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+140,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+15,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+16,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+17,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+18,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+15,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+20,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+21,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+966,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+967,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+23,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+939,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+24,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+25,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+26,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+27,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+28,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+968,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+969,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+29,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+617,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+939,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+977,"in_0_bvalid", false,-1);
    tracep->declBit(c+972,"in_0_rvalid", false,-1);
    tracep->declBit(c+997,"in_0_wready", false,-1);
    tracep->declBit(c+998,"in_0_awready", false,-1);
    tracep->declBit(c+996,"in_0_arready", false,-1);
    tracep->declBit(c+995,"anonIn_awready", false,-1);
    tracep->declBit(c+141,"requestARIO_0_0", false,-1);
    tracep->declBit(c+142,"requestARIO_0_1", false,-1);
    tracep->declBit(c+143,"requestARIO_0_2", false,-1);
    tracep->declBit(c+144,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+145,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+146,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+147,"arSel", false,-1, 15,0);
    tracep->declBus(c+148,"awSel", false,-1, 15,0);
    tracep->declBus(c+999,"rSel", false,-1, 15,0);
    tracep->declBus(c+1000,"bSel", false,-1, 15,0);
    tracep->declBit(c+149,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+150,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+151,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+152,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+153,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+154,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+155,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+156,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+157,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+158,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+159,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+160,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+161,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+162,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+163,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+164,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+165,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+166,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+167,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+168,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+169,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+170,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+171,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+172,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+173,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+174,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+175,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+176,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+177,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+178,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+179,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+180,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+181,"latched", false,-1);
    tracep->declBit(c+182,"in_0_awvalid", false,-1);
    tracep->declBit(c+183,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+184,"in_0_wvalid", false,-1);
    tracep->declBit(c+185,"idle_3", false,-1);
    tracep->declBit(c+1001,"anyValid", false,-1);
    tracep->declBus(c+1002,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+186,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1003,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+1004,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1005,"prefixOR_1", false,-1);
    tracep->declBit(c+1006,"winner_3_1", false,-1);
    tracep->declBit(c+1007,"winner_3_2", false,-1);
    tracep->declBit(c+187,"state_3_0", false,-1);
    tracep->declBit(c+188,"state_3_1", false,-1);
    tracep->declBit(c+189,"state_3_2", false,-1);
    tracep->declBit(c+1008,"muxState_3_0", false,-1);
    tracep->declBit(c+1009,"muxState_3_1", false,-1);
    tracep->declBit(c+1010,"muxState_3_2", false,-1);
    tracep->declBit(c+190,"idle_4", false,-1);
    tracep->declBit(c+1011,"anyValid_1", false,-1);
    tracep->declBus(c+1012,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+191,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1013,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+1014,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1015,"winner_4_0", false,-1);
    tracep->declBit(c+1016,"winner_4_2", false,-1);
    tracep->declBit(c+192,"state_4_0", false,-1);
    tracep->declBit(c+193,"state_4_2", false,-1);
    tracep->declBit(c+1017,"muxState_4_0", false,-1);
    tracep->declBit(c+1018,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+194,"io_enq_ready", false,-1);
    tracep->declBit(c+183,"io_enq_valid", false,-1);
    tracep->declBus(c+195,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1019,"io_deq_ready", false,-1);
    tracep->declBit(c+196,"io_deq_valid", false,-1);
    tracep->declBus(c+197,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+198,"wrap", false,-1);
    tracep->declBit(c+199,"wrap_1", false,-1);
    tracep->declBit(c+200,"maybe_full", false,-1);
    tracep->declBit(c+201,"ptr_match", false,-1);
    tracep->declBit(c+202,"empty", false,-1);
    tracep->declBit(c+203,"full", false,-1);
    tracep->declBit(c+196,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1020,"do_deq", false,-1);
    tracep->declBit(c+1021,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+199,"R0_addr", false,-1);
    tracep->declBit(c+1152,"R0_en", false,-1);
    tracep->declBit(c+1092,"R0_clk", false,-1);
    tracep->declBus(c+204,"R0_data", false,-1, 2,0);
    tracep->declBit(c+198,"W0_addr", false,-1);
    tracep->declBit(c+1021,"W0_en", false,-1);
    tracep->declBit(c+1092,"W0_clk", false,-1);
    tracep->declBus(c+195,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+205+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+974,"auto_in_awready", false,-1);
    tracep->declBit(c+53,"auto_in_awvalid", false,-1);
    tracep->declBus(c+17,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+18,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+54,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+975,"auto_in_wready", false,-1);
    tracep->declBit(c+55,"auto_in_wvalid", false,-1);
    tracep->declBus(c+21,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+56,"auto_in_wlast", false,-1);
    tracep->declBit(c+976,"auto_in_bready", false,-1);
    tracep->declBit(c+977,"auto_in_bvalid", false,-1);
    tracep->declBus(c+971,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+979,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+980,"auto_in_arready", false,-1);
    tracep->declBit(c+57,"auto_in_arvalid", false,-1);
    tracep->declBus(c+26,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+27,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+28,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+58,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+52,"auto_in_rready", false,-1);
    tracep->declBit(c+972,"auto_in_rvalid", false,-1);
    tracep->declBus(c+973,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+619,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+621,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+981,"auto_in_rlast", false,-1);
    tracep->declBit(c+995,"auto_out_awready", false,-1);
    tracep->declBit(c+131,"auto_out_awvalid", false,-1);
    tracep->declBus(c+17,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+18,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+19,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+975,"auto_out_wready", false,-1);
    tracep->declBit(c+55,"auto_out_wvalid", false,-1);
    tracep->declBus(c+21,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+56,"auto_out_wlast", false,-1);
    tracep->declBit(c+976,"auto_out_bready", false,-1);
    tracep->declBit(c+977,"auto_out_bvalid", false,-1);
    tracep->declBus(c+971,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+978,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+996,"auto_out_arready", false,-1);
    tracep->declBit(c+132,"auto_out_arvalid", false,-1);
    tracep->declBus(c+26,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+27,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+28,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+52,"auto_out_rready", false,-1);
    tracep->declBit(c+972,"auto_out_rvalid", false,-1);
    tracep->declBus(c+973,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+619,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+981,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+207,"io_enq_ready", false,-1);
    tracep->declBit(c+624,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1022,"io_deq_ready", false,-1);
    tracep->declBit(c+208,"io_deq_valid", false,-1);
    tracep->declBit(c+209,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+208,"full", false,-1);
    tracep->declBit(c+209,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+210,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+211,"io_enq_ready", false,-1);
    tracep->declBit(c+625,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1023,"io_deq_ready", false,-1);
    tracep->declBit(c+212,"io_deq_valid", false,-1);
    tracep->declBit(c+213,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+212,"full", false,-1);
    tracep->declBit(c+213,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+214,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+215,"io_enq_ready", false,-1);
    tracep->declBit(c+626,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1024,"io_deq_ready", false,-1);
    tracep->declBit(c+216,"io_deq_valid", false,-1);
    tracep->declBit(c+217,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+216,"full", false,-1);
    tracep->declBit(c+217,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+218,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+219,"io_enq_ready", false,-1);
    tracep->declBit(c+627,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1025,"io_deq_ready", false,-1);
    tracep->declBit(c+220,"io_deq_valid", false,-1);
    tracep->declBit(c+221,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+220,"full", false,-1);
    tracep->declBit(c+221,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+222,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+628,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1026,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBit(c+225,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+224,"full", false,-1);
    tracep->declBit(c+225,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+226,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+629,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1027,"io_deq_ready", false,-1);
    tracep->declBit(c+228,"io_deq_valid", false,-1);
    tracep->declBit(c+229,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+228,"full", false,-1);
    tracep->declBit(c+229,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+230,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+630,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1028,"io_deq_ready", false,-1);
    tracep->declBit(c+232,"io_deq_valid", false,-1);
    tracep->declBit(c+233,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+232,"full", false,-1);
    tracep->declBit(c+233,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+234,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+631,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1029,"io_deq_ready", false,-1);
    tracep->declBit(c+236,"io_deq_valid", false,-1);
    tracep->declBit(c+237,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->declBit(c+237,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+238,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+632,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1030,"io_deq_ready", false,-1);
    tracep->declBit(c+240,"io_deq_valid", false,-1);
    tracep->declBit(c+241,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+240,"full", false,-1);
    tracep->declBit(c+241,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+633,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1031,"io_deq_ready", false,-1);
    tracep->declBit(c+244,"io_deq_valid", false,-1);
    tracep->declBit(c+245,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+244,"full", false,-1);
    tracep->declBit(c+245,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+246,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+634,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1032,"io_deq_ready", false,-1);
    tracep->declBit(c+248,"io_deq_valid", false,-1);
    tracep->declBit(c+249,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->declBit(c+249,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+250,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+635,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1033,"io_deq_ready", false,-1);
    tracep->declBit(c+252,"io_deq_valid", false,-1);
    tracep->declBit(c+253,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+252,"full", false,-1);
    tracep->declBit(c+253,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+636,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1034,"io_deq_ready", false,-1);
    tracep->declBit(c+256,"io_deq_valid", false,-1);
    tracep->declBit(c+257,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+256,"full", false,-1);
    tracep->declBit(c+257,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+637,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1035,"io_deq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declBit(c+261,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+260,"full", false,-1);
    tracep->declBit(c+261,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+262,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+263,"io_enq_ready", false,-1);
    tracep->declBit(c+638,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1036,"io_deq_ready", false,-1);
    tracep->declBit(c+264,"io_deq_valid", false,-1);
    tracep->declBit(c+265,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->declBit(c+265,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+266,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+267,"io_enq_ready", false,-1);
    tracep->declBit(c+639,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1037,"io_deq_ready", false,-1);
    tracep->declBit(c+268,"io_deq_valid", false,-1);
    tracep->declBit(c+269,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+268,"full", false,-1);
    tracep->declBit(c+269,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+270,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+271,"io_enq_ready", false,-1);
    tracep->declBit(c+640,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1038,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declBit(c+273,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+272,"full", false,-1);
    tracep->declBit(c+273,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+274,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+275,"io_enq_ready", false,-1);
    tracep->declBit(c+641,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1039,"io_deq_ready", false,-1);
    tracep->declBit(c+276,"io_deq_valid", false,-1);
    tracep->declBit(c+277,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+276,"full", false,-1);
    tracep->declBit(c+277,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+278,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+279,"io_enq_ready", false,-1);
    tracep->declBit(c+642,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1040,"io_deq_ready", false,-1);
    tracep->declBit(c+280,"io_deq_valid", false,-1);
    tracep->declBit(c+281,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+280,"full", false,-1);
    tracep->declBit(c+281,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+282,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+643,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1041,"io_deq_ready", false,-1);
    tracep->declBit(c+284,"io_deq_valid", false,-1);
    tracep->declBit(c+285,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->declBit(c+285,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+286,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+287,"io_enq_ready", false,-1);
    tracep->declBit(c+644,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1042,"io_deq_ready", false,-1);
    tracep->declBit(c+288,"io_deq_valid", false,-1);
    tracep->declBit(c+289,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+288,"full", false,-1);
    tracep->declBit(c+289,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+290,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+291,"io_enq_ready", false,-1);
    tracep->declBit(c+645,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1043,"io_deq_ready", false,-1);
    tracep->declBit(c+292,"io_deq_valid", false,-1);
    tracep->declBit(c+293,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+292,"full", false,-1);
    tracep->declBit(c+293,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+294,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+295,"io_enq_ready", false,-1);
    tracep->declBit(c+646,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1044,"io_deq_ready", false,-1);
    tracep->declBit(c+296,"io_deq_valid", false,-1);
    tracep->declBit(c+297,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+296,"full", false,-1);
    tracep->declBit(c+297,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+298,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+647,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1045,"io_deq_ready", false,-1);
    tracep->declBit(c+300,"io_deq_valid", false,-1);
    tracep->declBit(c+301,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+300,"full", false,-1);
    tracep->declBit(c+301,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+302,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+303,"io_enq_ready", false,-1);
    tracep->declBit(c+648,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1046,"io_deq_ready", false,-1);
    tracep->declBit(c+304,"io_deq_valid", false,-1);
    tracep->declBit(c+305,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+304,"full", false,-1);
    tracep->declBit(c+305,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+306,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+307,"io_enq_ready", false,-1);
    tracep->declBit(c+649,"io_enq_valid", false,-1);
    tracep->declBit(c+54,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1047,"io_deq_ready", false,-1);
    tracep->declBit(c+308,"io_deq_valid", false,-1);
    tracep->declBit(c+309,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+308,"full", false,-1);
    tracep->declBit(c+309,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+310,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+311,"io_enq_ready", false,-1);
    tracep->declBit(c+650,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1048,"io_deq_ready", false,-1);
    tracep->declBit(c+312,"io_deq_valid", false,-1);
    tracep->declBit(c+313,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+312,"full", false,-1);
    tracep->declBit(c+313,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+314,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+315,"io_enq_ready", false,-1);
    tracep->declBit(c+651,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1049,"io_deq_ready", false,-1);
    tracep->declBit(c+316,"io_deq_valid", false,-1);
    tracep->declBit(c+317,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->declBit(c+317,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+652,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1050,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+653,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1051,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+654,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1052,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+331,"io_enq_ready", false,-1);
    tracep->declBit(c+655,"io_enq_valid", false,-1);
    tracep->declBit(c+58,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1053,"io_deq_ready", false,-1);
    tracep->declBit(c+332,"io_deq_valid", false,-1);
    tracep->declBit(c+333,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->declBit(c+333,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+38,"auto_master_out_awready", false,-1);
    tracep->declBit(c+39,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1149,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+40,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1150,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+41,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+42,"auto_master_out_wready", false,-1);
    tracep->declBit(c+43,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+44,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+45,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+46,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+47,"auto_master_out_bready", false,-1);
    tracep->declBit(c+970,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+971,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+618,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+48,"auto_master_out_arready", false,-1);
    tracep->declBit(c+49,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1149,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+50,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1150,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"auto_master_out_rready", false,-1);
    tracep->declBit(c+972,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+973,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+619,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+620,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+1139,"io_interrupt", false,-1);
    tracep->declBit(c+38,"io_master_awready", false,-1);
    tracep->declBit(c+39,"io_master_awvalid", false,-1);
    tracep->declBus(c+40,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1149,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+41,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+42,"io_master_wready", false,-1);
    tracep->declBit(c+43,"io_master_wvalid", false,-1);
    tracep->declBus(c+44,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+45,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+46,"io_master_wlast", false,-1);
    tracep->declBit(c+47,"io_master_bready", false,-1);
    tracep->declBit(c+970,"io_master_bvalid", false,-1);
    tracep->declBus(c+618,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+971,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+48,"io_master_arready", false,-1);
    tracep->declBit(c+49,"io_master_arvalid", false,-1);
    tracep->declBus(c+50,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1149,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+52,"io_master_rready", false,-1);
    tracep->declBit(c+972,"io_master_rvalid", false,-1);
    tracep->declBus(c+1122,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+619,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+620,"io_master_rlast", false,-1);
    tracep->declBus(c+973,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1139,"io_slave_awready", false,-1);
    tracep->declBit(c+1139,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1153,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1149,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1154,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1139,"io_slave_wready", false,-1);
    tracep->declBit(c+1139,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1153,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1149,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1139,"io_slave_wlast", false,-1);
    tracep->declBit(c+1139,"io_slave_bready", false,-1);
    tracep->declBit(c+1139,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1151,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1149,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1139,"io_slave_arready", false,-1);
    tracep->declBit(c+1139,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1153,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1149,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1154,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1139,"io_slave_rready", false,-1);
    tracep->declBit(c+1139,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1151,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1153,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1139,"io_slave_rlast", false,-1);
    tracep->declBus(c+1149,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+335,"dnpc", false,-1, 31,0);
    tracep->declBus(c+336,"rs1", false,-1, 4,0);
    tracep->declBus(c+337,"rs2", false,-1, 4,0);
    tracep->declBus(c+338,"rd", false,-1, 4,0);
    tracep->declBus(c+339,"func3", false,-1, 2,0);
    tracep->declBus(c+340,"func7", false,-1, 6,0);
    tracep->declBus(c+341,"imme", false,-1, 31,0);
    tracep->declBus(c+342,"wdata", false,-1, 31,0);
    tracep->declBus(c+1155,"rdata", false,-1, 31,0);
    tracep->declBus(c+343,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+344,"src1", false,-1, 31,0);
    tracep->declBus(c+345,"src2", false,-1, 31,0);
    tracep->declBus(c+346,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+347,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+348,"ALUB", false,-1, 31,0);
    tracep->declBus(c+349,"alu_result", false,-1, 31,0);
    tracep->declBus(c+350,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+351,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+352,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+353,"w_en", false,-1);
    tracep->declBit(c+354,"w_mem_en", false,-1);
    tracep->declBit(c+355,"r_mem_en", false,-1);
    tracep->declBit(c+356,"sign_extension", false,-1);
    tracep->declBit(c+357,"b_type_enter_if", false,-1);
    tracep->declBus(c+358,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+359,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+360,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+361,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+362,"a0", false,-1, 31,0);
    tracep->declBus(c+363,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+364,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+365,"w_csr_en", false,-1);
    tracep->declBit(c+366,"r_csr_en", false,-1);
    tracep->declBit(c+367,"w_csr_ecall", false,-1);
    tracep->declBus(c+368,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+369,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+370,"pc", false,-1, 31,0);
    tracep->declBus(c+371,"inst", false,-1, 31,0);
    tracep->declBit(c+372,"IFU_valid", false,-1);
    tracep->declBit(c+373,"LSU_valid", false,-1);
    tracep->declBit(c+374,"LSU_ready", false,-1);
    tracep->declBus(c+375,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+370,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+376,"M0_arvalid", false,-1);
    tracep->declBit(c+377,"M0_arready", false,-1);
    tracep->declBus(c+1149,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1156,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+1054,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1123,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+1055,"M0_rvalid", false,-1);
    tracep->declBit(c+372,"M0_rready", false,-1);
    tracep->declBit(c+656,"M0_rlast", false,-1);
    tracep->declBus(c+657,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1153,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1139,"M0_awvalid", false,-1);
    tracep->declBit(c+378,"M0_awready", false,-1);
    tracep->declBus(c+1149,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1156,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1153,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1157,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1139,"M0_wvalid", false,-1);
    tracep->declBit(c+379,"M0_wready", false,-1);
    tracep->declBit(c+1139,"M0_wlast", false,-1);
    tracep->declBus(c+658,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+659,"M0_bvalid", false,-1);
    tracep->declBit(c+1152,"M0_bready", false,-1);
    tracep->declBus(c+660,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+349,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+380,"M1_arvalid", false,-1);
    tracep->declBit(c+381,"M1_arready", false,-1);
    tracep->declBus(c+1149,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+382,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+1056,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1124,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+1057,"M1_rvalid", false,-1);
    tracep->declBit(c+383,"M1_rready", false,-1);
    tracep->declBit(c+661,"M1_rlast", false,-1);
    tracep->declBus(c+662,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+349,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+384,"M1_awvalid", false,-1);
    tracep->declBit(c+385,"M1_awready", false,-1);
    tracep->declBus(c+1149,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+386,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+387,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+388,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+389,"M1_wvalid", false,-1);
    tracep->declBit(c+390,"M1_wready", false,-1);
    tracep->declBit(c+389,"M1_wlast", false,-1);
    tracep->declBus(c+663,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+664,"M1_bvalid", false,-1);
    tracep->declBit(c+391,"M1_bready", false,-1);
    tracep->declBus(c+665,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+392,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+393,"S0_arvalid", false,-1);
    tracep->declBit(c+394,"S0_arready", false,-1);
    tracep->declBus(c+1149,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+395,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1058,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1125,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+1059,"S0_rvalid", false,-1);
    tracep->declBit(c+396,"S0_rready", false,-1);
    tracep->declBit(c+666,"S0_rlast", false,-1);
    tracep->declBus(c+667,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+397,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+398,"S0_awvalid", false,-1);
    tracep->declBit(c+399,"S0_awready", false,-1);
    tracep->declBus(c+1149,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+400,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+401,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+402,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+403,"S0_wvalid", false,-1);
    tracep->declBit(c+404,"S0_wready", false,-1);
    tracep->declBit(c+403,"S0_wlast", false,-1);
    tracep->declBus(c+668,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+1060,"S0_bvalid", false,-1);
    tracep->declBit(c+405,"S0_bready", false,-1);
    tracep->declBus(c+669,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1158,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1159,"sram_arvalid", false,-1);
    tracep->declBit(c+1160,"sram_arready", false,-1);
    tracep->declBus(c+1161,"sram_arid", false,-1, 3,0);
    tracep->declBus(c+1162,"sram_arlen", false,-1, 7,0);
    tracep->declBus(c+1163,"sram_arsize", false,-1, 2,0);
    tracep->declBus(c+1164,"sram_arburst", false,-1, 1,0);
    tracep->declBus(c+1165,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1166,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+1167,"sram_rvalid", false,-1);
    tracep->declBit(c+1168,"sram_rready", false,-1);
    tracep->declBit(c+1169,"sram_rlast", false,-1);
    tracep->declBus(c+1170,"sram_rid", false,-1, 3,0);
    tracep->declBus(c+1171,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+1172,"sram_awvalid", false,-1);
    tracep->declBit(c+1173,"sram_awready", false,-1);
    tracep->declBus(c+1174,"sram_awid", false,-1, 3,0);
    tracep->declBus(c+1175,"sram_awlen", false,-1, 7,0);
    tracep->declBus(c+1176,"sram_awsize", false,-1, 2,0);
    tracep->declBus(c+1177,"sram_awburst", false,-1, 1,0);
    tracep->declBus(c+1178,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1179,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1180,"sram_wvalid", false,-1);
    tracep->declBit(c+1181,"sram_wready", false,-1);
    tracep->declBit(c+1182,"sram_wlast", false,-1);
    tracep->declBus(c+1183,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1184,"sram_bvalid", false,-1);
    tracep->declBit(c+1185,"sram_bready", false,-1);
    tracep->declBus(c+1186,"sram_bid", false,-1, 3,0);
    tracep->declBus(c+1187,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1188,"uart_arvalid", false,-1);
    tracep->declBit(c+1189,"uart_arready", false,-1);
    tracep->declBus(c+1190,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1191,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1192,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1193,"uart_arburst", false,-1, 1,0);
    tracep->declBus(c+1194,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1195,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1196,"uart_rvalid", false,-1);
    tracep->declBit(c+1197,"uart_rready", false,-1);
    tracep->declBit(c+1198,"uart_rlast", false,-1);
    tracep->declBus(c+1199,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+1200,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+1201,"uart_awvalid", false,-1);
    tracep->declBit(c+1202,"uart_awready", false,-1);
    tracep->declBus(c+1203,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1204,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1205,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1206,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+1207,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+1208,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1209,"uart_wvalid", false,-1);
    tracep->declBit(c+1210,"uart_wready", false,-1);
    tracep->declBit(c+1211,"uart_wlast", false,-1);
    tracep->declBus(c+1212,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+1213,"uart_bvalid", false,-1);
    tracep->declBit(c+1214,"uart_bready", false,-1);
    tracep->declBus(c+1215,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+406,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+407,"clint_arvalid", false,-1);
    tracep->declBit(c+408,"clint_arready", false,-1);
    tracep->declBus(c+1149,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+409,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+410,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+411,"clint_rvalid", false,-1);
    tracep->declBit(c+412,"clint_rready", false,-1);
    tracep->declBit(c+411,"clint_rlast", false,-1);
    tracep->declBus(c+1149,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+413,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+414,"clint_awvalid", false,-1);
    tracep->declBit(c+415,"clint_awready", false,-1);
    tracep->declBus(c+1149,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+416,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+417,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+418,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+419,"clint_wvalid", false,-1);
    tracep->declBit(c+420,"clint_wready", false,-1);
    tracep->declBit(c+421,"clint_wlast", false,-1);
    tracep->declBus(c+1151,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+422,"clint_bvalid", false,-1);
    tracep->declBit(c+423,"clint_bready", false,-1);
    tracep->declBus(c+1149,"clint_bid", false,-1, 3,0);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+344,"A", false,-1, 31,0);
    tracep->declBus(c+348,"B", false,-1, 31,0);
    tracep->declBus(c+360,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+349,"ALUout", false,-1, 31,0);
    tracep->declBus(c+424,"B_in", false,-1, 31,0);
    tracep->declBus(c+425,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+426,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+427,"carry", false,-1);
    tracep->declBit(c+428,"overflow", false,-1);
    tracep->declBit(c+429,"uless", false,-1);
    tracep->declBit(c+430,"sless", false,-1);
    tracep->declBit(c+431,"a_is_b", false,-1);
    tracep->declBit(c+432,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+344,"x", false,-1, 31,0);
    tracep->declBus(c+424,"y", false,-1, 31,0);
    tracep->declBus(c+426,"s", false,-1, 31,0);
    tracep->declBit(c+427,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+352,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+345,"src2", false,-1, 31,0);
    tracep->declBus(c+341,"imme", false,-1, 31,0);
    tracep->declBus(c+369,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+348,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBus(c+363,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+364,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+365,"w_csr_en", false,-1);
    tracep->declBit(c+366,"r_csr_en", false,-1);
    tracep->declBit(c+367,"w_csr_ecall", false,-1);
    tracep->declBus(c+370,"pc", false,-1, 31,0);
    tracep->declBus(c+368,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+369,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+433,"mepc", false,-1, 31,0);
    tracep->declBus(c+434,"mstatus", false,-1, 31,0);
    tracep->declBus(c+435,"mcause", false,-1, 31,0);
    tracep->declBus(c+436,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+349,"alu_result", false,-1, 31,0);
    tracep->declBus(c+344,"src1", false,-1, 31,0);
    tracep->declBus(c+361,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+368,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBus(c+370,"pc", false,-1, 31,0);
    tracep->declBus(c+371,"inst", false,-1, 31,0);
    tracep->declBit(c+372,"IFU_valid", false,-1);
    tracep->declBit(c+374,"LSU_ready", false,-1);
    tracep->declBus(c+370,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+376,"M0_arvalid", false,-1);
    tracep->declBit(c+377,"M0_arready", false,-1);
    tracep->declBus(c+1149,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1156,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+1054,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1123,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+1055,"M0_rvalid", false,-1);
    tracep->declBit(c+372,"M0_rready", false,-1);
    tracep->declBit(c+656,"M0_rlast", false,-1);
    tracep->declBus(c+657,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1153,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1139,"M0_awvalid", false,-1);
    tracep->declBit(c+378,"M0_awready", false,-1);
    tracep->declBus(c+1149,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1156,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1153,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1157,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1139,"M0_wvalid", false,-1);
    tracep->declBit(c+379,"M0_wready", false,-1);
    tracep->declBit(c+1139,"M0_wlast", false,-1);
    tracep->declBus(c+658,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+659,"M0_bvalid", false,-1);
    tracep->declBit(c+1152,"M0_bready", false,-1);
    tracep->declBus(c+660,"M0_bid", false,-1, 3,0);
    tracep->declBit(c+377,"arready", false,-1);
    tracep->declBus(c+1123,"rresp", false,-1, 1,0);
    tracep->declBit(c+378,"awready", false,-1);
    tracep->declBit(c+379,"wready", false,-1);
    tracep->declBus(c+658,"bresp", false,-1, 1,0);
    tracep->declBit(c+659,"bvalid", false,-1);
    tracep->declBit(c+1055,"rvalid", false,-1);
    tracep->declBit(c+372,"rready", false,-1);
    tracep->declBit(c+437,"rvalid_prev", false,-1);
    tracep->declBit(c+376,"arvalid", false,-1);
    tracep->declBus(c+438,"state", false,-1, 2,0);
    tracep->declBus(c+1061,"next_state", false,-1, 2,0);
    tracep->declBit(c+1216,"start_read_delay", false,-1);
    tracep->declBus(c+439,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+440,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+441,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+442,"random_delay", false,-1, 7,0);
    tracep->declBus(c+1154,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1138,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1156,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBus(c+441,"in", false,-1, 7,0);
    tracep->declBus(c+442,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBit(c+372,"IFU_valid", false,-1);
    tracep->declBus(c+349,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+349,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+358,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+359,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+354,"w_mem_en", false,-1);
    tracep->declBit(c+355,"r_mem_en", false,-1);
    tracep->declBit(c+356,"sign_extension", false,-1);
    tracep->declBus(c+345,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+343,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+373,"LSU_valid", false,-1);
    tracep->declBit(c+374,"LSU_ready", false,-1);
    tracep->declBus(c+349,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+380,"M1_arvalid", false,-1);
    tracep->declBit(c+381,"M1_arready", false,-1);
    tracep->declBus(c+1149,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+382,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+1056,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1124,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+1057,"M1_rvalid", false,-1);
    tracep->declBit(c+383,"M1_rready", false,-1);
    tracep->declBit(c+661,"M1_rlast", false,-1);
    tracep->declBus(c+662,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+349,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+384,"M1_awvalid", false,-1);
    tracep->declBit(c+385,"M1_awready", false,-1);
    tracep->declBus(c+1149,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+386,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+387,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+388,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+389,"M1_wvalid", false,-1);
    tracep->declBit(c+390,"M1_wready", false,-1);
    tracep->declBit(c+389,"M1_wlast", false,-1);
    tracep->declBus(c+663,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+664,"M1_bvalid", false,-1);
    tracep->declBit(c+391,"M1_bready", false,-1);
    tracep->declBus(c+665,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+1154,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1138,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1156,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1217,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1218,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1219,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1151,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+443,"state", false,-1, 2,0);
    tracep->declBus(c+1062,"next_state", false,-1, 2,0);
    tracep->declBit(c+444,"start_read_delay", false,-1);
    tracep->declBit(c+445,"start_write_delay", false,-1);
    tracep->declBus(c+349,"araddr", false,-1, 31,0);
    tracep->declBit(c+380,"arvalid", false,-1);
    tracep->declBit(c+381,"arready", false,-1);
    tracep->declBit(c+383,"rready", false,-1);
    tracep->declBus(c+1124,"rresp", false,-1, 1,0);
    tracep->declBit(c+1057,"rvalid", false,-1);
    tracep->declBit(c+384,"awvalid", false,-1);
    tracep->declBit(c+385,"awready", false,-1);
    tracep->declBus(c+349,"awaddr", false,-1, 31,0);
    tracep->declBit(c+389,"wvalid", false,-1);
    tracep->declBit(c+390,"wready", false,-1);
    tracep->declBus(c+387,"wdata", false,-1, 31,0);
    tracep->declBus(c+663,"bresp", false,-1, 1,0);
    tracep->declBus(c+388,"wstrb", false,-1, 3,0);
    tracep->declBit(c+391,"bready", false,-1);
    tracep->declBus(c+1056,"rdata", false,-1, 31,0);
    tracep->declBit(c+664,"bvalid", false,-1);
    tracep->declBit(c+446,"LSU_working", false,-1);
    tracep->declBus(c+447,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+448,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+449,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+450,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+451,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+452,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+453,"random_delay", false,-1, 7,0);
    tracep->declBus(c+388,"reg_wstrb", false,-1, 3,0);
    tracep->declBus(c+387,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+454,"wdata_format", false,-1, 5,0);
    tracep->declBus(c+1063,"rdata_mask", false,-1, 31,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBus(c+452,"in", false,-1, 7,0);
    tracep->declBus(c+453,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+370,"pc", false,-1, 31,0);
    tracep->declBus(c+341,"imme", false,-1, 31,0);
    tracep->declBus(c+349,"alu_result", false,-1, 31,0);
    tracep->declBus(c+369,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+350,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+357,"b_type_enter_if", false,-1);
    tracep->declBus(c+346,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+347,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+335,"dnpc", false,-1, 31,0);
    tracep->declBus(c+347,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+346,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBit(c+353,"w_en", false,-1);
    tracep->declBus(c+342,"wdata", false,-1, 31,0);
    tracep->declBus(c+338,"rd", false,-1, 4,0);
    tracep->declBus(c+336,"rs1", false,-1, 4,0);
    tracep->declBus(c+337,"rs2", false,-1, 4,0);
    tracep->declBus(c+344,"src1", false,-1, 31,0);
    tracep->declBus(c+345,"src2", false,-1, 31,0);
    tracep->declBus(c+362,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+455+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+487+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+346,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+347,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+349,"alu_result", false,-1, 31,0);
    tracep->declBus(c+341,"imme", false,-1, 31,0);
    tracep->declBus(c+343,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+369,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+351,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+373,"LSU_valid", false,-1);
    tracep->declBit(c+353,"w_en", false,-1);
    tracep->declBus(c+342,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+1220,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1221,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBus(c+335,"din", false,-1, 31,0);
    tracep->declBus(c+370,"dout", false,-1, 31,0);
    tracep->declBit(c+373,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBus(c+370,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+376,"M0_arvalid", false,-1);
    tracep->declBit(c+377,"M0_arready", false,-1);
    tracep->declBus(c+1149,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1156,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+1054,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1123,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+1055,"M0_rvalid", false,-1);
    tracep->declBit(c+372,"M0_rready", false,-1);
    tracep->declBit(c+656,"M0_rlast", false,-1);
    tracep->declBus(c+657,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1153,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1139,"M0_awvalid", false,-1);
    tracep->declBit(c+378,"M0_awready", false,-1);
    tracep->declBus(c+1149,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1156,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1153,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1157,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1139,"M0_wvalid", false,-1);
    tracep->declBit(c+379,"M0_wready", false,-1);
    tracep->declBit(c+1139,"M0_wlast", false,-1);
    tracep->declBus(c+658,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+659,"M0_bvalid", false,-1);
    tracep->declBit(c+1152,"M0_bready", false,-1);
    tracep->declBus(c+660,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+349,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+380,"M1_arvalid", false,-1);
    tracep->declBit(c+381,"M1_arready", false,-1);
    tracep->declBus(c+1149,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+382,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+1056,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1124,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+1057,"M1_rvalid", false,-1);
    tracep->declBit(c+383,"M1_rready", false,-1);
    tracep->declBit(c+661,"M1_rlast", false,-1);
    tracep->declBus(c+662,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+349,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+384,"M1_awvalid", false,-1);
    tracep->declBit(c+385,"M1_awready", false,-1);
    tracep->declBus(c+1149,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+386,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+387,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+388,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+389,"M1_wvalid", false,-1);
    tracep->declBit(c+390,"M1_wready", false,-1);
    tracep->declBit(c+389,"M1_wlast", false,-1);
    tracep->declBus(c+663,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+664,"M1_bvalid", false,-1);
    tracep->declBit(c+391,"M1_bready", false,-1);
    tracep->declBus(c+665,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+392,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+393,"S0_arvalid", false,-1);
    tracep->declBit(c+394,"S0_arready", false,-1);
    tracep->declBus(c+1149,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+395,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1058,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1125,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+1059,"S0_rvalid", false,-1);
    tracep->declBit(c+396,"S0_rready", false,-1);
    tracep->declBit(c+666,"S0_rlast", false,-1);
    tracep->declBus(c+667,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+397,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+398,"S0_awvalid", false,-1);
    tracep->declBit(c+399,"S0_awready", false,-1);
    tracep->declBus(c+1149,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+400,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+401,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+402,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+403,"S0_wvalid", false,-1);
    tracep->declBit(c+404,"S0_wready", false,-1);
    tracep->declBit(c+403,"S0_wlast", false,-1);
    tracep->declBus(c+668,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+1060,"S0_bvalid", false,-1);
    tracep->declBit(c+405,"S0_bready", false,-1);
    tracep->declBus(c+669,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1154,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+1138,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+1156,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+519,"read_state", false,-1, 2,0);
    tracep->declBus(c+1064,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+520,"write_state", false,-1, 2,0);
    tracep->declBus(c+1065,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+521,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+522,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+1066,"read_done", false,-1);
    tracep->declBit(c+1067,"write_done", false,-1);
    tracep->declBus(c+1222,"read_choose", false,-1, 2,0);
    tracep->declBus(c+1223,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Clint ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBus(c+406,"araddr", false,-1, 31,0);
    tracep->declBit(c+407,"arvalid", false,-1);
    tracep->declBit(c+408,"arready", false,-1);
    tracep->declBus(c+1149,"arid", false,-1, 3,0);
    tracep->declBus(c+1150,"arlen", false,-1, 7,0);
    tracep->declBus(c+409,"arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"arburst", false,-1, 1,0);
    tracep->declBus(c+410,"rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"rresp", false,-1, 1,0);
    tracep->declBit(c+411,"rvalid", false,-1);
    tracep->declBit(c+412,"rready", false,-1);
    tracep->declBit(c+411,"rlast", false,-1);
    tracep->declBus(c+1149,"rid", false,-1, 3,0);
    tracep->declBus(c+413,"awaddr", false,-1, 31,0);
    tracep->declBit(c+414,"awvalid", false,-1);
    tracep->declBit(c+415,"awready", false,-1);
    tracep->declBus(c+1149,"awid", false,-1, 3,0);
    tracep->declBus(c+1150,"awlen", false,-1, 7,0);
    tracep->declBus(c+416,"awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"awburst", false,-1, 1,0);
    tracep->declBus(c+417,"wdata", false,-1, 31,0);
    tracep->declBus(c+418,"wstrb", false,-1, 3,0);
    tracep->declBit(c+419,"wvalid", false,-1);
    tracep->declBit(c+420,"wready", false,-1);
    tracep->declBit(c+421,"wlast", false,-1);
    tracep->declBus(c+1151,"bresp", false,-1, 1,0);
    tracep->declBit(c+422,"bvalid", false,-1);
    tracep->declBit(c+423,"bready", false,-1);
    tracep->declBus(c+1149,"bid", false,-1, 3,0);
    tracep->declBus(c+1154,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1138,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1156,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1217,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1218,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1219,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1151,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+523,"state", false,-1, 2,0);
    tracep->declBus(c+524,"next_state", false,-1, 2,0);
    tracep->declBus(c+525,"addr", false,-1, 31,0);
    tracep->declBus(c+526,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+527,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+528,"pmem_readed", false,-1);
    tracep->declBit(c+529,"pmem_writed", false,-1);
    tracep->declBus(c+530,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+531,"random_delay", false,-1, 7,0);
    tracep->declBus(c+410,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+411,"rvalid_reg", false,-1);
    tracep->declBit(c+420,"wready_reg", false,-1);
    tracep->declQuad(c+532,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBus(c+530,"in", false,-1, 7,0);
    tracep->declBus(c+531,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+371,"inst", false,-1, 31,0);
    tracep->declBit(c+372,"IFU_valid", false,-1);
    tracep->declBit(c+373,"LSU_valid", false,-1);
    tracep->declBus(c+338,"rd", false,-1, 4,0);
    tracep->declBus(c+336,"rs1", false,-1, 4,0);
    tracep->declBus(c+337,"rs2", false,-1, 4,0);
    tracep->declBus(c+341,"imme", false,-1, 31,0);
    tracep->declBus(c+339,"func3", false,-1, 2,0);
    tracep->declBus(c+340,"func7", false,-1, 6,0);
    tracep->declBus(c+350,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+351,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+352,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+354,"w_mem_en", false,-1);
    tracep->declBus(c+358,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+355,"r_mem_en", false,-1);
    tracep->declBit(c+356,"sign_extension", false,-1);
    tracep->declBus(c+360,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+359,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+363,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+365,"w_csr_en", false,-1);
    tracep->declBus(c+361,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+367,"w_csr_ecall", false,-1);
    tracep->declBus(c+364,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+366,"r_csr_en", false,-1);
    tracep->declBus(c+534,"opcode", false,-1, 6,0);
    tracep->declBus(c+535,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+371,"inst", false,-1, 31,0);
    tracep->declBus(c+535,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+341,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+534,"opcode", false,-1, 6,0);
    tracep->declBus(c+535,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBus(c+392,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+393,"Xbar_arvalid", false,-1);
    tracep->declBit(c+394,"Xbar_arready", false,-1);
    tracep->declBus(c+1149,"Xbar_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"Xbar_arlen", false,-1, 7,0);
    tracep->declBus(c+395,"Xbar_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"Xbar_arburst", false,-1, 1,0);
    tracep->declBus(c+1058,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1125,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+1059,"Xbar_rvalid", false,-1);
    tracep->declBit(c+396,"Xbar_rready", false,-1);
    tracep->declBit(c+666,"Xbar_rlast", false,-1);
    tracep->declBus(c+667,"Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+397,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+398,"Xbar_awvalid", false,-1);
    tracep->declBit(c+399,"Xbar_awready", false,-1);
    tracep->declBus(c+1149,"Xbar_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"Xbar_awlen", false,-1, 7,0);
    tracep->declBus(c+400,"Xbar_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"Xbar_awburst", false,-1, 1,0);
    tracep->declBus(c+401,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+402,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+403,"Xbar_wvalid", false,-1);
    tracep->declBit(c+404,"Xbar_wready", false,-1);
    tracep->declBit(c+403,"Xbar_wlast", false,-1);
    tracep->declBus(c+668,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+1060,"Xbar_bvalid", false,-1);
    tracep->declBit(c+405,"Xbar_bready", false,-1);
    tracep->declBus(c+669,"Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+50,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+49,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+48,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+1149,"Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+619,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1122,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+972,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+52,"Xbar_S0_rready", false,-1);
    tracep->declBit(c+620,"Xbar_S0_rlast", false,-1);
    tracep->declBus(c+973,"Xbar_S0_rid", false,-1, 3,0);
    tracep->declBus(c+40,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+39,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+38,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+1149,"Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+41,"Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBus(c+44,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+45,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+43,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+42,"Xbar_S0_wready", false,-1);
    tracep->declBit(c+46,"Xbar_S0_wlast", false,-1);
    tracep->declBus(c+618,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+970,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+47,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+971,"Xbar_S0_bid", false,-1, 3,0);
    tracep->declBus(c+536,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+537,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+1224,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+1149,"Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+538,"Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1225,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+1226,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+1227,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+539,"Xbar_S1_rready", false,-1);
    tracep->declBit(c+1228,"Xbar_S1_rlast", false,-1);
    tracep->declBus(c+1229,"Xbar_S1_rid", false,-1, 3,0);
    tracep->declBus(c+540,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+541,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+1230,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+1149,"Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+542,"Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBus(c+543,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+544,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+545,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+1231,"Xbar_S1_wready", false,-1);
    tracep->declBit(c+546,"Xbar_S1_wlast", false,-1);
    tracep->declBus(c+1232,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+1233,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+547,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+1234,"Xbar_S1_bid", false,-1, 3,0);
    tracep->declBus(c+406,"Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+407,"Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+408,"Xbar_S2_arready", false,-1);
    tracep->declBus(c+1149,"Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+409,"Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+410,"Xbar_S2_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"Xbar_S2_rresp", false,-1, 1,0);
    tracep->declBit(c+411,"Xbar_S2_rvalid", false,-1);
    tracep->declBit(c+412,"Xbar_S2_rready", false,-1);
    tracep->declBit(c+411,"Xbar_S2_rlast", false,-1);
    tracep->declBus(c+1149,"Xbar_S2_rid", false,-1, 3,0);
    tracep->declBus(c+413,"Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+414,"Xbar_S2_awvalid", false,-1);
    tracep->declBit(c+415,"Xbar_S2_awready", false,-1);
    tracep->declBus(c+1149,"Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+416,"Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBus(c+417,"Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+418,"Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+419,"Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+420,"Xbar_S2_wready", false,-1);
    tracep->declBit(c+421,"Xbar_S2_wlast", false,-1);
    tracep->declBus(c+1151,"Xbar_S2_bresp", false,-1, 1,0);
    tracep->declBit(c+422,"Xbar_S2_bvalid", false,-1);
    tracep->declBit(c+423,"Xbar_S2_bready", false,-1);
    tracep->declBus(c+1149,"Xbar_S2_bid", false,-1, 3,0);
    tracep->declBus(c+1154,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+1138,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+1156,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+1217,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBus(c+548,"r_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+670,"r_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+549,"w_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+671,"w_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+1058,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1125,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+1059,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+399,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+404,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+668,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+1060,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+394,"reg_Xbar_arready", false,-1);
    tracep->declBit(c+666,"reg_Xbar_rlast", false,-1);
    tracep->declBus(c+667,"reg_Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+669,"reg_Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+50,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+49,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+52,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+40,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+39,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBus(c+44,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+45,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+43,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+47,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+1149,"reg_Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"reg_Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+51,"reg_Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"reg_Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1149,"reg_Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"reg_Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+41,"reg_Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"reg_Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBit(c+46,"reg_Xbar_S0_wlast", false,-1);
    tracep->declBus(c+536,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+537,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+539,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+540,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+541,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+543,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+544,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+545,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+547,"reg_Xbar_S1_bready", false,-1);
    tracep->declBus(c+1149,"reg_Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"reg_Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+538,"reg_Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"reg_Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1149,"reg_Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"reg_Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+542,"reg_Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"reg_Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBit(c+546,"reg_Xbar_S1_wlast", false,-1);
    tracep->declBus(c+406,"reg_Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+407,"reg_Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+412,"reg_Xbar_S2_rready", false,-1);
    tracep->declBus(c+413,"reg_Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+414,"reg_Xbar_S2_awvalid", false,-1);
    tracep->declBus(c+417,"reg_Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+418,"reg_Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+419,"reg_Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+423,"reg_Xbar_S2_bready", false,-1);
    tracep->declBus(c+1149,"reg_Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1150,"reg_Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+409,"reg_Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"reg_Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+1149,"reg_Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1150,"reg_Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+416,"reg_Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1151,"reg_Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBit(c+421,"reg_Xbar_S2_wlast", false,-1);
    tracep->declBit(c+672,"read_S0_done", false,-1);
    tracep->declBit(c+673,"write_S0_done", false,-1);
    tracep->declBit(c+550,"read_S1_done", false,-1);
    tracep->declBit(c+551,"write_S1_done", false,-1);
    tracep->declBit(c+552,"read_S2_done", false,-1);
    tracep->declBit(c+553,"write_S2_done", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"io_d", false,-1);
    tracep->declBit(c+554,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"io_d", false,-1);
    tracep->declBit(c+554,"io_q", false,-1);
    tracep->declBit(c+554,"sync_0", false,-1);
    tracep->declBit(c+555,"sync_1", false,-1);
    tracep->declBit(c+556,"sync_2", false,-1);
    tracep->declBit(c+557,"sync_3", false,-1);
    tracep->declBit(c+558,"sync_4", false,-1);
    tracep->declBit(c+559,"sync_5", false,-1);
    tracep->declBit(c+560,"sync_6", false,-1);
    tracep->declBit(c+561,"sync_7", false,-1);
    tracep->declBit(c+562,"sync_8", false,-1);
    tracep->declBit(c+563,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+614,"auto_in_psel", false,-1);
    tracep->declBit(c+615,"auto_in_penable", false,-1);
    tracep->declBit(c+12,"auto_in_pwrite", false,-1);
    tracep->declBus(c+925,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1138,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"auto_in_pready", false,-1);
    tracep->declBit(c+1147,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1148,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1094,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1095,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1096,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1097,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1098,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1099,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1100,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1101,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1102,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1103,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBus(c+941,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+614,"in_psel", false,-1);
    tracep->declBit(c+615,"in_penable", false,-1);
    tracep->declBus(c+1138,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+12,"in_pwrite", false,-1);
    tracep->declBus(c+922,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1146,"in_pready", false,-1);
    tracep->declBus(c+1148,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1147,"in_pslverr", false,-1);
    tracep->declBus(c+1094,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1095,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1096,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1097,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1098,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1099,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1100,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1101,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1102,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1103,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+612,"auto_in_psel", false,-1);
    tracep->declBit(c+613,"auto_in_penable", false,-1);
    tracep->declBit(c+12,"auto_in_pwrite", false,-1);
    tracep->declBus(c+925,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1138,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1143,"auto_in_pready", false,-1);
    tracep->declBit(c+1144,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1145,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1104,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1105,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBus(c+941,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+612,"in_psel", false,-1);
    tracep->declBit(c+613,"in_penable", false,-1);
    tracep->declBus(c+1138,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+12,"in_pwrite", false,-1);
    tracep->declBus(c+922,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1143,"in_pready", false,-1);
    tracep->declBus(c+1145,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1144,"in_pslverr", false,-1);
    tracep->declBit(c+1104,"ps2_clk", false,-1);
    tracep->declBit(c+1105,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+133,"auto_in_awvalid", false,-1);
    tracep->declBit(c+134,"auto_in_wvalid", false,-1);
    tracep->declBit(c+135,"auto_in_arready", false,-1);
    tracep->declBit(c+136,"auto_in_arvalid", false,-1);
    tracep->declBus(c+26,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+137,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+623,"auto_in_rready", false,-1);
    tracep->declBit(c+138,"auto_in_rvalid", false,-1);
    tracep->declBus(c+139,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+140,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+138,"state", false,-1);
    tracep->declBus(c+140,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+139,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+564,"raddr", false,-1, 31,0);
    tracep->declBit(c+565,"ren", false,-1);
    tracep->declBus(c+566,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+926,"auto_in_psel", false,-1);
    tracep->declBit(c+616,"auto_in_penable", false,-1);
    tracep->declBit(c+12,"auto_in_pwrite", false,-1);
    tracep->declBus(c+921,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1138,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1118,"auto_in_pready", false,-1);
    tracep->declBit(c+1139,"auto_in_pslverr", false,-1);
    tracep->declBus(c+14,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1115,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1116,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+963,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBus(c+921,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+926,"in_psel", false,-1);
    tracep->declBit(c+616,"in_penable", false,-1);
    tracep->declBus(c+1138,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+12,"in_pwrite", false,-1);
    tracep->declBus(c+922,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1118,"in_pready", false,-1);
    tracep->declBus(c+14,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1139,"in_pslverr", false,-1);
    tracep->declBit(c+1115,"qspi_sck", false,-1);
    tracep->declBit(c+1116,"qspi_ce_n", false,-1);
    tracep->declBus(c+963,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+963,"din", false,-1, 3,0);
    tracep->declBus(c+1068,"dout", false,-1, 3,0);
    tracep->declBus(c+1069,"douten", false,-1, 3,0);
    tracep->declBit(c+1126,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1092,"clk_i", false,-1);
    tracep->declBit(c+1093,"rst_i", false,-1);
    tracep->declBus(c+921,"adr_i", false,-1, 31,0);
    tracep->declBus(c+922,"dat_i", false,-1, 31,0);
    tracep->declBus(c+14,"dat_o", false,-1, 31,0);
    tracep->declBus(c+13,"sel_i", false,-1, 3,0);
    tracep->declBit(c+926,"cyc_i", false,-1);
    tracep->declBit(c+926,"stb_i", false,-1);
    tracep->declBit(c+1126,"ack_o", false,-1);
    tracep->declBit(c+12,"we_i", false,-1);
    tracep->declBit(c+1115,"sck", false,-1);
    tracep->declBit(c+1116,"ce_n", false,-1);
    tracep->declBus(c+963,"din", false,-1, 3,0);
    tracep->declBus(c+1068,"dout", false,-1, 3,0);
    tracep->declBus(c+1069,"douten", false,-1, 3,0);
    tracep->declBus(c+1235,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1236,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+688,"mr_sck", false,-1);
    tracep->declBit(c+689,"mr_ce_n", false,-1);
    tracep->declBus(c+963,"mr_din", false,-1, 3,0);
    tracep->declBus(c+690,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+691,"mr_doe", false,-1);
    tracep->declBit(c+692,"mw_sck", false,-1);
    tracep->declBit(c+693,"mw_ce_n", false,-1);
    tracep->declBus(c+963,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1070,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+694,"mw_doe", false,-1);
    tracep->declBit(c+1071,"mr_rd", false,-1);
    tracep->declBit(c+695,"mr_done", false,-1);
    tracep->declBit(c+1072,"mw_wr", false,-1);
    tracep->declBit(c+918,"mw_done", false,-1);
    tracep->declBit(c+926,"wb_valid", false,-1);
    tracep->declBit(c+942,"wb_we", false,-1);
    tracep->declBit(c+943,"wb_re", false,-1);
    tracep->declBit(c+696,"state", false,-1);
    tracep->declBit(c+1073,"nstate", false,-1);
    tracep->declBus(c+567,"size", false,-1, 2,0);
    tracep->declBus(c+944,"byte0", false,-1, 7,0);
    tracep->declBus(c+945,"byte1", false,-1, 7,0);
    tracep->declBus(c+946,"byte2", false,-1, 7,0);
    tracep->declBus(c+947,"byte3", false,-1, 7,0);
    tracep->declBus(c+948,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1127,"rst_n", false,-1);
    tracep->declBus(c+949,"addr", false,-1, 23,0);
    tracep->declBit(c+1071,"rd", false,-1);
    tracep->declBus(c+1218,"size", false,-1, 2,0);
    tracep->declBit(c+695,"done", false,-1);
    tracep->declBus(c+14,"line", false,-1, 31,0);
    tracep->declBit(c+688,"sck", false,-1);
    tracep->declBit(c+689,"ce_n", false,-1);
    tracep->declBus(c+963,"din", false,-1, 3,0);
    tracep->declBus(c+690,"dout", false,-1, 3,0);
    tracep->declBit(c+691,"douten", false,-1);
    tracep->declBus(c+1235,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1236,"READ", false,-1, 0,0);
    tracep->declBus(c+1237,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+697,"state", false,-1);
    tracep->declBit(c+1074,"nstate", false,-1);
    tracep->declBus(c+698,"counter", false,-1, 7,0);
    tracep->declBus(c+699,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+568+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1238,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+700,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1127,"rst_n", false,-1);
    tracep->declBus(c+950,"addr", false,-1, 23,0);
    tracep->declBus(c+948,"line", false,-1, 31,0);
    tracep->declBus(c+567,"size", false,-1, 2,0);
    tracep->declBit(c+1072,"wr", false,-1);
    tracep->declBit(c+918,"done", false,-1);
    tracep->declBit(c+692,"sck", false,-1);
    tracep->declBit(c+693,"ce_n", false,-1);
    tracep->declBus(c+963,"din", false,-1, 3,0);
    tracep->declBus(c+1070,"dout", false,-1, 3,0);
    tracep->declBit(c+694,"douten", false,-1);
    tracep->declBus(c+1235,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1236,"WRITE", false,-1, 0,0);
    tracep->declBus(c+572,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+701,"state", false,-1);
    tracep->declBit(c+1075,"nstate", false,-1);
    tracep->declBus(c+702,"counter", false,-1, 7,0);
    tracep->declBus(c+703,"saddr", false,-1, 23,0);
    tracep->declBus(c+1239,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+608,"auto_in_psel", false,-1);
    tracep->declBit(c+609,"auto_in_penable", false,-1);
    tracep->declBit(c+12,"auto_in_pwrite", false,-1);
    tracep->declBus(c+921,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1138,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+686,"auto_in_pready", false,-1);
    tracep->declBit(c+1139,"auto_in_pslverr", false,-1);
    tracep->declBus(c+687,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1117,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+677,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+678,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+679,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+680,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+681,"sdram_bundle_we", false,-1);
    tracep->declBus(c+682,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+683,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+684,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+685,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBus(c+921,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+608,"in_psel", false,-1);
    tracep->declBit(c+609,"in_penable", false,-1);
    tracep->declBus(c+1138,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+12,"in_pwrite", false,-1);
    tracep->declBus(c+922,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+686,"in_pready", false,-1);
    tracep->declBus(c+687,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1139,"in_pslverr", false,-1);
    tracep->declBit(c+1117,"sdram_clk", false,-1);
    tracep->declBit(c+677,"sdram_cke", false,-1);
    tracep->declBit(c+678,"sdram_cs", false,-1);
    tracep->declBit(c+679,"sdram_ras", false,-1);
    tracep->declBit(c+680,"sdram_cas", false,-1);
    tracep->declBit(c+681,"sdram_we", false,-1);
    tracep->declBus(c+682,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+683,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+684,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+685,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+704,"sdram_dout_en", false,-1);
    tracep->declBus(c+705,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+573,"state", false,-1, 1,0);
    tracep->declBit(c+706,"req_accept", false,-1);
    tracep->declBit(c+951,"is_read", false,-1);
    tracep->declBit(c+952,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1092,"clk_i", false,-1);
    tracep->declBit(c+1093,"rst_i", false,-1);
    tracep->declBus(c+953,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+951,"inport_rd_i", false,-1);
    tracep->declBus(c+1150,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+921,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+922,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+685,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+706,"inport_accept_o", false,-1);
    tracep->declBit(c+686,"inport_ack_o", false,-1);
    tracep->declBit(c+1139,"inport_error_o", false,-1);
    tracep->declBus(c+687,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1117,"sdram_clk_o", false,-1);
    tracep->declBit(c+677,"sdram_cke_o", false,-1);
    tracep->declBit(c+678,"sdram_cs_o", false,-1);
    tracep->declBit(c+679,"sdram_ras_o", false,-1);
    tracep->declBit(c+680,"sdram_cas_o", false,-1);
    tracep->declBit(c+681,"sdram_we_o", false,-1);
    tracep->declBus(c+684,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+682,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+683,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+705,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+704,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1240,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1241,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1242,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1243,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1243,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1243,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1244,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1245,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1246,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1247,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1248,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1244,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1249,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1250,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1251,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1252,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1253,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1254,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1255,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1149,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1256,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1244,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1149,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1255,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1254,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1250,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1252,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1251,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1253,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1249,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1257,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1258,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1259,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1259,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1260,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1259,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1243,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1243,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1261,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+921,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+953,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+951,"ram_rd_w", false,-1);
    tracep->declBit(c+706,"ram_accept_w", false,-1);
    tracep->declBus(c+922,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+687,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+686,"ram_ack_w", false,-1);
    tracep->declBit(c+954,"ram_req_w", false,-1);
    tracep->declBus(c+707,"command_q", false,-1, 3,0);
    tracep->declBus(c+682,"addr_q", false,-1, 12,0);
    tracep->declBus(c+705,"data_q", false,-1, 15,0);
    tracep->declBit(c+708,"data_rd_en_q", false,-1);
    tracep->declBus(c+684,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+677,"cke_q", false,-1);
    tracep->declBus(c+683,"bank_q", false,-1, 1,0);
    tracep->declBus(c+709,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+710,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+685,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+711,"refresh_q", false,-1);
    tracep->declBus(c+712,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+713+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+717,"state_q", false,-1, 3,0);
    tracep->declBus(c+1076,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1077,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+718,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+719,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+955,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+956,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+957,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1244,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+720,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1078,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1262,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+721,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+722,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+723,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+724,"idx", false,-1, 31,0);
    tracep->declBus(c+725,"rd_q", false,-1, 3,0);
    tracep->declBit(c+686,"ack_q", false,-1);
    tracep->declArray(c+726,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+930,"auto_in_psel", false,-1);
    tracep->declBit(c+931,"auto_in_penable", false,-1);
    tracep->declBit(c+12,"auto_in_pwrite", false,-1);
    tracep->declBus(c+924,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1138,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1120,"auto_in_pready", false,-1);
    tracep->declBit(c+1139,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1121,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+674,"spi_bundle_sck", false,-1);
    tracep->declBus(c+675,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+676,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1114,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1263,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1264,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1265,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBus(c+958,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+930,"in_psel", false,-1);
    tracep->declBit(c+931,"in_penable", false,-1);
    tracep->declBus(c+1138,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+12,"in_pwrite", false,-1);
    tracep->declBus(c+922,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1120,"in_pready", false,-1);
    tracep->declBus(c+1121,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1139,"in_pslverr", false,-1);
    tracep->declBit(c+674,"spi_sck", false,-1);
    tracep->declBus(c+675,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+676,"spi_mosi", false,-1);
    tracep->declBit(c+1114,"spi_miso", false,-1);
    tracep->declBit(c+729,"spi_irq_out", false,-1);
    tracep->declBus(c+1149,"ysyx_24120011_SPITOPAPB_IDLE", false,-1, 3,0);
    tracep->declBus(c+1255,"ysyx_24120011_SPITOPAPB_SPI", false,-1, 3,0);
    tracep->declBus(c+1254,"ysyx_24120011_SPITOPAPB_FLASH_DIV", false,-1, 3,0);
    tracep->declBus(c+1250,"ysyx_24120011_SPITOPAPB_FLASH_TXREG0", false,-1, 3,0);
    tracep->declBus(c+1252,"ysyx_24120011_SPITOPAPB_FLASH_TXREG1", false,-1, 3,0);
    tracep->declBus(c+1251,"ysyx_24120011_SPITOPAPB_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1253,"ysyx_24120011_SPITOPAPB_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1249,"ysyx_24120011_SPITOPAPB_FLASH_WAIT", false,-1, 3,0);
    tracep->declBus(c+1257,"ysyx_24120011_SPITOPAPB_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1257,"ysyx_24120011_SPITOPAPB_FLASH_RECV", false,-1, 3,0);
    tracep->declBus(c+574,"spi_top_apb_state", false,-1, 3,0);
    tracep->declBus(c+1079,"spi_top_apb_nextstate", false,-1, 3,0);
    tracep->declBus(c+1080,"reg_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1081,"reg_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+959,"reg_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+919,"reg_in_pwrite", false,-1);
    tracep->declBit(c+1082,"reg_in_psel", false,-1);
    tracep->declBit(c+1083,"reg_in_penable", false,-1);
    tracep->declBus(c+730,"reg_in_prdata", false,-1, 31,0);
    tracep->declBit(c+731,"reg_in_pready", false,-1);
    tracep->declBit(c+1139,"reg_in_pslverr", false,-1);
    tracep->declBit(c+729,"reg_spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1266,"Tp", false,-1, 31,0);
    tracep->declBit(c+1092,"wb_clk_i", false,-1);
    tracep->declBit(c+1093,"wb_rst_i", false,-1);
    tracep->declBus(c+1084,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1081,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+730,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+959,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+919,"wb_we_i", false,-1);
    tracep->declBit(c+1082,"wb_stb_i", false,-1);
    tracep->declBit(c+1083,"wb_cyc_i", false,-1);
    tracep->declBit(c+731,"wb_ack_o", false,-1);
    tracep->declBit(c+1139,"wb_err_o", false,-1);
    tracep->declBit(c+729,"wb_int_o", false,-1);
    tracep->declBus(c+675,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+674,"sclk_pad_o", false,-1);
    tracep->declBit(c+676,"mosi_pad_o", false,-1);
    tracep->declBit(c+1114,"miso_pad_i", false,-1);
    tracep->declBus(c+732,"divider", false,-1, 15,0);
    tracep->declBus(c+733,"ctrl", false,-1, 13,0);
    tracep->declBus(c+734,"ss", false,-1, 7,0);
    tracep->declBus(c+1085,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+735,"rx", false,-1, 127,0);
    tracep->declBit(c+739,"rx_negedge", false,-1);
    tracep->declBit(c+740,"tx_negedge", false,-1);
    tracep->declBus(c+741,"char_len", false,-1, 6,0);
    tracep->declBit(c+742,"go", false,-1);
    tracep->declBit(c+743,"lsb", false,-1);
    tracep->declBit(c+744,"ie", false,-1);
    tracep->declBit(c+745,"ass", false,-1);
    tracep->declBit(c+1086,"spi_divider_sel", false,-1);
    tracep->declBit(c+1087,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1088,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1089,"spi_ss_sel", false,-1);
    tracep->declBit(c+746,"tip", false,-1);
    tracep->declBit(c+747,"pos_edge", false,-1);
    tracep->declBit(c+748,"neg_edge", false,-1);
    tracep->declBit(c+749,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1266,"Tp", false,-1, 31,0);
    tracep->declBit(c+1092,"clk_in", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBit(c+746,"enable", false,-1);
    tracep->declBit(c+742,"go", false,-1);
    tracep->declBit(c+749,"last_clk", false,-1);
    tracep->declBus(c+732,"divider", false,-1, 15,0);
    tracep->declBit(c+674,"clk_out", false,-1);
    tracep->declBit(c+747,"pos_edge", false,-1);
    tracep->declBit(c+748,"neg_edge", false,-1);
    tracep->declBus(c+750,"cnt", false,-1, 15,0);
    tracep->declBit(c+751,"cnt_zero", false,-1);
    tracep->declBit(c+752,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1266,"Tp", false,-1, 31,0);
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"rst", false,-1);
    tracep->declBus(c+1090,"latch", false,-1, 3,0);
    tracep->declBus(c+959,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+741,"len", false,-1, 6,0);
    tracep->declBit(c+743,"lsb", false,-1);
    tracep->declBit(c+742,"go", false,-1);
    tracep->declBit(c+747,"pos_edge", false,-1);
    tracep->declBit(c+748,"neg_edge", false,-1);
    tracep->declBit(c+739,"rx_negedge", false,-1);
    tracep->declBit(c+740,"tx_negedge", false,-1);
    tracep->declBit(c+746,"tip", false,-1);
    tracep->declBit(c+749,"last", false,-1);
    tracep->declBus(c+1081,"p_in", false,-1, 31,0);
    tracep->declArray(c+735,"p_out", false,-1, 127,0);
    tracep->declBit(c+674,"s_clk", false,-1);
    tracep->declBit(c+1114,"s_in", false,-1);
    tracep->declBit(c+676,"s_out", false,-1);
    tracep->declBus(c+753,"cnt", false,-1, 7,0);
    tracep->declArray(c+735,"data", false,-1, 127,0);
    tracep->declBus(c+754,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+755,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+756,"rx_clk", false,-1);
    tracep->declBit(c+757,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+927,"auto_in_psel", false,-1);
    tracep->declBit(c+928,"auto_in_penable", false,-1);
    tracep->declBit(c+12,"auto_in_pwrite", false,-1);
    tracep->declBus(c+925,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1138,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+929,"auto_in_pready", false,-1);
    tracep->declBit(c+1139,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1119,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1112,"uart_rx", false,-1);
    tracep->declBit(c+1113,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+927,"in_psel", false,-1);
    tracep->declBit(c+928,"in_penable", false,-1);
    tracep->declBus(c+1138,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+929,"in_pready", false,-1);
    tracep->declBit(c+1139,"in_pslverr", false,-1);
    tracep->declBus(c+941,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+12,"in_pwrite", false,-1);
    tracep->declBus(c+1119,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+922,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1112,"uart_rx", false,-1);
    tracep->declBit(c+1113,"uart_tx", false,-1);
    tracep->declBit(c+758,"rtsn", false,-1);
    tracep->declBit(c+1139,"ctsn", false,-1);
    tracep->declBit(c+759,"dtr_pad_o", false,-1);
    tracep->declBit(c+1139,"dsr_pad_i", false,-1);
    tracep->declBit(c+1139,"ri_pad_i", false,-1);
    tracep->declBit(c+1139,"dcd_pad_i", false,-1);
    tracep->declBit(c+760,"interrupt", false,-1);
    tracep->declBit(c+1128,"reg_we", false,-1);
    tracep->declBit(c+1129,"reg_re", false,-1);
    tracep->declBus(c+960,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+961,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+575,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1091,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+761,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"wb_rst_i", false,-1);
    tracep->declBus(c+960,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+962,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1091,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1128,"wb_we_i", false,-1);
    tracep->declBit(c+1129,"wb_re_i", false,-1);
    tracep->declBit(c+1113,"stx_pad_o", false,-1);
    tracep->declBit(c+1112,"srx_pad_i", false,-1);
    tracep->declBus(c+1257,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+761,"rts_pad_o", false,-1);
    tracep->declBit(c+759,"dtr_pad_o", false,-1);
    tracep->declBit(c+760,"int_o", false,-1);
    tracep->declBit(c+762,"enable", false,-1);
    tracep->declBit(c+763,"srx_pad", false,-1);
    tracep->declBus(c+764,"ier", false,-1, 3,0);
    tracep->declBus(c+765,"iir", false,-1, 3,0);
    tracep->declBus(c+766,"fcr", false,-1, 1,0);
    tracep->declBus(c+767,"mcr", false,-1, 4,0);
    tracep->declBus(c+768,"lcr", false,-1, 7,0);
    tracep->declBus(c+769,"msr", false,-1, 7,0);
    tracep->declBus(c+770,"dl", false,-1, 15,0);
    tracep->declBus(c+771,"scratch", false,-1, 7,0);
    tracep->declBit(c+772,"start_dlc", false,-1);
    tracep->declBit(c+773,"lsr_mask_d", false,-1);
    tracep->declBit(c+774,"msi_reset", false,-1);
    tracep->declBus(c+775,"dlc", false,-1, 15,0);
    tracep->declBus(c+776,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+777,"rx_reset", false,-1);
    tracep->declBit(c+778,"tx_reset", false,-1);
    tracep->declBit(c+779,"dlab", false,-1);
    tracep->declBit(c+1152,"cts_pad_i", false,-1);
    tracep->declBit(c+1139,"dsr_pad_i", false,-1);
    tracep->declBit(c+1139,"ri_pad_i", false,-1);
    tracep->declBit(c+1139,"dcd_pad_i", false,-1);
    tracep->declBit(c+780,"loopback", false,-1);
    tracep->declBit(c+1139,"cts", false,-1);
    tracep->declBit(c+1152,"dsr", false,-1);
    tracep->declBit(c+1152,"ri", false,-1);
    tracep->declBit(c+1152,"dcd", false,-1);
    tracep->declBit(c+781,"cts_c", false,-1);
    tracep->declBit(c+782,"dsr_c", false,-1);
    tracep->declBit(c+783,"ri_c", false,-1);
    tracep->declBit(c+784,"dcd_c", false,-1);
    tracep->declBus(c+785,"lsr", false,-1, 7,0);
    tracep->declBit(c+786,"lsr0", false,-1);
    tracep->declBit(c+787,"lsr1", false,-1);
    tracep->declBit(c+788,"lsr2", false,-1);
    tracep->declBit(c+789,"lsr3", false,-1);
    tracep->declBit(c+790,"lsr4", false,-1);
    tracep->declBit(c+791,"lsr5", false,-1);
    tracep->declBit(c+792,"lsr6", false,-1);
    tracep->declBit(c+793,"lsr7", false,-1);
    tracep->declBit(c+794,"lsr0r", false,-1);
    tracep->declBit(c+795,"lsr1r", false,-1);
    tracep->declBit(c+796,"lsr2r", false,-1);
    tracep->declBit(c+797,"lsr3r", false,-1);
    tracep->declBit(c+798,"lsr4r", false,-1);
    tracep->declBit(c+799,"lsr5r", false,-1);
    tracep->declBit(c+800,"lsr6r", false,-1);
    tracep->declBit(c+801,"lsr7r", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+802,"rls_int", false,-1);
    tracep->declBit(c+803,"rda_int", false,-1);
    tracep->declBit(c+804,"ti_int", false,-1);
    tracep->declBit(c+805,"thre_int", false,-1);
    tracep->declBit(c+806,"ms_int", false,-1);
    tracep->declBit(c+807,"tf_push", false,-1);
    tracep->declBit(c+808,"rf_pop", false,-1);
    tracep->declBus(c+1130,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+809,"rf_error_bit", false,-1);
    tracep->declBit(c+787,"rf_overrun", false,-1);
    tracep->declBit(c+810,"rf_push_pulse", false,-1);
    tracep->declBus(c+811,"rf_count", false,-1, 4,0);
    tracep->declBus(c+812,"tf_count", false,-1, 4,0);
    tracep->declBus(c+813,"tstate", false,-1, 2,0);
    tracep->declBus(c+814,"rstate", false,-1, 3,0);
    tracep->declBus(c+815,"counter_t", false,-1, 9,0);
    tracep->declBit(c+816,"thre_set_en", false,-1);
    tracep->declBus(c+817,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+818,"block_value", false,-1, 7,0);
    tracep->declBit(c+819,"serial_out", false,-1);
    tracep->declBit(c+820,"serial_in", false,-1);
    tracep->declBit(c+2,"lsr_mask_condition", false,-1);
    tracep->declBit(c+3,"iir_read", false,-1);
    tracep->declBit(c+4,"msr_read", false,-1);
    tracep->declBit(c+5,"fifo_read", false,-1);
    tracep->declBit(c+6,"fifo_write", false,-1);
    tracep->declBus(c+821,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+822,"lsr0_d", false,-1);
    tracep->declBit(c+823,"lsr1_d", false,-1);
    tracep->declBit(c+824,"lsr2_d", false,-1);
    tracep->declBit(c+825,"lsr3_d", false,-1);
    tracep->declBit(c+826,"lsr4_d", false,-1);
    tracep->declBit(c+827,"lsr5_d", false,-1);
    tracep->declBit(c+828,"lsr6_d", false,-1);
    tracep->declBit(c+829,"lsr7_d", false,-1);
    tracep->declBit(c+830,"rls_int_d", false,-1);
    tracep->declBit(c+831,"thre_int_d", false,-1);
    tracep->declBit(c+832,"ms_int_d", false,-1);
    tracep->declBit(c+833,"ti_int_d", false,-1);
    tracep->declBit(c+834,"rda_int_d", false,-1);
    tracep->declBit(c+835,"rls_int_rise", false,-1);
    tracep->declBit(c+836,"thre_int_rise", false,-1);
    tracep->declBit(c+837,"ms_int_rise", false,-1);
    tracep->declBit(c+838,"ti_int_rise", false,-1);
    tracep->declBit(c+839,"rda_int_rise", false,-1);
    tracep->declBit(c+840,"rls_int_pnd", false,-1);
    tracep->declBit(c+841,"rda_int_pnd", false,-1);
    tracep->declBit(c+842,"thre_int_pnd", false,-1);
    tracep->declBit(c+843,"ms_int_pnd", false,-1);
    tracep->declBit(c+844,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1266,"Tp", false,-1, 31,0);
    tracep->declBus(c+1266,"width", false,-1, 31,0);
    tracep->declBus(c+1236,"init_value", false,-1, 0,0);
    tracep->declBit(c+1093,"rst_i", false,-1);
    tracep->declBit(c+1092,"clk_i", false,-1);
    tracep->declBit(c+1139,"stage1_rst_i", false,-1);
    tracep->declBit(c+1152,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1112,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+763,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+845,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"wb_rst_i", false,-1);
    tracep->declBus(c+768,"lcr", false,-1, 7,0);
    tracep->declBit(c+808,"rf_pop", false,-1);
    tracep->declBit(c+820,"srx_pad_i", false,-1);
    tracep->declBit(c+762,"enable", false,-1);
    tracep->declBit(c+777,"rx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBus(c+815,"counter_t", false,-1, 9,0);
    tracep->declBus(c+811,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1130,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+787,"rf_overrun", false,-1);
    tracep->declBit(c+809,"rf_error_bit", false,-1);
    tracep->declBus(c+814,"rstate", false,-1, 3,0);
    tracep->declBit(c+810,"rf_push_pulse", false,-1);
    tracep->declBus(c+846,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+847,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+848,"rshift", false,-1, 7,0);
    tracep->declBit(c+849,"rparity", false,-1);
    tracep->declBit(c+850,"rparity_error", false,-1);
    tracep->declBit(c+851,"rframing_error", false,-1);
    tracep->declBit(c+852,"rbit_in", false,-1);
    tracep->declBit(c+853,"rparity_xor", false,-1);
    tracep->declBus(c+854,"counter_b", false,-1, 7,0);
    tracep->declBit(c+855,"rf_push_q", false,-1);
    tracep->declBus(c+856,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+857,"rf_push", false,-1);
    tracep->declBit(c+858,"break_error", false,-1);
    tracep->declBit(c+859,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+860,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+861,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+862,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1149,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1255,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1254,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1250,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1252,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1251,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1253,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1249,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1257,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1258,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1267,"sr_push", false,-1, 3,0);
    tracep->declBus(c+863,"toc_value", false,-1, 9,0);
    tracep->declBus(c+864,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1268,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1260,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1244,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1269,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"wb_rst_i", false,-1);
    tracep->declBit(c+810,"push", false,-1);
    tracep->declBit(c+808,"pop", false,-1);
    tracep->declBus(c+856,"data_in", false,-1, 10,0);
    tracep->declBit(c+777,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+1130,"data_out", false,-1, 10,0);
    tracep->declBit(c+787,"overrun", false,-1);
    tracep->declBus(c+811,"count", false,-1, 4,0);
    tracep->declBit(c+809,"error_bit", false,-1);
    tracep->declBus(c+1131,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+865+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+881,"top", false,-1, 3,0);
    tracep->declBus(c+882,"bottom", false,-1, 3,0);
    tracep->declBus(c+883,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+884,"word0", false,-1, 2,0);
    tracep->declBus(c+885,"word1", false,-1, 2,0);
    tracep->declBus(c+886,"word2", false,-1, 2,0);
    tracep->declBus(c+887,"word3", false,-1, 2,0);
    tracep->declBus(c+888,"word4", false,-1, 2,0);
    tracep->declBus(c+889,"word5", false,-1, 2,0);
    tracep->declBus(c+890,"word6", false,-1, 2,0);
    tracep->declBus(c+891,"word7", false,-1, 2,0);
    tracep->declBus(c+892,"word8", false,-1, 2,0);
    tracep->declBus(c+893,"word9", false,-1, 2,0);
    tracep->declBus(c+894,"word10", false,-1, 2,0);
    tracep->declBus(c+895,"word11", false,-1, 2,0);
    tracep->declBus(c+896,"word12", false,-1, 2,0);
    tracep->declBus(c+897,"word13", false,-1, 2,0);
    tracep->declBus(c+898,"word14", false,-1, 2,0);
    tracep->declBus(c+899,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1244,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1265,"data_width", false,-1, 31,0);
    tracep->declBus(c+1260,"depth", false,-1, 31,0);
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+810,"we", false,-1);
    tracep->declBus(c+881,"a", false,-1, 3,0);
    tracep->declBus(c+882,"dpra", false,-1, 3,0);
    tracep->declBus(c+900,"di", false,-1, 7,0);
    tracep->declBus(c+1131,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+576+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"wb_rst_i", false,-1);
    tracep->declBus(c+768,"lcr", false,-1, 7,0);
    tracep->declBit(c+807,"tf_push", false,-1);
    tracep->declBus(c+962,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+762,"enable", false,-1);
    tracep->declBit(c+778,"tx_reset", false,-1);
    tracep->declBit(c+1,"lsr_mask", false,-1);
    tracep->declBit(c+819,"stx_pad_o", false,-1);
    tracep->declBus(c+813,"tstate", false,-1, 2,0);
    tracep->declBus(c+812,"tf_count", false,-1, 4,0);
    tracep->declBus(c+901,"counter", false,-1, 4,0);
    tracep->declBus(c+902,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+903,"shift_out", false,-1, 6,0);
    tracep->declBit(c+904,"stx_o_tmp", false,-1);
    tracep->declBit(c+905,"parity_xor", false,-1);
    tracep->declBit(c+906,"tf_pop", false,-1);
    tracep->declBit(c+907,"bit_out", false,-1);
    tracep->declBus(c+962,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+920,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+908,"tf_overrun", false,-1);
    tracep->declBus(c+1154,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1138,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1156,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1217,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1218,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1219,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1265,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1260,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1244,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1269,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+1093,"wb_rst_i", false,-1);
    tracep->declBit(c+807,"push", false,-1);
    tracep->declBit(c+906,"pop", false,-1);
    tracep->declBus(c+962,"data_in", false,-1, 7,0);
    tracep->declBit(c+778,"fifo_reset", false,-1);
    tracep->declBit(c+1,"reset_status", false,-1);
    tracep->declBus(c+920,"data_out", false,-1, 7,0);
    tracep->declBit(c+908,"overrun", false,-1);
    tracep->declBus(c+812,"count", false,-1, 4,0);
    tracep->declBus(c+909,"top", false,-1, 3,0);
    tracep->declBus(c+910,"bottom", false,-1, 3,0);
    tracep->declBus(c+911,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1244,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1265,"data_width", false,-1, 31,0);
    tracep->declBus(c+1260,"depth", false,-1, 31,0);
    tracep->declBit(c+1092,"clk", false,-1);
    tracep->declBit(c+807,"we", false,-1);
    tracep->declBus(c+909,"a", false,-1, 3,0);
    tracep->declBus(c+910,"dpra", false,-1, 3,0);
    tracep->declBus(c+962,"di", false,-1, 7,0);
    tracep->declBus(c+920,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+592+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBit(c+610,"auto_in_psel", false,-1);
    tracep->declBit(c+611,"auto_in_penable", false,-1);
    tracep->declBit(c+12,"auto_in_pwrite", false,-1);
    tracep->declBus(c+924,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1138,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+922,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1140,"auto_in_pready", false,-1);
    tracep->declBit(c+1141,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1142,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1106,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1107,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1108,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1109,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1110,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1111,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1092,"clock", false,-1);
    tracep->declBit(c+1093,"reset", false,-1);
    tracep->declBus(c+958,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+610,"in_psel", false,-1);
    tracep->declBit(c+611,"in_penable", false,-1);
    tracep->declBus(c+1138,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+12,"in_pwrite", false,-1);
    tracep->declBus(c+922,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+13,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1140,"in_pready", false,-1);
    tracep->declBus(c+1142,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1141,"in_pslverr", false,-1);
    tracep->declBus(c+1106,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1107,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1108,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1109,"vga_hsync", false,-1);
    tracep->declBit(c+1110,"vga_vsync", false,-1);
    tracep->declBit(c+1111,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+674,"sck", false,-1);
    tracep->declBit(c+912,"ss", false,-1);
    tracep->declBit(c+676,"mosi", false,-1);
    tracep->declBit(c+1132,"miso", false,-1);
    tracep->declBus(c+7,"data", false,-1, 7,0);
    tracep->declBus(c+8,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+674,"sck", false,-1);
    tracep->declBit(c+913,"ss", false,-1);
    tracep->declBit(c+676,"mosi", false,-1);
    tracep->declBit(c+1133,"miso", false,-1);
    tracep->declBit(c+913,"reset", false,-1);
    tracep->declBus(c+914,"state", false,-1, 2,0);
    tracep->declBus(c+915,"counter", false,-1, 7,0);
    tracep->declBus(c+1134,"cmd", false,-1, 7,0);
    tracep->declBus(c+1135,"addr", false,-1, 23,0);
    tracep->declBus(c+916,"data", false,-1, 31,0);
    tracep->declBit(c+917,"ren", false,-1);
    tracep->declBus(c+9,"rdata", false,-1, 31,0);
    tracep->declBus(c+1136,"raddr", false,-1, 31,0);
    tracep->declBus(c+1137,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+674,"clock", false,-1);
    tracep->declBit(c+917,"valid", false,-1);
    tracep->declBus(c+1134,"cmd", false,-1, 7,0);
    tracep->declBus(c+1136,"addr", false,-1, 31,0);
    tracep->declBus(c+9,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1115,"sck", false,-1);
    tracep->declBit(c+1116,"ce_n", false,-1);
    tracep->declBus(c+963,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1117,"clk", false,-1);
    tracep->declBit(c+677,"cke", false,-1);
    tracep->declBit(c+678,"cs", false,-1);
    tracep->declBit(c+679,"ras", false,-1);
    tracep->declBit(c+680,"cas", false,-1);
    tracep->declBit(c+681,"we", false,-1);
    tracep->declBus(c+682,"a", false,-1, 12,0);
    tracep->declBus(c+683,"ba", false,-1, 1,0);
    tracep->declBus(c+684,"dqm", false,-1, 1,0);
    tracep->declBus(c+685,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data),8);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
    bufp->fullIData(oldp+9,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+11,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullBit(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullIData(oldp+14,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullCData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+38,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
    bufp->fullIData(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
    bufp->fullCData(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
    bufp->fullBit(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullIData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+54,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+56,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+58,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+59,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+104,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast)))));
    bufp->fullQData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+109,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+113,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+115,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+118,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+119,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+120,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+128,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+130,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+135,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+137,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+145,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullSData(oldp+147,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+148,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+194,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+207,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+211,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+215,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+219,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+271,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+291,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+307,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+311,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+335,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
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
    bufp->fullCData(oldp+336,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+337,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+338,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+339,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+340,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imme),32);
    bufp->fullIData(oldp+342,(((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
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
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_data),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme),32);
    bufp->fullIData(oldp+347,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result),32);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid) 
                             & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl)))));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_en));
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_en));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sign_extension));
    bufp->fullBit(oldp+357,(((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)));
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len),8);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len),8);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_data_ctrl),4);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs
                              [0xaU]),32);
    bufp->fullSData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_en));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_en));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_ecall));
    bufp->fullIData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_data),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid));
    bufp->fullBit(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_ready));
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid),32);
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_arready));
    bufp->fullBit(oldp+378,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
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
    bufp->fullBit(oldp+379,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
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
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_arready));
    bufp->fullCData(oldp+382,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid)
                                ? ((1U & (- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len))))) 
                                   | (2U & (- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len))))))
                                : 2U)),3);
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_awready));
    bufp->fullCData(oldp+386,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid)
                                ? ((1U & (- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))))) 
                                   | (2U & (- (IData)(
                                                      (4U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))))))
                                : 2U)),3);
    bufp->fullIData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__reg_wdata),32);
    bufp->fullCData(oldp+388,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))
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
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_wready));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_bready));
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr),32);
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arsize),3);
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_rready));
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awaddr),32);
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid));
    bufp->fullBit(oldp+399,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
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
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awsize),3);
    bufp->fullIData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wdata),32);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wstrb),4);
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wvalid));
    bufp->fullBit(oldp+404,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
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
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_bready));
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
    bufp->fullBit(oldp+408,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize),3);
    bufp->fullIData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
    bufp->fullIData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
    bufp->fullBit(oldp+415,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize),3);
    bufp->fullIData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
    bufp->fullBit(oldp+422,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+425,(((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+428,((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+429,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+431,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
    bufp->fullBit(oldp+432,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
    bufp->fullIData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state),3);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+446,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullCData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wdata_format),6);
    bufp->fullIData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state),3);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
    bufp->fullQData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
    bufp->fullCData(oldp+534,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullCData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
    bufp->fullCData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullCData(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
    bufp->fullBit(oldp+550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+551,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+552,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
    bufp->fullBit(oldp+553,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+564,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+572,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullCData(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state),4);
    bufp->fullCData(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+608,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+609,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+610,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+611,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+612,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+613,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+614,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+615,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+616,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+617,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+618,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+619,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                  ? 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                   ? 
                                                  (vlSelf->__VdfgTmp_hf132a334__0 
                                                   >> 0x18U)
                                                   : 0U)
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                         ? 
                                                        (vlSelf->__VdfgTmp_hf132a334__0 
                                                         >> 0x10U)
                                                         : 0U)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 8U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                            ? 
                                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                             ? vlSelf->__VdfgTmp_hf132a334__0
                                                             : 0U)
                                                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                            : 0U)))),32);
    bufp->fullBit(oldp+620,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+621,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+622,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+623,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+624,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+625,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+626,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+627,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+628,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+629,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+630,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+631,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+632,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+633,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+634,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+635,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+636,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+637,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+638,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+639,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+640,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+641,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+642,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+643,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+644,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+645,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+646,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+647,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+648,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+649,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+650,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+651,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+652,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+653,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+654,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+655,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+656,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
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
    bufp->fullCData(oldp+657,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+658,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
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
    bufp->fullBit(oldp+659,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullCData(oldp+660,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
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
    bufp->fullBit(oldp+661,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
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
    bufp->fullCData(oldp+662,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+663,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
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
    bufp->fullBit(oldp+664,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullCData(oldp+665,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
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
    bufp->fullBit(oldp+666,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
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
    bufp->fullCData(oldp+667,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)
                                             : 0U)))),4);
    bufp->fullCData(oldp+668,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
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
    bufp->fullCData(oldp+669,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
                                             : 0U)))),4);
    bufp->fullCData(oldp+670,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
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
    bufp->fullCData(oldp+671,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
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
    bufp->fullBit(oldp+672,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+673,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+678,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+679,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+680,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+681,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+685,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+687,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+690,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+691,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+694,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+695,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+700,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+704,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+706,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_spi_irq_out));
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata),32);
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready));
    bufp->fullSData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+739,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+740,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+741,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+742,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+743,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+744,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+745,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+749,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+751,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+752,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+754,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+758,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+759,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+761,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+779,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+780,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+781,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+782,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+783,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+784,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+785,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+788,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+789,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+790,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+809,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+816,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+835,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+836,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+837,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+838,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+839,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+858,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+859,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+860,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+861,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+862,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+864,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+883,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+900,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+911,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+912,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+917,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite));
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+924,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+925,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+929,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+940,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+941,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+946,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+947,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+948,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+949,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+950,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+955,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+956,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+957,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+958,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pstrb),4);
    bufp->fullCData(oldp+960,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+963,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+999,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+1000,((0xffffU & ((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+1023,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1024,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1025,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1026,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1027,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1028,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1029,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1030,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1031,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 1U)))));
    bufp->fullBit(oldp+1032,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 2U)))));
    bufp->fullBit(oldp+1033,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                         & (((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                            >> 3U)))));
    bufp->fullBit(oldp+1034,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1035,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 4U)))));
    bufp->fullBit(oldp+1036,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 5U)))));
    bufp->fullBit(oldp+1037,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 6U)))));
    bufp->fullBit(oldp+1038,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 7U)))));
    bufp->fullBit(oldp+1039,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 8U)))));
    bufp->fullBit(oldp+1040,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 9U)))));
    bufp->fullBit(oldp+1041,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xaU)))));
    bufp->fullBit(oldp+1042,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 0xbU)))));
    bufp->fullBit(oldp+1043,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xcU)))));
    bufp->fullBit(oldp+1044,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xdU)))));
    bufp->fullBit(oldp+1045,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                         & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1046,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                       >> 0xeU)))));
    bufp->fullBit(oldp+1047,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                 >> 0xfU))));
    bufp->fullBit(oldp+1048,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 4U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1049,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 5U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1050,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 6U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1051,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 7U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1052,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+1053,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rdata),32);
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rvalid));
    bufp->fullIData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rdata),32);
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rvalid));
    bufp->fullIData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__next_state),3);
    bufp->fullIData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rdata_mask),32);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate),4);
    bufp->fullIData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr),32);
    bufp->fullIData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata),32);
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable));
    bufp->fullCData(oldp+1084,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)),5);
    bufp->fullIData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+1086,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
    bufp->fullBit(oldp+1087,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
    bufp->fullCData(oldp+1088,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))))))),4);
    bufp->fullBit(oldp+1089,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1092,(vlSelf->clock));
    bufp->fullBit(oldp+1093,(vlSelf->reset));
    bufp->fullSData(oldp+1094,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1095,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1096,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1097,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1098,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1099,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1100,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1101,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1102,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1103,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1104,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1105,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1106,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1107,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1108,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1109,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1110,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1111,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1112,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1113,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1114,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+1115,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1116,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1117,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1118,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1119,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1120,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state)) 
                               | (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready))));
    bufp->fullIData(oldp+1121,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata
                                 : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                     ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                         << 0x18U) 
                                        | ((0xff0000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                               << 8U)) 
                                           | ((0xff00U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                  >> 8U)) 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                 >> 0x18U))))
                                     : 0U))),32);
    bufp->fullCData(oldp+1122,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullCData(oldp+1123,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+1124,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+1125,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
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
    bufp->fullBit(oldp+1126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1127,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1130,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullBit(oldp+1132,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1133,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1136,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1138,(1U),3);
    bufp->fullBit(oldp+1139,(0U));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1149,(0U),4);
    bufp->fullCData(oldp+1150,(0U),8);
    bufp->fullCData(oldp+1151,(0U),2);
    bufp->fullBit(oldp+1152,(1U));
    bufp->fullIData(oldp+1153,(0U),32);
    bufp->fullCData(oldp+1154,(0U),3);
    bufp->fullIData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata),32);
    bufp->fullCData(oldp+1156,(2U),3);
    bufp->fullCData(oldp+1157,(0xfU),4);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arid),4);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arlen),8);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arsize),3);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arburst),2);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rlast));
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rid),4);
    bufp->fullIData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullBit(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awid),4);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awlen),8);
    bufp->fullCData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awsize),3);
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awburst),2);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wlast));
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bid),4);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arid),4);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arlen),8);
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arsize),3);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arburst),2);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rlast));
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rid),4);
    bufp->fullIData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awid),4);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awlen),8);
    bufp->fullCData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awsize),3);
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awburst),2);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wlast));
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullBit(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bid),4);
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+1217,(3U),3);
    bufp->fullCData(oldp+1218,(4U),3);
    bufp->fullCData(oldp+1219,(5U),3);
    bufp->fullIData(oldp+1220,(0x20U),32);
    bufp->fullIData(oldp+1221,(0x20000000U),32);
    bufp->fullCData(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_arready));
    bufp->fullIData(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rdata),32);
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp),2);
    bufp->fullBit(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid));
    bufp->fullBit(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast));
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid),4);
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready));
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp),2);
    bufp->fullBit(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid));
    bufp->fullCData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid),4);
    bufp->fullBit(oldp+1235,(0U));
    bufp->fullBit(oldp+1236,(1U));
    bufp->fullCData(oldp+1237,(0x1bU),8);
    bufp->fullCData(oldp+1238,(0xebU),8);
    bufp->fullCData(oldp+1239,(0x38U),8);
    bufp->fullIData(oldp+1240,(0x64U),32);
    bufp->fullIData(oldp+1241,(0x18U),32);
    bufp->fullIData(oldp+1242,(9U),32);
    bufp->fullIData(oldp+1243,(2U),32);
    bufp->fullIData(oldp+1244,(4U),32);
    bufp->fullIData(oldp+1245,(0xdU),32);
    bufp->fullIData(oldp+1246,(0x2000U),32);
    bufp->fullIData(oldp+1247,(0x2710U),32);
    bufp->fullIData(oldp+1248,(0x30cU),32);
    bufp->fullCData(oldp+1249,(7U),4);
    bufp->fullCData(oldp+1250,(3U),4);
    bufp->fullCData(oldp+1251,(5U),4);
    bufp->fullCData(oldp+1252,(4U),4);
    bufp->fullCData(oldp+1253,(6U),4);
    bufp->fullCData(oldp+1254,(2U),4);
    bufp->fullCData(oldp+1255,(1U),4);
    bufp->fullSData(oldp+1256,(0x21U),13);
    bufp->fullCData(oldp+1257,(8U),4);
    bufp->fullCData(oldp+1258,(9U),4);
    bufp->fullIData(oldp+1259,(0xaU),32);
    bufp->fullIData(oldp+1260,(0x10U),32);
    bufp->fullIData(oldp+1261,(6U),32);
    bufp->fullIData(oldp+1262,(0x11U),32);
    bufp->fullIData(oldp+1263,(0x30000000U),32);
    bufp->fullIData(oldp+1264,(0x3fffffffU),32);
    bufp->fullIData(oldp+1265,(8U),32);
    bufp->fullIData(oldp+1266,(1U),32);
    bufp->fullCData(oldp+1267,(0xaU),4);
    bufp->fullIData(oldp+1268,(0xbU),32);
    bufp->fullIData(oldp+1269,(5U),32);
}
